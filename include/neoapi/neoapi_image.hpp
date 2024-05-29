/** \file neoapi_image.hpp
Copyright (c) by Baumer Optronic GmbH. All rights reserved, please see the provided licence document for full details.
*/
#ifndef _NEOAPI_IMAGE_HPP__
#define _NEOAPI_IMAGE_HPP__

#include "neoapi_common.hpp"
#include "neoapi_featureaccess.hpp"
#include "neoapi_image_converter.hpp"

class ImageData;

namespace NeoAPI {

class BufferBase;
class ConverterSettings;

/**
\brief Valid values for image compression
\ingroup    All
*/
enum class NeoImageCompression {
    RAW = 0,  //!< No compression other than pixelformat
    Jpeg  //!< Jpeg compression
};

/**
    \ingroup       All
    \ingroup       Main

    \brief         Provides an object to get access to image data and its properties

    The Image object is used to retrieve, store and convert images obtained from a camera.
    Image provides a set of methodes to get information about, and work with an image (such as pixelformat,
    size and offset).

    When retrieving an image from a camera, the Image object will reference an image-buffer without copying it's data for performance reasons. If you copy the Image object using the "=" operator the image data will still not be copied but referenced. If you want to copy image data please use the Image::Copy() or Image::Convert() methods
*/
class NEOAPI_CPP_DECL Image {
 public:
    /**
        \brief     Constructor
    */
    Image();

    /**
        \brief     Copy-Constructor
        \param[in] object An Image object
    */
    Image(const Image& object);

    /**
        \brief     Destructor
    */
    virtual ~Image();

    /**
        \brief     The "=" operator of the Image object
        \note      The "=" operator will not copy the actual image data but reference it. To create an actual copy of
                   the image data please use the Image::Copy() or Image::Convert() methods
        \param[in] object An Image object
        \return    The Image object
    */
    const Image& operator = (const Image& object);

    /**
        \brief     Check if the image is empty or filled with data
        \return    False if the image is filled with data, otherwise true
        \see       Cam::GetImage()
    */
    virtual bool IsEmpty() const;

    /**
        \brief     Get a list with available PixelFormats for Convert

        pixelformat must be a valid PixelFormat

        \return    list of available PixelFormats
        \see       Cam::GetImage()
    */
    virtual const NeoStringList& GetAvailablePixelFormats() const;

    /**
        \brief      Indicates whether the PixelFormat is available for conversion
        \param[in]  pixelformat The target PixelFormat name
        \return     True if the pixelformat is available to work with, otherwise false
    */
    virtual bool IsPixelFormatAvailable(const NeoString& pixelformat) const;

    /**
        \brief     Get the ID of the image, returns zero as long the image is not filled with data

        The image ID allows to track which images have been received and if there is a gap which might show that an
        image was missed and not processed.

        \return    The ID of the image
        \see       Cam::GetImage()
    */
    virtual uint64_t GetImageID() const;

    /**
        \brief     Get the timestamp of the image, returns zero as long the image is not filled with data

        The image timestamp allows to track when images have been recorded and if there is a gap which might show that an
        image was missed and not transfered.

        \return    The timestamp of the image
        \see       Cam::GetImage()
    */
    virtual uint64_t GetTimestamp() const;

    /**
        \brief     Get a pointer to the image data, returns nullptr as long as the image is not filled with data.
        \return    The pointer to image data
        \see       CamBase::GetImage()
    */
    virtual void* GetImageData() const;

    /**
        \brief     Get the size of the image in byte, returns zero as long the image is not filled with data.
        \return    The size of the image in byte.
        \see       CamBase::GetImage()
    */
    virtual size_t GetSize() const;

    /**
        \brief     Get the height of the image in pixel, returns zero as long the image is not filled with data.
        \return    The height of the image in pixel.
    */
    virtual uint64_t GetHeight() const;

    /**
        \brief     Get the width of the image in pixel, returns zero as long the image is not filled with data.
        \return    The width of the image in pixel.
    */
    virtual uint64_t GetWidth() const;

    /**
        \brief     Get the pixelformat of the image, returns an empty string as long the image is not filled with data

        The GenICam SFNC defines many different PixelFormats which are used to transfer image data from a camera such
        as RGB, YUV and BayerRG. Knowledge about it is essential so the image can be converted to a format needed to
        process it

        \note More information about the GenICam SFNC (Standard %Feature Naming Convention) can be found in the
        GenICam SFNC Document on the [EMVA Website](https://www.emva.org/wp-content/uploads/GenICam_SFNC_v2_4.pdf)

        \return    The PixelFormat of the Image
    */
    virtual NeoString GetPixelFormat() const;

    /**
        \brief     The number of extra bytes transmitted at the end of each line

        This is only specified for the payload types %Image and Extended Chunk Data

        \return    The number of extra bytes transmitted at the end of each line
    */
    virtual uint64_t GetXPadding() const;

    /**
        \brief     The number of extra bytes transmitted at the end of the image

        This is only specified for the payload types %Image and Extended Chunk Data

        \return    The number of extra bytes transmitted at the end of the image
    */
    virtual uint64_t GetYPadding() const;

    /**
        \brief      Get a list of all available chunk features of the image
        \return     A list of available chunk features
        \see FeatureList
    */
    virtual FeatureList& GetChunkList() const;

    /**
        \brief      Get compression methode of the image
        \return     The compression methode
    */
    virtual NeoImageCompression GetCompression() const;

    /**
        \brief     Copies the Image object and its image data
        \note      Copy works only with uncompressed images.
        \return    A new Image object
        \exception NoImageBufferException The image could not be copied.
        \see       Cam::GetImage()
    */
    virtual Image Copy() const;

    /**
        \brief     Save the image in bmp format at the given path

        If no path is given, the image will be stored where the executable is started

        \param[in] filename The filename or path for the saved image
        \exception FileAccessException The image could not be saved at the given Path
        \see       Cam::GetImage()
    */
    virtual void Save(const NeoString& filename) const;

    /**
        \brief     Convert the Image to another PixelFormat

        A camera can stream images in different formats. However this might not be the format you need to work with the
        image data. You can use this method to convert an image from one format to another. (e.g. convert BayerRG8 to BGR to work with the image data using OpenCV).

        Please see NeoAPI::PixelFormat for a list of possible formats

        \note     Not all input formats can be converted to all output formats. You can use the
                  Image::GetAvailablePixelFormats() or the Image::PixelFormatIsAvailable() to check if a conversion is
                  possible

        \param[in] pixelformat The target PixelFormat name
        \return    A new Image in requested PixelFormat
        \see       Image.GetAvailablePixelFormats()
        \see       Image.PixelFormatIsAvailable()
    */
    virtual Image Convert(const NeoString& pixelformat) const;

    /**
        \brief     Convert the Image based on the provided settings

        A camera can stream images in different formats. However this might not be the format you need to work with the
        image data. You can use this method to convert an image from one format to another. (e.g. convert BayerRG8 to BGR to work with the image data using OpenCV).

        Additionally you may want to apply sharpening or want to change the color temperature. This can be achieved by providing the corresponding settings.

        Please see NeoAPI::PixelFormat for a list of possible formats

        \note     Not all input formats can be converted to all output formats. You can use the
                  Image::GetAvailablePixelFormats() or the Image::PixelFormatIsAvailable() to check if a conversion is
                  possible

        \param[in]  settings  The settings for the converted image.
        \return    A new Image with requested Settings
    */
    virtual Image Convert(const ConverterSettings& settings) const;

    /**
        \brief Get access to a object inherited by NeoAPI::BufferBase and used by this image.

        \attention When the image object goes out of scope the underlying NeoAPI::BufferBase object will be reused for
                   image acquisition again. This means the content of registered memory region may change then.

        \return UserBuffer object
    */
    template <typename T> T GetUserBuffer() const {
        return dynamic_cast<T>(_GetUserBuffer());
    }

 protected:
    /**
        \brief Get access to the NeoAPI::BufferBase used by this image.

        This function should not used directly. Use Image.GetUserBuffer() instead.
        \see Image.GetUserBuffer()

        \return NeoAPI::BufferBase object
    */
    virtual BufferBase* _GetUserBuffer() const;

    /**
        \brief      Holds all internal data
    */
    ImageData* data_;
};

}  // namespace NeoAPI
#endif  // _NEOAPI_IMAGE_HPP__
