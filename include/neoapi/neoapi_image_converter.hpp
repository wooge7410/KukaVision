/* Copyright 2021 Baumer Optronic */
#ifndef  CPP_SRC_NEOAPI_IMAGE_CONVERTER_H_
#define  CPP_SRC_NEOAPI_IMAGE_CONVERTER_H_

#include <string>
#include <memory>
#include "neoapi_common.hpp"

class ConverterSettingsData;
class ColorMatrixData;

namespace NeoAPI {

/**
    \ingroup    All
    \ingroup    Main
    \brief      Class for the Color Transformation Matrix

    This class provides methods to configure the Color Matrix for color cameras. The
    Color Matrix can be used to achieve ideal color representation of an image during de-bayering.
    After setting suitable values for the color matrix elements, you can pass the instance
    to a NeoAPI::ConverterSettings instance which can than be used with the
    NeoAPI::Image::Convert method to apply the settings to an image.

    \note       The elements are named according to the SFNC

    USAGE:

    \code
    using namespace NeoAPI;

    ColorMatrix matrix;                                // Create a ColorMatrix object
    ConverterSettings settings;                        // Create a ConverterSettings object
    matrix.SetValue(ColorMatrix::Gain::Gain00, -0.3);  // Set a single value
    settings.SetColorTransformationMatrix(matrix);     // Set the ColorMatrix to ConverterSettings
    \endcode
*/
class NEOAPI_CPP_DECL ColorMatrix {
 public:
    /**
        \ingroup    All
        \brief Valid names for the Color Matrix elements

        First number describes the row, second the column of the element, see SFNC
    */
    enum class Gain {
        Gain00 = 0,  //!< The red contribution to the red pixels (multiplicative factor)
        Gain01,  //!< The green contribution to the red pixels (multiplicative factor)
        Gain02,  //!< The blue contribution to the red pixels (multiplicative factor)
        Gain10,  //!< The red contribution to the green pixels (multiplicative factor)
        Gain11,  //!< The green contribution to the green pixels (multiplicative factor)
        Gain12,  //!< The blue contribution to the blue pixels (multiplicative factor)
        Gain20,  //!< The red contribution to the blue pixels (multiplicative factor)
        Gain21,  //!< The green contribution to the blue pixels (multiplicative factor)
        Gain22,  //!< The blue contribution to the blue pixels (multiplicative factor)
    };

    /**
        \brief     Constructor
    */
    ColorMatrix();
    /**
        \brief     Copy-Constructor
        \param[in] object An ColorMatrix object
    */
    ColorMatrix(const ColorMatrix& object);

    /**
        \brief     Destructor
    */
    virtual ~ColorMatrix();

    /**
        \brief     The "=" operator of the Image object
        \param[in] object An Image object
        \return    The Image object
    */
    virtual ColorMatrix& operator=(const ColorMatrix& object);


    /**
        \brief      Get the value of a matrix element
        \param[in]  gain_selector  Selects a component.
        \return     The value of the selected component
    */
    virtual double GetValue(Gain gain_selector) const;

    /**
        \brief      Set the value of a matrix element
        \param[in]  gain_selector  Selects a component.
        \param[in]  value  The new value for this component.
        \return     The ConverterSettings object
    */
    virtual ColorMatrix& SetValue(Gain gain_selector, double value);

 protected:
    /**
        \brief      Holds all internal data
    */
    ColorMatrixData* data_;
};

/**
    \ingroup    All
    \ingroup    Main
    \brief      Image post processing settings

    This class provides methods to configure image conversions.
    You can pass an instance to the NeoAPI::Image::Convert method to apply the settings to an image convertion.

    USAGE:

    \code
    using namespace NeoAPI;

    Image image;                                                          // Create a Image object
    ConverterSettings settings;                                           // Create a ConverterSettings object
    settings.SetSharpeningMode(ConverterSettings::Sharpening::Adaptive);  // Configure sharpening
    settings.SetDebayerFormat("Mono8");                                   // Set destination PixelFormat
    image.Convert(settings);                                              // Convert the image using the provided settings
    \endcode
*/
class NEOAPI_CPP_DECL ConverterSettings {
 public:
    /**
        \brief Valid values for sharpening
        \ingroup    All
    */
    enum class Sharpening {
        Off = 0,  //!< The Sharpening Mode is off.
        Global,  //!< Sharpening in every area of the image, independent of the content.
        Adaptive,  //!< No sharpening in homogeneous image areas.
        ActiveNoiseReduction  //!< The Sharpening Mode is Active Noise Reduction.
    };

    /**
        \brief Valid values for demosaicing
        \ingroup    All
    */
    enum class Demosaicing {
        Bilinear3x3 = 0,  //!< Bilinear 3x3
        Baumer5x5,  //!< Baumer 5x5
        NearestNeighbor,  //!< Nearest Neighbor
    };

    /**
        \brief     Constructor
    */
    ConverterSettings();

    /**
        \brief     Copy-Constructor
        \param[in] object A ConverterSettings object
    */
    ConverterSettings(const ConverterSettings& object);

    /**
        \brief     Destructor
    */
    virtual ~ConverterSettings();

    /**
        \brief     The "=" operator of the ConverterSettings object
        \note      The "=" operator will not copy the actual image converter but reference it.
                   For parallel conversions you should create one ConverterSettings object for each thread.
        \param[in] object An ConverterSettings object
        \return    The ConverterSettings object
    */
    virtual ConverterSettings& operator=(const ConverterSettings& object);

    /**
        \brief     Set the target PixelFormat for a conversion

        A camera can stream images in different formats. However this might not be the format you need to work with the
        image data. You can use this setting to convert an image from one format to another. (e.g. convert BayerRG8 to BGR to work with the image data using OpenCV).

        \note    Please see NeoAPI::PixelFormat for a list of possible formats

        \note    Not all input formats can be converted to all output formats. You can use the
                 Image::GetAvailablePixelFormats() or the Image::PixelFormatIsAvailable() to check if a conversion is
                 possible

        \param[in] format The target PixelFormat name
        \return    The ConverterSettings object
    */
    virtual ConverterSettings& SetDebayerFormat(const NeoString& format);

    /**
        \brief     Get the target PixelFormat for a conversion
        \return    The target PixelFormat
    */
    virtual NeoString GetDebayerFormat() const;

    /**
        \brief     Set the target SharpeningMode for a conversion
        \param[in]  mode  The SharpeningMode for the converted image.
        \return    The ConverterSettings object
    */
    virtual ConverterSettings& SetSharpeningMode(Sharpening mode);

    /**
        \brief     Get the target SharpeningMode for a conversion
        \return    The target SharpeningMode
    */
    virtual Sharpening GetSharpeningMode() const;

    /**
        \brief     Set the target DemosaicingMethod for a conversion
        \param[in]  method  The DemosaicingMethod for the converted image.
        \return    The ConverterSettings object
    */
    virtual ConverterSettings& SetDemosaicingMethod(Demosaicing method);

    /**
        \brief     Get the target DemosaicingMethod for a conversion
        \return    The target DemosaicingMethod
    */
    virtual Demosaicing GetDemosaicingMethod() const;

    /**
        \brief     Set the target SharpeningFactor for a conversion
        \param[in]  factor  The SharpeningFactor for the converted image.
        \return    The ConverterSettings object
    */
    virtual ConverterSettings& SetSharpeningFactor(uint32_t factor);

    /**
        \brief     Get the target SharpeningFactor for a conversion
        \return    The target SharpeningFactor
    */
    virtual uint32_t GetSharpeningFactor() const;

    /**
        \brief     Set the target SharpeningSensitivityThreshold for a conversion
        \param[in]  threshold  The SharpeningSensitivityThreshold for the converted image.
        \return    The ConverterSettings object
    */
    virtual ConverterSettings& SetSharpeningSensitivityThreshold(uint32_t threshold);

    /**
        \brief     Get the target SharpeningSensitivityThreshold for a conversion
        \return    The target SharpeningSensitivityThreshold
    */
    virtual uint32_t GetSharpeningSensitivityThreshold() const;

    /**
        \brief     Set the target ColorTransformationMatrix for a conversion
        \param[in]  matrix  The ColorMatrix for the converted image.
        \return    The ConverterSettings object
    */
    virtual ConverterSettings& SetColorTransformationMatrix(const ColorMatrix& matrix);

    /**
        \brief     Get the target ColorTransformationMatrix for a conversion
        \return    The target ColorTransformationMatrix
    */
    virtual ColorMatrix& GetColorTransformationMatrix() const;

 protected:
    /**
        \brief      Holds all internal data
    */
    ConverterSettingsData* data_;
};
}  // namespace NeoAPI
#endif  // CPP_SRC_NEOAPI_IMAGE_CONVERTER_H_
