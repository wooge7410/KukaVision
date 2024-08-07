/** \file neoapi_featureaccess.hpp
 \brief        This file is part of the NeoAPI &mdash; It was automatically generated and contains access to the features of Baumer cameras.
 Copyright(c) by Baumer Optronic GmbH.All rights reserved, please see the provided licence document for full details.
*/

#ifndef _NEOAPI_FEATUREACCESS_HPP__
#define _NEOAPI_FEATUREACCESS_HPP__

#include "neoapi_common.hpp"
#include "neoapi_feature.hpp"

/** 
\defgroup       GenICamFeatures GenICam feature classes
\brief          All GenICam feature classes
*/
namespace NeoAPI {
/**
\brief Valid values for AcquisitionMode
\ingroup    GenICamFeatures
 */
enum class AcquisitionMode {
    Continuous = 0,  //!< Frames are captured continuously until stopped with the AcquisitionStop command.
    MultiFrame,  //!< The number of frames specified by AcquisitionFrameCount is captured.
    SingleFrame  //!< One frame is captured.
};

/**
\class      CAcquisitionMode
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature AcquisitionMode
*/
class NEOAPI_CPP_DECL CAcquisitionMode : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CAcquisitionMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CAcquisitionMode object
    */
    CAcquisitionMode(const CAcquisitionMode& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CAcquisitionMode() {}
    /**
        \brief      Assignment operator
        \param      object The CAcquisitionMode object to assign.
        \return     Object reference with the value set.
    */
    const CAcquisitionMode& operator = (const CAcquisitionMode& object);
    /**
        \brief     Get the current value.
        \return    The value as AcquisitionMode
    */
    operator AcquisitionMode() const;
    /**
        \brief     Set the current value.
        \param     value The AcquisitionMode value to be written.
        \return    The CAcquisitionMode object
    */
    CAcquisitionMode& operator = (AcquisitionMode value);
    /**
        \brief     Set the current value.
        \param     value The AcquisitionMode value to be written.
        \return    The CAcquisitionMode object
    */
    CAcquisitionMode& Set(AcquisitionMode value);
    /**
        \brief     Get the current value.
        \return    The value as AcquisitionMode
    */
    AcquisitionMode Get() const;
};

/**
\brief Valid values for AcquisitionStatusSelector
\ingroup    GenICamFeatures
 */
enum class AcquisitionStatusSelector {
    AcquisitionActive = 0,  //!< Device is currently doing an acquisition of one or many frames.
    AcquisitionTransfer,  //!< Device is currently transferring an acquisition of one or many frames.
    AcquisitionTriggerWait,  //!< Device is currently waiting for a trigger for the capture of one or many frames.
    ExposureActive,  //!< Device is doing the exposure of a frame.
    FrameActive,  //!< Device is currently doing the capture of a frame.
    FrameTriggerWait  //!< Device is currently waiting for a frame start trigger.
};

/**
\class      CAcquisitionStatusSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature AcquisitionStatusSelector
*/
class NEOAPI_CPP_DECL CAcquisitionStatusSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CAcquisitionStatusSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CAcquisitionStatusSelector object
    */
    CAcquisitionStatusSelector(const CAcquisitionStatusSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CAcquisitionStatusSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CAcquisitionStatusSelector object to assign.
        \return     Object reference with the value set.
    */
    const CAcquisitionStatusSelector& operator = (const CAcquisitionStatusSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as AcquisitionStatusSelector
    */
    operator AcquisitionStatusSelector() const;
    /**
        \brief     Set the current value.
        \param     value The AcquisitionStatusSelector value to be written.
        \return    The CAcquisitionStatusSelector object
    */
    CAcquisitionStatusSelector& operator = (AcquisitionStatusSelector value);
    /**
        \brief     Set the current value.
        \param     value The AcquisitionStatusSelector value to be written.
        \return    The CAcquisitionStatusSelector object
    */
    CAcquisitionStatusSelector& Set(AcquisitionStatusSelector value);
    /**
        \brief     Get the current value.
        \return    The value as AcquisitionStatusSelector
    */
    AcquisitionStatusSelector Get() const;
};

/**
\brief Valid values for ApertureStatus
\ingroup    GenICamFeatures
 */
enum class ApertureStatus {
    Busy = 0,  //!< Busy
    Error,  //!< Error
    NotConnected,  //!< Not Connected
    NotInitialized,  //!< Not Initialized
    NotSupported,  //!< Not Supported
    Ready  //!< Ready
};

/**
\class      CApertureStatus
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature ApertureStatus
*/
class NEOAPI_CPP_DECL CApertureStatus : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CApertureStatus(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CApertureStatus object
    */
    CApertureStatus(const CApertureStatus& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CApertureStatus() {}
    /**
        \brief      Assignment operator
        \param      object The CApertureStatus object to assign.
        \return     Object reference with the value set.
    */
    const CApertureStatus& operator = (const CApertureStatus& object);
    /**
        \brief     Get the current value.
        \return    The value as ApertureStatus
    */
    operator ApertureStatus() const;
    /**
        \brief     Set the current value.
        \param     value The ApertureStatus value to be written.
        \return    The CApertureStatus object
    */
    CApertureStatus& operator = (ApertureStatus value);
    /**
        \brief     Set the current value.
        \param     value The ApertureStatus value to be written.
        \return    The CApertureStatus object
    */
    CApertureStatus& Set(ApertureStatus value);
    /**
        \brief     Get the current value.
        \return    The value as ApertureStatus
    */
    ApertureStatus Get() const;
};

/**
\brief Valid values for AutoFeatureRegionMode
\ingroup    GenICamFeatures
 */
enum class AutoFeatureRegionMode {
    Off = 0,  //!< All settings of the selected AutoFeature ROI are automatically equal to the selected AutoFeatureRegionReference.
    On  //!< The settings of the selected AutoFeature ROI are user defined. The AutoFeature is useable only if the AutoFeature ROI fits into the AutoFeatureRegionReference of the AutoFeature.
};

/**
\class      CAutoFeatureRegionMode
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature AutoFeatureRegionMode
*/
class NEOAPI_CPP_DECL CAutoFeatureRegionMode : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CAutoFeatureRegionMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CAutoFeatureRegionMode object
    */
    CAutoFeatureRegionMode(const CAutoFeatureRegionMode& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CAutoFeatureRegionMode() {}
    /**
        \brief      Assignment operator
        \param      object The CAutoFeatureRegionMode object to assign.
        \return     Object reference with the value set.
    */
    const CAutoFeatureRegionMode& operator = (const CAutoFeatureRegionMode& object);
    /**
        \brief     Get the current value.
        \return    The value as AutoFeatureRegionMode
    */
    operator AutoFeatureRegionMode() const;
    /**
        \brief     Set the current value.
        \param     value The AutoFeatureRegionMode value to be written.
        \return    The CAutoFeatureRegionMode object
    */
    CAutoFeatureRegionMode& operator = (AutoFeatureRegionMode value);
    /**
        \brief     Set the current value.
        \param     value The AutoFeatureRegionMode value to be written.
        \return    The CAutoFeatureRegionMode object
    */
    CAutoFeatureRegionMode& Set(AutoFeatureRegionMode value);
    /**
        \brief     Get the current value.
        \return    The value as AutoFeatureRegionMode
    */
    AutoFeatureRegionMode Get() const;
};

/**
\brief Valid values for AutoFeatureRegionReference
\ingroup    GenICamFeatures
 */
enum class AutoFeatureRegionReference {
    Region0 = 0  //!< The selected Auto Feature Region refers to Region 0.
};

/**
\class      CAutoFeatureRegionReference
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature AutoFeatureRegionReference
*/
class NEOAPI_CPP_DECL CAutoFeatureRegionReference : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CAutoFeatureRegionReference(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CAutoFeatureRegionReference object
    */
    CAutoFeatureRegionReference(const CAutoFeatureRegionReference& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CAutoFeatureRegionReference() {}
    /**
        \brief      Assignment operator
        \param      object The CAutoFeatureRegionReference object to assign.
        \return     Object reference with the value set.
    */
    const CAutoFeatureRegionReference& operator = (const CAutoFeatureRegionReference& object);
    /**
        \brief     Get the current value.
        \return    The value as AutoFeatureRegionReference
    */
    operator AutoFeatureRegionReference() const;
    /**
        \brief     Set the current value.
        \param     value The AutoFeatureRegionReference value to be written.
        \return    The CAutoFeatureRegionReference object
    */
    CAutoFeatureRegionReference& operator = (AutoFeatureRegionReference value);
    /**
        \brief     Set the current value.
        \param     value The AutoFeatureRegionReference value to be written.
        \return    The CAutoFeatureRegionReference object
    */
    CAutoFeatureRegionReference& Set(AutoFeatureRegionReference value);
    /**
        \brief     Get the current value.
        \return    The value as AutoFeatureRegionReference
    */
    AutoFeatureRegionReference Get() const;
};

/**
\brief Valid values for AutoFeatureRegionSelector
\ingroup    GenICamFeatures
 */
enum class AutoFeatureRegionSelector {
    BalanceWhiteAuto = 0,  //!< Selected features will control the region for BalanceWhiteAuto and ColorTransformationAuto algorithm.
    BrightnessAuto  //!< Selected features will control the region for GainAuto and ExposureAuto algorithm.
};

/**
\class      CAutoFeatureRegionSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature AutoFeatureRegionSelector
*/
class NEOAPI_CPP_DECL CAutoFeatureRegionSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CAutoFeatureRegionSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CAutoFeatureRegionSelector object
    */
    CAutoFeatureRegionSelector(const CAutoFeatureRegionSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CAutoFeatureRegionSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CAutoFeatureRegionSelector object to assign.
        \return     Object reference with the value set.
    */
    const CAutoFeatureRegionSelector& operator = (const CAutoFeatureRegionSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as AutoFeatureRegionSelector
    */
    operator AutoFeatureRegionSelector() const;
    /**
        \brief     Set the current value.
        \param     value The AutoFeatureRegionSelector value to be written.
        \return    The CAutoFeatureRegionSelector object
    */
    CAutoFeatureRegionSelector& operator = (AutoFeatureRegionSelector value);
    /**
        \brief     Set the current value.
        \param     value The AutoFeatureRegionSelector value to be written.
        \return    The CAutoFeatureRegionSelector object
    */
    CAutoFeatureRegionSelector& Set(AutoFeatureRegionSelector value);
    /**
        \brief     Get the current value.
        \return    The value as AutoFeatureRegionSelector
    */
    AutoFeatureRegionSelector Get() const;
};

/**
\brief Valid values for BOPFShift
\ingroup    GenICamFeatures
 */
enum class BOPFShift {
    Bits0To7 = 0,  //!< Uses bit 0 to bit 7.
    Bits1To8,  //!< Uses bit 1 to bit 8.
    Bits2To9,  //!< Uses bit 2 to bit 9.
    Bits3To10,  //!< Uses bit 3 to bit 10.
    Bits4To11  //!< Uses bit 4 to bit 11.
};

/**
\class      CBOPFShift
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature BOPFShift
*/
class NEOAPI_CPP_DECL CBOPFShift : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CBOPFShift(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CBOPFShift object
    */
    CBOPFShift(const CBOPFShift& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CBOPFShift() {}
    /**
        \brief      Assignment operator
        \param      object The CBOPFShift object to assign.
        \return     Object reference with the value set.
    */
    const CBOPFShift& operator = (const CBOPFShift& object);
    /**
        \brief     Get the current value.
        \return    The value as BOPFShift
    */
    operator BOPFShift() const;
    /**
        \brief     Set the current value.
        \param     value The BOPFShift value to be written.
        \return    The CBOPFShift object
    */
    CBOPFShift& operator = (BOPFShift value);
    /**
        \brief     Set the current value.
        \param     value The BOPFShift value to be written.
        \return    The CBOPFShift object
    */
    CBOPFShift& Set(BOPFShift value);
    /**
        \brief     Get the current value.
        \return    The value as BOPFShift
    */
    BOPFShift Get() const;
};

/**
\brief Valid values for BalanceWhiteAuto
\ingroup    GenICamFeatures
 */
enum class BalanceWhiteAuto {
    Continuous = 0,  //!< White balancing is constantly adjusted by the device.
    Off,  //!< White balancing is user controlled using BalanceRatioSelector and BalanceRatio.
    Once  //!< White balancing is automatically adjusted once by the device. Once it has converged, it automatically returns to the Off state.
};

/**
\class      CBalanceWhiteAuto
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature BalanceWhiteAuto
*/
class NEOAPI_CPP_DECL CBalanceWhiteAuto : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CBalanceWhiteAuto(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CBalanceWhiteAuto object
    */
    CBalanceWhiteAuto(const CBalanceWhiteAuto& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CBalanceWhiteAuto() {}
    /**
        \brief      Assignment operator
        \param      object The CBalanceWhiteAuto object to assign.
        \return     Object reference with the value set.
    */
    const CBalanceWhiteAuto& operator = (const CBalanceWhiteAuto& object);
    /**
        \brief     Get the current value.
        \return    The value as BalanceWhiteAuto
    */
    operator BalanceWhiteAuto() const;
    /**
        \brief     Set the current value.
        \param     value The BalanceWhiteAuto value to be written.
        \return    The CBalanceWhiteAuto object
    */
    CBalanceWhiteAuto& operator = (BalanceWhiteAuto value);
    /**
        \brief     Set the current value.
        \param     value The BalanceWhiteAuto value to be written.
        \return    The CBalanceWhiteAuto object
    */
    CBalanceWhiteAuto& Set(BalanceWhiteAuto value);
    /**
        \brief     Get the current value.
        \return    The value as BalanceWhiteAuto
    */
    BalanceWhiteAuto Get() const;
};

/**
\brief Valid values for BalanceWhiteAutoStatus
\ingroup    GenICamFeatures
 */
enum class BalanceWhiteAutoStatus {
    ColorGainsTooHigh = 0,  //!< The BalanceWhiteAuto calculation failed since at least one of the calculated color gains exceeds the maximum value.
    Initial,  //!< BalanceWhiteAuto has never been started.
    Start,  //!< BalanceWhiteAuto is waiting for statistical data.
    Success,  //!< The last BalanceWhiteAuto calculation succeeded.
    Underrun  //!< The BalanceWhiteAuto calculation failed since at least one color-channel shows invalid statistic data.
};

/**
\class      CBalanceWhiteAutoStatus
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature BalanceWhiteAutoStatus
*/
class NEOAPI_CPP_DECL CBalanceWhiteAutoStatus : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CBalanceWhiteAutoStatus(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CBalanceWhiteAutoStatus object
    */
    CBalanceWhiteAutoStatus(const CBalanceWhiteAutoStatus& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CBalanceWhiteAutoStatus() {}
    /**
        \brief      Assignment operator
        \param      object The CBalanceWhiteAutoStatus object to assign.
        \return     Object reference with the value set.
    */
    const CBalanceWhiteAutoStatus& operator = (const CBalanceWhiteAutoStatus& object);
    /**
        \brief     Get the current value.
        \return    The value as BalanceWhiteAutoStatus
    */
    operator BalanceWhiteAutoStatus() const;
    /**
        \brief     Set the current value.
        \param     value The BalanceWhiteAutoStatus value to be written.
        \return    The CBalanceWhiteAutoStatus object
    */
    CBalanceWhiteAutoStatus& operator = (BalanceWhiteAutoStatus value);
    /**
        \brief     Set the current value.
        \param     value The BalanceWhiteAutoStatus value to be written.
        \return    The CBalanceWhiteAutoStatus object
    */
    CBalanceWhiteAutoStatus& Set(BalanceWhiteAutoStatus value);
    /**
        \brief     Get the current value.
        \return    The value as BalanceWhiteAutoStatus
    */
    BalanceWhiteAutoStatus Get() const;
};

/**
\brief Valid values for Baudrate
\ingroup    GenICamFeatures
 */
enum class Baudrate {
    Baud115200 = 0,  //!< Baudrate of RS232 UART is 115200.
    Baud19200,  //!< Baudrate of RS232 UART is 19200.
    Baud230400,  //!< Baudrate of RS232 UART is 230400.
    Baud38400,  //!< Baudrate of RS232 UART is 38400.
    Baud460800,  //!< Baudrate of RS232 UART is 460800.
    Baud57600,  //!< Baudrate of RS232 UART is 57600.
    Baud9600,  //!< Baudrate of RS232 UART is 9600.
    RS232Off  //!< RS232 UART is off.
};

/**
\class      CBaudrate
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature Baudrate
*/
class NEOAPI_CPP_DECL CBaudrate : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CBaudrate(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CBaudrate object
    */
    CBaudrate(const CBaudrate& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CBaudrate() {}
    /**
        \brief      Assignment operator
        \param      object The CBaudrate object to assign.
        \return     Object reference with the value set.
    */
    const CBaudrate& operator = (const CBaudrate& object);
    /**
        \brief     Get the current value.
        \return    The value as Baudrate
    */
    operator Baudrate() const;
    /**
        \brief     Set the current value.
        \param     value The Baudrate value to be written.
        \return    The CBaudrate object
    */
    CBaudrate& operator = (Baudrate value);
    /**
        \brief     Set the current value.
        \param     value The Baudrate value to be written.
        \return    The CBaudrate object
    */
    CBaudrate& Set(Baudrate value);
    /**
        \brief     Get the current value.
        \return    The value as Baudrate
    */
    Baudrate Get() const;
};

/**
\brief Valid values for BinningHorizontalMode
\ingroup    GenICamFeatures
 */
enum class BinningHorizontalMode {
    Average = 0,  //!< The response from the combined cells will be averaged, resulting in increased signal/noise ratio.
    Sum  //!< The response from the combined cells will be added, resulting in increased sensitivity.
};

/**
\class      CBinningHorizontalMode
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature BinningHorizontalMode
*/
class NEOAPI_CPP_DECL CBinningHorizontalMode : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CBinningHorizontalMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CBinningHorizontalMode object
    */
    CBinningHorizontalMode(const CBinningHorizontalMode& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CBinningHorizontalMode() {}
    /**
        \brief      Assignment operator
        \param      object The CBinningHorizontalMode object to assign.
        \return     Object reference with the value set.
    */
    const CBinningHorizontalMode& operator = (const CBinningHorizontalMode& object);
    /**
        \brief     Get the current value.
        \return    The value as BinningHorizontalMode
    */
    operator BinningHorizontalMode() const;
    /**
        \brief     Set the current value.
        \param     value The BinningHorizontalMode value to be written.
        \return    The CBinningHorizontalMode object
    */
    CBinningHorizontalMode& operator = (BinningHorizontalMode value);
    /**
        \brief     Set the current value.
        \param     value The BinningHorizontalMode value to be written.
        \return    The CBinningHorizontalMode object
    */
    CBinningHorizontalMode& Set(BinningHorizontalMode value);
    /**
        \brief     Get the current value.
        \return    The value as BinningHorizontalMode
    */
    BinningHorizontalMode Get() const;
};

/**
\brief Valid values for BinningSelector
\ingroup    GenICamFeatures
 */
enum class BinningSelector {
    Region0 = 0,  //!< Selected feature will control the region 0 binning.
    Region1,  //!< Selected feature will control the region 1 binning.
    Region2,  //!< Selected feature will control the region 2 binning.
    Sensor  //!< Selected features will control the sensor binning.
};

/**
\class      CBinningSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature BinningSelector
*/
class NEOAPI_CPP_DECL CBinningSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CBinningSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CBinningSelector object
    */
    CBinningSelector(const CBinningSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CBinningSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CBinningSelector object to assign.
        \return     Object reference with the value set.
    */
    const CBinningSelector& operator = (const CBinningSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as BinningSelector
    */
    operator BinningSelector() const;
    /**
        \brief     Set the current value.
        \param     value The BinningSelector value to be written.
        \return    The CBinningSelector object
    */
    CBinningSelector& operator = (BinningSelector value);
    /**
        \brief     Set the current value.
        \param     value The BinningSelector value to be written.
        \return    The CBinningSelector object
    */
    CBinningSelector& Set(BinningSelector value);
    /**
        \brief     Get the current value.
        \return    The value as BinningSelector
    */
    BinningSelector Get() const;
};

/**
\brief Valid values for BinningVerticalMode
\ingroup    GenICamFeatures
 */
enum class BinningVerticalMode {
    Average = 0,  //!< The response from the combined cells will be averaged, resulting in increased signal/noise ratio.
    Sum  //!< The response from the combined cells will be added, resulting in increased sensitivity.
};

/**
\class      CBinningVerticalMode
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature BinningVerticalMode
*/
class NEOAPI_CPP_DECL CBinningVerticalMode : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CBinningVerticalMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CBinningVerticalMode object
    */
    CBinningVerticalMode(const CBinningVerticalMode& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CBinningVerticalMode() {}
    /**
        \brief      Assignment operator
        \param      object The CBinningVerticalMode object to assign.
        \return     Object reference with the value set.
    */
    const CBinningVerticalMode& operator = (const CBinningVerticalMode& object);
    /**
        \brief     Get the current value.
        \return    The value as BinningVerticalMode
    */
    operator BinningVerticalMode() const;
    /**
        \brief     Set the current value.
        \param     value The BinningVerticalMode value to be written.
        \return    The CBinningVerticalMode object
    */
    CBinningVerticalMode& operator = (BinningVerticalMode value);
    /**
        \brief     Set the current value.
        \param     value The BinningVerticalMode value to be written.
        \return    The CBinningVerticalMode object
    */
    CBinningVerticalMode& Set(BinningVerticalMode value);
    /**
        \brief     Get the current value.
        \return    The value as BinningVerticalMode
    */
    BinningVerticalMode Get() const;
};

/**
\brief Valid values for BlackLevelSelector
\ingroup    GenICamFeatures
 */
enum class BlackLevelSelector {
    All = 0,  //!< Black Level will be applied to all channels or taps.
    Blue,  //!< Black Level will be applied to the blue channel.
    Green,  //!< Black Level will be applied to the green channel.
    Red,  //!< Black Level will be applied to the red channel.
    Tap1,  //!< Black Level will be applied to Tap 1.
    Tap2,  //!< Black Level will be applied to Tap 2.
    U,  //!< Black Level will be applied to U channel.
    V,  //!< Black Level will be applied to V channel.
    Y  //!< Black Level will be applied to Y channel.
};

/**
\class      CBlackLevelSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature BlackLevelSelector
*/
class NEOAPI_CPP_DECL CBlackLevelSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CBlackLevelSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CBlackLevelSelector object
    */
    CBlackLevelSelector(const CBlackLevelSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CBlackLevelSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CBlackLevelSelector object to assign.
        \return     Object reference with the value set.
    */
    const CBlackLevelSelector& operator = (const CBlackLevelSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as BlackLevelSelector
    */
    operator BlackLevelSelector() const;
    /**
        \brief     Set the current value.
        \param     value The BlackLevelSelector value to be written.
        \return    The CBlackLevelSelector object
    */
    CBlackLevelSelector& operator = (BlackLevelSelector value);
    /**
        \brief     Set the current value.
        \param     value The BlackLevelSelector value to be written.
        \return    The CBlackLevelSelector object
    */
    CBlackLevelSelector& Set(BlackLevelSelector value);
    /**
        \brief     Get the current value.
        \return    The value as BlackLevelSelector
    */
    BlackLevelSelector Get() const;
};

/**
\brief Valid values for BlackSunSuppression
\ingroup    GenICamFeatures
 */
enum class BlackSunSuppression {
    Default = 0,  //!< Black Sun Suppression works with default settings.
    High,  //!< Black Sun Suppression works with high settings.
    Low,  //!< Black Sun Suppression works with low settings.
    Max,  //!< Black Sun Suppression works with maximum settings.
    Off  //!< Black Sun Suppression is off.
};

/**
\class      CBlackSunSuppression
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature BlackSunSuppression
*/
class NEOAPI_CPP_DECL CBlackSunSuppression : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CBlackSunSuppression(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CBlackSunSuppression object
    */
    CBlackSunSuppression(const CBlackSunSuppression& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CBlackSunSuppression() {}
    /**
        \brief      Assignment operator
        \param      object The CBlackSunSuppression object to assign.
        \return     Object reference with the value set.
    */
    const CBlackSunSuppression& operator = (const CBlackSunSuppression& object);
    /**
        \brief     Get the current value.
        \return    The value as BlackSunSuppression
    */
    operator BlackSunSuppression() const;
    /**
        \brief     Set the current value.
        \param     value The BlackSunSuppression value to be written.
        \return    The CBlackSunSuppression object
    */
    CBlackSunSuppression& operator = (BlackSunSuppression value);
    /**
        \brief     Set the current value.
        \param     value The BlackSunSuppression value to be written.
        \return    The CBlackSunSuppression object
    */
    CBlackSunSuppression& Set(BlackSunSuppression value);
    /**
        \brief     Get the current value.
        \return    The value as BlackSunSuppression
    */
    BlackSunSuppression Get() const;
};

/**
\brief Valid values for BoSequencerEnable
\ingroup    GenICamFeatures
 */
enum class BoSequencerEnable {
    Off = 0,  //!< Disables the sequencer
    On  //!< Enables the sequencer
};

/**
\class      CBoSequencerEnable
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature BoSequencerEnable
*/
class NEOAPI_CPP_DECL CBoSequencerEnable : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CBoSequencerEnable(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CBoSequencerEnable object
    */
    CBoSequencerEnable(const CBoSequencerEnable& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CBoSequencerEnable() {}
    /**
        \brief      Assignment operator
        \param      object The CBoSequencerEnable object to assign.
        \return     Object reference with the value set.
    */
    const CBoSequencerEnable& operator = (const CBoSequencerEnable& object);
    /**
        \brief     Get the current value.
        \return    The value as BoSequencerEnable
    */
    operator BoSequencerEnable() const;
    /**
        \brief     Set the current value.
        \param     value The BoSequencerEnable value to be written.
        \return    The CBoSequencerEnable object
    */
    CBoSequencerEnable& operator = (BoSequencerEnable value);
    /**
        \brief     Set the current value.
        \param     value The BoSequencerEnable value to be written.
        \return    The CBoSequencerEnable object
    */
    CBoSequencerEnable& Set(BoSequencerEnable value);
    /**
        \brief     Get the current value.
        \return    The value as BoSequencerEnable
    */
    BoSequencerEnable Get() const;
};

/**
\brief Valid values for BoSequencerIOSelector
\ingroup    GenICamFeatures
 */
enum class BoSequencerIOSelector {
    SequencerOutput0 = 0,  //!< Sequencer Output 0 is selected.
    SequencerOutput1,  //!< Sequencer Output 1 is selected.
    SequencerOutput2  //!< Sequencer Output 2 is selected.
};

/**
\class      CBoSequencerIOSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature BoSequencerIOSelector
*/
class NEOAPI_CPP_DECL CBoSequencerIOSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CBoSequencerIOSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CBoSequencerIOSelector object
    */
    CBoSequencerIOSelector(const CBoSequencerIOSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CBoSequencerIOSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CBoSequencerIOSelector object to assign.
        \return     Object reference with the value set.
    */
    const CBoSequencerIOSelector& operator = (const CBoSequencerIOSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as BoSequencerIOSelector
    */
    operator BoSequencerIOSelector() const;
    /**
        \brief     Set the current value.
        \param     value The BoSequencerIOSelector value to be written.
        \return    The CBoSequencerIOSelector object
    */
    CBoSequencerIOSelector& operator = (BoSequencerIOSelector value);
    /**
        \brief     Set the current value.
        \param     value The BoSequencerIOSelector value to be written.
        \return    The CBoSequencerIOSelector object
    */
    CBoSequencerIOSelector& Set(BoSequencerIOSelector value);
    /**
        \brief     Get the current value.
        \return    The value as BoSequencerIOSelector
    */
    BoSequencerIOSelector Get() const;
};

/**
\brief Valid values for BoSequencerMode
\ingroup    GenICamFeatures
 */
enum class BoSequencerMode {
    FreeRunning = 0,  //!< The running mode free running is selected.
    FreeRunningInitTrigger,  //!< The running mode free running init trigger is selected.
    FreeRunningInitTriggerOnce,  //!< The running mode free running init trigger once is selected.
    FreeRunningOnce,  //!< The running mode free running once is selected.
    SingleStepTrigger,  //!< The running mode single step trigger is selected.
    SingleStepTriggerOnce  //!< The running mode single step trigger once is selected.
};

/**
\class      CBoSequencerMode
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature BoSequencerMode
*/
class NEOAPI_CPP_DECL CBoSequencerMode : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CBoSequencerMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CBoSequencerMode object
    */
    CBoSequencerMode(const CBoSequencerMode& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CBoSequencerMode() {}
    /**
        \brief      Assignment operator
        \param      object The CBoSequencerMode object to assign.
        \return     Object reference with the value set.
    */
    const CBoSequencerMode& operator = (const CBoSequencerMode& object);
    /**
        \brief     Get the current value.
        \return    The value as BoSequencerMode
    */
    operator BoSequencerMode() const;
    /**
        \brief     Set the current value.
        \param     value The BoSequencerMode value to be written.
        \return    The CBoSequencerMode object
    */
    CBoSequencerMode& operator = (BoSequencerMode value);
    /**
        \brief     Set the current value.
        \param     value The BoSequencerMode value to be written.
        \return    The CBoSequencerMode object
    */
    CBoSequencerMode& Set(BoSequencerMode value);
    /**
        \brief     Get the current value.
        \return    The value as BoSequencerMode
    */
    BoSequencerMode Get() const;
};

/**
\brief Valid values for BoSequencerSensorDigitizationTaps
\ingroup    GenICamFeatures
 */
enum class BoSequencerSensorDigitizationTaps {
    Four = 0,  //!< 4 Taps
    One,  //!< 1 Tap
    OneAndThree,  //!< 2 Taps, One and Three
    OneAndTwo  //!< 2 Taps, One and Two
};

/**
\class      CBoSequencerSensorDigitizationTaps
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature BoSequencerSensorDigitizationTaps
*/
class NEOAPI_CPP_DECL CBoSequencerSensorDigitizationTaps : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CBoSequencerSensorDigitizationTaps(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CBoSequencerSensorDigitizationTaps object
    */
    CBoSequencerSensorDigitizationTaps(const CBoSequencerSensorDigitizationTaps& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CBoSequencerSensorDigitizationTaps() {}
    /**
        \brief      Assignment operator
        \param      object The CBoSequencerSensorDigitizationTaps object to assign.
        \return     Object reference with the value set.
    */
    const CBoSequencerSensorDigitizationTaps& operator = (const CBoSequencerSensorDigitizationTaps& object);
    /**
        \brief     Get the current value.
        \return    The value as BoSequencerSensorDigitizationTaps
    */
    operator BoSequencerSensorDigitizationTaps() const;
    /**
        \brief     Set the current value.
        \param     value The BoSequencerSensorDigitizationTaps value to be written.
        \return    The CBoSequencerSensorDigitizationTaps object
    */
    CBoSequencerSensorDigitizationTaps& operator = (BoSequencerSensorDigitizationTaps value);
    /**
        \brief     Set the current value.
        \param     value The BoSequencerSensorDigitizationTaps value to be written.
        \return    The CBoSequencerSensorDigitizationTaps object
    */
    CBoSequencerSensorDigitizationTaps& Set(BoSequencerSensorDigitizationTaps value);
    /**
        \brief     Get the current value.
        \return    The value as BoSequencerSensorDigitizationTaps
    */
    BoSequencerSensorDigitizationTaps Get() const;
};

/**
\brief Valid values for BoSequencerStart
\ingroup    GenICamFeatures
 */
enum class BoSequencerStart {
    Off = 0,  //!< Disables the configured sequence.
    On  //!< Enables the configured sequence.
};

/**
\class      CBoSequencerStart
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature BoSequencerStart
*/
class NEOAPI_CPP_DECL CBoSequencerStart : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CBoSequencerStart(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CBoSequencerStart object
    */
    CBoSequencerStart(const CBoSequencerStart& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CBoSequencerStart() {}
    /**
        \brief      Assignment operator
        \param      object The CBoSequencerStart object to assign.
        \return     Object reference with the value set.
    */
    const CBoSequencerStart& operator = (const CBoSequencerStart& object);
    /**
        \brief     Get the current value.
        \return    The value as BoSequencerStart
    */
    operator BoSequencerStart() const;
    /**
        \brief     Set the current value.
        \param     value The BoSequencerStart value to be written.
        \return    The CBoSequencerStart object
    */
    CBoSequencerStart& operator = (BoSequencerStart value);
    /**
        \brief     Set the current value.
        \param     value The BoSequencerStart value to be written.
        \return    The CBoSequencerStart object
    */
    CBoSequencerStart& Set(BoSequencerStart value);
    /**
        \brief     Get the current value.
        \return    The value as BoSequencerStart
    */
    BoSequencerStart Get() const;
};

/**
\brief Valid values for BrightnessAutoPriority
\ingroup    GenICamFeatures
 */
enum class BrightnessAutoPriority {
    ExposureAuto = 0,  //!< ExposureAuto has highest priority and will be modified first.
    GainAuto  //!< Gain Auto has highest priority and will be modified first.
};

/**
\class      CBrightnessAutoPriority
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature BrightnessAutoPriority
*/
class NEOAPI_CPP_DECL CBrightnessAutoPriority : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CBrightnessAutoPriority(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CBrightnessAutoPriority object
    */
    CBrightnessAutoPriority(const CBrightnessAutoPriority& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CBrightnessAutoPriority() {}
    /**
        \brief      Assignment operator
        \param      object The CBrightnessAutoPriority object to assign.
        \return     Object reference with the value set.
    */
    const CBrightnessAutoPriority& operator = (const CBrightnessAutoPriority& object);
    /**
        \brief     Get the current value.
        \return    The value as BrightnessAutoPriority
    */
    operator BrightnessAutoPriority() const;
    /**
        \brief     Set the current value.
        \param     value The BrightnessAutoPriority value to be written.
        \return    The CBrightnessAutoPriority object
    */
    CBrightnessAutoPriority& operator = (BrightnessAutoPriority value);
    /**
        \brief     Set the current value.
        \param     value The BrightnessAutoPriority value to be written.
        \return    The CBrightnessAutoPriority object
    */
    CBrightnessAutoPriority& Set(BrightnessAutoPriority value);
    /**
        \brief     Get the current value.
        \return    The value as BrightnessAutoPriority
    */
    BrightnessAutoPriority Get() const;
};

/**
\brief Valid values for BrightnessCorrection
\ingroup    GenICamFeatures
 */
enum class BrightnessCorrection {
    Off = 0,  //!< Brightness Correction is off.
    On  //!< Brightness Correction is on.
};

/**
\class      CBrightnessCorrection
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature BrightnessCorrection
*/
class NEOAPI_CPP_DECL CBrightnessCorrection : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CBrightnessCorrection(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CBrightnessCorrection object
    */
    CBrightnessCorrection(const CBrightnessCorrection& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CBrightnessCorrection() {}
    /**
        \brief      Assignment operator
        \param      object The CBrightnessCorrection object to assign.
        \return     Object reference with the value set.
    */
    const CBrightnessCorrection& operator = (const CBrightnessCorrection& object);
    /**
        \brief     Get the current value.
        \return    The value as BrightnessCorrection
    */
    operator BrightnessCorrection() const;
    /**
        \brief     Set the current value.
        \param     value The BrightnessCorrection value to be written.
        \return    The CBrightnessCorrection object
    */
    CBrightnessCorrection& operator = (BrightnessCorrection value);
    /**
        \brief     Set the current value.
        \param     value The BrightnessCorrection value to be written.
        \return    The CBrightnessCorrection object
    */
    CBrightnessCorrection& Set(BrightnessCorrection value);
    /**
        \brief     Get the current value.
        \return    The value as BrightnessCorrection
    */
    BrightnessCorrection Get() const;
};

/**
\brief Valid values for CalibrationMatrixValueSelector
\ingroup    GenICamFeatures
 */
enum class CalibrationMatrixValueSelector {
    Gain00 = 0,  //!< Gain 0,0 of the selected calibration matrix.
    Gain01,  //!< Gain 0,1 of the selected calibration matrix.
    Gain02,  //!< Gain 0,2 of the selected calibration matrix.
    Gain03,  //!< Gain 0,3 of the selected calibration matrix.
    Gain10,  //!< Gain 1,0 of the selected calibration matrix.
    Gain11,  //!< Gain 1,1 of the selected calibration matrix.
    Gain12,  //!< Gain 1,2 of the selected calibration matrix.
    Gain13,  //!< Gain 1.3 of the selected calibration matrix.
    Gain20,  //!< Gain 2.0 of the selected calibration matrix.
    Gain21,  //!< Gain 2.1 of the selected calibration matrix.
    Gain22,  //!< Gain 2.2 of the selected calibration matrix.
    Gain23  //!< Gain 2.3 of the selected calibration matrix.
};

/**
\class      CCalibrationMatrixValueSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature CalibrationMatrixValueSelector
*/
class NEOAPI_CPP_DECL CCalibrationMatrixValueSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CCalibrationMatrixValueSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CCalibrationMatrixValueSelector object
    */
    CCalibrationMatrixValueSelector(const CCalibrationMatrixValueSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CCalibrationMatrixValueSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CCalibrationMatrixValueSelector object to assign.
        \return     Object reference with the value set.
    */
    const CCalibrationMatrixValueSelector& operator = (const CCalibrationMatrixValueSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as CalibrationMatrixValueSelector
    */
    operator CalibrationMatrixValueSelector() const;
    /**
        \brief     Set the current value.
        \param     value The CalibrationMatrixValueSelector value to be written.
        \return    The CCalibrationMatrixValueSelector object
    */
    CCalibrationMatrixValueSelector& operator = (CalibrationMatrixValueSelector value);
    /**
        \brief     Set the current value.
        \param     value The CalibrationMatrixValueSelector value to be written.
        \return    The CCalibrationMatrixValueSelector object
    */
    CCalibrationMatrixValueSelector& Set(CalibrationMatrixValueSelector value);
    /**
        \brief     Get the current value.
        \return    The value as CalibrationMatrixValueSelector
    */
    CalibrationMatrixValueSelector Get() const;
};

/**
\brief Valid values for ChunkSelector
\ingroup    GenICamFeatures
 */
enum class ChunkSelector {
    Binning = 0,  //!< Binning AVAILABLE: Always
    BinningHorizontal,  //!< Binning Horizontal
    BinningVertical,  //!< Binning Vertical
    BlackLevel,  //!< Black Level
    BoSequencerEnable,  //!< BoSequencer Enable
    ComponentID,  //!< Component ID
    ComponentIDValue,  //!< Component ID Value
    CounterValue,  //!< Counter Value
    DecimationHorizontal,  //!< Decimation Horizontal
    DecimationVertical,  //!< Decimation Vertical
    DeviceTemperature,  //!< Device Temperature. AVAILABLE: Always
    EncoderStatusValue,  //!< Encoder Status Value
    EncoderValue,  //!< Encoder Value
    ExposureTime,  //!< Exposure Time
    FrameID,  //!< Frame ID
    Gain,  //!< Gain
    GroupIDValue,  //!< Group ID Value
    Height,  //!< Height
    Image,  //!< Image
    ImageControl,  //!< Image Control. AVAILABLE: Always
    LinePitch,  //!< Line Pitch
    LineStatusAll,  //!< Line Status All
    OffsetX,  //!< Offset X
    OffsetY,  //!< Offset Y
    PixelDynamicRangeMax,  //!< Pixel Dynamic Range Max
    PixelDynamicRangeMin,  //!< Pixel Dynamic Range Min
    PixelFormat,  //!< Pixel Format
    RegionID,  //!< Region ID
    RegionIDValue,  //!< Region ID Value
    ReverseX,  //!< Reverse X
    ReverseY,  //!< Reverse Y
    Scan3dAxisMax,  //!< Scan 3d Axis Max
    Scan3dAxisMin,  //!< Scan 3d Axis Min
    Scan3dCoordinateOffset,  //!< Scan 3d Coordinate Offset
    Scan3dCoordinateReferenceValue,  //!< Scan 3d Coordinate Reference Value
    Scan3dCoordinateScale,  //!< Scan 3d Coordinate Scale
    Scan3dCoordinateSystem,  //!< Scan 3d Coordinate System
    Scan3dCoordinateSystemReference,  //!< Scan 3d Coordinate System Reference
    Scan3dCoordinateTransformValue,  //!< Scan 3d Coordinate Transform Value
    Scan3dDistanceUnit,  //!< Scan 3d Distance Unit
    Scan3dInvalidDataFlag,  //!< Scan 3d Invalid Data Flag
    Scan3dInvalidDataValue,  //!< Scan 3d Invalid Data Value
    Scan3dOutputMode,  //!< Scan 3d Output Mode
    SequencerSetActive,  //!< Sequencer Set Active
    SourceID,  //!< Source ID
    SourceIDValue,  //!< Source ID Value
    StreamChannelID,  //!< Stream Channel ID
    TimerValue,  //!< Timer Value
    Timestamp,  //!< Timestamp
    TimestampLatchValue,  //!< Timestamp Latch Value
    TransferBlockID,  //!< Transfer Block ID
    TransferQueueCurrentBlockCount,  //!< Transfer Queue Current Block Count
    TransferStreamID,  //!< Transfer Stream ID
    TriggerControl,  //!< Trigger Control AVAILABLE: Always.
    TriggerID,  //!< Trigger ID
    Width  //!< Width
};

/**
\class      CChunkSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature ChunkSelector
*/
class NEOAPI_CPP_DECL CChunkSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CChunkSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CChunkSelector object
    */
    CChunkSelector(const CChunkSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CChunkSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CChunkSelector object to assign.
        \return     Object reference with the value set.
    */
    const CChunkSelector& operator = (const CChunkSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as ChunkSelector
    */
    operator ChunkSelector() const;
    /**
        \brief     Set the current value.
        \param     value The ChunkSelector value to be written.
        \return    The CChunkSelector object
    */
    CChunkSelector& operator = (ChunkSelector value);
    /**
        \brief     Set the current value.
        \param     value The ChunkSelector value to be written.
        \return    The CChunkSelector object
    */
    CChunkSelector& Set(ChunkSelector value);
    /**
        \brief     Get the current value.
        \return    The value as ChunkSelector
    */
    ChunkSelector Get() const;
};

/**
\brief Valid values for ClConfiguration
\ingroup    GenICamFeatures
 */
enum class ClConfiguration {
    Base = 0,  //!< Standard base configuration described by the Camera Link standard.
    DualBase,  //!< The camera streams the data from multiple taps (that do not fit in the standard base configuration) through two Camera Link base ports. It is responsibility of the application or frame grabber to reconstruct the full image. Only one of the ports (fixed) serves as the "master" for serial communication and triggering.
    EightyBit,  //!< Standard 80-bit configuration with 10 taps of 8 bits or 8 taps of 10 bits, as described by the Camera Link standard.
    Full,  //!< Standard full configuration described by the Camera Link standard.
    Medium  //!< Standard medium configuration described by the Camera Link standard.
};

/**
\class      CClConfiguration
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature ClConfiguration
*/
class NEOAPI_CPP_DECL CClConfiguration : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CClConfiguration(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CClConfiguration object
    */
    CClConfiguration(const CClConfiguration& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CClConfiguration() {}
    /**
        \brief      Assignment operator
        \param      object The CClConfiguration object to assign.
        \return     Object reference with the value set.
    */
    const CClConfiguration& operator = (const CClConfiguration& object);
    /**
        \brief     Get the current value.
        \return    The value as ClConfiguration
    */
    operator ClConfiguration() const;
    /**
        \brief     Set the current value.
        \param     value The ClConfiguration value to be written.
        \return    The CClConfiguration object
    */
    CClConfiguration& operator = (ClConfiguration value);
    /**
        \brief     Set the current value.
        \param     value The ClConfiguration value to be written.
        \return    The CClConfiguration object
    */
    CClConfiguration& Set(ClConfiguration value);
    /**
        \brief     Get the current value.
        \return    The value as ClConfiguration
    */
    ClConfiguration Get() const;
};

/**
\brief Valid values for ClTimeSlotsCount
\ingroup    GenICamFeatures
 */
enum class ClTimeSlotsCount {
    One = 0,  //!< One
    Three,  //!< Three
    Two  //!< Two
};

/**
\class      CClTimeSlotsCount
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature ClTimeSlotsCount
*/
class NEOAPI_CPP_DECL CClTimeSlotsCount : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CClTimeSlotsCount(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CClTimeSlotsCount object
    */
    CClTimeSlotsCount(const CClTimeSlotsCount& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CClTimeSlotsCount() {}
    /**
        \brief      Assignment operator
        \param      object The CClTimeSlotsCount object to assign.
        \return     Object reference with the value set.
    */
    const CClTimeSlotsCount& operator = (const CClTimeSlotsCount& object);
    /**
        \brief     Get the current value.
        \return    The value as ClTimeSlotsCount
    */
    operator ClTimeSlotsCount() const;
    /**
        \brief     Set the current value.
        \param     value The ClTimeSlotsCount value to be written.
        \return    The CClTimeSlotsCount object
    */
    CClTimeSlotsCount& operator = (ClTimeSlotsCount value);
    /**
        \brief     Set the current value.
        \param     value The ClTimeSlotsCount value to be written.
        \return    The CClTimeSlotsCount object
    */
    CClTimeSlotsCount& Set(ClTimeSlotsCount value);
    /**
        \brief     Get the current value.
        \return    The value as ClTimeSlotsCount
    */
    ClTimeSlotsCount Get() const;
};

/**
\brief Valid values for ColorTransformationAuto
\ingroup    GenICamFeatures
 */
enum class ColorTransformationAuto {
    Continuous = 0,  //!< Color transformation is constantly adjusted by the device.
    Off,  //!< Color transformation is user controlled using the various Colortransformation features.
    Once  //!< Color transformation is automatically adjusted once by the device. Once it has converged, it automatically returns to the Off state.
};

/**
\class      CColorTransformationAuto
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature ColorTransformationAuto
*/
class NEOAPI_CPP_DECL CColorTransformationAuto : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CColorTransformationAuto(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CColorTransformationAuto object
    */
    CColorTransformationAuto(const CColorTransformationAuto& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CColorTransformationAuto() {}
    /**
        \brief      Assignment operator
        \param      object The CColorTransformationAuto object to assign.
        \return     Object reference with the value set.
    */
    const CColorTransformationAuto& operator = (const CColorTransformationAuto& object);
    /**
        \brief     Get the current value.
        \return    The value as ColorTransformationAuto
    */
    operator ColorTransformationAuto() const;
    /**
        \brief     Set the current value.
        \param     value The ColorTransformationAuto value to be written.
        \return    The CColorTransformationAuto object
    */
    CColorTransformationAuto& operator = (ColorTransformationAuto value);
    /**
        \brief     Set the current value.
        \param     value The ColorTransformationAuto value to be written.
        \return    The CColorTransformationAuto object
    */
    CColorTransformationAuto& Set(ColorTransformationAuto value);
    /**
        \brief     Get the current value.
        \return    The value as ColorTransformationAuto
    */
    ColorTransformationAuto Get() const;
};

/**
\brief Valid values for ColorTransformationFactoryListSelector
\ingroup    GenICamFeatures
 */
enum class ColorTransformationFactoryListSelector {
    OptimizedMatrixFor3000K = 0,  //!< ColorTransformationFactoryList is connected to the color temperature of 3000K.
    OptimizedMatrixFor3200K,  //!< ColorTransformationFactoryList is connected to the color temperature of 3200K.
    OptimizedMatrixFor5000K,  //!< ColorTransformationFactoryList is connected to the color temperature of 5000K.
    OptimizedMatrixFor5600K,  //!< ColorTransformationFactoryList is connected to the color temperature of 5600K.
    OptimizedMatrixFor6500K  //!< ColorTransformationFactoryList is connected to the color temperature of 6500K.
};

/**
\class      CColorTransformationFactoryListSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature ColorTransformationFactoryListSelector
*/
class NEOAPI_CPP_DECL CColorTransformationFactoryListSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CColorTransformationFactoryListSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CColorTransformationFactoryListSelector object
    */
    CColorTransformationFactoryListSelector(const CColorTransformationFactoryListSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CColorTransformationFactoryListSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CColorTransformationFactoryListSelector object to assign.
        \return     Object reference with the value set.
    */
    const CColorTransformationFactoryListSelector& operator = (const CColorTransformationFactoryListSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as ColorTransformationFactoryListSelector
    */
    operator ColorTransformationFactoryListSelector() const;
    /**
        \brief     Set the current value.
        \param     value The ColorTransformationFactoryListSelector value to be written.
        \return    The CColorTransformationFactoryListSelector object
    */
    CColorTransformationFactoryListSelector& operator = (ColorTransformationFactoryListSelector value);
    /**
        \brief     Set the current value.
        \param     value The ColorTransformationFactoryListSelector value to be written.
        \return    The CColorTransformationFactoryListSelector object
    */
    CColorTransformationFactoryListSelector& Set(ColorTransformationFactoryListSelector value);
    /**
        \brief     Get the current value.
        \return    The value as ColorTransformationFactoryListSelector
    */
    ColorTransformationFactoryListSelector Get() const;
};

/**
\brief Valid values for ColorTransformationSelector
\ingroup    GenICamFeatures
 */
enum class ColorTransformationSelector {
    RGBtoRGB = 0,  //!< RGB to RGB color transformation.
    RGBtoYUV  //!< RGB to YUV color transformation.
};

/**
\class      CColorTransformationSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature ColorTransformationSelector
*/
class NEOAPI_CPP_DECL CColorTransformationSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CColorTransformationSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CColorTransformationSelector object
    */
    CColorTransformationSelector(const CColorTransformationSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CColorTransformationSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CColorTransformationSelector object to assign.
        \return     Object reference with the value set.
    */
    const CColorTransformationSelector& operator = (const CColorTransformationSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as ColorTransformationSelector
    */
    operator ColorTransformationSelector() const;
    /**
        \brief     Set the current value.
        \param     value The ColorTransformationSelector value to be written.
        \return    The CColorTransformationSelector object
    */
    CColorTransformationSelector& operator = (ColorTransformationSelector value);
    /**
        \brief     Set the current value.
        \param     value The ColorTransformationSelector value to be written.
        \return    The CColorTransformationSelector object
    */
    CColorTransformationSelector& Set(ColorTransformationSelector value);
    /**
        \brief     Get the current value.
        \return    The value as ColorTransformationSelector
    */
    ColorTransformationSelector Get() const;
};

/**
\brief Valid values for ColorTransformationValueSelector
\ingroup    GenICamFeatures
 */
enum class ColorTransformationValueSelector {
    Gain00 = 0,  //!< Gain 0,0 of the transformation matrix.
    Gain01,  //!< Gain 0,1 of the transformation matrix.
    Gain02,  //!< Gain 0,2 of the transformation matrix.
    Gain10,  //!< Gain 1,0 of the transformation matrix.
    Gain11,  //!< Gain 1,1 of the transformation matrix.
    Gain12,  //!< Gain 1,2 of the transformation matrix.
    Gain20,  //!< Gain 2,0 of the transformation matrix.
    Gain21,  //!< Gain 2,1 of the transformation matrix.
    Gain22,  //!< Gain 2,2 of the transformation matrix.
    Offset0,  //!< Offset 0 of the transformation matrix.
    Offset1,  //!< Offset 1 of the transformation matrix.
    Offset2  //!< Offset 2 of the transformation matrix.
};

/**
\class      CColorTransformationValueSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature ColorTransformationValueSelector
*/
class NEOAPI_CPP_DECL CColorTransformationValueSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CColorTransformationValueSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CColorTransformationValueSelector object
    */
    CColorTransformationValueSelector(const CColorTransformationValueSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CColorTransformationValueSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CColorTransformationValueSelector object to assign.
        \return     Object reference with the value set.
    */
    const CColorTransformationValueSelector& operator = (const CColorTransformationValueSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as ColorTransformationValueSelector
    */
    operator ColorTransformationValueSelector() const;
    /**
        \brief     Set the current value.
        \param     value The ColorTransformationValueSelector value to be written.
        \return    The CColorTransformationValueSelector object
    */
    CColorTransformationValueSelector& operator = (ColorTransformationValueSelector value);
    /**
        \brief     Set the current value.
        \param     value The ColorTransformationValueSelector value to be written.
        \return    The CColorTransformationValueSelector object
    */
    CColorTransformationValueSelector& Set(ColorTransformationValueSelector value);
    /**
        \brief     Get the current value.
        \return    The value as ColorTransformationValueSelector
    */
    ColorTransformationValueSelector Get() const;
};

/**
\brief Valid values for ComponentSelector
\ingroup    GenICamFeatures
 */
enum class ComponentSelector {
    Confidence = 0,  //!< The acquisition of confidence map of the acquired image is controlled. Confidence data may be binary (0 - invalid) or an integer where 0 is invalid and increasing value is increased confidence in the data in the corresponding pixel. If floating point representation is used the confidence image is normalized to the range [0,1], for integer representation the maximum possible integer represents maximum confidence.
    Disparity,  //!< The acquisition of stereo camera disparity data is controlled. Disparity is a more specific range format approximately inversely proportional to distance. Disparity is typically given in pixel units.
    Infrared,  //!< The acquisition of non-visible infrared light is controlled.
    Intensity,  //!< The acquisition of intensity (monochrome or color) of the visible reflected light is controlled.
    Multispectral,  //!< The acquisition of multiple spectral bands corresponding to various light wavelenghts is controlled.
    PolarizedRaw,  //!< Acquisition of polarized light intensity. The polarizing filters are arranged in a 2-by-2 pattern: 135° and 0° on even lines, 90° and 45° on odd lines. The raw data is unprocessed. AVAILABLE: Always
    Range,  //!< The acquisition of range (distance) data is controlled. The data produced may be only range (2.5D) or a point cloud giving the 3D coordinates depending on the Scan3dControl features.
    Reflectance,  //!< The reflected intensity acquired together with Range in a Linescan3D sensor acquiring a single linescan profile for each exposure of the sensor.
    Scatter,  //!< The acquisition of data measuring how much light is scattered around the reflected light. In processing this is used as an additional intensity image, often together with the standard intensity or reflectance.
    Ultraviolet  //!< The acquisition of non-visible ultraviolet light is controlled.
};

/**
\class      CComponentSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature ComponentSelector
*/
class NEOAPI_CPP_DECL CComponentSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CComponentSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CComponentSelector object
    */
    CComponentSelector(const CComponentSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CComponentSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CComponentSelector object to assign.
        \return     Object reference with the value set.
    */
    const CComponentSelector& operator = (const CComponentSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as ComponentSelector
    */
    operator ComponentSelector() const;
    /**
        \brief     Set the current value.
        \param     value The ComponentSelector value to be written.
        \return    The CComponentSelector object
    */
    CComponentSelector& operator = (ComponentSelector value);
    /**
        \brief     Set the current value.
        \param     value The ComponentSelector value to be written.
        \return    The CComponentSelector object
    */
    CComponentSelector& Set(ComponentSelector value);
    /**
        \brief     Get the current value.
        \return    The value as ComponentSelector
    */
    ComponentSelector Get() const;
};

/**
\brief Valid values for CounterEventActivation
\ingroup    GenICamFeatures
 */
enum class CounterEventActivation {
    AnyEdge = 0,  //!< Counts on the Falling or rising Edge of the selected signal.
    FallingEdge,  //!< Counts on the Falling Edge of the signal.
    RisingEdge  //!< Counts on the Rising Edge of the signal.
};

/**
\class      CCounterEventActivation
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature CounterEventActivation
*/
class NEOAPI_CPP_DECL CCounterEventActivation : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CCounterEventActivation(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CCounterEventActivation object
    */
    CCounterEventActivation(const CCounterEventActivation& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CCounterEventActivation() {}
    /**
        \brief      Assignment operator
        \param      object The CCounterEventActivation object to assign.
        \return     Object reference with the value set.
    */
    const CCounterEventActivation& operator = (const CCounterEventActivation& object);
    /**
        \brief     Get the current value.
        \return    The value as CounterEventActivation
    */
    operator CounterEventActivation() const;
    /**
        \brief     Set the current value.
        \param     value The CounterEventActivation value to be written.
        \return    The CCounterEventActivation object
    */
    CCounterEventActivation& operator = (CounterEventActivation value);
    /**
        \brief     Set the current value.
        \param     value The CounterEventActivation value to be written.
        \return    The CCounterEventActivation object
    */
    CCounterEventActivation& Set(CounterEventActivation value);
    /**
        \brief     Get the current value.
        \return    The value as CounterEventActivation
    */
    CounterEventActivation Get() const;
};

/**
\brief Valid values for CounterEventSource
\ingroup    GenICamFeatures
 */
enum class CounterEventSource {
    AcquisitionEnd = 0,  //!< Counts the number of Acquisition End.
    AcquisitionStart,  //!< Counts the number of Acquisition Start.
    AcquisitionTrigger,  //!< Counts the number of Acquisition Trigger.
    AcquisitionTriggerMissed,  //!< Counts the number of missed Acquisition Start Trigger.
    Action0,  //!< Counts the number of assertions of the chosen action signal.
    Action1,  //!< Counts the number of assertions of the chosen action signal.
    Action2,  //!< Counts the number of assertions of the chosen action signal.
    Counter0End,  //!< Counts the number of Counter End.
    Counter0Start,  //!< Counts the number of Counter Start.
    Counter1End,  //!< Counts the number of Counter End.
    Counter1Start,  //!< Counts the number of Counter Start.
    Counter2End,  //!< Counts the number of Counter End.
    Counter2Start,  //!< Counts the number of Counter Start.
    Encoder0,  //!< Counts the number of Encoder output pulses.
    Encoder1,  //!< Counts the number of Encoder output pulses.
    Encoder2,  //!< Counts the number of Encoder output pulses.
    ExposureActive,  //!< Counts all Exposures. AVAILABLE: Always
    ExposureEnd,  //!< Counts the number of Exposure End.
    ExposureStart,  //!< Counts the number of Exposure Start.
    FrameBurstEnd,  //!< Counts the number of Frame Burst End.
    FrameBurstStart,  //!< Counts the number of Frame Burst Start.
    FrameEnd,  //!< Counts the number of Frame End.
    FrameStart,  //!< Counts the number of Frame Start.
    FrameTransferSkipped,  //!< Counts when a frame transfer skipped. AVAILABLE: Always
    FrameTrigger,  //!< Counts the number of Frame Start Trigger.
    FrameTriggerMissed,  //!< Counts the number of missed Frame Start Trigger.
    Line0,  //!< Counts the number of transitions on the chosen I/O Line.
    Line1,  //!< Counts the number of transitions on the chosen I/O Line.
    Line2,  //!< Counts the number of transitions on the chosen I/O Line.
    LineEnd,  //!< Counts the number of Line End.
    LineStart,  //!< Counts the number of Line Start.
    LineTrigger,  //!< Counts the number of Line Start Trigger.
    LineTriggerMissed,  //!< Counts the number of missed Line Start Trigger.
    LinkTrigger0,  //!< Counts the number of Link Triggers.
    LinkTrigger1,  //!< Counts the number of Link Triggers.
    LinkTrigger2,  //!< Counts the number of Link Triggers.
    LinkTriggerMissed0,  //!< Counts the number of Link Triggers missed.
    LinkTriggerMissed1,  //!< Counts the number of Link Triggers missed.
    LinkTriggerMissed2,  //!< Counts the number of Link Triggers missed.
    LogicBlock0,  //!< Counts the number of Logic Block output pulses.
    LogicBlock1,  //!< Counts the number of Logic Block output pulses.
    LogicBlock2,  //!< Counts the number of Logic Block output pulses.
    Off,  //!< Counter is stopped.
    SoftwareSignal0,  //!< Counts the number of Software Signal.
    SoftwareSignal1,  //!< Counts the number of Software Signal.
    SoftwareSignal2,  //!< Counts the number of Software Signal.
    Timer0End,  //!< Counts the number of Timer End pulses generated.
    Timer0Start,  //!< Counts the number of Timer Start pulses generated.
    Timer1End,  //!< Counts the number of Timer End pulses generated.
    Timer1Start,  //!< Counts the number of Timer Start pulses generated.
    Timer2End,  //!< Counts the number of Timer End pulses generated.
    Timer2Start,  //!< Counts the number of Timer Start pulses generated.
    TimestampTick,  //!< Counts the number of clock ticks of the Timestamp clock. Can be used to create a programmable timer.
    TriggerSkipped  //!< Counts when a Trigger skipped. AVAILABLE: Always
};

/**
\class      CCounterEventSource
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature CounterEventSource
*/
class NEOAPI_CPP_DECL CCounterEventSource : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CCounterEventSource(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CCounterEventSource object
    */
    CCounterEventSource(const CCounterEventSource& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CCounterEventSource() {}
    /**
        \brief      Assignment operator
        \param      object The CCounterEventSource object to assign.
        \return     Object reference with the value set.
    */
    const CCounterEventSource& operator = (const CCounterEventSource& object);
    /**
        \brief     Get the current value.
        \return    The value as CounterEventSource
    */
    operator CounterEventSource() const;
    /**
        \brief     Set the current value.
        \param     value The CounterEventSource value to be written.
        \return    The CCounterEventSource object
    */
    CCounterEventSource& operator = (CounterEventSource value);
    /**
        \brief     Set the current value.
        \param     value The CounterEventSource value to be written.
        \return    The CCounterEventSource object
    */
    CCounterEventSource& Set(CounterEventSource value);
    /**
        \brief     Get the current value.
        \return    The value as CounterEventSource
    */
    CounterEventSource Get() const;
};

/**
\brief Valid values for CounterResetActivation
\ingroup    GenICamFeatures
 */
enum class CounterResetActivation {
    AnyEdge = 0,  //!< Resets the counter on the Falling or rising Edge of the selected signal.
    FallingEdge,  //!< Resets the counter on the Falling Edge of the signal.
    LevelHigh,  //!< Resets the counter as long as the selected signal level is High.
    LevelLow,  //!< Resets the counter as long as the selected signal level is Low.
    RisingEdge  //!< Resets the counter on the Rising Edge of the signal.
};

/**
\class      CCounterResetActivation
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature CounterResetActivation
*/
class NEOAPI_CPP_DECL CCounterResetActivation : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CCounterResetActivation(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CCounterResetActivation object
    */
    CCounterResetActivation(const CCounterResetActivation& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CCounterResetActivation() {}
    /**
        \brief      Assignment operator
        \param      object The CCounterResetActivation object to assign.
        \return     Object reference with the value set.
    */
    const CCounterResetActivation& operator = (const CCounterResetActivation& object);
    /**
        \brief     Get the current value.
        \return    The value as CounterResetActivation
    */
    operator CounterResetActivation() const;
    /**
        \brief     Set the current value.
        \param     value The CounterResetActivation value to be written.
        \return    The CCounterResetActivation object
    */
    CCounterResetActivation& operator = (CounterResetActivation value);
    /**
        \brief     Set the current value.
        \param     value The CounterResetActivation value to be written.
        \return    The CCounterResetActivation object
    */
    CCounterResetActivation& Set(CounterResetActivation value);
    /**
        \brief     Get the current value.
        \return    The value as CounterResetActivation
    */
    CounterResetActivation Get() const;
};

/**
\brief Valid values for CounterResetSource
\ingroup    GenICamFeatures
 */
enum class CounterResetSource {
    AcquisitionEnd = 0,  //!< Resets with the reception of the Acquisition End.
    AcquisitionStart,  //!< Resets with the reception of the Acquisition Start.
    AcquisitionTrigger,  //!< Resets with the reception of the Acquisition Trigger.
    AcquisitionTriggerMissed,  //!< Resets with the reception of the missed Acquisition start trigger.
    Action0,  //!< Resets on assertions of the chosen action signal (Broadcasted signal on the transport layer).
    Action1,  //!< Resets on assertions of the chosen action signal (Broadcasted signal on the transport layer).
    Action2,  //!< Resets on assertions of the chosen action signal (Broadcasted signal on the transport layer).
    Counter0End,  //!< Resets with the reception of the Counter End.
    Counter0Start,  //!< Resets with the reception of the Counter Start.
    Counter1End,  //!< Resets with the reception of the Counter End.
    Counter1Start,  //!< Resets with the reception of the Counter Start.
    Counter2End,  //!< Resets with the reception of the Counter End.
    Counter2Start,  //!< Resets with the reception of the Counter Start.
    CounterTrigger,  //!< Resets with the reception of a trigger on the CounterTriggerSource.
    Encoder0,  //!< Resets with the reception of the Encoder output signal.
    Encoder1,  //!< Resets with the reception of the Encoder output signal.
    Encoder2,  //!< Resets with the reception of the Encoder output signal.
    ExposureEnd,  //!< Resets with the reception of the Exposure End.
    ExposureStart,  //!< Resets with the reception of the Exposure Start.
    FrameEnd,  //!< Resets with the reception of the Frame End.
    FrameStart,  //!< Resets with the reception of the Frame Start.
    FrameTrigger,  //!< Resets with the reception of the Frame Start Trigger.
    FrameTriggerMissed,  //!< Resets with the reception of the missed Frame start trigger.
    Line0,  //!< Resets by the chosen I/O Line.
    Line1,  //!< Resets by the chosen I/O Line.
    Line2,  //!< Resets by the chosen I/O Line.
    LineEnd,  //!< Resets with the reception of the Line End.
    LineStart,  //!< Resets with the reception of the Line Start.
    LineTrigger,  //!< Resets with the reception of the Line Start Trigger.
    LineTriggerMissed,  //!< Resets with the reception of the missed Line start trigger.
    LinkTrigger0,  //!< Resets on the reception of the chosen Link Trigger (received from the transport layer).
    LinkTrigger1,  //!< Resets on the reception of the chosen Link Trigger (received from the transport layer).
    LinkTrigger2,  //!< Resets on the reception of the chosen Link Trigger (received from the transport layer).
    LogicBlock0,  //!< Resets with the reception of the LogicBlock output signal.
    LogicBlock1,  //!< Resets with the reception of the LogicBlock output signal.
    LogicBlock2,  //!< Resets with the reception of the LogicBlock output signal.
    Off,  //!< Disable the Counter Reset trigger.
    SoftwareSignal0,  //!< Resets on the reception of the Software Signal.
    SoftwareSignal1,  //!< Resets on the reception of the Software Signal.
    SoftwareSignal2,  //!< Resets on the reception of the Software Signal.
    Timer0End,  //!< Resets with the reception of the Timer End.
    Timer0Start,  //!< Resets with the reception of the Timer Start.
    Timer1End,  //!< Resets with the reception of the Timer End.
    Timer1Start,  //!< Resets with the reception of the Timer Start.
    Timer2End,  //!< Resets with the reception of the Timer End.
    Timer2Start,  //!< Resets with the reception of the Timer Start.
    UserOutput0,  //!< Resets by the chosen User Output bit.
    UserOutput1,  //!< Resets by the chosen User Output bit.
    UserOutput2  //!< Resets by the chosen User Output bit.
};

/**
\class      CCounterResetSource
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature CounterResetSource
*/
class NEOAPI_CPP_DECL CCounterResetSource : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CCounterResetSource(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CCounterResetSource object
    */
    CCounterResetSource(const CCounterResetSource& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CCounterResetSource() {}
    /**
        \brief      Assignment operator
        \param      object The CCounterResetSource object to assign.
        \return     Object reference with the value set.
    */
    const CCounterResetSource& operator = (const CCounterResetSource& object);
    /**
        \brief     Get the current value.
        \return    The value as CounterResetSource
    */
    operator CounterResetSource() const;
    /**
        \brief     Set the current value.
        \param     value The CounterResetSource value to be written.
        \return    The CCounterResetSource object
    */
    CCounterResetSource& operator = (CounterResetSource value);
    /**
        \brief     Set the current value.
        \param     value The CounterResetSource value to be written.
        \return    The CCounterResetSource object
    */
    CCounterResetSource& Set(CounterResetSource value);
    /**
        \brief     Get the current value.
        \return    The value as CounterResetSource
    */
    CounterResetSource Get() const;
};

/**
\brief Valid values for CounterSelector
\ingroup    GenICamFeatures
 */
enum class CounterSelector {
    Counter0 = 0,  //!< Selects the counter 0.
    Counter1,  //!< Selects the counter 1.
    Counter2  //!< Selects the counter 2.
};

/**
\class      CCounterSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature CounterSelector
*/
class NEOAPI_CPP_DECL CCounterSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CCounterSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CCounterSelector object
    */
    CCounterSelector(const CCounterSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CCounterSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CCounterSelector object to assign.
        \return     Object reference with the value set.
    */
    const CCounterSelector& operator = (const CCounterSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as CounterSelector
    */
    operator CounterSelector() const;
    /**
        \brief     Set the current value.
        \param     value The CounterSelector value to be written.
        \return    The CCounterSelector object
    */
    CCounterSelector& operator = (CounterSelector value);
    /**
        \brief     Set the current value.
        \param     value The CounterSelector value to be written.
        \return    The CCounterSelector object
    */
    CCounterSelector& Set(CounterSelector value);
    /**
        \brief     Get the current value.
        \return    The value as CounterSelector
    */
    CounterSelector Get() const;
};

/**
\brief Valid values for CustomDataConfigurationMode
\ingroup    GenICamFeatures
 */
enum class CustomDataConfigurationMode {
    Off = 0,  //!< Disables the custom data configuration mode.
    On  //!< Enables the custom data configuration mode.
};

/**
\class      CCustomDataConfigurationMode
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature CustomDataConfigurationMode
*/
class NEOAPI_CPP_DECL CCustomDataConfigurationMode : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CCustomDataConfigurationMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CCustomDataConfigurationMode object
    */
    CCustomDataConfigurationMode(const CCustomDataConfigurationMode& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CCustomDataConfigurationMode() {}
    /**
        \brief      Assignment operator
        \param      object The CCustomDataConfigurationMode object to assign.
        \return     Object reference with the value set.
    */
    const CCustomDataConfigurationMode& operator = (const CCustomDataConfigurationMode& object);
    /**
        \brief     Get the current value.
        \return    The value as CustomDataConfigurationMode
    */
    operator CustomDataConfigurationMode() const;
    /**
        \brief     Set the current value.
        \param     value The CustomDataConfigurationMode value to be written.
        \return    The CCustomDataConfigurationMode object
    */
    CCustomDataConfigurationMode& operator = (CustomDataConfigurationMode value);
    /**
        \brief     Set the current value.
        \param     value The CustomDataConfigurationMode value to be written.
        \return    The CCustomDataConfigurationMode object
    */
    CCustomDataConfigurationMode& Set(CustomDataConfigurationMode value);
    /**
        \brief     Get the current value.
        \return    The value as CustomDataConfigurationMode
    */
    CustomDataConfigurationMode Get() const;
};

/**
\brief Valid values for DecimationHorizontalMode
\ingroup    GenICamFeatures
 */
enum class DecimationHorizontalMode {
    Average = 0,  //!< The values of a group of N adjacent pixels are averaged.
    Discard  //!< The value of every Nth pixel is kept, others are discarded.
};

/**
\class      CDecimationHorizontalMode
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature DecimationHorizontalMode
*/
class NEOAPI_CPP_DECL CDecimationHorizontalMode : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CDecimationHorizontalMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CDecimationHorizontalMode object
    */
    CDecimationHorizontalMode(const CDecimationHorizontalMode& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CDecimationHorizontalMode() {}
    /**
        \brief      Assignment operator
        \param      object The CDecimationHorizontalMode object to assign.
        \return     Object reference with the value set.
    */
    const CDecimationHorizontalMode& operator = (const CDecimationHorizontalMode& object);
    /**
        \brief     Get the current value.
        \return    The value as DecimationHorizontalMode
    */
    operator DecimationHorizontalMode() const;
    /**
        \brief     Set the current value.
        \param     value The DecimationHorizontalMode value to be written.
        \return    The CDecimationHorizontalMode object
    */
    CDecimationHorizontalMode& operator = (DecimationHorizontalMode value);
    /**
        \brief     Set the current value.
        \param     value The DecimationHorizontalMode value to be written.
        \return    The CDecimationHorizontalMode object
    */
    CDecimationHorizontalMode& Set(DecimationHorizontalMode value);
    /**
        \brief     Get the current value.
        \return    The value as DecimationHorizontalMode
    */
    DecimationHorizontalMode Get() const;
};

/**
\brief Valid values for DecimationVerticalMode
\ingroup    GenICamFeatures
 */
enum class DecimationVerticalMode {
    Average = 0,  //!< The values of a group of N adjacent pixels are averaged.
    Discard  //!< The value of every Nth pixel is kept, others are discarded.
};

/**
\class      CDecimationVerticalMode
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature DecimationVerticalMode
*/
class NEOAPI_CPP_DECL CDecimationVerticalMode : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CDecimationVerticalMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CDecimationVerticalMode object
    */
    CDecimationVerticalMode(const CDecimationVerticalMode& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CDecimationVerticalMode() {}
    /**
        \brief      Assignment operator
        \param      object The CDecimationVerticalMode object to assign.
        \return     Object reference with the value set.
    */
    const CDecimationVerticalMode& operator = (const CDecimationVerticalMode& object);
    /**
        \brief     Get the current value.
        \return    The value as DecimationVerticalMode
    */
    operator DecimationVerticalMode() const;
    /**
        \brief     Set the current value.
        \param     value The DecimationVerticalMode value to be written.
        \return    The CDecimationVerticalMode object
    */
    CDecimationVerticalMode& operator = (DecimationVerticalMode value);
    /**
        \brief     Set the current value.
        \param     value The DecimationVerticalMode value to be written.
        \return    The CDecimationVerticalMode object
    */
    CDecimationVerticalMode& Set(DecimationVerticalMode value);
    /**
        \brief     Get the current value.
        \return    The value as DecimationVerticalMode
    */
    DecimationVerticalMode Get() const;
};

/**
\brief Valid values for DefectPixelListSelector
\ingroup    GenICamFeatures
 */
enum class DefectPixelListSelector {
    Column = 0,  //!< Selects Defect Pixel List for defect columns.
    Pixel,  //!< Selects Defect Pixel List for defect pixels.
    Row  //!< Selects Defect Pixel List for defect rows.
};

/**
\class      CDefectPixelListSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature DefectPixelListSelector
*/
class NEOAPI_CPP_DECL CDefectPixelListSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CDefectPixelListSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CDefectPixelListSelector object
    */
    CDefectPixelListSelector(const CDefectPixelListSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CDefectPixelListSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CDefectPixelListSelector object to assign.
        \return     Object reference with the value set.
    */
    const CDefectPixelListSelector& operator = (const CDefectPixelListSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as DefectPixelListSelector
    */
    operator DefectPixelListSelector() const;
    /**
        \brief     Set the current value.
        \param     value The DefectPixelListSelector value to be written.
        \return    The CDefectPixelListSelector object
    */
    CDefectPixelListSelector& operator = (DefectPixelListSelector value);
    /**
        \brief     Set the current value.
        \param     value The DefectPixelListSelector value to be written.
        \return    The CDefectPixelListSelector object
    */
    CDefectPixelListSelector& Set(DefectPixelListSelector value);
    /**
        \brief     Get the current value.
        \return    The value as DefectPixelListSelector
    */
    DefectPixelListSelector Get() const;
};

/**
\brief Valid values for DeviceCharacterSet
\ingroup    GenICamFeatures
 */
enum class DeviceCharacterSet {
    ASCII = 0,  //!< Device use ASCII character set.
    UTF16,  //!< Device use UTF16 character set. AVAILABLE: Always.
    UTF8  //!< Device use UTF8 character set.
};

/**
\class      CDeviceCharacterSet
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature DeviceCharacterSet
*/
class NEOAPI_CPP_DECL CDeviceCharacterSet : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CDeviceCharacterSet(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CDeviceCharacterSet object
    */
    CDeviceCharacterSet(const CDeviceCharacterSet& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CDeviceCharacterSet() {}
    /**
        \brief      Assignment operator
        \param      object The CDeviceCharacterSet object to assign.
        \return     Object reference with the value set.
    */
    const CDeviceCharacterSet& operator = (const CDeviceCharacterSet& object);
    /**
        \brief     Get the current value.
        \return    The value as DeviceCharacterSet
    */
    operator DeviceCharacterSet() const;
    /**
        \brief     Set the current value.
        \param     value The DeviceCharacterSet value to be written.
        \return    The CDeviceCharacterSet object
    */
    CDeviceCharacterSet& operator = (DeviceCharacterSet value);
    /**
        \brief     Set the current value.
        \param     value The DeviceCharacterSet value to be written.
        \return    The CDeviceCharacterSet object
    */
    CDeviceCharacterSet& Set(DeviceCharacterSet value);
    /**
        \brief     Get the current value.
        \return    The value as DeviceCharacterSet
    */
    DeviceCharacterSet Get() const;
};

/**
\brief Valid values for DeviceClockSelector
\ingroup    GenICamFeatures
 */
enum class DeviceClockSelector {
    CameraLink = 0,  //!< Frequency of the Camera Link clock.
    Sensor,  //!< Clock frequency of the image sensor of the camera.
    SensorDigitization  //!< Clock frequency of the camera A/D conversion stage.
};

/**
\class      CDeviceClockSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature DeviceClockSelector
*/
class NEOAPI_CPP_DECL CDeviceClockSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CDeviceClockSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CDeviceClockSelector object
    */
    CDeviceClockSelector(const CDeviceClockSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CDeviceClockSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CDeviceClockSelector object to assign.
        \return     Object reference with the value set.
    */
    const CDeviceClockSelector& operator = (const CDeviceClockSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as DeviceClockSelector
    */
    operator DeviceClockSelector() const;
    /**
        \brief     Set the current value.
        \param     value The DeviceClockSelector value to be written.
        \return    The CDeviceClockSelector object
    */
    CDeviceClockSelector& operator = (DeviceClockSelector value);
    /**
        \brief     Set the current value.
        \param     value The DeviceClockSelector value to be written.
        \return    The CDeviceClockSelector object
    */
    CDeviceClockSelector& Set(DeviceClockSelector value);
    /**
        \brief     Get the current value.
        \return    The value as DeviceClockSelector
    */
    DeviceClockSelector Get() const;
};

/**
\brief Valid values for DeviceFrontUARTSource
\ingroup    GenICamFeatures
 */
enum class DeviceFrontUARTSource {
    OpticControl = 0,  //!< Front side UART interface is used for optic control.
    RS232  //!< Front side UART interface is used as RS232 interface. Optic control is not possible.
};

/**
\class      CDeviceFrontUARTSource
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature DeviceFrontUARTSource
*/
class NEOAPI_CPP_DECL CDeviceFrontUARTSource : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CDeviceFrontUARTSource(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CDeviceFrontUARTSource object
    */
    CDeviceFrontUARTSource(const CDeviceFrontUARTSource& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CDeviceFrontUARTSource() {}
    /**
        \brief      Assignment operator
        \param      object The CDeviceFrontUARTSource object to assign.
        \return     Object reference with the value set.
    */
    const CDeviceFrontUARTSource& operator = (const CDeviceFrontUARTSource& object);
    /**
        \brief     Get the current value.
        \return    The value as DeviceFrontUARTSource
    */
    operator DeviceFrontUARTSource() const;
    /**
        \brief     Set the current value.
        \param     value The DeviceFrontUARTSource value to be written.
        \return    The CDeviceFrontUARTSource object
    */
    CDeviceFrontUARTSource& operator = (DeviceFrontUARTSource value);
    /**
        \brief     Set the current value.
        \param     value The DeviceFrontUARTSource value to be written.
        \return    The CDeviceFrontUARTSource object
    */
    CDeviceFrontUARTSource& Set(DeviceFrontUARTSource value);
    /**
        \brief     Get the current value.
        \return    The value as DeviceFrontUARTSource
    */
    DeviceFrontUARTSource Get() const;
};

/**
\brief Valid values for DeviceLicense
\ingroup    GenICamFeatures
 */
enum class DeviceLicense {
    Invalid = 0,  //!< The license is invalid
    Valid  //!< The license is valid
};

/**
\class      CDeviceLicense
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature DeviceLicense
*/
class NEOAPI_CPP_DECL CDeviceLicense : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CDeviceLicense(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CDeviceLicense object
    */
    CDeviceLicense(const CDeviceLicense& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CDeviceLicense() {}
    /**
        \brief      Assignment operator
        \param      object The CDeviceLicense object to assign.
        \return     Object reference with the value set.
    */
    const CDeviceLicense& operator = (const CDeviceLicense& object);
    /**
        \brief     Get the current value.
        \return    The value as DeviceLicense
    */
    operator DeviceLicense() const;
    /**
        \brief     Set the current value.
        \param     value The DeviceLicense value to be written.
        \return    The CDeviceLicense object
    */
    CDeviceLicense& operator = (DeviceLicense value);
    /**
        \brief     Set the current value.
        \param     value The DeviceLicense value to be written.
        \return    The CDeviceLicense object
    */
    CDeviceLicense& Set(DeviceLicense value);
    /**
        \brief     Get the current value.
        \return    The value as DeviceLicense
    */
    DeviceLicense Get() const;
};

/**
\brief Valid values for DeviceLicenseTypeSelector
\ingroup    GenICamFeatures
 */
enum class DeviceLicenseTypeSelector {
    eVARuntime = 0  //!< License to execute an applet, generated by VisualApplets
};

/**
\class      CDeviceLicenseTypeSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature DeviceLicenseTypeSelector
*/
class NEOAPI_CPP_DECL CDeviceLicenseTypeSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CDeviceLicenseTypeSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CDeviceLicenseTypeSelector object
    */
    CDeviceLicenseTypeSelector(const CDeviceLicenseTypeSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CDeviceLicenseTypeSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CDeviceLicenseTypeSelector object to assign.
        \return     Object reference with the value set.
    */
    const CDeviceLicenseTypeSelector& operator = (const CDeviceLicenseTypeSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as DeviceLicenseTypeSelector
    */
    operator DeviceLicenseTypeSelector() const;
    /**
        \brief     Set the current value.
        \param     value The DeviceLicenseTypeSelector value to be written.
        \return    The CDeviceLicenseTypeSelector object
    */
    CDeviceLicenseTypeSelector& operator = (DeviceLicenseTypeSelector value);
    /**
        \brief     Set the current value.
        \param     value The DeviceLicenseTypeSelector value to be written.
        \return    The CDeviceLicenseTypeSelector object
    */
    CDeviceLicenseTypeSelector& Set(DeviceLicenseTypeSelector value);
    /**
        \brief     Get the current value.
        \return    The value as DeviceLicenseTypeSelector
    */
    DeviceLicenseTypeSelector Get() const;
};

/**
\brief Valid values for DeviceLinkHeartbeatMode
\ingroup    GenICamFeatures
 */
enum class DeviceLinkHeartbeatMode {
    Off = 0,  //!< Disables the Link heartbeat.
    On  //!< Enables the Link heartbeat.
};

/**
\class      CDeviceLinkHeartbeatMode
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature DeviceLinkHeartbeatMode
*/
class NEOAPI_CPP_DECL CDeviceLinkHeartbeatMode : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CDeviceLinkHeartbeatMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CDeviceLinkHeartbeatMode object
    */
    CDeviceLinkHeartbeatMode(const CDeviceLinkHeartbeatMode& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CDeviceLinkHeartbeatMode() {}
    /**
        \brief      Assignment operator
        \param      object The CDeviceLinkHeartbeatMode object to assign.
        \return     Object reference with the value set.
    */
    const CDeviceLinkHeartbeatMode& operator = (const CDeviceLinkHeartbeatMode& object);
    /**
        \brief     Get the current value.
        \return    The value as DeviceLinkHeartbeatMode
    */
    operator DeviceLinkHeartbeatMode() const;
    /**
        \brief     Set the current value.
        \param     value The DeviceLinkHeartbeatMode value to be written.
        \return    The CDeviceLinkHeartbeatMode object
    */
    CDeviceLinkHeartbeatMode& operator = (DeviceLinkHeartbeatMode value);
    /**
        \brief     Set the current value.
        \param     value The DeviceLinkHeartbeatMode value to be written.
        \return    The CDeviceLinkHeartbeatMode object
    */
    CDeviceLinkHeartbeatMode& Set(DeviceLinkHeartbeatMode value);
    /**
        \brief     Get the current value.
        \return    The value as DeviceLinkHeartbeatMode
    */
    DeviceLinkHeartbeatMode Get() const;
};

/**
\brief Valid values for DeviceLinkSelector
\ingroup    GenICamFeatures
 */
enum class DeviceLinkSelector {
    USB0 = 0  //!< Selects the link at USB interface with index 0
};

/**
\class      CDeviceLinkSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature DeviceLinkSelector
*/
class NEOAPI_CPP_DECL CDeviceLinkSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CDeviceLinkSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CDeviceLinkSelector object
    */
    CDeviceLinkSelector(const CDeviceLinkSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CDeviceLinkSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CDeviceLinkSelector object to assign.
        \return     Object reference with the value set.
    */
    const CDeviceLinkSelector& operator = (const CDeviceLinkSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as DeviceLinkSelector
    */
    operator DeviceLinkSelector() const;
    /**
        \brief     Set the current value.
        \param     value The DeviceLinkSelector value to be written.
        \return    The CDeviceLinkSelector object
    */
    CDeviceLinkSelector& operator = (DeviceLinkSelector value);
    /**
        \brief     Set the current value.
        \param     value The DeviceLinkSelector value to be written.
        \return    The CDeviceLinkSelector object
    */
    CDeviceLinkSelector& Set(DeviceLinkSelector value);
    /**
        \brief     Get the current value.
        \return    The value as DeviceLinkSelector
    */
    DeviceLinkSelector Get() const;
};

/**
\brief Valid values for DeviceRegistersEndianness
\ingroup    GenICamFeatures
 */
enum class DeviceRegistersEndianness {
    Big = 0,  //!< The registers of the device are big endian.
    Little  //!< The registers of the device are little endian.
};

/**
\class      CDeviceRegistersEndianness
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature DeviceRegistersEndianness
*/
class NEOAPI_CPP_DECL CDeviceRegistersEndianness : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CDeviceRegistersEndianness(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CDeviceRegistersEndianness object
    */
    CDeviceRegistersEndianness(const CDeviceRegistersEndianness& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CDeviceRegistersEndianness() {}
    /**
        \brief      Assignment operator
        \param      object The CDeviceRegistersEndianness object to assign.
        \return     Object reference with the value set.
    */
    const CDeviceRegistersEndianness& operator = (const CDeviceRegistersEndianness& object);
    /**
        \brief     Get the current value.
        \return    The value as DeviceRegistersEndianness
    */
    operator DeviceRegistersEndianness() const;
    /**
        \brief     Set the current value.
        \param     value The DeviceRegistersEndianness value to be written.
        \return    The CDeviceRegistersEndianness object
    */
    CDeviceRegistersEndianness& operator = (DeviceRegistersEndianness value);
    /**
        \brief     Set the current value.
        \param     value The DeviceRegistersEndianness value to be written.
        \return    The CDeviceRegistersEndianness object
    */
    CDeviceRegistersEndianness& Set(DeviceRegistersEndianness value);
    /**
        \brief     Get the current value.
        \return    The value as DeviceRegistersEndianness
    */
    DeviceRegistersEndianness Get() const;
};

/**
\brief Valid values for DeviceScanType
\ingroup    GenICamFeatures
 */
enum class DeviceScanType {
    Areascan = 0,  //!< 2D sensor.
    Areascan3D,  //!< device outputs 2D range image.
    Linescan,  //!< 1D sensor.
    Linescan3D  //!< device outputs 1D range image.
};

/**
\class      CDeviceScanType
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature DeviceScanType
*/
class NEOAPI_CPP_DECL CDeviceScanType : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CDeviceScanType(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CDeviceScanType object
    */
    CDeviceScanType(const CDeviceScanType& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CDeviceScanType() {}
    /**
        \brief      Assignment operator
        \param      object The CDeviceScanType object to assign.
        \return     Object reference with the value set.
    */
    const CDeviceScanType& operator = (const CDeviceScanType& object);
    /**
        \brief     Get the current value.
        \return    The value as DeviceScanType
    */
    operator DeviceScanType() const;
    /**
        \brief     Set the current value.
        \param     value The DeviceScanType value to be written.
        \return    The CDeviceScanType object
    */
    CDeviceScanType& operator = (DeviceScanType value);
    /**
        \brief     Set the current value.
        \param     value The DeviceScanType value to be written.
        \return    The CDeviceScanType object
    */
    CDeviceScanType& Set(DeviceScanType value);
    /**
        \brief     Get the current value.
        \return    The value as DeviceScanType
    */
    DeviceScanType Get() const;
};

/**
\brief Valid values for DeviceSensorSelector
\ingroup    GenICamFeatures
 */
enum class DeviceSensorSelector {
    All = 0,  //!< All sensors.
    Left,  //!< Left sensor.
    Right  //!< Right sensor.
};

/**
\class      CDeviceSensorSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature DeviceSensorSelector
*/
class NEOAPI_CPP_DECL CDeviceSensorSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CDeviceSensorSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CDeviceSensorSelector object
    */
    CDeviceSensorSelector(const CDeviceSensorSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CDeviceSensorSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CDeviceSensorSelector object to assign.
        \return     Object reference with the value set.
    */
    const CDeviceSensorSelector& operator = (const CDeviceSensorSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as DeviceSensorSelector
    */
    operator DeviceSensorSelector() const;
    /**
        \brief     Set the current value.
        \param     value The DeviceSensorSelector value to be written.
        \return    The CDeviceSensorSelector object
    */
    CDeviceSensorSelector& operator = (DeviceSensorSelector value);
    /**
        \brief     Set the current value.
        \param     value The DeviceSensorSelector value to be written.
        \return    The CDeviceSensorSelector object
    */
    CDeviceSensorSelector& Set(DeviceSensorSelector value);
    /**
        \brief     Get the current value.
        \return    The value as DeviceSensorSelector
    */
    DeviceSensorSelector Get() const;
};

/**
\brief Valid values for DeviceSensorType
\ingroup    GenICamFeatures
 */
enum class DeviceSensorType {
    CCD = 0,  //!< The camera sensor is a CCD sensor
    CMOS  //!< The camera sensor is a CMOS sensor
};

/**
\class      CDeviceSensorType
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature DeviceSensorType
*/
class NEOAPI_CPP_DECL CDeviceSensorType : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CDeviceSensorType(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CDeviceSensorType object
    */
    CDeviceSensorType(const CDeviceSensorType& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CDeviceSensorType() {}
    /**
        \brief      Assignment operator
        \param      object The CDeviceSensorType object to assign.
        \return     Object reference with the value set.
    */
    const CDeviceSensorType& operator = (const CDeviceSensorType& object);
    /**
        \brief     Get the current value.
        \return    The value as DeviceSensorType
    */
    operator DeviceSensorType() const;
    /**
        \brief     Set the current value.
        \param     value The DeviceSensorType value to be written.
        \return    The CDeviceSensorType object
    */
    CDeviceSensorType& operator = (DeviceSensorType value);
    /**
        \brief     Set the current value.
        \param     value The DeviceSensorType value to be written.
        \return    The CDeviceSensorType object
    */
    CDeviceSensorType& Set(DeviceSensorType value);
    /**
        \brief     Get the current value.
        \return    The value as DeviceSensorType
    */
    DeviceSensorType Get() const;
};

/**
\brief Valid values for DeviceSensorVersion
\ingroup    GenICamFeatures
 */
enum class DeviceSensorVersion {
    CMOSIS_CMV2000_V2 = 0,  //!< CMV 2000 Sensor, Version 2
    CMOSIS_CMV2000_V3,  //!< CMV 2000 Sensor, Version 3
    CMOSIS_CMV4000_V2,  //!< CMV 4000 Sensor, Version 2
    CMOSIS_CMV4000_V3  //!< CMV 4000 Sensor, Version 3
};

/**
\class      CDeviceSensorVersion
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature DeviceSensorVersion
*/
class NEOAPI_CPP_DECL CDeviceSensorVersion : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CDeviceSensorVersion(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CDeviceSensorVersion object
    */
    CDeviceSensorVersion(const CDeviceSensorVersion& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CDeviceSensorVersion() {}
    /**
        \brief      Assignment operator
        \param      object The CDeviceSensorVersion object to assign.
        \return     Object reference with the value set.
    */
    const CDeviceSensorVersion& operator = (const CDeviceSensorVersion& object);
    /**
        \brief     Get the current value.
        \return    The value as DeviceSensorVersion
    */
    operator DeviceSensorVersion() const;
    /**
        \brief     Set the current value.
        \param     value The DeviceSensorVersion value to be written.
        \return    The CDeviceSensorVersion object
    */
    CDeviceSensorVersion& operator = (DeviceSensorVersion value);
    /**
        \brief     Set the current value.
        \param     value The DeviceSensorVersion value to be written.
        \return    The CDeviceSensorVersion object
    */
    CDeviceSensorVersion& Set(DeviceSensorVersion value);
    /**
        \brief     Get the current value.
        \return    The value as DeviceSensorVersion
    */
    DeviceSensorVersion Get() const;
};

/**
\brief Valid values for DeviceSerialPortBaudRate
\ingroup    GenICamFeatures
 */
enum class DeviceSerialPortBaudRate {
    Baud115200 = 0,  //!< Serial port speed of 115200 baud.
    Baud19200,  //!< Serial port speed of 19200 baud.
    Baud230400,  //!< Serial port speed of 230400 baud.
    Baud38400,  //!< Serial port speed of 38400 baud.
    Baud460800,  //!< Serial port speed of 460800 baud.
    Baud57600,  //!< Serial port speed of 57600 baud.
    Baud921600,  //!< Serial port speed of 921600 baud.
    Baud9600  //!< Serial port speed of 9600 baud.
};

/**
\class      CDeviceSerialPortBaudRate
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature DeviceSerialPortBaudRate
*/
class NEOAPI_CPP_DECL CDeviceSerialPortBaudRate : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CDeviceSerialPortBaudRate(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CDeviceSerialPortBaudRate object
    */
    CDeviceSerialPortBaudRate(const CDeviceSerialPortBaudRate& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CDeviceSerialPortBaudRate() {}
    /**
        \brief      Assignment operator
        \param      object The CDeviceSerialPortBaudRate object to assign.
        \return     Object reference with the value set.
    */
    const CDeviceSerialPortBaudRate& operator = (const CDeviceSerialPortBaudRate& object);
    /**
        \brief     Get the current value.
        \return    The value as DeviceSerialPortBaudRate
    */
    operator DeviceSerialPortBaudRate() const;
    /**
        \brief     Set the current value.
        \param     value The DeviceSerialPortBaudRate value to be written.
        \return    The CDeviceSerialPortBaudRate object
    */
    CDeviceSerialPortBaudRate& operator = (DeviceSerialPortBaudRate value);
    /**
        \brief     Set the current value.
        \param     value The DeviceSerialPortBaudRate value to be written.
        \return    The CDeviceSerialPortBaudRate object
    */
    CDeviceSerialPortBaudRate& Set(DeviceSerialPortBaudRate value);
    /**
        \brief     Get the current value.
        \return    The value as DeviceSerialPortBaudRate
    */
    DeviceSerialPortBaudRate Get() const;
};

/**
\brief Valid values for DeviceSerialPortSelector
\ingroup    GenICamFeatures
 */
enum class DeviceSerialPortSelector {
    CameraLink = 0  //!< Serial port associated to the Camera link connection.
};

/**
\class      CDeviceSerialPortSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature DeviceSerialPortSelector
*/
class NEOAPI_CPP_DECL CDeviceSerialPortSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CDeviceSerialPortSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CDeviceSerialPortSelector object
    */
    CDeviceSerialPortSelector(const CDeviceSerialPortSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CDeviceSerialPortSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CDeviceSerialPortSelector object to assign.
        \return     Object reference with the value set.
    */
    const CDeviceSerialPortSelector& operator = (const CDeviceSerialPortSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as DeviceSerialPortSelector
    */
    operator DeviceSerialPortSelector() const;
    /**
        \brief     Set the current value.
        \param     value The DeviceSerialPortSelector value to be written.
        \return    The CDeviceSerialPortSelector object
    */
    CDeviceSerialPortSelector& operator = (DeviceSerialPortSelector value);
    /**
        \brief     Set the current value.
        \param     value The DeviceSerialPortSelector value to be written.
        \return    The CDeviceSerialPortSelector object
    */
    CDeviceSerialPortSelector& Set(DeviceSerialPortSelector value);
    /**
        \brief     Get the current value.
        \return    The value as DeviceSerialPortSelector
    */
    DeviceSerialPortSelector Get() const;
};

/**
\brief Valid values for DeviceStreamChannelEndianness
\ingroup    GenICamFeatures
 */
enum class DeviceStreamChannelEndianness {
    Big = 0,  //!< Stream channel data is big Endian.
    Little  //!< Stream channel data is little Endian.
};

/**
\class      CDeviceStreamChannelEndianness
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature DeviceStreamChannelEndianness
*/
class NEOAPI_CPP_DECL CDeviceStreamChannelEndianness : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CDeviceStreamChannelEndianness(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CDeviceStreamChannelEndianness object
    */
    CDeviceStreamChannelEndianness(const CDeviceStreamChannelEndianness& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CDeviceStreamChannelEndianness() {}
    /**
        \brief      Assignment operator
        \param      object The CDeviceStreamChannelEndianness object to assign.
        \return     Object reference with the value set.
    */
    const CDeviceStreamChannelEndianness& operator = (const CDeviceStreamChannelEndianness& object);
    /**
        \brief     Get the current value.
        \return    The value as DeviceStreamChannelEndianness
    */
    operator DeviceStreamChannelEndianness() const;
    /**
        \brief     Set the current value.
        \param     value The DeviceStreamChannelEndianness value to be written.
        \return    The CDeviceStreamChannelEndianness object
    */
    CDeviceStreamChannelEndianness& operator = (DeviceStreamChannelEndianness value);
    /**
        \brief     Set the current value.
        \param     value The DeviceStreamChannelEndianness value to be written.
        \return    The CDeviceStreamChannelEndianness object
    */
    CDeviceStreamChannelEndianness& Set(DeviceStreamChannelEndianness value);
    /**
        \brief     Get the current value.
        \return    The value as DeviceStreamChannelEndianness
    */
    DeviceStreamChannelEndianness Get() const;
};

/**
\brief Valid values for DeviceStreamChannelType
\ingroup    GenICamFeatures
 */
enum class DeviceStreamChannelType {
    Receiver = 0,  //!< Data stream receiver channel.
    Transmitter  //!< Data stream transmitter channel.
};

/**
\class      CDeviceStreamChannelType
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature DeviceStreamChannelType
*/
class NEOAPI_CPP_DECL CDeviceStreamChannelType : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CDeviceStreamChannelType(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CDeviceStreamChannelType object
    */
    CDeviceStreamChannelType(const CDeviceStreamChannelType& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CDeviceStreamChannelType() {}
    /**
        \brief      Assignment operator
        \param      object The CDeviceStreamChannelType object to assign.
        \return     Object reference with the value set.
    */
    const CDeviceStreamChannelType& operator = (const CDeviceStreamChannelType& object);
    /**
        \brief     Get the current value.
        \return    The value as DeviceStreamChannelType
    */
    operator DeviceStreamChannelType() const;
    /**
        \brief     Set the current value.
        \param     value The DeviceStreamChannelType value to be written.
        \return    The CDeviceStreamChannelType object
    */
    CDeviceStreamChannelType& operator = (DeviceStreamChannelType value);
    /**
        \brief     Set the current value.
        \param     value The DeviceStreamChannelType value to be written.
        \return    The CDeviceStreamChannelType object
    */
    CDeviceStreamChannelType& Set(DeviceStreamChannelType value);
    /**
        \brief     Get the current value.
        \return    The value as DeviceStreamChannelType
    */
    DeviceStreamChannelType Get() const;
};

/**
\brief Valid values for DeviceTLType
\ingroup    GenICamFeatures
 */
enum class DeviceTLType {
    CameraLink = 0,  //!< Camera Link.
    CameraLinkHS,  //!< Camera Link High Speed.
    CoaXPress,  //!< CoaXPress.
    Custom,  //!< Custom Transport Layer.
    GigEVision,  //!< GigE Vision.
    USB3Vision  //!< USB3 Vision.
};

/**
\class      CDeviceTLType
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature DeviceTLType
*/
class NEOAPI_CPP_DECL CDeviceTLType : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CDeviceTLType(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CDeviceTLType object
    */
    CDeviceTLType(const CDeviceTLType& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CDeviceTLType() {}
    /**
        \brief      Assignment operator
        \param      object The CDeviceTLType object to assign.
        \return     Object reference with the value set.
    */
    const CDeviceTLType& operator = (const CDeviceTLType& object);
    /**
        \brief     Get the current value.
        \return    The value as DeviceTLType
    */
    operator DeviceTLType() const;
    /**
        \brief     Set the current value.
        \param     value The DeviceTLType value to be written.
        \return    The CDeviceTLType object
    */
    CDeviceTLType& operator = (DeviceTLType value);
    /**
        \brief     Set the current value.
        \param     value The DeviceTLType value to be written.
        \return    The CDeviceTLType object
    */
    CDeviceTLType& Set(DeviceTLType value);
    /**
        \brief     Get the current value.
        \return    The value as DeviceTLType
    */
    DeviceTLType Get() const;
};

/**
\brief Valid values for DeviceTapGeometry
\ingroup    GenICamFeatures
 */
enum class DeviceTapGeometry {
    Geometry_10X = 0,  //!< Geometry_10X
    Geometry_10X_1Y,  //!< Geometry_10X_1Y
    Geometry_1X,  //!< Geometry_1X
    Geometry_1X10,  //!< Geometry_1X10
    Geometry_1X10_1Y,  //!< Geometry_1X10_1Y
    Geometry_1X2,  //!< Geometry_1X2
    Geometry_1X2_1Y,  //!< Geometry_1X2_1Y
    Geometry_1X2_1Y2,  //!< Geometry_1X2_1Y2
    Geometry_1X2_2YE,  //!< Geometry_1X2_2YE
    Geometry_1X3,  //!< Geometry_1X3
    Geometry_1X3_1Y,  //!< Geometry_1X3_1Y
    Geometry_1X4,  //!< Geometry_1X4
    Geometry_1X4_1Y,  //!< Geometry_1X4_1Y
    Geometry_1X8,  //!< Geometry_1X8
    Geometry_1X8_1Y,  //!< Geometry_1X8_1Y
    Geometry_1X_1Y,  //!< Geometry_1X_1Y
    Geometry_1X_1Y2,  //!< Geometry_1X_1Y2
    Geometry_1X_2YE,  //!< Geometry_1X_2YE
    Geometry_2X,  //!< Geometry_2X
    Geometry_2X2,  //!< Geometry_2X2
    Geometry_2X2E,  //!< Geometry_2X2E
    Geometry_2X2E_1Y,  //!< Geometry_2X2E_1Y
    Geometry_2X2E_2YE,  //!< Geometry_2X2E_2YE
    Geometry_2X2M,  //!< Geometry_2X2M
    Geometry_2X2M_1Y,  //!< Geometry_2X2M_1Y
    Geometry_2X2_1Y,  //!< Geometry_2X2_1Y
    Geometry_2XE,  //!< Geometry_2XE
    Geometry_2XE_1Y,  //!< Geometry_2XE_1Y
    Geometry_2XE_1Y2,  //!< Geometry_2XE_1Y2
    Geometry_2XE_2YE,  //!< Geometry_2XE_2YE
    Geometry_2XM,  //!< Geometry_2XM
    Geometry_2XM_1Y,  //!< Geometry_2XM_1Y
    Geometry_2XM_1Y2,  //!< Geometry_2XM_1Y2
    Geometry_2XM_2YE,  //!< Geometry_2XM_2YE
    Geometry_2X_1Y,  //!< Geometry_2X_1Y
    Geometry_2X_1Y2,  //!< Geometry_2X_1Y2
    Geometry_2X_2YE,  //!< Geometry_2X_2YE
    Geometry_3X,  //!< Geometry_3X
    Geometry_3X_1Y,  //!< Geometry_3X_1Y
    Geometry_4X,  //!< Geometry_4X
    Geometry_4X2,  //!< Geometry_4X2
    Geometry_4X2E,  //!< Geometry_4X2E
    Geometry_4X2E_1Y,  //!< Geometry_4X2E_1Y
    Geometry_4X2_1Y,  //!< Geometry_4X2_1Y
    Geometry_4X_1Y,  //!< Geometry_4X_1Y
    Geometry_8X,  //!< Geometry_8X
    Geometry_8X_1Y  //!< Geometry_8X_1Y
};

/**
\class      CDeviceTapGeometry
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature DeviceTapGeometry
*/
class NEOAPI_CPP_DECL CDeviceTapGeometry : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CDeviceTapGeometry(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CDeviceTapGeometry object
    */
    CDeviceTapGeometry(const CDeviceTapGeometry& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CDeviceTapGeometry() {}
    /**
        \brief      Assignment operator
        \param      object The CDeviceTapGeometry object to assign.
        \return     Object reference with the value set.
    */
    const CDeviceTapGeometry& operator = (const CDeviceTapGeometry& object);
    /**
        \brief     Get the current value.
        \return    The value as DeviceTapGeometry
    */
    operator DeviceTapGeometry() const;
    /**
        \brief     Set the current value.
        \param     value The DeviceTapGeometry value to be written.
        \return    The CDeviceTapGeometry object
    */
    CDeviceTapGeometry& operator = (DeviceTapGeometry value);
    /**
        \brief     Set the current value.
        \param     value The DeviceTapGeometry value to be written.
        \return    The CDeviceTapGeometry object
    */
    CDeviceTapGeometry& Set(DeviceTapGeometry value);
    /**
        \brief     Get the current value.
        \return    The value as DeviceTapGeometry
    */
    DeviceTapGeometry Get() const;
};

/**
\brief Valid values for DeviceTemperatureSelector
\ingroup    GenICamFeatures
 */
enum class DeviceTemperatureSelector {
    InHouse = 0,  //!< Temperature inside the camera housing. AVAILABLE: Always
    Mainboard,  //!< Temperature of the device's mainboard.
    Sensor  //!< Temperature of the image sensor of the camera.
};

/**
\class      CDeviceTemperatureSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature DeviceTemperatureSelector
*/
class NEOAPI_CPP_DECL CDeviceTemperatureSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CDeviceTemperatureSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CDeviceTemperatureSelector object
    */
    CDeviceTemperatureSelector(const CDeviceTemperatureSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CDeviceTemperatureSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CDeviceTemperatureSelector object to assign.
        \return     Object reference with the value set.
    */
    const CDeviceTemperatureSelector& operator = (const CDeviceTemperatureSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as DeviceTemperatureSelector
    */
    operator DeviceTemperatureSelector() const;
    /**
        \brief     Set the current value.
        \param     value The DeviceTemperatureSelector value to be written.
        \return    The CDeviceTemperatureSelector object
    */
    CDeviceTemperatureSelector& operator = (DeviceTemperatureSelector value);
    /**
        \brief     Set the current value.
        \param     value The DeviceTemperatureSelector value to be written.
        \return    The CDeviceTemperatureSelector object
    */
    CDeviceTemperatureSelector& Set(DeviceTemperatureSelector value);
    /**
        \brief     Get the current value.
        \return    The value as DeviceTemperatureSelector
    */
    DeviceTemperatureSelector Get() const;
};

/**
\brief Valid values for DeviceTemperatureStatus
\ingroup    GenICamFeatures
 */
enum class DeviceTemperatureStatus {
    Exceeded = 0,  //!< The device operates in a critical temperature range.
    High,  //!< The device operates in an increased temperature range.
    Normal  //!< The device operates in normal temperature range.
};

/**
\class      CDeviceTemperatureStatus
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature DeviceTemperatureStatus
*/
class NEOAPI_CPP_DECL CDeviceTemperatureStatus : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CDeviceTemperatureStatus(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CDeviceTemperatureStatus object
    */
    CDeviceTemperatureStatus(const CDeviceTemperatureStatus& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CDeviceTemperatureStatus() {}
    /**
        \brief      Assignment operator
        \param      object The CDeviceTemperatureStatus object to assign.
        \return     Object reference with the value set.
    */
    const CDeviceTemperatureStatus& operator = (const CDeviceTemperatureStatus& object);
    /**
        \brief     Get the current value.
        \return    The value as DeviceTemperatureStatus
    */
    operator DeviceTemperatureStatus() const;
    /**
        \brief     Set the current value.
        \param     value The DeviceTemperatureStatus value to be written.
        \return    The CDeviceTemperatureStatus object
    */
    CDeviceTemperatureStatus& operator = (DeviceTemperatureStatus value);
    /**
        \brief     Set the current value.
        \param     value The DeviceTemperatureStatus value to be written.
        \return    The CDeviceTemperatureStatus object
    */
    CDeviceTemperatureStatus& Set(DeviceTemperatureStatus value);
    /**
        \brief     Get the current value.
        \return    The value as DeviceTemperatureStatus
    */
    DeviceTemperatureStatus Get() const;
};

/**
\brief Valid values for DeviceTemperatureStatusTransitionSelector
\ingroup    GenICamFeatures
 */
enum class DeviceTemperatureStatusTransitionSelector {
    ExceededToNormal = 0,  //!< Exceeded To Normal
    HighToExceeded,  //!< High To Exceeded
    NormalToHigh  //!< Normal To High
};

/**
\class      CDeviceTemperatureStatusTransitionSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature DeviceTemperatureStatusTransitionSelector
*/
class NEOAPI_CPP_DECL CDeviceTemperatureStatusTransitionSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CDeviceTemperatureStatusTransitionSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CDeviceTemperatureStatusTransitionSelector object
    */
    CDeviceTemperatureStatusTransitionSelector(const CDeviceTemperatureStatusTransitionSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CDeviceTemperatureStatusTransitionSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CDeviceTemperatureStatusTransitionSelector object to assign.
        \return     Object reference with the value set.
    */
    const CDeviceTemperatureStatusTransitionSelector& operator = (const CDeviceTemperatureStatusTransitionSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as DeviceTemperatureStatusTransitionSelector
    */
    operator DeviceTemperatureStatusTransitionSelector() const;
    /**
        \brief     Set the current value.
        \param     value The DeviceTemperatureStatusTransitionSelector value to be written.
        \return    The CDeviceTemperatureStatusTransitionSelector object
    */
    CDeviceTemperatureStatusTransitionSelector& operator = (DeviceTemperatureStatusTransitionSelector value);
    /**
        \brief     Set the current value.
        \param     value The DeviceTemperatureStatusTransitionSelector value to be written.
        \return    The CDeviceTemperatureStatusTransitionSelector object
    */
    CDeviceTemperatureStatusTransitionSelector& Set(DeviceTemperatureStatusTransitionSelector value);
    /**
        \brief     Get the current value.
        \return    The value as DeviceTemperatureStatusTransitionSelector
    */
    DeviceTemperatureStatusTransitionSelector Get() const;
};

/**
\brief Valid values for DeviceType
\ingroup    GenICamFeatures
 */
enum class DeviceType {
    Peripheral = 0,  //!< Controllable device (with no data stream handling).
    Receiver,  //!< Data stream receiver device.
    Transceiver,  //!< Data stream receiver and transmitter device.
    Transmitter  //!< Data stream transmitter device.
};

/**
\class      CDeviceType
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature DeviceType
*/
class NEOAPI_CPP_DECL CDeviceType : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CDeviceType(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CDeviceType object
    */
    CDeviceType(const CDeviceType& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CDeviceType() {}
    /**
        \brief      Assignment operator
        \param      object The CDeviceType object to assign.
        \return     Object reference with the value set.
    */
    const CDeviceType& operator = (const CDeviceType& object);
    /**
        \brief     Get the current value.
        \return    The value as DeviceType
    */
    operator DeviceType() const;
    /**
        \brief     Set the current value.
        \param     value The DeviceType value to be written.
        \return    The CDeviceType object
    */
    CDeviceType& operator = (DeviceType value);
    /**
        \brief     Set the current value.
        \param     value The DeviceType value to be written.
        \return    The CDeviceType object
    */
    CDeviceType& Set(DeviceType value);
    /**
        \brief     Get the current value.
        \return    The value as DeviceType
    */
    DeviceType Get() const;
};

/**
\brief Valid values for EventNotification
\ingroup    GenICamFeatures
 */
enum class EventNotification {
    Off = 0,  //!< The selected Event notification is disabled.
    On,  //!< The selected Event notification is enabled.
    Once  //!< The selected Event notification is enabled for one event then return to Off state.
};

/**
\class      CEventNotification
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature EventNotification
*/
class NEOAPI_CPP_DECL CEventNotification : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CEventNotification(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CEventNotification object
    */
    CEventNotification(const CEventNotification& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CEventNotification() {}
    /**
        \brief      Assignment operator
        \param      object The CEventNotification object to assign.
        \return     Object reference with the value set.
    */
    const CEventNotification& operator = (const CEventNotification& object);
    /**
        \brief     Get the current value.
        \return    The value as EventNotification
    */
    operator EventNotification() const;
    /**
        \brief     Set the current value.
        \param     value The EventNotification value to be written.
        \return    The CEventNotification object
    */
    CEventNotification& operator = (EventNotification value);
    /**
        \brief     Set the current value.
        \param     value The EventNotification value to be written.
        \return    The CEventNotification object
    */
    CEventNotification& Set(EventNotification value);
    /**
        \brief     Get the current value.
        \return    The value as EventNotification
    */
    EventNotification Get() const;
};

/**
\brief Valid values for EventSelector
\ingroup    GenICamFeatures
 */
enum class EventSelector {
    AcquisitionEnd = 0,  //!< Device just completed the Acquisition of one or many Frames.
    AcquisitionError,  //!< Device just detected an error during the active Acquisition.
    AcquisitionStart,  //!< Device just started the Acquisition of one or many Frames.
    AcquisitionTransferEnd,  //!< Device just completed the transfer of one or many Frames.
    AcquisitionTransferStart,  //!< Device just started the transfer of one or many Frames.
    AcquisitionTrigger,  //!< Device just received a trigger for the Acquisition of one or many Frames.
    AcquisitionTriggerMissed,  //!< Device just missed a trigger for the Acquisition of one or many Frames.
    Action1,  //!< The event will be generated when an action command has triggered an image in the camera.
    ActionLate,  //!< The event will be generated when a valid scheduled action command is received and is scheduled to be executed at a time that is already past.
    Counter0End,  //!< The event will be generated when counter 0 ends counting.
    Counter0Start,  //!< The event will be generated when counter 0 starts counting.
    Counter1End,  //!< The event will be generated when counter 1 ends counting.
    Counter1Start,  //!< The event will be generated when counter 1 starts counting.
    DeviceTemperatureStatusChanged,  //!< The event will be generated when the status of the internal device temperature has been changed. AVAILABLE: Always
    Encoder0Restarted,  //!< The event will be generated when the Encoder 0 restarts moving.
    Encoder0Stopped,  //!< The event will be generated when the Encoder 0 stops for longer than EncoderTimeout.
    Encoder1Restarted,  //!< The event will be generated when the Encoder 1 restarts moving.
    Encoder1Stopped,  //!< The event will be generated when the Encoder 1 stops for longer than EncoderTimeout.
    Error,  //!< Device just detected an error during the active Acquisition.
    EventDiscarded,  //!< The event will be generated when an event had to be discarded in the camera.
    EventLost,  //!< The event will be generated when an event was lost in the camera. AVAILABLE: Always
    ExposureEnd,  //!< Device just completed the exposure of one Frame (or Line).
    ExposureStart,  //!< Device just started the exposure of one Frame (or Line).
    FrameBurstEnd,  //!< Device just completed the capture of a burst of Frames.
    FrameBurstStart,  //!< Device just started the capture of a burst of Frames.
    FrameEnd,  //!< Device just completed the capture of one Frame.
    FrameStart,  //!< Device just started the capture of one Frame.
    FrameTransferEnd,  //!< Device just completed the transfer of one Frame.
    FrameTransferSkipped,  //!< The event will be generated when the internal camera buffer is overflowed and an image has been lost. AVAILABLE: Always
    FrameTransferStart,  //!< Device just started the transfer of one Frame.
    FrameTrigger,  //!< Device just received a trigger to start the capture of one Frame.
    FrameTriggerMissed,  //!< Device just missed a trigger to start the capture of one Frame.
    GigEVisionError,  //!< Device just detected an error. AVAILABLE: Always
    GigEVisionHeartbeatTimeOut,  //!< The device runs in heartbeat timeout. AVAILABLE: Always
    Line0AnyEdge,  //!< The event will be generated when a Falling or Rising Edge is detected on the Line 0.
    Line0FallingEdge,  //!< The event will be generated when a Falling Edge is detected on the Line 0.
    Line0RisingEdge,  //!< The event will be generated when a Rising Edge is detected on the Line 0.
    Line1AnyEdge,  //!< The event will be generated when a Falling or Rising Edge is detected on the Line 1.
    Line1FallingEdge,  //!< The event will be generated when a Falling Edge is detected on the Line 1.
    Line1RisingEdge,  //!< The event will be generated when a Rising Edge is detected on the Line 1.
    Line2FallingEdge,  //!< The event will be generated when a Falling Edge is detected on the Line 2. AVAILABLE: Always
    Line2RisingEdge,  //!< The event will be generated when a Rising Edge is detected on the Line 2. AVAILABLE: Always
    Line3FallingEdge,  //!< The event will be generated when a Falling Edge is detected on the Line 3. AVAILABLE: Always
    Line3RisingEdge,  //!< The event will be generated when a Rising Edge is detected on the Line 3. AVAILABLE: Always
    Line4FallingEdge,  //!< The event will be generated when a Falling Edge is detected on the Line 4. AVAILABLE: Always
    Line4RisingEdge,  //!< The event will be generated when a Rising Edge is detected on the Line 4. AVAILABLE: Always
    Line5FallingEdge,  //!< The event will be generated when a Falling Edge is detected on the Line 5. AVAILABLE: Always
    Line5RisingEdge,  //!< The event will be generated when a Rising Edge is detected on the Line 5. AVAILABLE: Always
    Line6FallingEdge,  //!< The event will be generated when a Falling Edge is detected on the Line 6. AVAILABLE: Always
    Line6RisingEdge,  //!< The event will be generated when a Rising Edge is detected on the Line 6. AVAILABLE: Always
    Line7FallingEdge,  //!< The event will be generated when a Falling Edge is detected on the Line 7. AVAILABLE: Always
    Line7RisingEdge,  //!< The event will be generated when a Rising Edge is detected on the Line 7. AVAILABLE: Always
    LineEnd,  //!< Device just completed the capture of one Line.
    LineStart,  //!< Device just started the capture of one Line.
    LineTrigger,  //!< Device just received a trigger to start the capture of one Line.
    LineTriggerMissed,  //!< Device just missed a trigger to start the capture of one Line.
    LinkSpeedChange,  //!< The event will be generated when the link speed has changed.
    LinkTrigger0,  //!< The event will be generated when a Rising Edge is detected on the LinkTrigger 0.
    LinkTrigger1,  //!< The event will be generated when a Rising Edge is detected on the LinkTrigger 1.
    PhysicalConnection0Down,  //!< The event will be generated when a Link down at ethernet interface 0 detect.
    PhysicalConnection0Up,  //!< The event will be generated when a Link up at ethernet interface 0 detect.
    PhysicalConnection1Down,  //!< The event will be generated when a Link down at ethernet interface 1 detect.
    PhysicalConnection1Up,  //!< The event will be generated when a Link up at ethernet interface 1 detect.
    PrimaryApplicationSwitch,  //!< The event will be generated when a primary application switchover has been granted (GigE Vision Specific).
    PtpServoStatusChanged,  //!< The event will be generated when the status of the internal PTP servo has been changed. AVAILABLE: Always.
    PtpStatusChanged,  //!< The event will be generated when the status of the internal PTP state machine has been changed. AVAILABLE: Always.
    SequencerSetChange,  //!< Device sequencer set has changed.
    Stream0TransferBlockEnd,  //!< Device just completed the transfer of one Block.
    Stream0TransferBlockStart,  //!< Device just started the transfer of one Block.
    Stream0TransferBlockTrigger,  //!< Device just received a trigger to start the transfer of one Block.
    Stream0TransferBurstEnd,  //!< Device just completed the transfer of a burst of Blocks.
    Stream0TransferBurstStart,  //!< Device just started the transfer of a burst of Blocks.
    Stream0TransferEnd,  //!< Device just completed the transfer of one or many Blocks.
    Stream0TransferOverflow,  //!< Device transfer queue overflowed.
    Stream0TransferPause,  //!< Device just paused the transfer.
    Stream0TransferResume,  //!< Device just resumed the transfer.
    Stream0TransferStart,  //!< Device just started the transfer of one or many Blocks.
    Test,  //!< The test event will be generated when the device receives the TestEventGenerate command (EventNotification for the Test event is always On).
    Timer0End,  //!< The event will be generated when Timer 0 ends counting.
    Timer0Start,  //!< The event will be generated when Timer 0 starts counting.
    Timer1End,  //!< The event will be generated when Timer 1 ends counting.
    Timer1Start,  //!< The event will be generated when Timer 1 starts counting.
    Timer2End,  //!< The event will be generated when Timer 2 ends counting.
    Timer3End,  //!< The event will be generated when Timer 3 ends counting.
    TransferBufferFull,  //!< The event will be generated when no internal camera buffer is available. AVAILABLE: Always
    TransferBufferReady,  //!< The event will be generated when an internal camera buffer is available again. AVAILABLE: Always
    TriggerOverlapped,  //!< Trigger Overlapped. AVAILABLE: Always
    TriggerReady,  //!< The event will be generated when the camera is able to process an incoming trigger signal. AVAILABLE: Always
    TriggerSkipped  //!< The event will be generated when camera reject an incoming trigger signal. AVAILABLE: Always
};

/**
\class      CEventSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature EventSelector
*/
class NEOAPI_CPP_DECL CEventSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CEventSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CEventSelector object
    */
    CEventSelector(const CEventSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CEventSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CEventSelector object to assign.
        \return     Object reference with the value set.
    */
    const CEventSelector& operator = (const CEventSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as EventSelector
    */
    operator EventSelector() const;
    /**
        \brief     Set the current value.
        \param     value The EventSelector value to be written.
        \return    The CEventSelector object
    */
    CEventSelector& operator = (EventSelector value);
    /**
        \brief     Set the current value.
        \param     value The EventSelector value to be written.
        \return    The CEventSelector object
    */
    CEventSelector& Set(EventSelector value);
    /**
        \brief     Get the current value.
        \return    The value as EventSelector
    */
    EventSelector Get() const;
};

/**
\brief Valid values for ExposureAuto
\ingroup    GenICamFeatures
 */
enum class ExposureAuto {
    Continuous = 0,  //!< Exposure duration is constantly adapted by the device to maximize the dynamic range.
    Off,  //!< Exposure duration is user controlled using ExposureTime.
    Once  //!< Exposure duration is adapted once by the device. Once it has converged, it returns to the Off state.
};

/**
\class      CExposureAuto
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature ExposureAuto
*/
class NEOAPI_CPP_DECL CExposureAuto : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CExposureAuto(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CExposureAuto object
    */
    CExposureAuto(const CExposureAuto& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CExposureAuto() {}
    /**
        \brief      Assignment operator
        \param      object The CExposureAuto object to assign.
        \return     Object reference with the value set.
    */
    const CExposureAuto& operator = (const CExposureAuto& object);
    /**
        \brief     Get the current value.
        \return    The value as ExposureAuto
    */
    operator ExposureAuto() const;
    /**
        \brief     Set the current value.
        \param     value The ExposureAuto value to be written.
        \return    The CExposureAuto object
    */
    CExposureAuto& operator = (ExposureAuto value);
    /**
        \brief     Set the current value.
        \param     value The ExposureAuto value to be written.
        \return    The CExposureAuto object
    */
    CExposureAuto& Set(ExposureAuto value);
    /**
        \brief     Get the current value.
        \return    The value as ExposureAuto
    */
    ExposureAuto Get() const;
};

/**
\brief Valid values for ExposureMode
\ingroup    GenICamFeatures
 */
enum class ExposureMode {
    Off = 0,  //!< Disables the Exposure and let the shutter open.
    Timed,  //!< Timed exposure. The exposure duration time is set using the ExposureTime or ExposureAuto features and the exposure starts with the FrameStart or LineStart.
    TriggerControlled,  //!< Uses one or more trigger signal(s) to control the exposure duration independently from the current Frame or Line triggers. See ExposureStart, ExposureEnd and ExposureActive of the TriggerSelector feature.
    TriggerWidth  //!< Uses the width of the current Frame or Line trigger signal(s) pulse to control the exposure duration. Note that if the Frame or Line TriggerActivation is RisingEdge or LevelHigh, the exposure duration will be the time the trigger stays High. If TriggerActivation is FallingEdge or LevelLow, the exposure time will last as long as the trigger stays Low.
};

/**
\class      CExposureMode
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature ExposureMode
*/
class NEOAPI_CPP_DECL CExposureMode : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CExposureMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CExposureMode object
    */
    CExposureMode(const CExposureMode& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CExposureMode() {}
    /**
        \brief      Assignment operator
        \param      object The CExposureMode object to assign.
        \return     Object reference with the value set.
    */
    const CExposureMode& operator = (const CExposureMode& object);
    /**
        \brief     Get the current value.
        \return    The value as ExposureMode
    */
    operator ExposureMode() const;
    /**
        \brief     Set the current value.
        \param     value The ExposureMode value to be written.
        \return    The CExposureMode object
    */
    CExposureMode& operator = (ExposureMode value);
    /**
        \brief     Set the current value.
        \param     value The ExposureMode value to be written.
        \return    The CExposureMode object
    */
    CExposureMode& Set(ExposureMode value);
    /**
        \brief     Get the current value.
        \return    The value as ExposureMode
    */
    ExposureMode Get() const;
};

/**
\brief Valid values for FocalLengthStatus
\ingroup    GenICamFeatures
 */
enum class FocalLengthStatus {
    Busy = 0,  //!< Busy
    Error,  //!< Error
    NotConnected,  //!< Not Connected
    NotInitialized,  //!< Not Initialized
    NotSupported,  //!< Not Supported
    Ready  //!< Ready
};

/**
\class      CFocalLengthStatus
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature FocalLengthStatus
*/
class NEOAPI_CPP_DECL CFocalLengthStatus : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CFocalLengthStatus(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CFocalLengthStatus object
    */
    CFocalLengthStatus(const CFocalLengthStatus& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CFocalLengthStatus() {}
    /**
        \brief      Assignment operator
        \param      object The CFocalLengthStatus object to assign.
        \return     Object reference with the value set.
    */
    const CFocalLengthStatus& operator = (const CFocalLengthStatus& object);
    /**
        \brief     Get the current value.
        \return    The value as FocalLengthStatus
    */
    operator FocalLengthStatus() const;
    /**
        \brief     Set the current value.
        \param     value The FocalLengthStatus value to be written.
        \return    The CFocalLengthStatus object
    */
    CFocalLengthStatus& operator = (FocalLengthStatus value);
    /**
        \brief     Set the current value.
        \param     value The FocalLengthStatus value to be written.
        \return    The CFocalLengthStatus object
    */
    CFocalLengthStatus& Set(FocalLengthStatus value);
    /**
        \brief     Get the current value.
        \return    The value as FocalLengthStatus
    */
    FocalLengthStatus Get() const;
};

/**
\brief Valid values for FocusStatus
\ingroup    GenICamFeatures
 */
enum class FocusStatus {
    Busy = 0,  //!< Busy
    Error,  //!< Error
    NotConnected,  //!< Not Connected
    NotInitialized,  //!< Not Initialized
    NotSupported,  //!< Not Supported
    Ready  //!< Ready
};

/**
\class      CFocusStatus
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature FocusStatus
*/
class NEOAPI_CPP_DECL CFocusStatus : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CFocusStatus(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CFocusStatus object
    */
    CFocusStatus(const CFocusStatus& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CFocusStatus() {}
    /**
        \brief      Assignment operator
        \param      object The CFocusStatus object to assign.
        \return     Object reference with the value set.
    */
    const CFocusStatus& operator = (const CFocusStatus& object);
    /**
        \brief     Get the current value.
        \return    The value as FocusStatus
    */
    operator FocusStatus() const;
    /**
        \brief     Set the current value.
        \param     value The FocusStatus value to be written.
        \return    The CFocusStatus object
    */
    CFocusStatus& operator = (FocusStatus value);
    /**
        \brief     Set the current value.
        \param     value The FocusStatus value to be written.
        \return    The CFocusStatus object
    */
    CFocusStatus& Set(FocusStatus value);
    /**
        \brief     Get the current value.
        \return    The value as FocusStatus
    */
    FocusStatus Get() const;
};

/**
\brief Valid values for GainAuto
\ingroup    GenICamFeatures
 */
enum class GainAuto {
    Continuous = 0,  //!< Gain is constantly adjusted by the device.
    Off,  //!< Gain is User controlled using Gain.
    Once  //!< Gain is automatically adjusted once by the device. Once it has converged, it automatically returns to the Off state.
};

/**
\class      CGainAuto
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature GainAuto
*/
class NEOAPI_CPP_DECL CGainAuto : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CGainAuto(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CGainAuto object
    */
    CGainAuto(const CGainAuto& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CGainAuto() {}
    /**
        \brief      Assignment operator
        \param      object The CGainAuto object to assign.
        \return     Object reference with the value set.
    */
    const CGainAuto& operator = (const CGainAuto& object);
    /**
        \brief     Get the current value.
        \return    The value as GainAuto
    */
    operator GainAuto() const;
    /**
        \brief     Set the current value.
        \param     value The GainAuto value to be written.
        \return    The CGainAuto object
    */
    CGainAuto& operator = (GainAuto value);
    /**
        \brief     Set the current value.
        \param     value The GainAuto value to be written.
        \return    The CGainAuto object
    */
    CGainAuto& Set(GainAuto value);
    /**
        \brief     Get the current value.
        \return    The value as GainAuto
    */
    GainAuto Get() const;
};

/**
\brief Valid values for GainSelector
\ingroup    GenICamFeatures
 */
enum class GainSelector {
    All = 0,  //!< Gain will be applied to all channels or taps.
    AnalogAll,  //!< Gain will be applied to all analog channels or taps.
    AnalogBlue,  //!< Gain will be applied to the blue analog channel.
    AnalogGreen,  //!< Gain will be applied to the green analog channel.
    AnalogRed,  //!< Gain will be applied to the red analog channel.
    AnalogTap1,  //!< Analog gain will be applied to Tap 1.
    AnalogTap2,  //!< Analog gain will be applied to Tap 2.
    AnalogU,  //!< Gain will be applied to U analog channel.
    AnalogV,  //!< Gain will be applied to V analog channel.
    AnalogY,  //!< Gain will be applied to Y analog channel.
    Blue,  //!< Gain will be applied to the blue channel.
    DigitalAll,  //!< Gain will be applied to all digital channels or taps.
    DigitalBlue,  //!< Gain will be applied to the blue digital channel.
    DigitalGreen,  //!< Gain will be applied to the green digital channel.
    DigitalRed,  //!< Gain will be applied to the red digital channel.
    DigitalTap1,  //!< Digital gain will be applied to Tap 1.
    DigitalTap2,  //!< Digital gain will be applied to Tap 2.
    DigitalU,  //!< Gain will be applied to U digital channel.
    DigitalV,  //!< Gain will be applied to V digital channel.
    DigitalY,  //!< Gain will be applied to Y digital channel.
    Green,  //!< Gain will be applied to the green channel.
    GreenBlue,  //!< Gain will be applied to the green blue channel. AVAILABLE: Always
    GreenRed,  //!< Gain will be applied to the green red channel. AVAILABLE: Always
    Red,  //!< Gain will be applied to the red channel.
    Tap1,  //!< Gain will be applied to Tap 1.
    Tap2,  //!< Gain will be applied to Tap 2.
    U,  //!< Gain will be applied to U channel.
    V,  //!< Gain will be applied to V channel.
    Y  //!< Gain will be applied to Y channel.
};

/**
\class      CGainSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature GainSelector
*/
class NEOAPI_CPP_DECL CGainSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CGainSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CGainSelector object
    */
    CGainSelector(const CGainSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CGainSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CGainSelector object to assign.
        \return     Object reference with the value set.
    */
    const CGainSelector& operator = (const CGainSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as GainSelector
    */
    operator GainSelector() const;
    /**
        \brief     Set the current value.
        \param     value The GainSelector value to be written.
        \return    The CGainSelector object
    */
    CGainSelector& operator = (GainSelector value);
    /**
        \brief     Set the current value.
        \param     value The GainSelector value to be written.
        \return    The CGainSelector object
    */
    CGainSelector& Set(GainSelector value);
    /**
        \brief     Get the current value.
        \return    The value as GainSelector
    */
    GainSelector Get() const;
};

/**
\brief Valid values for GevCCP
\ingroup    GenICamFeatures
 */
enum class GevCCP {
    ControlAccess = 0,  //!< Control Access
    ControlAccessSwitchoverActive,  //!< Control Access Switchover Active
    ExclusiveAccess,  //!< Exclusive Access
    OpenAccess  //!< Open Access
};

/**
\class      CGevCCP
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature GevCCP
*/
class NEOAPI_CPP_DECL CGevCCP : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CGevCCP(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CGevCCP object
    */
    CGevCCP(const CGevCCP& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CGevCCP() {}
    /**
        \brief      Assignment operator
        \param      object The CGevCCP object to assign.
        \return     Object reference with the value set.
    */
    const CGevCCP& operator = (const CGevCCP& object);
    /**
        \brief     Get the current value.
        \return    The value as GevCCP
    */
    operator GevCCP() const;
    /**
        \brief     Set the current value.
        \param     value The GevCCP value to be written.
        \return    The CGevCCP object
    */
    CGevCCP& operator = (GevCCP value);
    /**
        \brief     Set the current value.
        \param     value The GevCCP value to be written.
        \return    The CGevCCP object
    */
    CGevCCP& Set(GevCCP value);
    /**
        \brief     Get the current value.
        \return    The value as GevCCP
    */
    GevCCP Get() const;
};

/**
\brief Valid values for GevGVCPExtendedStatusCodesSelector
\ingroup    GenICamFeatures
 */
enum class GevGVCPExtendedStatusCodesSelector {
    Version1_1 = 0,  //!< Version 1 1
    Version2_0  //!< Version 2 0
};

/**
\class      CGevGVCPExtendedStatusCodesSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature GevGVCPExtendedStatusCodesSelector
*/
class NEOAPI_CPP_DECL CGevGVCPExtendedStatusCodesSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CGevGVCPExtendedStatusCodesSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CGevGVCPExtendedStatusCodesSelector object
    */
    CGevGVCPExtendedStatusCodesSelector(const CGevGVCPExtendedStatusCodesSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CGevGVCPExtendedStatusCodesSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CGevGVCPExtendedStatusCodesSelector object to assign.
        \return     Object reference with the value set.
    */
    const CGevGVCPExtendedStatusCodesSelector& operator = (const CGevGVCPExtendedStatusCodesSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as GevGVCPExtendedStatusCodesSelector
    */
    operator GevGVCPExtendedStatusCodesSelector() const;
    /**
        \brief     Set the current value.
        \param     value The GevGVCPExtendedStatusCodesSelector value to be written.
        \return    The CGevGVCPExtendedStatusCodesSelector object
    */
    CGevGVCPExtendedStatusCodesSelector& operator = (GevGVCPExtendedStatusCodesSelector value);
    /**
        \brief     Set the current value.
        \param     value The GevGVCPExtendedStatusCodesSelector value to be written.
        \return    The CGevGVCPExtendedStatusCodesSelector object
    */
    CGevGVCPExtendedStatusCodesSelector& Set(GevGVCPExtendedStatusCodesSelector value);
    /**
        \brief     Get the current value.
        \return    The value as GevGVCPExtendedStatusCodesSelector
    */
    GevGVCPExtendedStatusCodesSelector Get() const;
};

/**
\brief Valid values for GevIPConfigurationStatus
\ingroup    GenICamFeatures
 */
enum class GevIPConfigurationStatus {
    DHCP = 0,  //!< DHCP
    ForceIP,  //!< Force IP
    LLA,  //!< LLA
    None,  //!< None
    PersistentIP  //!< Persistent IP
};

/**
\class      CGevIPConfigurationStatus
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature GevIPConfigurationStatus
*/
class NEOAPI_CPP_DECL CGevIPConfigurationStatus : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CGevIPConfigurationStatus(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CGevIPConfigurationStatus object
    */
    CGevIPConfigurationStatus(const CGevIPConfigurationStatus& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CGevIPConfigurationStatus() {}
    /**
        \brief      Assignment operator
        \param      object The CGevIPConfigurationStatus object to assign.
        \return     Object reference with the value set.
    */
    const CGevIPConfigurationStatus& operator = (const CGevIPConfigurationStatus& object);
    /**
        \brief     Get the current value.
        \return    The value as GevIPConfigurationStatus
    */
    operator GevIPConfigurationStatus() const;
    /**
        \brief     Set the current value.
        \param     value The GevIPConfigurationStatus value to be written.
        \return    The CGevIPConfigurationStatus object
    */
    CGevIPConfigurationStatus& operator = (GevIPConfigurationStatus value);
    /**
        \brief     Set the current value.
        \param     value The GevIPConfigurationStatus value to be written.
        \return    The CGevIPConfigurationStatus object
    */
    CGevIPConfigurationStatus& Set(GevIPConfigurationStatus value);
    /**
        \brief     Get the current value.
        \return    The value as GevIPConfigurationStatus
    */
    GevIPConfigurationStatus Get() const;
};

/**
\brief Valid values for GevSupportedOptionSelector
\ingroup    GenICamFeatures
 */
enum class GevSupportedOptionSelector {
    Action = 0,  //!< Action
    CCPApplicationSocket,  //!< CCP Application Socket
    CommandsConcatenation,  //!< Commands Concatenation
    DiscoveryAckDelay,  //!< Discovery Ack Delay
    DiscoveryAckDelayWritable,  //!< Discovery Ack Delay Writable
    DynamicLAG,  //!< Dynamic LAG
    Event,  //!< Event
    EventData,  //!< Event Data
    ExtendedStatusCodes,  //!< Extended Status Codes
    ExtendedStatusCodesVersion2_0,  //!< Extended Status Codes Version 2 0
    HeartbeatDisable,  //!< Heartbeat Disable
    IEEE1588,  //!< IEEE 1588. AVAILABLE: (DeviceTLVersionMajor >= 2)
    IPConfigurationDHCP,  //!< IP Configuration DHCP
    IPConfigurationLLA,  //!< IP Configuration LLA
    IPConfigurationPersistentIP,  //!< IP Configuration Persistent IP
    LinkSpeed,  //!< Link Speed
    ManifestTable,  //!< Manifest Table
    MessageChannelSourceSocket,  //!< Message Channel Source Socket
    MultiLink,  //!< Multi Link
    PAUSEFrameGeneration,  //!< PAUSE Frame Generation
    PAUSEFrameReception,  //!< PAUSE Frame Reception
    PacketResend,  //!< Packet Resend
    PendingAck,  //!< Pending Ack
    PrimaryApplicationSwitchover,  //!< Primary Application Switchover
    Ptp,  //!< Ptp
    ScheduledAction,  //!< Scheduled Action
    SerialNumber,  //!< Serial Number
    SingleLink,  //!< Single Link
    StandardIDMode,  //!< Standard ID Mode
    StaticLAG,  //!< Static LAG
    StreamChannel0AllInTransmission,  //!< Stream Channel 0 All In Transmission
    StreamChannel0BigAndLittleEndian,  //!< Stream Channel 0 Big And Little Endian
    StreamChannel0ExtendedChunkData,  //!< Stream Channel 0 Extended Chunk Data
    StreamChannel0IPReassembly,  //!< Stream Channel 0 IP Reassembly
    StreamChannel0MultiZone,  //!< Stream Channel 0 Multi Zone
    StreamChannel0PacketResendDestination,  //!< Stream Channel 0 Packet Resend Destination
    StreamChannel0UnconditionalStreaming,  //!< Stream Channel 0 Unconditional Streaming
    StreamChannel1AllInTransmission,  //!< Stream Channel 1 All In Transmission
    StreamChannel1BigAndLittleEndian,  //!< Stream Channel 1 Big And Little Endian
    StreamChannel1ExtendedChunkData,  //!< Stream Channel 1 Extended Chunk Data
    StreamChannel1IPReassembly,  //!< Stream Channel 1 IP Reassembly
    StreamChannel1MultiZone,  //!< Stream Channel 1 Multi Zone
    StreamChannel1PacketResendDestination,  //!< Stream Channel 1 Packet Resend Destination
    StreamChannel1UnconditionalStreaming,  //!< Stream Channel 1 Unconditional Streaming
    StreamChannel2AllInTransmission,  //!< Stream Channel 2 All In Transmission
    StreamChannel2BigAndLittleEndian,  //!< Stream Channel 2 Big And Little Endian
    StreamChannel2ExtendedChunkData,  //!< Stream Channel 2 Extended Chunk Data
    StreamChannel2IPReassembly,  //!< Stream Channel 2 IP Reassembly
    StreamChannel2MultiZone,  //!< Stream Channel 2 Multi Zone
    StreamChannel2PacketResendDestination,  //!< Stream Channel 2 Packet Resend Destination
    StreamChannel2UnconditionalStreaming,  //!< Stream Channel 2 Unconditional Streaming
    StreamChannelSourceSocket,  //!< Stream Channel Source Socket
    TestData,  //!< Test Data
    UnconditionalAction,  //!< Unconditional Action
    UserDefinedName,  //!< User Defined Name
    WriteMem  //!< Write Mem
};

/**
\class      CGevSupportedOptionSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature GevSupportedOptionSelector
*/
class NEOAPI_CPP_DECL CGevSupportedOptionSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CGevSupportedOptionSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CGevSupportedOptionSelector object
    */
    CGevSupportedOptionSelector(const CGevSupportedOptionSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CGevSupportedOptionSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CGevSupportedOptionSelector object to assign.
        \return     Object reference with the value set.
    */
    const CGevSupportedOptionSelector& operator = (const CGevSupportedOptionSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as GevSupportedOptionSelector
    */
    operator GevSupportedOptionSelector() const;
    /**
        \brief     Set the current value.
        \param     value The GevSupportedOptionSelector value to be written.
        \return    The CGevSupportedOptionSelector object
    */
    CGevSupportedOptionSelector& operator = (GevSupportedOptionSelector value);
    /**
        \brief     Set the current value.
        \param     value The GevSupportedOptionSelector value to be written.
        \return    The CGevSupportedOptionSelector object
    */
    CGevSupportedOptionSelector& Set(GevSupportedOptionSelector value);
    /**
        \brief     Get the current value.
        \return    The value as GevSupportedOptionSelector
    */
    GevSupportedOptionSelector Get() const;
};

/**
\brief Valid values for HDRGainRatioSelector
\ingroup    GenICamFeatures
 */
enum class HDRGainRatioSelector {
    Gain12_0dB = 0,  //!< Sets HDR gain ratio to dynamic range of 12.0dB.
    Gain2_5dB,  //!< Sets HDR gain ratio to dynamic range of 2.5dB.
    Gain3_5dB,  //!< Sets HDR gain ratio to dynamic range of 3.5dB.
    Gain6_0dB,  //!< Sets HDR gain ratio to dynamic range of 6.0dB.
    Gain9_5dB,  //!< Sets HDR gain ratio to dynamic range of 9.5dB.
    Off  //!< Sets HDR gain ratio to dynamic range of 0dB.
};

/**
\class      CHDRGainRatioSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature HDRGainRatioSelector
*/
class NEOAPI_CPP_DECL CHDRGainRatioSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CHDRGainRatioSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CHDRGainRatioSelector object
    */
    CHDRGainRatioSelector(const CHDRGainRatioSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CHDRGainRatioSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CHDRGainRatioSelector object to assign.
        \return     Object reference with the value set.
    */
    const CHDRGainRatioSelector& operator = (const CHDRGainRatioSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as HDRGainRatioSelector
    */
    operator HDRGainRatioSelector() const;
    /**
        \brief     Set the current value.
        \param     value The HDRGainRatioSelector value to be written.
        \return    The CHDRGainRatioSelector object
    */
    CHDRGainRatioSelector& operator = (HDRGainRatioSelector value);
    /**
        \brief     Set the current value.
        \param     value The HDRGainRatioSelector value to be written.
        \return    The CHDRGainRatioSelector object
    */
    CHDRGainRatioSelector& Set(HDRGainRatioSelector value);
    /**
        \brief     Get the current value.
        \return    The value as HDRGainRatioSelector
    */
    HDRGainRatioSelector Get() const;
};

/**
\brief Valid values for HDRTonemappingCurvePresetSelector
\ingroup    GenICamFeatures
 */
enum class HDRTonemappingCurvePresetSelector {
    Preset1 = 0,  //!< The HDR tone-mapping preset for a steep logarithmic transfer curve will be used.
    Preset2,  //!< The HDR tone-mapping preset for a middle steep logarithmic transfer curve will be used.
    Preset3  //!< The HDR tone-mapping preset for a slight logarithmic transfer curve will be used.
};

/**
\class      CHDRTonemappingCurvePresetSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature HDRTonemappingCurvePresetSelector
*/
class NEOAPI_CPP_DECL CHDRTonemappingCurvePresetSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CHDRTonemappingCurvePresetSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CHDRTonemappingCurvePresetSelector object
    */
    CHDRTonemappingCurvePresetSelector(const CHDRTonemappingCurvePresetSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CHDRTonemappingCurvePresetSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CHDRTonemappingCurvePresetSelector object to assign.
        \return     Object reference with the value set.
    */
    const CHDRTonemappingCurvePresetSelector& operator = (const CHDRTonemappingCurvePresetSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as HDRTonemappingCurvePresetSelector
    */
    operator HDRTonemappingCurvePresetSelector() const;
    /**
        \brief     Set the current value.
        \param     value The HDRTonemappingCurvePresetSelector value to be written.
        \return    The CHDRTonemappingCurvePresetSelector object
    */
    CHDRTonemappingCurvePresetSelector& operator = (HDRTonemappingCurvePresetSelector value);
    /**
        \brief     Set the current value.
        \param     value The HDRTonemappingCurvePresetSelector value to be written.
        \return    The CHDRTonemappingCurvePresetSelector object
    */
    CHDRTonemappingCurvePresetSelector& Set(HDRTonemappingCurvePresetSelector value);
    /**
        \brief     Get the current value.
        \return    The value as HDRTonemappingCurvePresetSelector
    */
    HDRTonemappingCurvePresetSelector Get() const;
};

/**
\brief Valid values for ImageCompressionJPEGFormatOption
\ingroup    GenICamFeatures
 */
enum class ImageCompressionJPEGFormatOption {
    BaselineOptimized = 0,  //!< Provides optimized color and slightly better compression than baseline standard by using custom Huffman tables optimized after statistical analysis of the image content.
    BaselineStandard,  //!< Indicates this is a baseline sequential (single-scan) DCT-based JPEG.
    Lossless,  //!< Selects lossless JPEG compression based on a predictive coding model.
    Progressive  //!< Indicates this is a progressive (multi-scan) DCT-based JPEG.
};

/**
\class      CImageCompressionJPEGFormatOption
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature ImageCompressionJPEGFormatOption
*/
class NEOAPI_CPP_DECL CImageCompressionJPEGFormatOption : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CImageCompressionJPEGFormatOption(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CImageCompressionJPEGFormatOption object
    */
    CImageCompressionJPEGFormatOption(const CImageCompressionJPEGFormatOption& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CImageCompressionJPEGFormatOption() {}
    /**
        \brief      Assignment operator
        \param      object The CImageCompressionJPEGFormatOption object to assign.
        \return     Object reference with the value set.
    */
    const CImageCompressionJPEGFormatOption& operator = (const CImageCompressionJPEGFormatOption& object);
    /**
        \brief     Get the current value.
        \return    The value as ImageCompressionJPEGFormatOption
    */
    operator ImageCompressionJPEGFormatOption() const;
    /**
        \brief     Set the current value.
        \param     value The ImageCompressionJPEGFormatOption value to be written.
        \return    The CImageCompressionJPEGFormatOption object
    */
    CImageCompressionJPEGFormatOption& operator = (ImageCompressionJPEGFormatOption value);
    /**
        \brief     Set the current value.
        \param     value The ImageCompressionJPEGFormatOption value to be written.
        \return    The CImageCompressionJPEGFormatOption object
    */
    CImageCompressionJPEGFormatOption& Set(ImageCompressionJPEGFormatOption value);
    /**
        \brief     Get the current value.
        \return    The value as ImageCompressionJPEGFormatOption
    */
    ImageCompressionJPEGFormatOption Get() const;
};

/**
\brief Valid values for ImageCompressionMode
\ingroup    GenICamFeatures
 */
enum class ImageCompressionMode {
    H264 = 0,  //!< H.264 compression is selected.
    JPEG,  //!< JPEG compression is selected.
    JPEG2000,  //!< JPEG 2000 compression is selected.
    Off  //!< Default value. Image compression is disabled. Images are transmitted uncompressed.
};

/**
\class      CImageCompressionMode
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature ImageCompressionMode
*/
class NEOAPI_CPP_DECL CImageCompressionMode : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CImageCompressionMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CImageCompressionMode object
    */
    CImageCompressionMode(const CImageCompressionMode& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CImageCompressionMode() {}
    /**
        \brief      Assignment operator
        \param      object The CImageCompressionMode object to assign.
        \return     Object reference with the value set.
    */
    const CImageCompressionMode& operator = (const CImageCompressionMode& object);
    /**
        \brief     Get the current value.
        \return    The value as ImageCompressionMode
    */
    operator ImageCompressionMode() const;
    /**
        \brief     Set the current value.
        \param     value The ImageCompressionMode value to be written.
        \return    The CImageCompressionMode object
    */
    CImageCompressionMode& operator = (ImageCompressionMode value);
    /**
        \brief     Set the current value.
        \param     value The ImageCompressionMode value to be written.
        \return    The CImageCompressionMode object
    */
    CImageCompressionMode& Set(ImageCompressionMode value);
    /**
        \brief     Get the current value.
        \return    The value as ImageCompressionMode
    */
    ImageCompressionMode Get() const;
};

/**
\brief Valid values for ImageCompressionRateOption
\ingroup    GenICamFeatures
 */
enum class ImageCompressionRateOption {
    FixBitrate = 0,  //!< Output stream follows a constant bit rate. Allows easy bandwidth management on the link.
    FixQuality  //!< Output stream has a constant image quality. Can be used when image processing algorithms are sensitive to image degradation caused by excessive data compression.
};

/**
\class      CImageCompressionRateOption
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature ImageCompressionRateOption
*/
class NEOAPI_CPP_DECL CImageCompressionRateOption : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CImageCompressionRateOption(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CImageCompressionRateOption object
    */
    CImageCompressionRateOption(const CImageCompressionRateOption& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CImageCompressionRateOption() {}
    /**
        \brief      Assignment operator
        \param      object The CImageCompressionRateOption object to assign.
        \return     Object reference with the value set.
    */
    const CImageCompressionRateOption& operator = (const CImageCompressionRateOption& object);
    /**
        \brief     Get the current value.
        \return    The value as ImageCompressionRateOption
    */
    operator ImageCompressionRateOption() const;
    /**
        \brief     Set the current value.
        \param     value The ImageCompressionRateOption value to be written.
        \return    The CImageCompressionRateOption object
    */
    CImageCompressionRateOption& operator = (ImageCompressionRateOption value);
    /**
        \brief     Set the current value.
        \param     value The ImageCompressionRateOption value to be written.
        \return    The CImageCompressionRateOption object
    */
    CImageCompressionRateOption& Set(ImageCompressionRateOption value);
    /**
        \brief     Get the current value.
        \return    The value as ImageCompressionRateOption
    */
    ImageCompressionRateOption Get() const;
};

/**
\brief Valid values for InterfaceSpeedMode
\ingroup    GenICamFeatures
 */
enum class InterfaceSpeedMode {
    Ethernet100Mbps = 0,  //!< Interface speed mode is 100 Mbps.
    Ethernet10Gbps,  //!< Operation at 10 Gbps. AVAILABLE: Always.
    Ethernet1Gbps,  //!< Interface speed mode is 1 Gbps.
    Ethernet2_5Gbps,  //!< Operation at 2.5 Gbps. AVAILABLE: Always.
    Ethernet5Gbps,  //!< Operation at 5 Gbps. AVAILABLE: Always.
    FullSpeed,  //!< USB Operation at 12 Mbps
    HighSpeed,  //!< USB Operation at 480 Mbps
    LowSpeed,  //!< USB Operation at 1.5 Mbps
    SuperSpeed  //!< USB Operation at 5 Gbps
};

/**
\class      CInterfaceSpeedMode
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature InterfaceSpeedMode
*/
class NEOAPI_CPP_DECL CInterfaceSpeedMode : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CInterfaceSpeedMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CInterfaceSpeedMode object
    */
    CInterfaceSpeedMode(const CInterfaceSpeedMode& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CInterfaceSpeedMode() {}
    /**
        \brief      Assignment operator
        \param      object The CInterfaceSpeedMode object to assign.
        \return     Object reference with the value set.
    */
    const CInterfaceSpeedMode& operator = (const CInterfaceSpeedMode& object);
    /**
        \brief     Get the current value.
        \return    The value as InterfaceSpeedMode
    */
    operator InterfaceSpeedMode() const;
    /**
        \brief     Set the current value.
        \param     value The InterfaceSpeedMode value to be written.
        \return    The CInterfaceSpeedMode object
    */
    CInterfaceSpeedMode& operator = (InterfaceSpeedMode value);
    /**
        \brief     Set the current value.
        \param     value The InterfaceSpeedMode value to be written.
        \return    The CInterfaceSpeedMode object
    */
    CInterfaceSpeedMode& Set(InterfaceSpeedMode value);
    /**
        \brief     Get the current value.
        \return    The value as InterfaceSpeedMode
    */
    InterfaceSpeedMode Get() const;
};

/**
\brief Valid values for LUTContent
\ingroup    GenICamFeatures
 */
enum class LUTContent {
    Gamma = 0,  //!< The LUT Values are calculated in an automatically way related to the value of the feature Gamma.
    UserdefinedLUT  //!< The LUT is defined and editable with the features LUTIndex and LUTValue.
};

/**
\class      CLUTContent
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature LUTContent
*/
class NEOAPI_CPP_DECL CLUTContent : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CLUTContent(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CLUTContent object
    */
    CLUTContent(const CLUTContent& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CLUTContent() {}
    /**
        \brief      Assignment operator
        \param      object The CLUTContent object to assign.
        \return     Object reference with the value set.
    */
    const CLUTContent& operator = (const CLUTContent& object);
    /**
        \brief     Get the current value.
        \return    The value as LUTContent
    */
    operator LUTContent() const;
    /**
        \brief     Set the current value.
        \param     value The LUTContent value to be written.
        \return    The CLUTContent object
    */
    CLUTContent& operator = (LUTContent value);
    /**
        \brief     Set the current value.
        \param     value The LUTContent value to be written.
        \return    The CLUTContent object
    */
    CLUTContent& Set(LUTContent value);
    /**
        \brief     Get the current value.
        \return    The value as LUTContent
    */
    LUTContent Get() const;
};

/**
\brief Valid values for LUTSelector
\ingroup    GenICamFeatures
 */
enum class LUTSelector {
    Blue = 0,  //!< Selects the Blue LUT.
    Green,  //!< Selects the Green LUT.
    Luminance,  //!< Selects the Luminance LUT.
    Red  //!< Selects the Red LUT.
};

/**
\class      CLUTSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature LUTSelector
*/
class NEOAPI_CPP_DECL CLUTSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CLUTSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CLUTSelector object
    */
    CLUTSelector(const CLUTSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CLUTSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CLUTSelector object to assign.
        \return     Object reference with the value set.
    */
    const CLUTSelector& operator = (const CLUTSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as LUTSelector
    */
    operator LUTSelector() const;
    /**
        \brief     Set the current value.
        \param     value The LUTSelector value to be written.
        \return    The CLUTSelector object
    */
    CLUTSelector& operator = (LUTSelector value);
    /**
        \brief     Set the current value.
        \param     value The LUTSelector value to be written.
        \return    The CLUTSelector object
    */
    CLUTSelector& Set(LUTSelector value);
    /**
        \brief     Get the current value.
        \return    The value as LUTSelector
    */
    LUTSelector Get() const;
};

/**
\brief Valid values for LineFormat
\ingroup    GenICamFeatures
 */
enum class LineFormat {
    LVDS = 0,  //!< The Line is currently accepting or sending LVDS level signals.
    NoConnect,  //!< The Line is not connected.
    OpenDrain,  //!< The Line is Open Drain (or Open Collector).
    OpenSource,  //!< The Line is Open Source. AVAILABLE: (LineMode[LineSelector] = Output)
    OptoCoupled,  //!< The Line is opto-coupled.
    PushPull,  //!< The Line is Push Pull. AVAILABLE: (LineMode[LineSelector] = Output)
    RS422,  //!< The Line is currently accepting or sending RS422 level signals.
    TTL,  //!< The Line is currently accepting or sending TTL level signals.
    TriState  //!< The Line is currently in Tri-State mode (Not driven).
};

/**
\class      CLineFormat
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature LineFormat
*/
class NEOAPI_CPP_DECL CLineFormat : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CLineFormat(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CLineFormat object
    */
    CLineFormat(const CLineFormat& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CLineFormat() {}
    /**
        \brief      Assignment operator
        \param      object The CLineFormat object to assign.
        \return     Object reference with the value set.
    */
    const CLineFormat& operator = (const CLineFormat& object);
    /**
        \brief     Get the current value.
        \return    The value as LineFormat
    */
    operator LineFormat() const;
    /**
        \brief     Set the current value.
        \param     value The LineFormat value to be written.
        \return    The CLineFormat object
    */
    CLineFormat& operator = (LineFormat value);
    /**
        \brief     Set the current value.
        \param     value The LineFormat value to be written.
        \return    The CLineFormat object
    */
    CLineFormat& Set(LineFormat value);
    /**
        \brief     Get the current value.
        \return    The value as LineFormat
    */
    LineFormat Get() const;
};

/**
\brief Valid values for LineMode
\ingroup    GenICamFeatures
 */
enum class LineMode {
    Input = 0,  //!< The selected physical line is used to Input an electrical signal.
    Output  //!< The selected physical line is used to Output an electrical signal.
};

/**
\class      CLineMode
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature LineMode
*/
class NEOAPI_CPP_DECL CLineMode : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CLineMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CLineMode object
    */
    CLineMode(const CLineMode& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CLineMode() {}
    /**
        \brief      Assignment operator
        \param      object The CLineMode object to assign.
        \return     Object reference with the value set.
    */
    const CLineMode& operator = (const CLineMode& object);
    /**
        \brief     Get the current value.
        \return    The value as LineMode
    */
    operator LineMode() const;
    /**
        \brief     Set the current value.
        \param     value The LineMode value to be written.
        \return    The CLineMode object
    */
    CLineMode& operator = (LineMode value);
    /**
        \brief     Set the current value.
        \param     value The LineMode value to be written.
        \return    The CLineMode object
    */
    CLineMode& Set(LineMode value);
    /**
        \brief     Get the current value.
        \return    The value as LineMode
    */
    LineMode Get() const;
};

/**
\brief Valid values for LinePWMConfigurationMode
\ingroup    GenICamFeatures
 */
enum class LinePWMConfigurationMode {
    Off = 0,  //!< Disables the line PWM configuration mode.
    On  //!< Enables the line PWM configuration mode.
};

/**
\class      CLinePWMConfigurationMode
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature LinePWMConfigurationMode
*/
class NEOAPI_CPP_DECL CLinePWMConfigurationMode : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CLinePWMConfigurationMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CLinePWMConfigurationMode object
    */
    CLinePWMConfigurationMode(const CLinePWMConfigurationMode& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CLinePWMConfigurationMode() {}
    /**
        \brief      Assignment operator
        \param      object The CLinePWMConfigurationMode object to assign.
        \return     Object reference with the value set.
    */
    const CLinePWMConfigurationMode& operator = (const CLinePWMConfigurationMode& object);
    /**
        \brief     Get the current value.
        \return    The value as LinePWMConfigurationMode
    */
    operator LinePWMConfigurationMode() const;
    /**
        \brief     Set the current value.
        \param     value The LinePWMConfigurationMode value to be written.
        \return    The CLinePWMConfigurationMode object
    */
    CLinePWMConfigurationMode& operator = (LinePWMConfigurationMode value);
    /**
        \brief     Set the current value.
        \param     value The LinePWMConfigurationMode value to be written.
        \return    The CLinePWMConfigurationMode object
    */
    CLinePWMConfigurationMode& Set(LinePWMConfigurationMode value);
    /**
        \brief     Get the current value.
        \return    The value as LinePWMConfigurationMode
    */
    LinePWMConfigurationMode Get() const;
};

/**
\brief Valid values for LinePWMMode
\ingroup    GenICamFeatures
 */
enum class LinePWMMode {
    FixedFrequency = 0,  //!< The selected output line generate a fixed frequency of pulses starting with every transition from 0 to 1 and stopping with every transition from 1 to 0.
    Off,  //!< The PWM Mode is off. The selected output line acts as a normal output.
    OnePulse  //!< The selected output line generates one pulse with every transition from 0 to 1.
};

/**
\class      CLinePWMMode
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature LinePWMMode
*/
class NEOAPI_CPP_DECL CLinePWMMode : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CLinePWMMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CLinePWMMode object
    */
    CLinePWMMode(const CLinePWMMode& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CLinePWMMode() {}
    /**
        \brief      Assignment operator
        \param      object The CLinePWMMode object to assign.
        \return     Object reference with the value set.
    */
    const CLinePWMMode& operator = (const CLinePWMMode& object);
    /**
        \brief     Get the current value.
        \return    The value as LinePWMMode
    */
    operator LinePWMMode() const;
    /**
        \brief     Set the current value.
        \param     value The LinePWMMode value to be written.
        \return    The CLinePWMMode object
    */
    CLinePWMMode& operator = (LinePWMMode value);
    /**
        \brief     Set the current value.
        \param     value The LinePWMMode value to be written.
        \return    The CLinePWMMode object
    */
    CLinePWMMode& Set(LinePWMMode value);
    /**
        \brief     Get the current value.
        \return    The value as LinePWMMode
    */
    LinePWMMode Get() const;
};

/**
\brief Valid values for LineSelector
\ingroup    GenICamFeatures
 */
enum class LineSelector {
    CC1 = 0,  //!< Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink Product only.
    CC2,  //!< Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink Product only.
    CC3,  //!< Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink Product only.
    CC4,  //!< Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink Product only.
    Line0,  //!< Index of the physical line and associated I/O control block to use.
    Line1,  //!< Index of the physical line and associated I/O control block to use.
    Line2,  //!< Index of the physical line and associated I/O control block to use.
    Line3,  //!< Index of the physical line and associated I/O control block to use. AVAILABLE: Always
    Line4,  //!< Index of the physical line and associated I/O control block to use. AVAILABLE: Always
    Line5,  //!< Index of the physical line and associated I/O control block to use. AVAILABLE: Always
    Line6,  //!< Index of the physical line and associated I/O control block to use. AVAILABLE: Always
    Line7,  //!< Index of the physical line and associated I/O control block to use. AVAILABLE: Always
    LinkTrigger0,  //!< Index of the virtual line going on the Transport layer to use.
    LinkTrigger1,  //!< Index of the virtual line going on the Transport layer to use.
    LinkTrigger2  //!< Index of the virtual line going on the Transport layer to use.
};

/**
\class      CLineSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature LineSelector
*/
class NEOAPI_CPP_DECL CLineSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CLineSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CLineSelector object
    */
    CLineSelector(const CLineSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CLineSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CLineSelector object to assign.
        \return     Object reference with the value set.
    */
    const CLineSelector& operator = (const CLineSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as LineSelector
    */
    operator LineSelector() const;
    /**
        \brief     Set the current value.
        \param     value The LineSelector value to be written.
        \return    The CLineSelector object
    */
    CLineSelector& operator = (LineSelector value);
    /**
        \brief     Set the current value.
        \param     value The LineSelector value to be written.
        \return    The CLineSelector object
    */
    CLineSelector& Set(LineSelector value);
    /**
        \brief     Get the current value.
        \return    The value as LineSelector
    */
    LineSelector Get() const;
};

/**
\brief Valid values for LineSource
\ingroup    GenICamFeatures
 */
enum class LineSource {
    AcquisitionActive = 0,  //!< Device is currently doing an acquisition of one or many Frames.
    AcquisitionTrigger,  //!< Device is currently waiting for a trigger for the capture of one or many Frames.
    AcquisitionTriggerMissed,  //!< Device has missed an Acquisition start trigger.
    AcquisitionTriggerWait,  //!< Device is currently waiting for a trigger for the capture of one or many Frames.
    Counter0Active,  //!< The chosen counter is in active state (counting).
    Counter1Active,  //!< The chosen counter is in active state (counting).
    Counter2Active,  //!< The chosen counter is in active state (counting).
    Encoder0,  //!< The chosen Encoder Output state.
    Encoder1,  //!< The chosen Encoder Output state.
    Encoder2,  //!< The chosen Encoder Output state.
    ExposureActive,  //!< Device is doing the exposure of a Frame (or Line).
    FrameActive,  //!< Device is currently doing the capture of a Frame.
    FrameTrigger,  //!< Device is currently waiting for a Frame start trigger.
    FrameTriggerMissed,  //!< Device has missed a Frame start trigger.
    FrameTriggerWait,  //!< Device is currently waiting for a Frame start trigger.
    Line0,  //!< Device is currently waiting for signal of input line 0. AVAILABLE: Always
    Line1,  //!< Device is currently waiting for signal of input line 10. AVAILABLE: Always
    LineActive,  //!< Device is currently doing the capture of a Line.
    LineTrigger,  //!< Device is currently waiting for a Line start trigger.
    LineTriggerMissed,  //!< Device has missed a Line start trigger.
    LineTriggerWait,  //!< Device is currently waiting for a Line start trigger.
    LogicBlock0,  //!< The choosen Logic Block output state.
    LogicBlock1,  //!< The choosen Logic Block output state.
    LogicBlock2,  //!< The choosen Logic Block output state.
    Off,  //!< Line output is disabled (Tri-State).
    ReadoutActive,  //!< Device is doing the readout of a Frame. AVAILABLE: Always
    SequencerOutput0,  //!< The chosen Sequencer Output is in active state.
    SequencerOutput1,  //!< The chosen Sequencer Output is in active state.
    SequencerOutput2,  //!< The chosen Sequencer Output is in active state.
    SoftwareSignal0,  //!< The choosen Software Signal output state.
    SoftwareSignal1,  //!< The choosen Software Signal output state.
    SoftwareSignal2,  //!< The choosen Software Signal output state.
    Stream0TransferActive,  //!< Transfer on the stream is active.
    Stream0TransferOverflow,  //!< Transfer on the stream is in overflow.
    Stream0TransferPaused,  //!< Transfer on the stream is paused.
    Stream0TransferStopped,  //!< Transfer on the stream is stopped.
    Stream0TransferStopping,  //!< Transfer on the stream is stopping.
    Stream1TransferActive,  //!< Transfer on the stream is active.
    Stream1TransferOverflow,  //!< Transfer on the stream is in overflow.
    Stream1TransferPaused,  //!< Transfer on the stream is paused.
    Stream1TransferStopped,  //!< Transfer on the stream is stopped.
    Stream1TransferStopping,  //!< Transfer on the stream is stopping.
    Timer0Active,  //!< The chosen Timer is in active state.
    Timer1Active,  //!< The chosen Timer is in active state.
    Timer2Active,  //!< The chosen Timer is in active state.
    Timer3Active,  //!< The chosen Timer is in active state. AVAILABLE: Always
    TriggerOverlapped,  //!< Mark Overlapped.
    TriggerReady,  //!< Device is ready for trigger. AVAILABLE: Always
    TriggerSkipped,  //!< Trigger Skipped.
    UserOutput0,  //!< The chosen User Output Bit state as defined by its current UserOutputValue.
    UserOutput1,  //!< The chosen User Output Bit state as defined by its current UserOutputValue.
    UserOutput2,  //!< The chosen User Output Bit state as defined by its current UserOutputValue.
    UserOutput3,  //!< The chosen User Output Bit state as defined by its current UserOutputValue. AVAILABLE: Always
    UserOutput4  //!< The chosen User Output Bit state as defined by its current UserOutputValue. AVAILABLE: Always
};

/**
\class      CLineSource
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature LineSource
*/
class NEOAPI_CPP_DECL CLineSource : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CLineSource(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CLineSource object
    */
    CLineSource(const CLineSource& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CLineSource() {}
    /**
        \brief      Assignment operator
        \param      object The CLineSource object to assign.
        \return     Object reference with the value set.
    */
    const CLineSource& operator = (const CLineSource& object);
    /**
        \brief     Get the current value.
        \return    The value as LineSource
    */
    operator LineSource() const;
    /**
        \brief     Set the current value.
        \param     value The LineSource value to be written.
        \return    The CLineSource object
    */
    CLineSource& operator = (LineSource value);
    /**
        \brief     Set the current value.
        \param     value The LineSource value to be written.
        \return    The CLineSource object
    */
    CLineSource& Set(LineSource value);
    /**
        \brief     Get the current value.
        \return    The value as LineSource
    */
    LineSource Get() const;
};

/**
\brief Valid values for MemoryActivePart
\ingroup    GenICamFeatures
 */
enum class MemoryActivePart {
    Part_1 = 0,  //!< Part 1 is the active memory part.
    Part_2,  //!< Part 2 is the active memory part.
    Part_3,  //!< Part 3 is the active memory part.
    Part_4  //!< Part 4 is the active memory part.
};

/**
\class      CMemoryActivePart
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature MemoryActivePart
*/
class NEOAPI_CPP_DECL CMemoryActivePart : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CMemoryActivePart(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CMemoryActivePart object
    */
    CMemoryActivePart(const CMemoryActivePart& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CMemoryActivePart() {}
    /**
        \brief      Assignment operator
        \param      object The CMemoryActivePart object to assign.
        \return     Object reference with the value set.
    */
    const CMemoryActivePart& operator = (const CMemoryActivePart& object);
    /**
        \brief     Get the current value.
        \return    The value as MemoryActivePart
    */
    operator MemoryActivePart() const;
    /**
        \brief     Set the current value.
        \param     value The MemoryActivePart value to be written.
        \return    The CMemoryActivePart object
    */
    CMemoryActivePart& operator = (MemoryActivePart value);
    /**
        \brief     Set the current value.
        \param     value The MemoryActivePart value to be written.
        \return    The CMemoryActivePart object
    */
    CMemoryActivePart& Set(MemoryActivePart value);
    /**
        \brief     Get the current value.
        \return    The value as MemoryActivePart
    */
    MemoryActivePart Get() const;
};

/**
\brief Valid values for MemoryMode
\ingroup    GenICamFeatures
 */
enum class MemoryMode {
    Active = 0,  //!< The memory is configured and in use.
    Burst,  //!< The selected memory part will be written and read simultaneously. The memory will be read when MemoryPartFilledBlocks are available.
    Config,  //!< Configuration of internal memory to store images is active.
    Off  //!< No images are stored in this mode.
};

/**
\class      CMemoryMode
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature MemoryMode
*/
class NEOAPI_CPP_DECL CMemoryMode : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CMemoryMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CMemoryMode object
    */
    CMemoryMode(const CMemoryMode& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CMemoryMode() {}
    /**
        \brief      Assignment operator
        \param      object The CMemoryMode object to assign.
        \return     Object reference with the value set.
    */
    const CMemoryMode& operator = (const CMemoryMode& object);
    /**
        \brief     Get the current value.
        \return    The value as MemoryMode
    */
    operator MemoryMode() const;
    /**
        \brief     Set the current value.
        \param     value The MemoryMode value to be written.
        \return    The CMemoryMode object
    */
    CMemoryMode& operator = (MemoryMode value);
    /**
        \brief     Set the current value.
        \param     value The MemoryMode value to be written.
        \return    The CMemoryMode object
    */
    CMemoryMode& Set(MemoryMode value);
    /**
        \brief     Get the current value.
        \return    The value as MemoryMode
    */
    MemoryMode Get() const;
};

/**
\brief Valid values for MemoryPartIncrementSource
\ingroup    GenICamFeatures
 */
enum class MemoryPartIncrementSource {
    Line1 = 0,  //!< Selects line 1 as source to switch the active memory part.
    Software  //!< Selects the command MemoryPartIncrementSoftware as source to switch the active memory part.
};

/**
\class      CMemoryPartIncrementSource
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature MemoryPartIncrementSource
*/
class NEOAPI_CPP_DECL CMemoryPartIncrementSource : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CMemoryPartIncrementSource(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CMemoryPartIncrementSource object
    */
    CMemoryPartIncrementSource(const CMemoryPartIncrementSource& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CMemoryPartIncrementSource() {}
    /**
        \brief      Assignment operator
        \param      object The CMemoryPartIncrementSource object to assign.
        \return     Object reference with the value set.
    */
    const CMemoryPartIncrementSource& operator = (const CMemoryPartIncrementSource& object);
    /**
        \brief     Get the current value.
        \return    The value as MemoryPartIncrementSource
    */
    operator MemoryPartIncrementSource() const;
    /**
        \brief     Set the current value.
        \param     value The MemoryPartIncrementSource value to be written.
        \return    The CMemoryPartIncrementSource object
    */
    CMemoryPartIncrementSource& operator = (MemoryPartIncrementSource value);
    /**
        \brief     Set the current value.
        \param     value The MemoryPartIncrementSource value to be written.
        \return    The CMemoryPartIncrementSource object
    */
    CMemoryPartIncrementSource& Set(MemoryPartIncrementSource value);
    /**
        \brief     Get the current value.
        \return    The value as MemoryPartIncrementSource
    */
    MemoryPartIncrementSource Get() const;
};

/**
\brief Valid values for MemoryPartMode
\ingroup    GenICamFeatures
 */
enum class MemoryPartMode {
    Cyclic = 0,  //!< The selected memory part will be written cyclic. The oldest image will be overwritten as first.
    Once  //!< The selected memory part will be written once without overrun. No images will be overwritten.
};

/**
\class      CMemoryPartMode
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature MemoryPartMode
*/
class NEOAPI_CPP_DECL CMemoryPartMode : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CMemoryPartMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CMemoryPartMode object
    */
    CMemoryPartMode(const CMemoryPartMode& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CMemoryPartMode() {}
    /**
        \brief      Assignment operator
        \param      object The CMemoryPartMode object to assign.
        \return     Object reference with the value set.
    */
    const CMemoryPartMode& operator = (const CMemoryPartMode& object);
    /**
        \brief     Get the current value.
        \return    The value as MemoryPartMode
    */
    operator MemoryPartMode() const;
    /**
        \brief     Set the current value.
        \param     value The MemoryPartMode value to be written.
        \return    The CMemoryPartMode object
    */
    CMemoryPartMode& operator = (MemoryPartMode value);
    /**
        \brief     Set the current value.
        \param     value The MemoryPartMode value to be written.
        \return    The CMemoryPartMode object
    */
    CMemoryPartMode& Set(MemoryPartMode value);
    /**
        \brief     Get the current value.
        \return    The value as MemoryPartMode
    */
    MemoryPartMode Get() const;
};

/**
\brief Valid values for MemoryPartSelector
\ingroup    GenICamFeatures
 */
enum class MemoryPartSelector {
    Part_1 = 0,  //!< Selects memory part 1.
    Part_2,  //!< Selects memory part 2.
    Part_3,  //!< Selects memory part 3.
    Part_4  //!< Selects memory part 4.
};

/**
\class      CMemoryPartSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature MemoryPartSelector
*/
class NEOAPI_CPP_DECL CMemoryPartSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CMemoryPartSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CMemoryPartSelector object
    */
    CMemoryPartSelector(const CMemoryPartSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CMemoryPartSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CMemoryPartSelector object to assign.
        \return     Object reference with the value set.
    */
    const CMemoryPartSelector& operator = (const CMemoryPartSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as MemoryPartSelector
    */
    operator MemoryPartSelector() const;
    /**
        \brief     Set the current value.
        \param     value The MemoryPartSelector value to be written.
        \return    The CMemoryPartSelector object
    */
    CMemoryPartSelector& operator = (MemoryPartSelector value);
    /**
        \brief     Set the current value.
        \param     value The MemoryPartSelector value to be written.
        \return    The CMemoryPartSelector object
    */
    CMemoryPartSelector& Set(MemoryPartSelector value);
    /**
        \brief     Get the current value.
        \return    The value as MemoryPartSelector
    */
    MemoryPartSelector Get() const;
};

/**
\brief Valid values for OpticControllerSelector
\ingroup    GenICamFeatures
 */
enum class OpticControllerSelector {
    OpticController0 = 0,  //!< Selects Optic Controller 0.
    OpticController1  //!< Selects Optic Controller 1.
};

/**
\class      COpticControllerSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature OpticControllerSelector
*/
class NEOAPI_CPP_DECL COpticControllerSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    COpticControllerSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A COpticControllerSelector object
    */
    COpticControllerSelector(const COpticControllerSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~COpticControllerSelector() {}
    /**
        \brief      Assignment operator
        \param      object The COpticControllerSelector object to assign.
        \return     Object reference with the value set.
    */
    const COpticControllerSelector& operator = (const COpticControllerSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as OpticControllerSelector
    */
    operator OpticControllerSelector() const;
    /**
        \brief     Set the current value.
        \param     value The OpticControllerSelector value to be written.
        \return    The COpticControllerSelector object
    */
    COpticControllerSelector& operator = (OpticControllerSelector value);
    /**
        \brief     Set the current value.
        \param     value The OpticControllerSelector value to be written.
        \return    The COpticControllerSelector object
    */
    COpticControllerSelector& Set(OpticControllerSelector value);
    /**
        \brief     Get the current value.
        \return    The value as OpticControllerSelector
    */
    OpticControllerSelector Get() const;
};

/**
\brief Valid values for OpticControllerStatus
\ingroup    GenICamFeatures
 */
enum class OpticControllerStatus {
    Busy = 0,  //!< The optic controller executes a feature access/command.
    Error,  //!< The optic controller encountered an error.
    NotConnected,  //!< The optic contoller is physically not connected.
    NotInitialized,  //!< The optic controller is not initialized.
    NotSupported,  //!< The optic controller is physically connected but not supported.
    Ready  //!< The optic controller is ready to use.
};

/**
\class      COpticControllerStatus
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature OpticControllerStatus
*/
class NEOAPI_CPP_DECL COpticControllerStatus : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    COpticControllerStatus(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A COpticControllerStatus object
    */
    COpticControllerStatus(const COpticControllerStatus& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~COpticControllerStatus() {}
    /**
        \brief      Assignment operator
        \param      object The COpticControllerStatus object to assign.
        \return     Object reference with the value set.
    */
    const COpticControllerStatus& operator = (const COpticControllerStatus& object);
    /**
        \brief     Get the current value.
        \return    The value as OpticControllerStatus
    */
    operator OpticControllerStatus() const;
    /**
        \brief     Set the current value.
        \param     value The OpticControllerStatus value to be written.
        \return    The COpticControllerStatus object
    */
    COpticControllerStatus& operator = (OpticControllerStatus value);
    /**
        \brief     Set the current value.
        \param     value The OpticControllerStatus value to be written.
        \return    The COpticControllerStatus object
    */
    COpticControllerStatus& Set(OpticControllerStatus value);
    /**
        \brief     Get the current value.
        \return    The value as OpticControllerStatus
    */
    OpticControllerStatus Get() const;
};

/**
\brief Valid values for PartialScanEnabled
\ingroup    GenICamFeatures
 */
enum class PartialScanEnabled {
    Off = 0,  //!< Off
    On  //!< On
};

/**
\class      CPartialScanEnabled
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature PartialScanEnabled
*/
class NEOAPI_CPP_DECL CPartialScanEnabled : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CPartialScanEnabled(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CPartialScanEnabled object
    */
    CPartialScanEnabled(const CPartialScanEnabled& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CPartialScanEnabled() {}
    /**
        \brief      Assignment operator
        \param      object The CPartialScanEnabled object to assign.
        \return     Object reference with the value set.
    */
    const CPartialScanEnabled& operator = (const CPartialScanEnabled& object);
    /**
        \brief     Get the current value.
        \return    The value as PartialScanEnabled
    */
    operator PartialScanEnabled() const;
    /**
        \brief     Set the current value.
        \param     value The PartialScanEnabled value to be written.
        \return    The CPartialScanEnabled object
    */
    CPartialScanEnabled& operator = (PartialScanEnabled value);
    /**
        \brief     Set the current value.
        \param     value The PartialScanEnabled value to be written.
        \return    The CPartialScanEnabled object
    */
    CPartialScanEnabled& Set(PartialScanEnabled value);
    /**
        \brief     Get the current value.
        \return    The value as PartialScanEnabled
    */
    PartialScanEnabled Get() const;
};

/**
\brief Valid values for PixelFormat
\ingroup    GenICamFeatures
 */
enum class PixelFormat {
    B10 = 0,  //!< Blue 10-bit
    B12,  //!< Blue 12-bit
    B16,  //!< Blue 16-bit
    B8,  //!< Blue 8-bit
    BGR10,  //!< Blue-Green-Red 10-bit unpacked
    BGR10p,  //!< Blue-Green-Red 10-bit packed
    BGR12,  //!< Blue-Green-Red 12-bit unpacked
    BGR12p,  //!< Blue-Green-Red 12-bit packed
    BGR14,  //!< Blue-Green-Red 14-bit unpacked
    BGR16,  //!< Blue-Green-Red 16-bit
    BGR565p,  //!< Blue-Green-Red 5/6/5-bit packed
    BGR8,  //!< Blue-Green-Red 8-bit
    BGRa10,  //!< Blue-Green-Red-alpha 10-bit unpacked
    BGRa10p,  //!< Blue-Green-Red-alpha 10-bit packed
    BGRa12,  //!< Blue-Green-Red-alpha 12-bit unpacked
    BGRa12p,  //!< Blue-Green-Red-alpha 12-bit packed
    BGRa14,  //!< Blue-Green-Red-alpha 14-bit unpacked
    BGRa16,  //!< Blue-Green-Red-alpha 16-bit
    BGRa8,  //!< Blue-Green-Red-alpha 8-bit
    BayerBG10,  //!< Bayer Blue-Green 10-bit unpacked
    BayerBG10p,  //!< Bayer Blue-Green 10-bit packed
    BayerBG12,  //!< Bayer Blue-Green 12-bit unpacked
    BayerBG12p,  //!< Bayer Blue-Green 12-bit packed
    BayerBG14,  //!< Bayer Blue-Green 14-bit
    BayerBG14p,  //!< Bayer Blue-Green 14-bit packed
    BayerBG16,  //!< Bayer Blue-Green 16-bit
    BayerBG4p,  //!< Bayer Blue-Green 4-bit packed
    BayerBG8,  //!< Bayer Blue-Green 8-bit
    BayerGB10,  //!< Bayer Green-Blue 10-bit unpacked
    BayerGB10Packed,  //!< Bayer Green Blue 10 bit packed.
    BayerGB10p,  //!< Bayer Green-Blue 10-bit packed
    BayerGB12,  //!< Bayer Green-Blue 12-bit unpacked
    BayerGB12Packed,  //!< Bayer Green Blue 12 bit packed.
    BayerGB12p,  //!< Bayer Green-Blue 12-bit packed
    BayerGB14,  //!< Bayer Green-Blue 14-bit
    BayerGB14p,  //!< Bayer Green-Blue 14-bit packed
    BayerGB16,  //!< Bayer Green-Blue 16-bit
    BayerGB4p,  //!< Bayer Green-Blue 4-bit packed
    BayerGB8,  //!< Bayer Green-Blue 8-bit
    BayerGR10,  //!< Bayer Green-Red 10-bit unpacked
    BayerGR10p,  //!< Bayer Green-Red 10-bit packed
    BayerGR12,  //!< Bayer Green-Red 12-bit unpacked
    BayerGR12p,  //!< Bayer Green-Red 12-bit packed
    BayerGR14,  //!< Bayer Green-Red 14-bit
    BayerGR14p,  //!< Bayer Green-Red 14-bit packed
    BayerGR16,  //!< Bayer Green-Red 16-bit
    BayerGR4p,  //!< Bayer Green-Red 4-bit packed
    BayerGR8,  //!< Bayer Green-Red 8-bit
    BayerRG10,  //!< Bayer Red-Green 10-bit unpacked
    BayerRG10Packed,  //!< Bayer Red Green 10 bit packed.
    BayerRG10p,  //!< Bayer Red-Green 10-bit packed
    BayerRG12,  //!< Bayer Red-Green 12-bit unpacked
    BayerRG12Packed,  //!< Bayer Red Green 12 bit packed.
    BayerRG12p,  //!< Bayer Red-Green 12-bit packed
    BayerRG14,  //!< Bayer Red-Green 14-bit
    BayerRG14p,  //!< Bayer Red-Green 14-bit packed
    BayerRG16,  //!< Bayer Red-Green 16-bit
    BayerRG4p,  //!< Bayer Red-Green 4-bit packed
    BayerRG8,  //!< Bayer Red-Green 8-bit
    BiColorBGRG10,  //!< Bi-color Blue/Green - Red/Green 10-bit unpacked
    BiColorBGRG10p,  //!< Bi-color Blue/Green - Red/Green 10-bit packed
    BiColorBGRG12,  //!< Bi-color Blue/Green - Red/Green 12-bit unpacked
    BiColorBGRG12p,  //!< Bi-color Blue/Green - Red/Green 12-bit packed
    BiColorBGRG8,  //!< Bi-color Blue/Green - Red/Green 8-bit
    BiColorRGBG10,  //!< Bi-color Red/Green - Blue/Green 10-bit unpacked
    BiColorRGBG10p,  //!< Bi-color Red/Green - Blue/Green 10-bit packed
    BiColorRGBG12,  //!< Bi-color Red/Green - Blue/Green 12-bit unpacked
    BiColorRGBG12p,  //!< Bi-color Red/Green - Blue/Green 12-bit packed
    BiColorRGBG8,  //!< Bi-color Red/Green - Blue/Green 8-bit
    Confidence1,  //!< Confidence 1-bit unpacked
    Confidence16,  //!< Confidence 16-bit
    Confidence1p,  //!< Confidence 1-bit packed
    Confidence32f,  //!< Confidence 32-bit floating point
    Confidence8,  //!< Confidence 8-bit
    Coord3D_A10p,  //!< 3D coordinate A 10-bit packed
    Coord3D_A12p,  //!< 3D coordinate A 12-bit packed
    Coord3D_A16,  //!< 3D coordinate A 16-bit
    Coord3D_A32f,  //!< 3D coordinate A 32-bit floating point
    Coord3D_A8,  //!< 3D coordinate A 8-bit
    Coord3D_ABC10p,  //!< 3D coordinate A-B-C 10-bit packed
    Coord3D_ABC10p_Planar,  //!< 3D coordinate A-B-C 10-bit packed planar
    Coord3D_ABC12p,  //!< 3D coordinate A-B-C 12-bit packed
    Coord3D_ABC12p_Planar,  //!< 3D coordinate A-B-C 12-bit packed planar
    Coord3D_ABC16,  //!< 3D coordinate A-B-C 16-bit
    Coord3D_ABC16_Planar,  //!< 3D coordinate A-B-C 16-bit planar
    Coord3D_ABC32f,  //!< 3D coordinate A-B-C 32-bit floating point
    Coord3D_ABC32f_Planar,  //!< 3D coordinate A-B-C 32-bit floating point planar
    Coord3D_ABC8,  //!< 3D coordinate A-B-C 8-bit
    Coord3D_ABC8_Planar,  //!< 3D coordinate A-B-C 8-bit planar
    Coord3D_AC10p,  //!< 3D coordinate A-C 10-bit packed
    Coord3D_AC10p_Planar,  //!< 3D coordinate A-C 10-bit packed planar
    Coord3D_AC12p,  //!< 3D coordinate A-C 12-bit packed
    Coord3D_AC12p_Planar,  //!< 3D coordinate A-C 12-bit packed planar
    Coord3D_AC16,  //!< 3D coordinate A-C 16-bit
    Coord3D_AC16_Planar,  //!< 3D coordinate A-C 16-bit planar
    Coord3D_AC32f,  //!< 3D coordinate A-C 32-bit floating point
    Coord3D_AC32f_Planar,  //!< 3D coordinate A-C 32-bit floating point planar
    Coord3D_AC8,  //!< 3D coordinate A-C 8-bit
    Coord3D_AC8_Planar,  //!< 3D coordinate A-C 8-bit planar
    Coord3D_B10p,  //!< 3D coordinate B 10-bit packed
    Coord3D_B12p,  //!< 3D coordinate B 12-bit packed
    Coord3D_B16,  //!< 3D coordinate B 16-bit
    Coord3D_B32f,  //!< 3D coordinate B 32-bit floating point
    Coord3D_B8,  //!< 3D coordinate B 8-bit
    Coord3D_C10p,  //!< 3D coordinate C 10-bit packed
    Coord3D_C12p,  //!< 3D coordinate C 12-bit packed
    Coord3D_C16,  //!< 3D coordinate C 16-bit
    Coord3D_C32f,  //!< 3D coordinate C 32-bit floating point
    Coord3D_C8,  //!< 3D coordinate C 8-bit
    Data16,  //!< Data 16-bit
    Data16s,  //!< Data 16-bit signed
    Data32,  //!< Data 32-bit
    Data32f,  //!< Data 32-bit floating point
    Data32s,  //!< Data 32-bit signed
    Data64,  //!< Data 64-bit
    Data64f,  //!< Data 64-bit floating point
    Data64s,  //!< Data 64-bit signed
    Data8,  //!< Data 8-bit
    Data8s,  //!< Data 8-bit signed
    G10,  //!< Green 10-bit
    G12,  //!< Green 12-bit
    G16,  //!< Green 16-bit
    G8,  //!< Green 8-bit
    Mono10,  //!< Monochrome 10-bit unpacked
    Mono10Packed,  //!< Mono 10 bit packed. AVAILABLE: Always.
    Mono10p,  //!< Monochrome 10-bit packed
    Mono12,  //!< Monochrome 12-bit unpacked
    Mono12Packed,  //!< Mono 12 bit packed. AVAILABLE: Always.
    Mono12p,  //!< Monochrome 12-bit packed
    Mono14,  //!< Monochrome 14-bit unpacked
    Mono14p,  //!< Monochrome 14-bit packed
    Mono16,  //!< Monochrome 16-bit
    Mono1p,  //!< Monochrome 1-bit packed
    Mono2p,  //!< Monochrome 2-bit packed
    Mono32,  //!< Monochrome 32-bit
    Mono4p,  //!< Monochrome 4-bit packed
    Mono8,  //!< Monochrome 8-bit
    Mono8s,  //!< Monochrome 8-bit signed
    R10,  //!< Red 10-bit
    R12,  //!< Red 12-bit
    R16,  //!< Red 16-bit
    R8,  //!< Red 8-bit
    RGB10,  //!< Red-Green-Blue 10-bit unpacked
    RGB10_Planar,  //!< Red-Green-Blue 10-bit unpacked planar
    RGB10p,  //!< Red-Green-Blue 10-bit packed
    RGB10p32,  //!< Red-Green-Blue 10-bit packed into 32-bit
    RGB12,  //!< Red-Green-Blue 12-bit unpacked
    RGB12_Planar,  //!< Red-Green-Blue 12-bit unpacked planar
    RGB12p,  //!< Red-Green-Blue 12-bit packed
    RGB14,  //!< Red-Green-Blue 14-bit unpacked
    RGB16,  //!< Red-Green-Blue 16-bit
    RGB16_Planar,  //!< Red-Green-Blue 16-bit planar
    RGB565p,  //!< Red-Green-Blue 5/6/5-bit packed
    RGB8,  //!< Red-Green-Blue 8-bit
    RGB8_Planar,  //!< Red-Green-Blue 8-bit planar
    RGBa10,  //!< Red-Green-Blue-alpha 10-bit unpacked
    RGBa10p,  //!< Red-Green-Blue-alpha 10-bit packed
    RGBa12,  //!< Red-Green-Blue-alpha 12-bit unpacked
    RGBa12p,  //!< Red-Green-Blue-alpha 12-bit packed
    RGBa14,  //!< Red-Green-Blue-alpha 14-bit unpacked
    RGBa16,  //!< Red-Green-Blue-alpha 16-bit
    RGBa8,  //!< Red-Green-Blue-alpha 8-bit
    SCF1WBWG10,  //!< Sparse Color Filter #1 White-Blue-White-Green 10-bit unpacked
    SCF1WBWG10p,  //!< Sparse Color Filter #1 White-Blue-White-Green 10-bit packed
    SCF1WBWG12,  //!< Sparse Color Filter #1 White-Blue-White-Green 12-bit unpacked
    SCF1WBWG12p,  //!< Sparse Color Filter #1 White-Blue-White-Green 12-bit packed
    SCF1WBWG14,  //!< Sparse Color Filter #1 White-Blue-White-Green 14-bit unpacked
    SCF1WBWG16,  //!< Sparse Color Filter #1 White-Blue-White-Green 16-bit unpacked
    SCF1WBWG8,  //!< Sparse Color Filter #1 White-Blue-White-Green 8-bit
    SCF1WGWB10,  //!< Sparse Color Filter #1 White-Green-White-Blue 10-bit unpacked
    SCF1WGWB10p,  //!< Sparse Color Filter #1 White-Green-White-Blue 10-bit packed
    SCF1WGWB12,  //!< Sparse Color Filter #1 White-Green-White-Blue 12-bit unpacked
    SCF1WGWB12p,  //!< Sparse Color Filter #1 White-Green-White-Blue 12-bit packed
    SCF1WGWB14,  //!< Sparse Color Filter #1 White-Green-White-Blue 14-bit unpacked
    SCF1WGWB16,  //!< Sparse Color Filter #1 White-Green-White-Blue 16-bit
    SCF1WGWB8,  //!< Sparse Color Filter #1 White-Green-White-Blue 8-bit
    SCF1WGWR10,  //!< Sparse Color Filter #1 White-Green-White-Red 10-bit unpacked
    SCF1WGWR10p,  //!< Sparse Color Filter #1 White-Green-White-Red 10-bit packed
    SCF1WGWR12,  //!< Sparse Color Filter #1 White-Green-White-Red 12-bit unpacked
    SCF1WGWR12p,  //!< Sparse Color Filter #1 White-Green-White-Red 12-bit packed
    SCF1WGWR14,  //!< Sparse Color Filter #1 White-Green-White-Red 14-bit unpacked
    SCF1WGWR16,  //!< Sparse Color Filter #1 White-Green-White-Red 16-bit
    SCF1WGWR8,  //!< Sparse Color Filter #1 White-Green-White-Red 8-bit
    SCF1WRWG10,  //!< Sparse Color Filter #1 White-Red-White-Green 10-bit unpacked
    SCF1WRWG10p,  //!< Sparse Color Filter #1 White-Red-White-Green 10-bit packed
    SCF1WRWG12,  //!< Sparse Color Filter #1 White-Red-White-Green 12-bit unpacked
    SCF1WRWG12p,  //!< Sparse Color Filter #1 White-Red-White-Green 12-bit packed
    SCF1WRWG14,  //!< Sparse Color Filter #1 White-Red-White-Green 14-bit unpacked
    SCF1WRWG16,  //!< Sparse Color Filter #1 White-Red-White-Green 16-bit
    SCF1WRWG8,  //!< Sparse Color Filter #1 White-Red-White-Green 8-bit
    YCbCr10_CbYCr,  //!< YCbCr 4:4:4 10-bit unpacked
    YCbCr10p_CbYCr,  //!< YCbCr 4:4:4 10-bit packed
    YCbCr12_CbYCr,  //!< YCbCr 4:4:4 12-bit unpacked
    YCbCr12p_CbYCr,  //!< YCbCr 4:4:4 12-bit packed
    YCbCr2020_10_CbYCr,  //!< YCbCr 4:4:4 10-bit unpacked BT.2020
    YCbCr2020_10p_CbYCr,  //!< YCbCr 4:4:4 10-bit packed BT.2020
    YCbCr2020_12_CbYCr,  //!< YCbCr 4:4:4 12-bit unpacked BT.2020
    YCbCr2020_12p_CbYCr,  //!< YCbCr 4:4:4 12-bit packed BT.2020
    YCbCr2020_411_8_CbYYCrYY,  //!< YCbCr 4:1:1 8-bit BT.2020
    YCbCr2020_422_10,  //!< YCbCr 4:2:2 10-bit unpacked BT.2020
    YCbCr2020_422_10_CbYCrY,  //!< YCbCr 4:2:2 10-bit unpacked BT.2020
    YCbCr2020_422_10p,  //!< YCbCr 4:2:2 10-bit packed BT.2020
    YCbCr2020_422_10p_CbYCrY,  //!< YCbCr 4:2:2 10-bit packed BT.2020
    YCbCr2020_422_12,  //!< YCbCr 4:2:2 12-bit unpacked BT.2020
    YCbCr2020_422_12_CbYCrY,  //!< YCbCr 4:2:2 12-bit unpacked BT.2020
    YCbCr2020_422_12p,  //!< YCbCr 4:2:2 12-bit packed BT.2020
    YCbCr2020_422_12p_CbYCrY,  //!< YCbCr 4:2:2 12-bit packed BT.2020
    YCbCr2020_422_8,  //!< YCbCr 4:2:2 8-bit BT.2020
    YCbCr2020_422_8_CbYCrY,  //!< YCbCr 4:2:2 8-bit BT.2020
    YCbCr2020_8_CbYCr,  //!< YCbCr 4:4:4 8-bit BT.2020
    YCbCr411_8,  //!< YCbCr 4:1:1 8-bit
    YCbCr411_8_CbYYCrYY,  //!< YCbCr 4:1:1 8-bit
    YCbCr420_8_YY_CbCr_Semiplanar,  //!< YCbCr 4:2:0 8-bit YY/CbCr Semiplanar
    YCbCr420_8_YY_CrCb_Semiplanar,  //!< YCbCr 4:2:0 8-bit YY/CrCb Semiplanar
    YCbCr422_10,  //!< YCbCr 4:2:2 10-bit unpacked
    YCbCr422_10_CbYCrY,  //!< YCbCr 4:2:2 10-bit unpacked
    YCbCr422_10p,  //!< YCbCr 4:2:2 10-bit packed
    YCbCr422_10p_CbYCrY,  //!< YCbCr 4:2:2 10-bit packed
    YCbCr422_12,  //!< YCbCr 4:2:2 12-bit unpacked
    YCbCr422_12_CbYCrY,  //!< YCbCr 4:2:2 12-bit unpacked
    YCbCr422_12p,  //!< YCbCr 4:2:2 12-bit packed
    YCbCr422_12p_CbYCrY,  //!< YCbCr 4:2:2 12-bit packed
    YCbCr422_8,  //!< YCbCr 4:2:2 8-bit
    YCbCr422_8_CbYCrY,  //!< YCbCr 4:2:2 8-bit
    YCbCr422_8_YY_CbCr_Semiplanar,  //!< YCbCr 4:2:2 8-bit YY/CbCr Semiplanar
    YCbCr422_8_YY_CrCb_Semiplanar,  //!< YCbCr 4:2:2 8-bit YY/CrCb Semiplanar
    YCbCr601_10_CbYCr,  //!< YCbCr 4:4:4 10-bit unpacked BT.601
    YCbCr601_10p_CbYCr,  //!< YCbCr 4:4:4 10-bit packed BT.601
    YCbCr601_12_CbYCr,  //!< YCbCr 4:4:4 12-bit unpacked BT.601
    YCbCr601_12p_CbYCr,  //!< YCbCr 4:4:4 12-bit packed BT.601
    YCbCr601_411_8_CbYYCrYY,  //!< YCbCr 4:1:1 8-bit BT.601
    YCbCr601_422_10,  //!< YCbCr 4:2:2 10-bit unpacked BT.601
    YCbCr601_422_10_CbYCrY,  //!< YCbCr 4:2:2 10-bit unpacked BT.601
    YCbCr601_422_10p,  //!< YCbCr 4:2:2 10-bit packed BT.601
    YCbCr601_422_10p_CbYCrY,  //!< YCbCr 4:2:2 10-bit packed BT.601
    YCbCr601_422_12,  //!< YCbCr 4:2:2 12-bit unpacked BT.601
    YCbCr601_422_12_CbYCrY,  //!< YCbCr 4:2:2 12-bit unpacked BT.601
    YCbCr601_422_12p,  //!< YCbCr 4:2:2 12-bit packed BT.601
    YCbCr601_422_12p_CbYCrY,  //!< YCbCr 4:2:2 12-bit packed BT.601
    YCbCr601_422_8,  //!< YCbCr 4:2:2 8-bit BT.601
    YCbCr601_422_8_CbYCrY,  //!< YCbCr 4:2:2 8-bit BT.601
    YCbCr601_8_CbYCr,  //!< YCbCr 4:4:4 8-bit BT.601
    YCbCr709_10_CbYCr,  //!< YCbCr 4:4:4 10-bit unpacked BT.709
    YCbCr709_10p_CbYCr,  //!< YCbCr 4:4:4 10-bit packed BT.709
    YCbCr709_12_CbYCr,  //!< YCbCr 4:4:4 12-bit unpacked BT.709
    YCbCr709_12p_CbYCr,  //!< YCbCr 4:4:4 12-bit packed BT.709
    YCbCr709_411_8_CbYYCrYY,  //!< YCbCr 4:1:1 8-bit BT.709
    YCbCr709_422_10,  //!< YCbCr 4:2:2 10-bit unpacked BT.709
    YCbCr709_422_10_CbYCrY,  //!< YCbCr 4:2:2 10-bit unpacked BT.709
    YCbCr709_422_10p,  //!< YCbCr 4:2:2 10-bit packed BT.709
    YCbCr709_422_10p_CbYCrY,  //!< YCbCr 4:2:2 10-bit packed BT.709
    YCbCr709_422_12,  //!< YCbCr 4:2:2 12-bit unpacked BT.709
    YCbCr709_422_12_CbYCrY,  //!< YCbCr 4:2:2 12-bit unpacked BT.709
    YCbCr709_422_12p,  //!< YCbCr 4:2:2 12-bit packed BT.709
    YCbCr709_422_12p_CbYCrY,  //!< YCbCr 4:2:2 12-bit packed BT.709
    YCbCr709_422_8,  //!< YCbCr 4:2:2 8-bit BT.709
    YCbCr709_422_8_CbYCrY,  //!< YCbCr 4:2:2 8-bit BT.709
    YCbCr709_8_CbYCr,  //!< YCbCr 4:4:4 8-bit BT.709
    YCbCr8,  //!< YCbCr 4:4:4 8-bit
    YCbCr8_CbYCr,  //!< YCbCr 4:4:4 8-bit
    YUV411Packed,  //!< YUV 411 8 bit packed.
    YUV411_8,  //!< YUV 411 8 bit. AVAILABLE: Always.
    YUV411_8_UYYVYY,  //!< YUV 4:1:1 8-bit
    YUV422Packed,  //!< YUV 422 8 bit packed.
    YUV422_8,  //!< YUV 4:2:2 8-bit
    YUV422_8_UYVY,  //!< YUV 4:2:2 8-bit
    YUV444Packed,  //!< YUV 444 8 bit packed.
    YUV8,  //!< YUV 8 bit. AVAILABLE: Always.
    YUV8_UYV  //!< YUV 4:4:4 8-bit
};

/**
\class      CPixelFormat
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature PixelFormat
*/
class NEOAPI_CPP_DECL CPixelFormat : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CPixelFormat(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CPixelFormat object
    */
    CPixelFormat(const CPixelFormat& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CPixelFormat() {}
    /**
        \brief      Assignment operator
        \param      object The CPixelFormat object to assign.
        \return     Object reference with the value set.
    */
    const CPixelFormat& operator = (const CPixelFormat& object);
    /**
        \brief     Get the current value.
        \return    The value as PixelFormat
    */
    operator PixelFormat() const;
    /**
        \brief     Set the current value.
        \param     value The PixelFormat value to be written.
        \return    The CPixelFormat object
    */
    CPixelFormat& operator = (PixelFormat value);
    /**
        \brief     Set the current value.
        \param     value The PixelFormat value to be written.
        \return    The CPixelFormat object
    */
    CPixelFormat& Set(PixelFormat value);
    /**
        \brief     Get the current value.
        \return    The value as PixelFormat
    */
    PixelFormat Get() const;
};

/**
\brief Valid values for PtpClockAccuracy
\ingroup    GenICamFeatures
 */
enum class PtpClockAccuracy {
    AlternatePTPProfile = 0,  //!< Alternate PTP Profile
    GreaterThan10s,  //!< Greater Than 10s
    Reserved,  //!< Reserved
    Unknown,  //!< Unknown
    Within100ms,  //!< Within 100ms
    Within100ns,  //!< Within 100ns
    Within100us,  //!< Within 100us
    Within10ms,  //!< Within 10ms
    Within10s,  //!< Within 10s
    Within10us,  //!< Within 10us
    Within1ms,  //!< Within 1ms
    Within1s,  //!< Within 1s
    Within1us,  //!< Within 1us
    Within250ms,  //!< Within 250ms
    Within250ns,  //!< Within 250ns
    Within250us,  //!< Within 250us
    Within25ms,  //!< Within 25ms
    Within25ns,  //!< Within 25ns
    Within25us,  //!< Within 25us
    Within2p5ms,  //!< Within 2p 5ms
    Within2p5us  //!< Within 2p5us
};

/**
\class      CPtpClockAccuracy
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature PtpClockAccuracy
*/
class NEOAPI_CPP_DECL CPtpClockAccuracy : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CPtpClockAccuracy(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CPtpClockAccuracy object
    */
    CPtpClockAccuracy(const CPtpClockAccuracy& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CPtpClockAccuracy() {}
    /**
        \brief      Assignment operator
        \param      object The CPtpClockAccuracy object to assign.
        \return     Object reference with the value set.
    */
    const CPtpClockAccuracy& operator = (const CPtpClockAccuracy& object);
    /**
        \brief     Get the current value.
        \return    The value as PtpClockAccuracy
    */
    operator PtpClockAccuracy() const;
    /**
        \brief     Set the current value.
        \param     value The PtpClockAccuracy value to be written.
        \return    The CPtpClockAccuracy object
    */
    CPtpClockAccuracy& operator = (PtpClockAccuracy value);
    /**
        \brief     Set the current value.
        \param     value The PtpClockAccuracy value to be written.
        \return    The CPtpClockAccuracy object
    */
    CPtpClockAccuracy& Set(PtpClockAccuracy value);
    /**
        \brief     Get the current value.
        \return    The value as PtpClockAccuracy
    */
    PtpClockAccuracy Get() const;
};

/**
\brief Valid values for PtpClockOffsetMode
\ingroup    GenICamFeatures
 */
enum class PtpClockOffsetMode {
    Add = 0,  //!< Timestamp Offset will be added to cameras internal timestamp.
    Sub  //!< Timestamp Offset will be subtracted from cameras internal timestamp.
};

/**
\class      CPtpClockOffsetMode
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature PtpClockOffsetMode
*/
class NEOAPI_CPP_DECL CPtpClockOffsetMode : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CPtpClockOffsetMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CPtpClockOffsetMode object
    */
    CPtpClockOffsetMode(const CPtpClockOffsetMode& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CPtpClockOffsetMode() {}
    /**
        \brief      Assignment operator
        \param      object The CPtpClockOffsetMode object to assign.
        \return     Object reference with the value set.
    */
    const CPtpClockOffsetMode& operator = (const CPtpClockOffsetMode& object);
    /**
        \brief     Get the current value.
        \return    The value as PtpClockOffsetMode
    */
    operator PtpClockOffsetMode() const;
    /**
        \brief     Set the current value.
        \param     value The PtpClockOffsetMode value to be written.
        \return    The CPtpClockOffsetMode object
    */
    CPtpClockOffsetMode& operator = (PtpClockOffsetMode value);
    /**
        \brief     Set the current value.
        \param     value The PtpClockOffsetMode value to be written.
        \return    The CPtpClockOffsetMode object
    */
    CPtpClockOffsetMode& Set(PtpClockOffsetMode value);
    /**
        \brief     Get the current value.
        \return    The value as PtpClockOffsetMode
    */
    PtpClockOffsetMode Get() const;
};

/**
\brief Valid values for PtpDriftOffsetMode
\ingroup    GenICamFeatures
 */
enum class PtpDriftOffsetMode {
    Add = 0,  //!< Drift Offset will be added to cameras internal timestamp increment.
    Sub  //!< Drift Offset will be subtracted from cameras internal timestamp increment.
};

/**
\class      CPtpDriftOffsetMode
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature PtpDriftOffsetMode
*/
class NEOAPI_CPP_DECL CPtpDriftOffsetMode : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CPtpDriftOffsetMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CPtpDriftOffsetMode object
    */
    CPtpDriftOffsetMode(const CPtpDriftOffsetMode& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CPtpDriftOffsetMode() {}
    /**
        \brief      Assignment operator
        \param      object The CPtpDriftOffsetMode object to assign.
        \return     Object reference with the value set.
    */
    const CPtpDriftOffsetMode& operator = (const CPtpDriftOffsetMode& object);
    /**
        \brief     Get the current value.
        \return    The value as PtpDriftOffsetMode
    */
    operator PtpDriftOffsetMode() const;
    /**
        \brief     Set the current value.
        \param     value The PtpDriftOffsetMode value to be written.
        \return    The CPtpDriftOffsetMode object
    */
    CPtpDriftOffsetMode& operator = (PtpDriftOffsetMode value);
    /**
        \brief     Set the current value.
        \param     value The PtpDriftOffsetMode value to be written.
        \return    The CPtpDriftOffsetMode object
    */
    CPtpDriftOffsetMode& Set(PtpDriftOffsetMode value);
    /**
        \brief     Get the current value.
        \return    The value as PtpDriftOffsetMode
    */
    PtpDriftOffsetMode Get() const;
};

/**
\brief Valid values for PtpMode
\ingroup    GenICamFeatures
 */
enum class PtpMode {
    Auto = 0,  //!< The device uses the IEEE 1588 best master clock algorithm to determine which device is master, and which devices are slaves.
    Slave  //!< The clock of the device will act as a PTP slave only to align with a master device clock.
};

/**
\class      CPtpMode
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature PtpMode
*/
class NEOAPI_CPP_DECL CPtpMode : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CPtpMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CPtpMode object
    */
    CPtpMode(const CPtpMode& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CPtpMode() {}
    /**
        \brief      Assignment operator
        \param      object The CPtpMode object to assign.
        \return     Object reference with the value set.
    */
    const CPtpMode& operator = (const CPtpMode& object);
    /**
        \brief     Get the current value.
        \return    The value as PtpMode
    */
    operator PtpMode() const;
    /**
        \brief     Set the current value.
        \param     value The PtpMode value to be written.
        \return    The CPtpMode object
    */
    CPtpMode& operator = (PtpMode value);
    /**
        \brief     Set the current value.
        \param     value The PtpMode value to be written.
        \return    The CPtpMode object
    */
    CPtpMode& Set(PtpMode value);
    /**
        \brief     Get the current value.
        \return    The value as PtpMode
    */
    PtpMode Get() const;
};

/**
\brief Valid values for PtpServoStatus
\ingroup    GenICamFeatures
 */
enum class PtpServoStatus {
    DeviceSpecific = 0,  //!< Device - Specific
    Locked,  //!< Locked
    Unknown  //!< Unknown
};

/**
\class      CPtpServoStatus
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature PtpServoStatus
*/
class NEOAPI_CPP_DECL CPtpServoStatus : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CPtpServoStatus(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CPtpServoStatus object
    */
    CPtpServoStatus(const CPtpServoStatus& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CPtpServoStatus() {}
    /**
        \brief      Assignment operator
        \param      object The CPtpServoStatus object to assign.
        \return     Object reference with the value set.
    */
    const CPtpServoStatus& operator = (const CPtpServoStatus& object);
    /**
        \brief     Get the current value.
        \return    The value as PtpServoStatus
    */
    operator PtpServoStatus() const;
    /**
        \brief     Set the current value.
        \param     value The PtpServoStatus value to be written.
        \return    The CPtpServoStatus object
    */
    CPtpServoStatus& operator = (PtpServoStatus value);
    /**
        \brief     Set the current value.
        \param     value The PtpServoStatus value to be written.
        \return    The CPtpServoStatus object
    */
    CPtpServoStatus& Set(PtpServoStatus value);
    /**
        \brief     Get the current value.
        \return    The value as PtpServoStatus
    */
    PtpServoStatus Get() const;
};

/**
\brief Valid values for PtpStatus
\ingroup    GenICamFeatures
 */
enum class PtpStatus {
    Disabled = 0,  //!< Disabled
    Faulty,  //!< Faulty
    Initializing,  //!< Initializing
    Listening,  //!< Listening
    Master,  //!< Master
    Passive,  //!< Passive
    PreMaster,  //!< Pre Master
    Slave,  //!< Slave
    Uncalibrated  //!< Uncalibrated
};

/**
\class      CPtpStatus
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature PtpStatus
*/
class NEOAPI_CPP_DECL CPtpStatus : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CPtpStatus(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CPtpStatus object
    */
    CPtpStatus(const CPtpStatus& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CPtpStatus() {}
    /**
        \brief      Assignment operator
        \param      object The CPtpStatus object to assign.
        \return     Object reference with the value set.
    */
    const CPtpStatus& operator = (const CPtpStatus& object);
    /**
        \brief     Get the current value.
        \return    The value as PtpStatus
    */
    operator PtpStatus() const;
    /**
        \brief     Set the current value.
        \param     value The PtpStatus value to be written.
        \return    The CPtpStatus object
    */
    CPtpStatus& operator = (PtpStatus value);
    /**
        \brief     Set the current value.
        \param     value The PtpStatus value to be written.
        \return    The CPtpStatus object
    */
    CPtpStatus& Set(PtpStatus value);
    /**
        \brief     Get the current value.
        \return    The value as PtpStatus
    */
    PtpStatus Get() const;
};

/**
\brief Valid values for PtpSyncMessageIntervalStatus
\ingroup    GenICamFeatures
 */
enum class PtpSyncMessageIntervalStatus {
    Invalid = 0,  //!< Sync message interval is not valid. This may result in PtpServoStatus instability.
    Valid  //!< Sync message interval is valid and supported by the device.
};

/**
\class      CPtpSyncMessageIntervalStatus
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature PtpSyncMessageIntervalStatus
*/
class NEOAPI_CPP_DECL CPtpSyncMessageIntervalStatus : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CPtpSyncMessageIntervalStatus(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CPtpSyncMessageIntervalStatus object
    */
    CPtpSyncMessageIntervalStatus(const CPtpSyncMessageIntervalStatus& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CPtpSyncMessageIntervalStatus() {}
    /**
        \brief      Assignment operator
        \param      object The CPtpSyncMessageIntervalStatus object to assign.
        \return     Object reference with the value set.
    */
    const CPtpSyncMessageIntervalStatus& operator = (const CPtpSyncMessageIntervalStatus& object);
    /**
        \brief     Get the current value.
        \return    The value as PtpSyncMessageIntervalStatus
    */
    operator PtpSyncMessageIntervalStatus() const;
    /**
        \brief     Set the current value.
        \param     value The PtpSyncMessageIntervalStatus value to be written.
        \return    The CPtpSyncMessageIntervalStatus object
    */
    CPtpSyncMessageIntervalStatus& operator = (PtpSyncMessageIntervalStatus value);
    /**
        \brief     Set the current value.
        \param     value The PtpSyncMessageIntervalStatus value to be written.
        \return    The CPtpSyncMessageIntervalStatus object
    */
    CPtpSyncMessageIntervalStatus& Set(PtpSyncMessageIntervalStatus value);
    /**
        \brief     Get the current value.
        \return    The value as PtpSyncMessageIntervalStatus
    */
    PtpSyncMessageIntervalStatus Get() const;
};

/**
\brief Valid values for PtpTimestampOffsetMode
\ingroup    GenICamFeatures
 */
enum class PtpTimestampOffsetMode {
    RxAndTxOffset = 0,  //!< Timestamp Offset will be used for both Tx and Rx.
    RxOffset,  //!< Timestamp Offset will be used for Rx only.
    TxOffset  //!< Timestamp Offset will be used for Tx only.
};

/**
\class      CPtpTimestampOffsetMode
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature PtpTimestampOffsetMode
*/
class NEOAPI_CPP_DECL CPtpTimestampOffsetMode : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CPtpTimestampOffsetMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CPtpTimestampOffsetMode object
    */
    CPtpTimestampOffsetMode(const CPtpTimestampOffsetMode& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CPtpTimestampOffsetMode() {}
    /**
        \brief      Assignment operator
        \param      object The CPtpTimestampOffsetMode object to assign.
        \return     Object reference with the value set.
    */
    const CPtpTimestampOffsetMode& operator = (const CPtpTimestampOffsetMode& object);
    /**
        \brief     Get the current value.
        \return    The value as PtpTimestampOffsetMode
    */
    operator PtpTimestampOffsetMode() const;
    /**
        \brief     Set the current value.
        \param     value The PtpTimestampOffsetMode value to be written.
        \return    The CPtpTimestampOffsetMode object
    */
    CPtpTimestampOffsetMode& operator = (PtpTimestampOffsetMode value);
    /**
        \brief     Set the current value.
        \param     value The PtpTimestampOffsetMode value to be written.
        \return    The CPtpTimestampOffsetMode object
    */
    CPtpTimestampOffsetMode& Set(PtpTimestampOffsetMode value);
    /**
        \brief     Get the current value.
        \return    The value as PtpTimestampOffsetMode
    */
    PtpTimestampOffsetMode Get() const;
};

/**
\brief Valid values for ReadOutBuffering
\ingroup    GenICamFeatures
 */
enum class ReadOutBuffering {
    Buffered = 0,  //!< Uses 4 buffers.
    BufferedImages16,  //!< Uses 16 buffers.
    BufferedImages8,  //!< Uses 8 buffers.
    Live  //!< Uses 2 buffers.
};

/**
\class      CReadOutBuffering
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature ReadOutBuffering
*/
class NEOAPI_CPP_DECL CReadOutBuffering : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CReadOutBuffering(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CReadOutBuffering object
    */
    CReadOutBuffering(const CReadOutBuffering& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CReadOutBuffering() {}
    /**
        \brief      Assignment operator
        \param      object The CReadOutBuffering object to assign.
        \return     Object reference with the value set.
    */
    const CReadOutBuffering& operator = (const CReadOutBuffering& object);
    /**
        \brief     Get the current value.
        \return    The value as ReadOutBuffering
    */
    operator ReadOutBuffering() const;
    /**
        \brief     Set the current value.
        \param     value The ReadOutBuffering value to be written.
        \return    The CReadOutBuffering object
    */
    CReadOutBuffering& operator = (ReadOutBuffering value);
    /**
        \brief     Set the current value.
        \param     value The ReadOutBuffering value to be written.
        \return    The CReadOutBuffering object
    */
    CReadOutBuffering& Set(ReadOutBuffering value);
    /**
        \brief     Get the current value.
        \return    The value as ReadOutBuffering
    */
    ReadOutBuffering Get() const;
};

/**
\brief Valid values for ReadoutMode
\ingroup    GenICamFeatures
 */
enum class ReadoutMode {
    Overlapped = 0,  //!< Overlapped Readout.
    Sequential  //!< Sequential Readout.
};

/**
\class      CReadoutMode
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature ReadoutMode
*/
class NEOAPI_CPP_DECL CReadoutMode : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CReadoutMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CReadoutMode object
    */
    CReadoutMode(const CReadoutMode& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CReadoutMode() {}
    /**
        \brief      Assignment operator
        \param      object The CReadoutMode object to assign.
        \return     Object reference with the value set.
    */
    const CReadoutMode& operator = (const CReadoutMode& object);
    /**
        \brief     Get the current value.
        \return    The value as ReadoutMode
    */
    operator ReadoutMode() const;
    /**
        \brief     Set the current value.
        \param     value The ReadoutMode value to be written.
        \return    The CReadoutMode object
    */
    CReadoutMode& operator = (ReadoutMode value);
    /**
        \brief     Set the current value.
        \param     value The ReadoutMode value to be written.
        \return    The CReadoutMode object
    */
    CReadoutMode& Set(ReadoutMode value);
    /**
        \brief     Get the current value.
        \return    The value as ReadoutMode
    */
    ReadoutMode Get() const;
};

/**
\brief Valid values for RegionAcquisitionMode
\ingroup    GenICamFeatures
 */
enum class RegionAcquisitionMode {
    Memory = 0,  //!< Regions acquisition is in memory.
    Sensor  //!< Regions acquisition is in sensor.
};

/**
\class      CRegionAcquisitionMode
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature RegionAcquisitionMode
*/
class NEOAPI_CPP_DECL CRegionAcquisitionMode : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CRegionAcquisitionMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CRegionAcquisitionMode object
    */
    CRegionAcquisitionMode(const CRegionAcquisitionMode& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CRegionAcquisitionMode() {}
    /**
        \brief      Assignment operator
        \param      object The CRegionAcquisitionMode object to assign.
        \return     Object reference with the value set.
    */
    const CRegionAcquisitionMode& operator = (const CRegionAcquisitionMode& object);
    /**
        \brief     Get the current value.
        \return    The value as RegionAcquisitionMode
    */
    operator RegionAcquisitionMode() const;
    /**
        \brief     Set the current value.
        \param     value The RegionAcquisitionMode value to be written.
        \return    The CRegionAcquisitionMode object
    */
    CRegionAcquisitionMode& operator = (RegionAcquisitionMode value);
    /**
        \brief     Set the current value.
        \param     value The RegionAcquisitionMode value to be written.
        \return    The CRegionAcquisitionMode object
    */
    CRegionAcquisitionMode& Set(RegionAcquisitionMode value);
    /**
        \brief     Get the current value.
        \return    The value as RegionAcquisitionMode
    */
    RegionAcquisitionMode Get() const;
};

/**
\brief Valid values for RegionConfigurationMode
\ingroup    GenICamFeatures
 */
enum class RegionConfigurationMode {
    NonOverlapping = 0,  //!< Regions are not allowed to be overlapped.
    Overlapping  //!< Region can be overlapped.
};

/**
\class      CRegionConfigurationMode
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature RegionConfigurationMode
*/
class NEOAPI_CPP_DECL CRegionConfigurationMode : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CRegionConfigurationMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CRegionConfigurationMode object
    */
    CRegionConfigurationMode(const CRegionConfigurationMode& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CRegionConfigurationMode() {}
    /**
        \brief      Assignment operator
        \param      object The CRegionConfigurationMode object to assign.
        \return     Object reference with the value set.
    */
    const CRegionConfigurationMode& operator = (const CRegionConfigurationMode& object);
    /**
        \brief     Get the current value.
        \return    The value as RegionConfigurationMode
    */
    operator RegionConfigurationMode() const;
    /**
        \brief     Set the current value.
        \param     value The RegionConfigurationMode value to be written.
        \return    The CRegionConfigurationMode object
    */
    CRegionConfigurationMode& operator = (RegionConfigurationMode value);
    /**
        \brief     Set the current value.
        \param     value The RegionConfigurationMode value to be written.
        \return    The CRegionConfigurationMode object
    */
    CRegionConfigurationMode& Set(RegionConfigurationMode value);
    /**
        \brief     Get the current value.
        \return    The value as RegionConfigurationMode
    */
    RegionConfigurationMode Get() const;
};

/**
\brief Valid values for RegionMode
\ingroup    GenICamFeatures
 */
enum class RegionMode {
    Off = 0,  //!< Disable the usage of the Region.
    On  //!< Enable the usage of the Region.
};

/**
\class      CRegionMode
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature RegionMode
*/
class NEOAPI_CPP_DECL CRegionMode : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CRegionMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CRegionMode object
    */
    CRegionMode(const CRegionMode& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CRegionMode() {}
    /**
        \brief      Assignment operator
        \param      object The CRegionMode object to assign.
        \return     Object reference with the value set.
    */
    const CRegionMode& operator = (const CRegionMode& object);
    /**
        \brief     Get the current value.
        \return    The value as RegionMode
    */
    operator RegionMode() const;
    /**
        \brief     Set the current value.
        \param     value The RegionMode value to be written.
        \return    The CRegionMode object
    */
    CRegionMode& operator = (RegionMode value);
    /**
        \brief     Set the current value.
        \param     value The RegionMode value to be written.
        \return    The CRegionMode object
    */
    CRegionMode& Set(RegionMode value);
    /**
        \brief     Get the current value.
        \return    The value as RegionMode
    */
    RegionMode Get() const;
};

/**
\brief Valid values for RegionSelector
\ingroup    GenICamFeatures
 */
enum class RegionSelector {
    All = 0,  //!< Selected features will control all the regions at the same time.
    Region0,  //!< Selected feature will control the region 0.
    Region1,  //!< Selected feature will control the region 1.
    Region2,  //!< Selected feature will control the region 2.
    Region3,  //!< Selected feature will control the region 3.
    Region4,  //!< Selected feature will control the region 4.
    Region5,  //!< Selected feature will control the region 5.
    Region6,  //!< Selected feature will control the region 6.
    Region7,  //!< Selected feature will control the region 7.
    Scan3dExtraction0,  //!< Selected feature will control the Scan3dExtraction0 output Region.
    Scan3dExtraction1,  //!< Selected feature will control the Scan3dExtraction1 output Region.
    Scan3dExtraction2  //!< Selected feature will control the Scan3dExtraction2 output Region.
};

/**
\class      CRegionSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature RegionSelector
*/
class NEOAPI_CPP_DECL CRegionSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CRegionSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CRegionSelector object
    */
    CRegionSelector(const CRegionSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CRegionSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CRegionSelector object to assign.
        \return     Object reference with the value set.
    */
    const CRegionSelector& operator = (const CRegionSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as RegionSelector
    */
    operator RegionSelector() const;
    /**
        \brief     Set the current value.
        \param     value The RegionSelector value to be written.
        \return    The CRegionSelector object
    */
    CRegionSelector& operator = (RegionSelector value);
    /**
        \brief     Set the current value.
        \param     value The RegionSelector value to be written.
        \return    The CRegionSelector object
    */
    CRegionSelector& Set(RegionSelector value);
    /**
        \brief     Get the current value.
        \return    The value as RegionSelector
    */
    RegionSelector Get() const;
};

/**
\brief Valid values for RegionTransferMode
\ingroup    GenICamFeatures
 */
enum class RegionTransferMode {
    SeparateImages = 0,  //!< Each region is transfer as a separate image.
    StackedImage  //!< All regions are transfer as one stacked image.
};

/**
\class      CRegionTransferMode
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature RegionTransferMode
*/
class NEOAPI_CPP_DECL CRegionTransferMode : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CRegionTransferMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CRegionTransferMode object
    */
    CRegionTransferMode(const CRegionTransferMode& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CRegionTransferMode() {}
    /**
        \brief      Assignment operator
        \param      object The CRegionTransferMode object to assign.
        \return     Object reference with the value set.
    */
    const CRegionTransferMode& operator = (const CRegionTransferMode& object);
    /**
        \brief     Get the current value.
        \return    The value as RegionTransferMode
    */
    operator RegionTransferMode() const;
    /**
        \brief     Set the current value.
        \param     value The RegionTransferMode value to be written.
        \return    The CRegionTransferMode object
    */
    CRegionTransferMode& operator = (RegionTransferMode value);
    /**
        \brief     Set the current value.
        \param     value The RegionTransferMode value to be written.
        \return    The CRegionTransferMode object
    */
    CRegionTransferMode& Set(RegionTransferMode value);
    /**
        \brief     Get the current value.
        \return    The value as RegionTransferMode
    */
    RegionTransferMode Get() const;
};

/**
\brief Valid values for SIControl
\ingroup    GenICamFeatures
 */
enum class SIControl {
    StreamDisabled = 0,  //!< Stream is disabled.
    StreamEnabled  //!< Stream is enabled.
};

/**
\class      CSIControl
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature SIControl
*/
class NEOAPI_CPP_DECL CSIControl : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CSIControl(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CSIControl object
    */
    CSIControl(const CSIControl& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CSIControl() {}
    /**
        \brief      Assignment operator
        \param      object The CSIControl object to assign.
        \return     Object reference with the value set.
    */
    const CSIControl& operator = (const CSIControl& object);
    /**
        \brief     Get the current value.
        \return    The value as SIControl
    */
    operator SIControl() const;
    /**
        \brief     Set the current value.
        \param     value The SIControl value to be written.
        \return    The CSIControl object
    */
    CSIControl& operator = (SIControl value);
    /**
        \brief     Set the current value.
        \param     value The SIControl value to be written.
        \return    The CSIControl object
    */
    CSIControl& Set(SIControl value);
    /**
        \brief     Get the current value.
        \return    The value as SIControl
    */
    SIControl Get() const;
};

/**
\brief Valid values for SensorADDigitization
\ingroup    GenICamFeatures
 */
enum class SensorADDigitization {
    Bpp10 = 0,  //!< The sensors AD digitization is 10 bit per pixel.
    Bpp12,  //!< The sensors AD digitization is 12 bit per pixel.
    Bpp8  //!< The sensors AD digitization is 8 bit per pixel.
};

/**
\class      CSensorADDigitization
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature SensorADDigitization
*/
class NEOAPI_CPP_DECL CSensorADDigitization : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CSensorADDigitization(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CSensorADDigitization object
    */
    CSensorADDigitization(const CSensorADDigitization& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CSensorADDigitization() {}
    /**
        \brief      Assignment operator
        \param      object The CSensorADDigitization object to assign.
        \return     Object reference with the value set.
    */
    const CSensorADDigitization& operator = (const CSensorADDigitization& object);
    /**
        \brief     Get the current value.
        \return    The value as SensorADDigitization
    */
    operator SensorADDigitization() const;
    /**
        \brief     Set the current value.
        \param     value The SensorADDigitization value to be written.
        \return    The CSensorADDigitization object
    */
    CSensorADDigitization& operator = (SensorADDigitization value);
    /**
        \brief     Set the current value.
        \param     value The SensorADDigitization value to be written.
        \return    The CSensorADDigitization object
    */
    CSensorADDigitization& Set(SensorADDigitization value);
    /**
        \brief     Get the current value.
        \return    The value as SensorADDigitization
    */
    SensorADDigitization Get() const;
};

/**
\brief Valid values for SensorDigitizationTaps
\ingroup    GenICamFeatures
 */
enum class SensorDigitizationTaps {
    Eight = 0,  //!< 8 taps.
    Four,  //!< 4 taps.
    One,  //!< 1 tap.
    Ten,  //!< 10 taps.
    Three,  //!< 3 taps.
    Two  //!< 2 taps.
};

/**
\class      CSensorDigitizationTaps
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature SensorDigitizationTaps
*/
class NEOAPI_CPP_DECL CSensorDigitizationTaps : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CSensorDigitizationTaps(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CSensorDigitizationTaps object
    */
    CSensorDigitizationTaps(const CSensorDigitizationTaps& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CSensorDigitizationTaps() {}
    /**
        \brief      Assignment operator
        \param      object The CSensorDigitizationTaps object to assign.
        \return     Object reference with the value set.
    */
    const CSensorDigitizationTaps& operator = (const CSensorDigitizationTaps& object);
    /**
        \brief     Get the current value.
        \return    The value as SensorDigitizationTaps
    */
    operator SensorDigitizationTaps() const;
    /**
        \brief     Set the current value.
        \param     value The SensorDigitizationTaps value to be written.
        \return    The CSensorDigitizationTaps object
    */
    CSensorDigitizationTaps& operator = (SensorDigitizationTaps value);
    /**
        \brief     Set the current value.
        \param     value The SensorDigitizationTaps value to be written.
        \return    The CSensorDigitizationTaps object
    */
    CSensorDigitizationTaps& Set(SensorDigitizationTaps value);
    /**
        \brief     Get the current value.
        \return    The value as SensorDigitizationTaps
    */
    SensorDigitizationTaps Get() const;
};

/**
\brief Valid values for SensorShutterMode
\ingroup    GenICamFeatures
 */
enum class SensorShutterMode {
    Global = 0,  //!< The shutter opens and closes at the same time for all pixels. All the pixels are exposed for the same length of time at the same time.
    GlobalReset,  //!< The shutter opens at the same time for all pixels but ends in a sequential manner. The pixels are exposed for different lengths of time.
    Rolling  //!< The shutter opens and closes sequentially for groups (typically lines) of pixels. All the pixels are exposed for the same length of time but not at the same time.
};

/**
\class      CSensorShutterMode
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature SensorShutterMode
*/
class NEOAPI_CPP_DECL CSensorShutterMode : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CSensorShutterMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CSensorShutterMode object
    */
    CSensorShutterMode(const CSensorShutterMode& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CSensorShutterMode() {}
    /**
        \brief      Assignment operator
        \param      object The CSensorShutterMode object to assign.
        \return     Object reference with the value set.
    */
    const CSensorShutterMode& operator = (const CSensorShutterMode& object);
    /**
        \brief     Get the current value.
        \return    The value as SensorShutterMode
    */
    operator SensorShutterMode() const;
    /**
        \brief     Set the current value.
        \param     value The SensorShutterMode value to be written.
        \return    The CSensorShutterMode object
    */
    CSensorShutterMode& operator = (SensorShutterMode value);
    /**
        \brief     Set the current value.
        \param     value The SensorShutterMode value to be written.
        \return    The CSensorShutterMode object
    */
    CSensorShutterMode& Set(SensorShutterMode value);
    /**
        \brief     Get the current value.
        \return    The value as SensorShutterMode
    */
    SensorShutterMode Get() const;
};

/**
\brief Valid values for SensorTaps
\ingroup    GenICamFeatures
 */
enum class SensorTaps {
    Eight = 0,  //!< 8 taps.
    Four,  //!< 4 taps.
    One,  //!< 1 tap.
    Ten,  //!< 10 taps.
    Three,  //!< 3 taps.
    Two  //!< 2 taps.
};

/**
\class      CSensorTaps
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature SensorTaps
*/
class NEOAPI_CPP_DECL CSensorTaps : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CSensorTaps(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CSensorTaps object
    */
    CSensorTaps(const CSensorTaps& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CSensorTaps() {}
    /**
        \brief      Assignment operator
        \param      object The CSensorTaps object to assign.
        \return     Object reference with the value set.
    */
    const CSensorTaps& operator = (const CSensorTaps& object);
    /**
        \brief     Get the current value.
        \return    The value as SensorTaps
    */
    operator SensorTaps() const;
    /**
        \brief     Set the current value.
        \param     value The SensorTaps value to be written.
        \return    The CSensorTaps object
    */
    CSensorTaps& operator = (SensorTaps value);
    /**
        \brief     Set the current value.
        \param     value The SensorTaps value to be written.
        \return    The CSensorTaps object
    */
    CSensorTaps& Set(SensorTaps value);
    /**
        \brief     Get the current value.
        \return    The value as SensorTaps
    */
    SensorTaps Get() const;
};

/**
\brief Valid values for SequencerConfigurationMode
\ingroup    GenICamFeatures
 */
enum class SequencerConfigurationMode {
    Off = 0,  //!< Disables the sequencer configuration mode.
    On  //!< Enables the sequencer configuration mode.
};

/**
\class      CSequencerConfigurationMode
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature SequencerConfigurationMode
*/
class NEOAPI_CPP_DECL CSequencerConfigurationMode : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CSequencerConfigurationMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CSequencerConfigurationMode object
    */
    CSequencerConfigurationMode(const CSequencerConfigurationMode& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CSequencerConfigurationMode() {}
    /**
        \brief      Assignment operator
        \param      object The CSequencerConfigurationMode object to assign.
        \return     Object reference with the value set.
    */
    const CSequencerConfigurationMode& operator = (const CSequencerConfigurationMode& object);
    /**
        \brief     Get the current value.
        \return    The value as SequencerConfigurationMode
    */
    operator SequencerConfigurationMode() const;
    /**
        \brief     Set the current value.
        \param     value The SequencerConfigurationMode value to be written.
        \return    The CSequencerConfigurationMode object
    */
    CSequencerConfigurationMode& operator = (SequencerConfigurationMode value);
    /**
        \brief     Set the current value.
        \param     value The SequencerConfigurationMode value to be written.
        \return    The CSequencerConfigurationMode object
    */
    CSequencerConfigurationMode& Set(SequencerConfigurationMode value);
    /**
        \brief     Get the current value.
        \return    The value as SequencerConfigurationMode
    */
    SequencerConfigurationMode Get() const;
};

/**
\brief Valid values for SequencerFeatureSelector
\ingroup    GenICamFeatures
 */
enum class SequencerFeatureSelector {
    CounterDuration = 0,  //!< Sets the duration (or number of events) before the CounterEnd event is generated. AVAILABLE: Always
    CounterEventActivation,  //!< Selects the Activation mode Event Source signal. AVAILABLE: Always
    CounterEventSource,  //!< Select the events that will be the source to increment the Counter. AVAILABLE: Always
    CounterResetActivation,  //!< Selects the Activation mode of the Counter Reset Source signal. AVAILABLE: Always
    CounterResetSource,  //!< Selects the signals that will be the source to reset the Counter. AVAILABLE: Always
    DeviceSpecific,  //!< Device - Specific
    ExposureMode,  //!< Sets the operation mode of the Exposure (or shutter). AVAILABLE: Always
    ExposureTime,  //!< Returns the exposure time used to capture the image. AVAILABLE: Always
    Gain,  //!< Controls the selected gain as an absolute physical value. AVAILABLE: Always
    Height,  //!< Height of the image provided by the device (in pixels). AVAILABLE: Always
    OffsetX,  //!< Horizontal offset from the origin to the region of interest (in pixels). AVAILABLE: Always
    OffsetY,  //!< Vertical offset from the origin to the region of interest (in pixels). AVAILABLE: Always
    TriggerMode,  //!< Controls if the selected trigger is active. AVAILABLE: Always
    UserOutputValue,  //!< Sets the value of the bit selected by UserOutputSelector. AVAILABLE: Always
    UserOutputValueAll,  //!< It is subject to the UserOutputValueAllMask. AVAILABLE: Always
    Width  //!< Width of the image provided by the device (in pixels). AVAILABLE: Always
};

/**
\class      CSequencerFeatureSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature SequencerFeatureSelector
*/
class NEOAPI_CPP_DECL CSequencerFeatureSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CSequencerFeatureSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CSequencerFeatureSelector object
    */
    CSequencerFeatureSelector(const CSequencerFeatureSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CSequencerFeatureSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CSequencerFeatureSelector object to assign.
        \return     Object reference with the value set.
    */
    const CSequencerFeatureSelector& operator = (const CSequencerFeatureSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as SequencerFeatureSelector
    */
    operator SequencerFeatureSelector() const;
    /**
        \brief     Set the current value.
        \param     value The SequencerFeatureSelector value to be written.
        \return    The CSequencerFeatureSelector object
    */
    CSequencerFeatureSelector& operator = (SequencerFeatureSelector value);
    /**
        \brief     Set the current value.
        \param     value The SequencerFeatureSelector value to be written.
        \return    The CSequencerFeatureSelector object
    */
    CSequencerFeatureSelector& Set(SequencerFeatureSelector value);
    /**
        \brief     Get the current value.
        \return    The value as SequencerFeatureSelector
    */
    SequencerFeatureSelector Get() const;
};

/**
\brief Valid values for SequencerMode
\ingroup    GenICamFeatures
 */
enum class SequencerMode {
    Off = 0,  //!< Disables the sequencer.
    On  //!< Enables the sequencer.
};

/**
\class      CSequencerMode
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature SequencerMode
*/
class NEOAPI_CPP_DECL CSequencerMode : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CSequencerMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CSequencerMode object
    */
    CSequencerMode(const CSequencerMode& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CSequencerMode() {}
    /**
        \brief      Assignment operator
        \param      object The CSequencerMode object to assign.
        \return     Object reference with the value set.
    */
    const CSequencerMode& operator = (const CSequencerMode& object);
    /**
        \brief     Get the current value.
        \return    The value as SequencerMode
    */
    operator SequencerMode() const;
    /**
        \brief     Set the current value.
        \param     value The SequencerMode value to be written.
        \return    The CSequencerMode object
    */
    CSequencerMode& operator = (SequencerMode value);
    /**
        \brief     Set the current value.
        \param     value The SequencerMode value to be written.
        \return    The CSequencerMode object
    */
    CSequencerMode& Set(SequencerMode value);
    /**
        \brief     Get the current value.
        \return    The value as SequencerMode
    */
    SequencerMode Get() const;
};

/**
\brief Valid values for SequencerTriggerActivation
\ingroup    GenICamFeatures
 */
enum class SequencerTriggerActivation {
    AnyEdge = 0,  //!< Specifies that the trigger is considered valid on the falling or rising edge of the source signal.
    FallingEdge,  //!< Specifies that the trigger is considered valid on the falling edge of the source signal.
    LevelHigh,  //!< Specifies that the trigger is considered valid as long as the level of the source signal is high.
    LevelLow,  //!< Specifies that the trigger is considered valid as long as the level of the source signal is low.
    RisingEdge  //!< Specifies that the trigger is considered valid on the rising edge of the source signal.
};

/**
\class      CSequencerTriggerActivation
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature SequencerTriggerActivation
*/
class NEOAPI_CPP_DECL CSequencerTriggerActivation : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CSequencerTriggerActivation(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CSequencerTriggerActivation object
    */
    CSequencerTriggerActivation(const CSequencerTriggerActivation& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CSequencerTriggerActivation() {}
    /**
        \brief      Assignment operator
        \param      object The CSequencerTriggerActivation object to assign.
        \return     Object reference with the value set.
    */
    const CSequencerTriggerActivation& operator = (const CSequencerTriggerActivation& object);
    /**
        \brief     Get the current value.
        \return    The value as SequencerTriggerActivation
    */
    operator SequencerTriggerActivation() const;
    /**
        \brief     Set the current value.
        \param     value The SequencerTriggerActivation value to be written.
        \return    The CSequencerTriggerActivation object
    */
    CSequencerTriggerActivation& operator = (SequencerTriggerActivation value);
    /**
        \brief     Set the current value.
        \param     value The SequencerTriggerActivation value to be written.
        \return    The CSequencerTriggerActivation object
    */
    CSequencerTriggerActivation& Set(SequencerTriggerActivation value);
    /**
        \brief     Get the current value.
        \return    The value as SequencerTriggerActivation
    */
    SequencerTriggerActivation Get() const;
};

/**
\brief Valid values for SequencerTriggerSource
\ingroup    GenICamFeatures
 */
enum class SequencerTriggerSource {
    AcquisitionEnd = 0,  //!< Starts with the reception of the Acquisition End.
    AcquisitionStart,  //!< Starts with the reception of the Acquisition Start.
    AcquisitionTrigger,  //!< Starts with the reception of the Acquisition Trigger.
    AcquisitionTriggerMissed,  //!< Starts with the reception of the missed Acquisition Trigger.
    Action0,  //!< Starts with the assertion of the chosen action signal.
    Action1,  //!< Starts with the assertion of the chosen action signal.
    Action2,  //!< Starts with the assertion of the chosen action signal.
    CC1,  //!< Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink products only.
    CC2,  //!< Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink products only.
    CC3,  //!< Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink products only.
    CC4,  //!< Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink products only.
    Counter0End,  //!< Starts with the reception of the Counter End.
    Counter0Start,  //!< Starts with the reception of the Counter Start.
    Counter1End,  //!< Starts with the reception of the Counter End.
    Counter1Start,  //!< Starts with the reception of the Counter Start.
    Counter2End,  //!< Starts with the reception of the Counter End.
    Counter2Start,  //!< Starts with the reception of the Counter Start.
    Encoder0,  //!< Starts with the reception of the Encoder output signal.
    Encoder1,  //!< Starts with the reception of the Encoder output signal.
    Encoder2,  //!< Starts with the reception of the Encoder output signal.
    ExposureActive,  //!< Starts with the reception of the Exposure Active. AVAILABLE: Always
    ExposureEnd,  //!< Starts with the reception of the Exposure End.
    ExposureStart,  //!< Starts with the reception of the Exposure Start.
    FrameBurstEnd,  //!< Starts with the reception of the Frame Burst End.
    FrameBurstStart,  //!< Starts with the reception of the Frame Burst Start.
    FrameEnd,  //!< Starts with the reception of the Frame End.
    FrameStart,  //!< Starts with the reception of the Frame Start.
    FrameTrigger,  //!< Starts with the reception of the Frame Start Trigger.
    FrameTriggerMissed,  //!< Starts with the reception of the missed Frame Trigger.
    Line0,  //!< Starts when the specified TimerTriggerActivation condition is met on the chosen I/O Line.
    Line1,  //!< Starts when the specified TimerTriggerActivation condition is met on the chosen I/O Line.
    Line2,  //!< Starts when the specified TimerTriggerActivation condition is met on the chosen I/O Line.
    LinkTrigger0,  //!< Starts with the reception of the chosen Link Trigger.
    LinkTrigger1,  //!< Starts with the reception of the chosen Link Trigger.
    LinkTrigger2,  //!< Starts with the reception of the chosen Link Trigger.
    LogicBlock0,  //!< Starts with the reception of the Logic Block output signal.
    LogicBlock1,  //!< Starts with the reception of the Logic Block output signal.
    LogicBlock2,  //!< Starts with the reception of the Logic Block output signal.
    Off,  //!< Disables the sequencer trigger.
    ReadOutActive,  //!< Starts with the reception of the Read Out Active. AVAILABLE: Always
    SoftwareSignal0,  //!< Starts on the reception of the Software Signal.
    SoftwareSignal1,  //!< Starts on the reception of the Software Signal.
    SoftwareSignal2,  //!< Starts on the reception of the Software Signal.
    Timer0End,  //!< Starts with the reception of the Timer End.
    Timer0Start,  //!< Starts with the reception of the Timer Start.
    Timer1End,  //!< Starts with the reception of the Timer End.
    Timer1Start,  //!< Starts with the reception of the Timer Start.
    Timer2End,  //!< Starts with the reception of the Timer End.
    Timer2Start,  //!< Starts with the reception of the Timer Start.
    UserOutput0,  //!< Specifies which User Output bit signal to use as internal source for the trigger.
    UserOutput1,  //!< Specifies which User Output bit signal to use as internal source for the trigger.
    UserOutput2  //!< Specifies which User Output bit signal to use as internal source for the trigger.
};

/**
\class      CSequencerTriggerSource
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature SequencerTriggerSource
*/
class NEOAPI_CPP_DECL CSequencerTriggerSource : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CSequencerTriggerSource(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CSequencerTriggerSource object
    */
    CSequencerTriggerSource(const CSequencerTriggerSource& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CSequencerTriggerSource() {}
    /**
        \brief      Assignment operator
        \param      object The CSequencerTriggerSource object to assign.
        \return     Object reference with the value set.
    */
    const CSequencerTriggerSource& operator = (const CSequencerTriggerSource& object);
    /**
        \brief     Get the current value.
        \return    The value as SequencerTriggerSource
    */
    operator SequencerTriggerSource() const;
    /**
        \brief     Set the current value.
        \param     value The SequencerTriggerSource value to be written.
        \return    The CSequencerTriggerSource object
    */
    CSequencerTriggerSource& operator = (SequencerTriggerSource value);
    /**
        \brief     Set the current value.
        \param     value The SequencerTriggerSource value to be written.
        \return    The CSequencerTriggerSource object
    */
    CSequencerTriggerSource& Set(SequencerTriggerSource value);
    /**
        \brief     Get the current value.
        \return    The value as SequencerTriggerSource
    */
    SequencerTriggerSource Get() const;
};

/**
\brief Valid values for ShadingSelector
\ingroup    GenICamFeatures
 */
enum class ShadingSelector {
    Pixel0 = 0,  //!< The shading port address for pixel 0 is selected.
    Pixel1  //!< The shading port address for pixel 1 is selected.
};

/**
\class      CShadingSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature ShadingSelector
*/
class NEOAPI_CPP_DECL CShadingSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CShadingSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CShadingSelector object
    */
    CShadingSelector(const CShadingSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CShadingSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CShadingSelector object to assign.
        \return     Object reference with the value set.
    */
    const CShadingSelector& operator = (const CShadingSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as ShadingSelector
    */
    operator ShadingSelector() const;
    /**
        \brief     Set the current value.
        \param     value The ShadingSelector value to be written.
        \return    The CShadingSelector object
    */
    CShadingSelector& operator = (ShadingSelector value);
    /**
        \brief     Set the current value.
        \param     value The ShadingSelector value to be written.
        \return    The CShadingSelector object
    */
    CShadingSelector& Set(ShadingSelector value);
    /**
        \brief     Get the current value.
        \return    The value as ShadingSelector
    */
    ShadingSelector Get() const;
};

/**
\brief Valid values for SharpeningMode
\ingroup    GenICamFeatures
 */
enum class SharpeningMode {
    ActiveNoiseReduction = 0,  //!< Sharpening is enabled in active noise reduction mode
    AdaptiveSharpening,  //!< Sharpening is enabled in adaptive sharpening mode.
    GlobalSharpening,  //!< Sharpening is enabled in global sharpening mode.
    Off  //!< Sharpening is disabled.
};

/**
\class      CSharpeningMode
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature SharpeningMode
*/
class NEOAPI_CPP_DECL CSharpeningMode : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CSharpeningMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CSharpeningMode object
    */
    CSharpeningMode(const CSharpeningMode& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CSharpeningMode() {}
    /**
        \brief      Assignment operator
        \param      object The CSharpeningMode object to assign.
        \return     Object reference with the value set.
    */
    const CSharpeningMode& operator = (const CSharpeningMode& object);
    /**
        \brief     Get the current value.
        \return    The value as SharpeningMode
    */
    operator SharpeningMode() const;
    /**
        \brief     Set the current value.
        \param     value The SharpeningMode value to be written.
        \return    The CSharpeningMode object
    */
    CSharpeningMode& operator = (SharpeningMode value);
    /**
        \brief     Set the current value.
        \param     value The SharpeningMode value to be written.
        \return    The CSharpeningMode object
    */
    CSharpeningMode& Set(SharpeningMode value);
    /**
        \brief     Get the current value.
        \return    The value as SharpeningMode
    */
    SharpeningMode Get() const;
};

/**
\brief Valid values for SourceID
\ingroup    GenICamFeatures
 */
enum class SourceID {
    Sensor1 = 0,  //!< Sesnor 1.
    Sensor2  //!< Sensor 2.
};

/**
\class      CSourceID
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature SourceID
*/
class NEOAPI_CPP_DECL CSourceID : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CSourceID(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CSourceID object
    */
    CSourceID(const CSourceID& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CSourceID() {}
    /**
        \brief      Assignment operator
        \param      object The CSourceID object to assign.
        \return     Object reference with the value set.
    */
    const CSourceID& operator = (const CSourceID& object);
    /**
        \brief     Get the current value.
        \return    The value as SourceID
    */
    operator SourceID() const;
    /**
        \brief     Set the current value.
        \param     value The SourceID value to be written.
        \return    The CSourceID object
    */
    CSourceID& operator = (SourceID value);
    /**
        \brief     Set the current value.
        \param     value The SourceID value to be written.
        \return    The CSourceID object
    */
    CSourceID& Set(SourceID value);
    /**
        \brief     Get the current value.
        \return    The value as SourceID
    */
    SourceID Get() const;
};

/**
\brief Valid values for SourceSelector
\ingroup    GenICamFeatures
 */
enum class SourceSelector {
    All = 0,  //!< Selects all the data sources.
    Source0,  //!< Selects the data source 0.
    Source1,  //!< Selects the data source 1.
    Source2  //!< Selects the data source 2.
};

/**
\class      CSourceSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature SourceSelector
*/
class NEOAPI_CPP_DECL CSourceSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CSourceSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CSourceSelector object
    */
    CSourceSelector(const CSourceSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CSourceSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CSourceSelector object to assign.
        \return     Object reference with the value set.
    */
    const CSourceSelector& operator = (const CSourceSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as SourceSelector
    */
    operator SourceSelector() const;
    /**
        \brief     Set the current value.
        \param     value The SourceSelector value to be written.
        \return    The CSourceSelector object
    */
    CSourceSelector& operator = (SourceSelector value);
    /**
        \brief     Set the current value.
        \param     value The SourceSelector value to be written.
        \return    The CSourceSelector object
    */
    CSourceSelector& Set(SourceSelector value);
    /**
        \brief     Get the current value.
        \return    The value as SourceSelector
    */
    SourceSelector Get() const;
};

/**
\brief Valid values for SwitchPortSelector
\ingroup    GenICamFeatures
 */
enum class SwitchPortSelector {
    Port0 = 0,  //!< Selects port 0.
    Port1,  //!< Selects port 1.
    Port2,  //!< Selects port 2.
    Port3,  //!< Selects port 3.
    Port4,  //!< Selects port 4.
    Port5  //!< Selects port 5.
};

/**
\class      CSwitchPortSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature SwitchPortSelector
*/
class NEOAPI_CPP_DECL CSwitchPortSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CSwitchPortSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CSwitchPortSelector object
    */
    CSwitchPortSelector(const CSwitchPortSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CSwitchPortSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CSwitchPortSelector object to assign.
        \return     Object reference with the value set.
    */
    const CSwitchPortSelector& operator = (const CSwitchPortSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as SwitchPortSelector
    */
    operator SwitchPortSelector() const;
    /**
        \brief     Set the current value.
        \param     value The SwitchPortSelector value to be written.
        \return    The CSwitchPortSelector object
    */
    CSwitchPortSelector& operator = (SwitchPortSelector value);
    /**
        \brief     Set the current value.
        \param     value The SwitchPortSelector value to be written.
        \return    The CSwitchPortSelector object
    */
    CSwitchPortSelector& Set(SwitchPortSelector value);
    /**
        \brief     Get the current value.
        \return    The value as SwitchPortSelector
    */
    SwitchPortSelector Get() const;
};

/**
\brief Valid values for TestPattern
\ingroup    GenICamFeatures
 */
enum class TestPattern {
    Black = 0,  //!< Image is filled with the darkest possible image.
    ColorBar,  //!< Image is filled with stripes of color including White, Black, Red, Green, Blue, Cyan, Magenta and Yellow.
    FrameCounter,  //!< A frame counter is superimposed on the live image.
    GreyDiagonalRamp,  //!< Image is filled diagonally with an image that goes from the darkest possible value to the brightest. AVAILABLE: Always
    GreyDiagonalRampHorizontalAndVerticalLineMoving,  //!< Image is filled diagonally with an image that goes from the darkest possible value to the brightest with moving horizontal and vertical lines. AVAILABLE: Always
    GreyDiagonalRampHorizontalLineMoving,  //!< Image is filled diagonally with an image that goes from the darkest possible value to the brightest with moving horizontal lines. AVAILABLE: Always
    GreyDiagonalRampVerticalLineMoving,  //!< Image is filled diagonally with an image that goes from the darkest possible value to the brightest with moving vertical lines. AVAILABLE: Always
    GreyDiagonalRampWithLineMoving,  //!< Image is filled diagonally with an image that goes from the darkest possible value to the brightest with moving lines. AVAILABLE: Always
    GreyHorizontalRamp,  //!< Image is filled horizontally with an image that goes from the darkest possible value to the brightest.
    GreyHorizontalRampHorizontalAndVerticalLineMoving,  //!< Image is filled horizontally with an image that goes from the darkest possible value to the brightest with moving horizontal and vertical lines. AVAILABLE: Always
    GreyHorizontalRampHorizontalLineMoving,  //!< Image is filled horizontally with an image that goes from the darkest possible value to the brightest with moving horizontal lines. AVAILABLE: Always
    GreyHorizontalRampMoving,  //!< Image is filled horizontally with an image that goes from the darkest possible value to the brightest and that moves horizontally from left to right at each frame.
    GreyHorizontalRampVerticalLineMoving,  //!< Image is filled horizontally with an image that goes from the darkest possible value to the brightest with moving vertical lines. AVAILABLE: Always
    GreyVerticalRamp,  //!< Image is filled vertically with an image that goes from the darkest possible value to the brightest.
    GreyVerticalRampHorizontalAndVerticalLineMoving,  //!< Image is filled vertically with an image that goes from the darkest possible value to the brightest with moving horizontal and vertical lines. AVAILABLE: Always
    GreyVerticalRampHorizontalLineMoving,  //!< Image is filled vertically with an image that goes from the darkest possible value to the brightest with moving horizontal lines. AVAILABLE: Always
    GreyVerticalRampMoving,  //!< Image is filled vertically with an image that goes from the darkest possible value to the brightest and that moves vertically from top to bottom at each frame.
    GreyVerticalRampVerticalLineMoving,  //!< Image is filled vertically with an image that goes from the darkest possible value to the brightest with moving vertical lines. AVAILABLE: Always
    HorizontalAndVerticalLineMoving,  //!< Image is filled with moving horizontal and vertical lines. AVAILABLE: Always
    HorizontalLineMoving,  //!< A moving horizontal line is superimposed on the live image.
    Off,  //!< Image is coming from the sensor.
    VerticalLineMoving,  //!< A moving vertical line is superimposed on the live image.
    White  //!< Image is filled with the brightest possible image.
};

/**
\class      CTestPattern
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature TestPattern
*/
class NEOAPI_CPP_DECL CTestPattern : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CTestPattern(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CTestPattern object
    */
    CTestPattern(const CTestPattern& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CTestPattern() {}
    /**
        \brief      Assignment operator
        \param      object The CTestPattern object to assign.
        \return     Object reference with the value set.
    */
    const CTestPattern& operator = (const CTestPattern& object);
    /**
        \brief     Get the current value.
        \return    The value as TestPattern
    */
    operator TestPattern() const;
    /**
        \brief     Set the current value.
        \param     value The TestPattern value to be written.
        \return    The CTestPattern object
    */
    CTestPattern& operator = (TestPattern value);
    /**
        \brief     Set the current value.
        \param     value The TestPattern value to be written.
        \return    The CTestPattern object
    */
    CTestPattern& Set(TestPattern value);
    /**
        \brief     Get the current value.
        \return    The value as TestPattern
    */
    TestPattern Get() const;
};

/**
\brief Valid values for TestPatternGeneratorSelector
\ingroup    GenICamFeatures
 */
enum class TestPatternGeneratorSelector {
    ImageProcessor = 0,  //!< TestPattern feature will control the image processor. AVAILABLE: Always
    Region0,  //!< TestPattern feature will control the region 0 test pattern generator.
    Region1,  //!< TestPattern feature will control the region 1 test pattern generator.
    Region2,  //!< TestPattern feature will control the region 2 test pattern generator.
    Sensor,  //!< TestPattern feature will control the sensor's test pattern generator.
    SensorProcessor  //!< TestPattern feature will control the sensor processor. AVAILABLE: Always
};

/**
\class      CTestPatternGeneratorSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature TestPatternGeneratorSelector
*/
class NEOAPI_CPP_DECL CTestPatternGeneratorSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CTestPatternGeneratorSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CTestPatternGeneratorSelector object
    */
    CTestPatternGeneratorSelector(const CTestPatternGeneratorSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CTestPatternGeneratorSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CTestPatternGeneratorSelector object to assign.
        \return     Object reference with the value set.
    */
    const CTestPatternGeneratorSelector& operator = (const CTestPatternGeneratorSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as TestPatternGeneratorSelector
    */
    operator TestPatternGeneratorSelector() const;
    /**
        \brief     Set the current value.
        \param     value The TestPatternGeneratorSelector value to be written.
        \return    The CTestPatternGeneratorSelector object
    */
    CTestPatternGeneratorSelector& operator = (TestPatternGeneratorSelector value);
    /**
        \brief     Set the current value.
        \param     value The TestPatternGeneratorSelector value to be written.
        \return    The CTestPatternGeneratorSelector object
    */
    CTestPatternGeneratorSelector& Set(TestPatternGeneratorSelector value);
    /**
        \brief     Get the current value.
        \return    The value as TestPatternGeneratorSelector
    */
    TestPatternGeneratorSelector Get() const;
};

/**
\brief Valid values for TimerSelector
\ingroup    GenICamFeatures
 */
enum class TimerSelector {
    Timer0 = 0,  //!< Selects the Timer 0.
    Timer1,  //!< Selects the Timer 1.
    Timer2,  //!< Selects the Timer 2.
    Timer3  //!< Selects the Timer 3. AVAILABLE: Always
};

/**
\class      CTimerSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature TimerSelector
*/
class NEOAPI_CPP_DECL CTimerSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CTimerSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CTimerSelector object
    */
    CTimerSelector(const CTimerSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CTimerSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CTimerSelector object to assign.
        \return     Object reference with the value set.
    */
    const CTimerSelector& operator = (const CTimerSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as TimerSelector
    */
    operator TimerSelector() const;
    /**
        \brief     Set the current value.
        \param     value The TimerSelector value to be written.
        \return    The CTimerSelector object
    */
    CTimerSelector& operator = (TimerSelector value);
    /**
        \brief     Set the current value.
        \param     value The TimerSelector value to be written.
        \return    The CTimerSelector object
    */
    CTimerSelector& Set(TimerSelector value);
    /**
        \brief     Get the current value.
        \return    The value as TimerSelector
    */
    TimerSelector Get() const;
};

/**
\brief Valid values for TimerTriggerActivation
\ingroup    GenICamFeatures
 */
enum class TimerTriggerActivation {
    AnyEdge = 0,  //!< Starts counting on the Falling or Rising Edge of the selected trigger signal.
    FallingEdge,  //!< Starts counting on the Falling Edge of the selected trigger signal.
    LevelHigh,  //!< Counts as long as the selected trigger signal level is High.
    LevelLow,  //!< Counts as long as the selected trigger signal level is Low.
    RisingEdge  //!< Starts counting on the Rising Edge of the selected trigger signal.
};

/**
\class      CTimerTriggerActivation
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature TimerTriggerActivation
*/
class NEOAPI_CPP_DECL CTimerTriggerActivation : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CTimerTriggerActivation(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CTimerTriggerActivation object
    */
    CTimerTriggerActivation(const CTimerTriggerActivation& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CTimerTriggerActivation() {}
    /**
        \brief      Assignment operator
        \param      object The CTimerTriggerActivation object to assign.
        \return     Object reference with the value set.
    */
    const CTimerTriggerActivation& operator = (const CTimerTriggerActivation& object);
    /**
        \brief     Get the current value.
        \return    The value as TimerTriggerActivation
    */
    operator TimerTriggerActivation() const;
    /**
        \brief     Set the current value.
        \param     value The TimerTriggerActivation value to be written.
        \return    The CTimerTriggerActivation object
    */
    CTimerTriggerActivation& operator = (TimerTriggerActivation value);
    /**
        \brief     Set the current value.
        \param     value The TimerTriggerActivation value to be written.
        \return    The CTimerTriggerActivation object
    */
    CTimerTriggerActivation& Set(TimerTriggerActivation value);
    /**
        \brief     Get the current value.
        \return    The value as TimerTriggerActivation
    */
    TimerTriggerActivation Get() const;
};

/**
\brief Valid values for TimerTriggerSource
\ingroup    GenICamFeatures
 */
enum class TimerTriggerSource {
    AcquisitionEnd = 0,  //!< Starts with the reception of the Acquisition End.
    AcquisitionStart,  //!< Starts with the reception of the Acquisition Start.
    AcquisitionTrigger,  //!< Starts with the reception of the Acquisition Trigger.
    AcquisitionTriggerMissed,  //!< Starts with the reception of a missed Acquisition Trigger.
    Action0,  //!< Starts with the assertion of the chosen action signal.
    Action1,  //!< Starts with the assertion of the chosen action signal.
    Action2,  //!< Starts with the assertion of the chosen action signal.
    Counter0End,  //!< Starts with the reception of the Counter End.
    Counter0Start,  //!< Starts with the reception of the Counter Start.
    Counter1End,  //!< Starts with the reception of the Counter End.
    Counter1Start,  //!< Starts with the reception of the Counter Start.
    Counter2End,  //!< Starts with the reception of the Counter End.
    Counter2Start,  //!< Starts with the reception of the Counter Start.
    Encoder0,  //!< Starts with the reception of the Encoder output signal.
    Encoder1,  //!< Starts with the reception of the Encoder output signal.
    Encoder2,  //!< Starts with the reception of the Encoder output signal.
    ExposureEnd,  //!< Starts with the reception of the Exposure End.
    ExposureStart,  //!< Starts with the reception of the Exposure Start.
    FrameBurstEnd,  //!< Starts with the reception of the Frame Burst End.
    FrameBurstStart,  //!< Starts with the reception of the Frame Burst Start.
    FrameEnd,  //!< Starts with the reception of the Frame End.
    FrameStart,  //!< Starts with the reception of the Frame Start.
    FrameTransferSkipped,  //!< FrameTransferSkipped AVAILABLE: Always
    FrameTrigger,  //!< Starts with the reception of the Frame Start Trigger.
    FrameTriggerMissed,  //!< Starts with the reception of a missed Frame Trigger.
    Line0,  //!< Starts when the specified TimerTriggerActivation condition is met on the chosen I/O Line.
    Line1,  //!< Starts when the specified TimerTriggerActivation condition is met on the chosen I/O Line.
    Line2,  //!< Starts when the specified TimerTriggerActivation condition is met on the chosen I/O Line.
    LineEnd,  //!< Starts with the reception of the Line End.
    LineStart,  //!< Starts with the reception of the Line Start.
    LineTrigger,  //!< Starts with the reception of the Line Start Trigger.
    LineTriggerMissed,  //!< Starts with the reception of a missed Line Trigger.
    LinkTrigger0,  //!< Starts with the reception of the chosen Link Trigger.
    LinkTrigger1,  //!< Starts with the reception of the chosen Link Trigger.
    LinkTrigger2,  //!< Starts with the reception of the chosen Link Trigger.
    LogicBlock0,  //!< Starts with the reception of the Logic Block output signal.
    LogicBlock1,  //!< Starts with the reception of the Logic Block output signal.
    LogicBlock2,  //!< Starts with the reception of the Logic Block output signal.
    Off,  //!< Disables the Timer trigger.
    Software,  //!< Starts when the trigger was generated by the software. AVAILABLE: Always
    SoftwareSignal0,  //!< Starts on the reception of the Software Signal.
    SoftwareSignal1,  //!< Starts on the reception of the Software Signal.
    SoftwareSignal2,  //!< Starts on the reception of the Software Signal.
    Timer0End,  //!< Starts with the reception of the Timer End. Note that a timer can retrigger itself to achieve a free running Timer.
    Timer0Start,  //!< Starts with the reception of the Timer Start.
    Timer1End,  //!< Starts with the reception of the Timer End. Note that a timer can retrigger itself to achieve a free running Timer.
    Timer1Start,  //!< Starts with the reception of the Timer Start.
    Timer2End,  //!< Starts with the reception of the Timer End. Note that a timer can retrigger itself to achieve a free running Timer.
    Timer2Start,  //!< Starts with the reception of the Timer Start.
    TriggerSkipped,  //!< Starts when a trigger was skipped. AVAILABLE: Always
    UserOutput0,  //!< Specifies which User Output bit signal to use as internal source for the trigger.
    UserOutput1,  //!< Specifies which User Output bit signal to use as internal source for the trigger.
    UserOutput2  //!< Specifies which User Output bit signal to use as internal source for the trigger.
};

/**
\class      CTimerTriggerSource
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature TimerTriggerSource
*/
class NEOAPI_CPP_DECL CTimerTriggerSource : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CTimerTriggerSource(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CTimerTriggerSource object
    */
    CTimerTriggerSource(const CTimerTriggerSource& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CTimerTriggerSource() {}
    /**
        \brief      Assignment operator
        \param      object The CTimerTriggerSource object to assign.
        \return     Object reference with the value set.
    */
    const CTimerTriggerSource& operator = (const CTimerTriggerSource& object);
    /**
        \brief     Get the current value.
        \return    The value as TimerTriggerSource
    */
    operator TimerTriggerSource() const;
    /**
        \brief     Set the current value.
        \param     value The TimerTriggerSource value to be written.
        \return    The CTimerTriggerSource object
    */
    CTimerTriggerSource& operator = (TimerTriggerSource value);
    /**
        \brief     Set the current value.
        \param     value The TimerTriggerSource value to be written.
        \return    The CTimerTriggerSource object
    */
    CTimerTriggerSource& Set(TimerTriggerSource value);
    /**
        \brief     Get the current value.
        \return    The value as TimerTriggerSource
    */
    TimerTriggerSource Get() const;
};

/**
\brief Valid values for TransferControlMode
\ingroup    GenICamFeatures
 */
enum class TransferControlMode {
    Automatic = 0,  //!< Automatic
    Basic,  //!< Basic
    UserControlled  //!< User Controlled
};

/**
\class      CTransferControlMode
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature TransferControlMode
*/
class NEOAPI_CPP_DECL CTransferControlMode : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CTransferControlMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CTransferControlMode object
    */
    CTransferControlMode(const CTransferControlMode& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CTransferControlMode() {}
    /**
        \brief      Assignment operator
        \param      object The CTransferControlMode object to assign.
        \return     Object reference with the value set.
    */
    const CTransferControlMode& operator = (const CTransferControlMode& object);
    /**
        \brief     Get the current value.
        \return    The value as TransferControlMode
    */
    operator TransferControlMode() const;
    /**
        \brief     Set the current value.
        \param     value The TransferControlMode value to be written.
        \return    The CTransferControlMode object
    */
    CTransferControlMode& operator = (TransferControlMode value);
    /**
        \brief     Set the current value.
        \param     value The TransferControlMode value to be written.
        \return    The CTransferControlMode object
    */
    CTransferControlMode& Set(TransferControlMode value);
    /**
        \brief     Get the current value.
        \return    The value as TransferControlMode
    */
    TransferControlMode Get() const;
};

/**
\brief Valid values for TransferOperationMode
\ingroup    GenICamFeatures
 */
enum class TransferOperationMode {
    Continuous = 0,  //!< Continuous
    MultiBlock  //!< Multi Block
};

/**
\class      CTransferOperationMode
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature TransferOperationMode
*/
class NEOAPI_CPP_DECL CTransferOperationMode : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CTransferOperationMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CTransferOperationMode object
    */
    CTransferOperationMode(const CTransferOperationMode& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CTransferOperationMode() {}
    /**
        \brief      Assignment operator
        \param      object The CTransferOperationMode object to assign.
        \return     Object reference with the value set.
    */
    const CTransferOperationMode& operator = (const CTransferOperationMode& object);
    /**
        \brief     Get the current value.
        \return    The value as TransferOperationMode
    */
    operator TransferOperationMode() const;
    /**
        \brief     Set the current value.
        \param     value The TransferOperationMode value to be written.
        \return    The CTransferOperationMode object
    */
    CTransferOperationMode& operator = (TransferOperationMode value);
    /**
        \brief     Set the current value.
        \param     value The TransferOperationMode value to be written.
        \return    The CTransferOperationMode object
    */
    CTransferOperationMode& Set(TransferOperationMode value);
    /**
        \brief     Get the current value.
        \return    The value as TransferOperationMode
    */
    TransferOperationMode Get() const;
};

/**
\brief Valid values for TransferSelector
\ingroup    GenICamFeatures
 */
enum class TransferSelector {
    All = 0,  //!< The transfer features control all the data streams simultaneously.
    Stream0,  //!< The transfer features control the data stream 0.
    Stream1,  //!< The transfer features control the data stream 1.
    Stream2,  //!< The transfer features control the data stream 2.
    Stream3,  //!< The transfer features control the data stream 3, used for memory part 3. AVAILABLE: Always
    Stream4  //!< The transfer features control the data stream 4, used for memory part 4. AVAILABLE: Always
};

/**
\class      CTransferSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature TransferSelector
*/
class NEOAPI_CPP_DECL CTransferSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CTransferSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CTransferSelector object
    */
    CTransferSelector(const CTransferSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CTransferSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CTransferSelector object to assign.
        \return     Object reference with the value set.
    */
    const CTransferSelector& operator = (const CTransferSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as TransferSelector
    */
    operator TransferSelector() const;
    /**
        \brief     Set the current value.
        \param     value The TransferSelector value to be written.
        \return    The CTransferSelector object
    */
    CTransferSelector& operator = (TransferSelector value);
    /**
        \brief     Set the current value.
        \param     value The TransferSelector value to be written.
        \return    The CTransferSelector object
    */
    CTransferSelector& Set(TransferSelector value);
    /**
        \brief     Get the current value.
        \return    The value as TransferSelector
    */
    TransferSelector Get() const;
};

/**
\brief Valid values for TransferStatusSelector
\ingroup    GenICamFeatures
 */
enum class TransferStatusSelector {
    Paused = 0,  //!< Data blocks transmission is suspended immediately.
    QueueOverflow,  //!< Data blocks queue is in overflow state.
    Stopped,  //!< Data blocks transmission is stopped.
    Stopping,  //!< Data blocks transmission is stopping. The current block transmission will be completed and the transfer state will stop.
    Streaming  //!< Data blocks are transmitted when enough data is available.
};

/**
\class      CTransferStatusSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature TransferStatusSelector
*/
class NEOAPI_CPP_DECL CTransferStatusSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CTransferStatusSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CTransferStatusSelector object
    */
    CTransferStatusSelector(const CTransferStatusSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CTransferStatusSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CTransferStatusSelector object to assign.
        \return     Object reference with the value set.
    */
    const CTransferStatusSelector& operator = (const CTransferStatusSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as TransferStatusSelector
    */
    operator TransferStatusSelector() const;
    /**
        \brief     Set the current value.
        \param     value The TransferStatusSelector value to be written.
        \return    The CTransferStatusSelector object
    */
    CTransferStatusSelector& operator = (TransferStatusSelector value);
    /**
        \brief     Set the current value.
        \param     value The TransferStatusSelector value to be written.
        \return    The CTransferStatusSelector object
    */
    CTransferStatusSelector& Set(TransferStatusSelector value);
    /**
        \brief     Get the current value.
        \return    The value as TransferStatusSelector
    */
    TransferStatusSelector Get() const;
};

/**
\brief Valid values for TriggerActivation
\ingroup    GenICamFeatures
 */
enum class TriggerActivation {
    AnyEdge = 0,  //!< Specifies that the trigger is considered valid on the falling or rising edge of the source signal.
    FallingEdge,  //!< Specifies that the trigger is considered valid on the falling edge of the source signal.
    LevelHigh,  //!< Specifies that the trigger is considered valid as long as the level of the source signal is high.
    LevelLow,  //!< Specifies that the trigger is considered valid as long as the level of the source signal is low.
    RisingEdge  //!< Specifies that the trigger is considered valid on the rising edge of the source signal.
};

/**
\class      CTriggerActivation
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature TriggerActivation
*/
class NEOAPI_CPP_DECL CTriggerActivation : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CTriggerActivation(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CTriggerActivation object
    */
    CTriggerActivation(const CTriggerActivation& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CTriggerActivation() {}
    /**
        \brief      Assignment operator
        \param      object The CTriggerActivation object to assign.
        \return     Object reference with the value set.
    */
    const CTriggerActivation& operator = (const CTriggerActivation& object);
    /**
        \brief     Get the current value.
        \return    The value as TriggerActivation
    */
    operator TriggerActivation() const;
    /**
        \brief     Set the current value.
        \param     value The TriggerActivation value to be written.
        \return    The CTriggerActivation object
    */
    CTriggerActivation& operator = (TriggerActivation value);
    /**
        \brief     Set the current value.
        \param     value The TriggerActivation value to be written.
        \return    The CTriggerActivation object
    */
    CTriggerActivation& Set(TriggerActivation value);
    /**
        \brief     Get the current value.
        \return    The value as TriggerActivation
    */
    TriggerActivation Get() const;
};

/**
\brief Valid values for TriggerMode
\ingroup    GenICamFeatures
 */
enum class TriggerMode {
    Off = 0,  //!< Disables the selected trigger.
    On  //!< Enable the selected trigger.
};

/**
\class      CTriggerMode
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature TriggerMode
*/
class NEOAPI_CPP_DECL CTriggerMode : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CTriggerMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CTriggerMode object
    */
    CTriggerMode(const CTriggerMode& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CTriggerMode() {}
    /**
        \brief      Assignment operator
        \param      object The CTriggerMode object to assign.
        \return     Object reference with the value set.
    */
    const CTriggerMode& operator = (const CTriggerMode& object);
    /**
        \brief     Get the current value.
        \return    The value as TriggerMode
    */
    operator TriggerMode() const;
    /**
        \brief     Set the current value.
        \param     value The TriggerMode value to be written.
        \return    The CTriggerMode object
    */
    CTriggerMode& operator = (TriggerMode value);
    /**
        \brief     Set the current value.
        \param     value The TriggerMode value to be written.
        \return    The CTriggerMode object
    */
    CTriggerMode& Set(TriggerMode value);
    /**
        \brief     Get the current value.
        \return    The value as TriggerMode
    */
    TriggerMode Get() const;
};

/**
\brief Valid values for TriggerOverlap
\ingroup    GenICamFeatures
 */
enum class TriggerOverlap {
    Off = 0,  //!< No trigger overlap is permitted.
    PreviousFrame,  //!< Trigger is accepted (latched) at any time during the capture of the previous frame.
    PreviousLine,  //!< Trigger is accepted (latched) at any time during the capture of the previous line.
    ReadOut  //!< Trigger is accepted immediately after the exposure period.
};

/**
\class      CTriggerOverlap
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature TriggerOverlap
*/
class NEOAPI_CPP_DECL CTriggerOverlap : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CTriggerOverlap(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CTriggerOverlap object
    */
    CTriggerOverlap(const CTriggerOverlap& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CTriggerOverlap() {}
    /**
        \brief      Assignment operator
        \param      object The CTriggerOverlap object to assign.
        \return     Object reference with the value set.
    */
    const CTriggerOverlap& operator = (const CTriggerOverlap& object);
    /**
        \brief     Get the current value.
        \return    The value as TriggerOverlap
    */
    operator TriggerOverlap() const;
    /**
        \brief     Set the current value.
        \param     value The TriggerOverlap value to be written.
        \return    The CTriggerOverlap object
    */
    CTriggerOverlap& operator = (TriggerOverlap value);
    /**
        \brief     Set the current value.
        \param     value The TriggerOverlap value to be written.
        \return    The CTriggerOverlap object
    */
    CTriggerOverlap& Set(TriggerOverlap value);
    /**
        \brief     Get the current value.
        \return    The value as TriggerOverlap
    */
    TriggerOverlap Get() const;
};

/**
\brief Valid values for TriggerSelector
\ingroup    GenICamFeatures
 */
enum class TriggerSelector {
    AcquisitionActive = 0,  //!< Selects a trigger that controls the duration of the Acquisition of one or many frames. The Acquisition is activated when the trigger signal becomes active and terminated when it goes back to the inactive state.
    AcquisitionEnd,  //!< Selects a trigger that ends the Acquisition of one or many frames according to AcquisitionMode.
    AcquisitionStart,  //!< Selects a trigger that starts the Acquisition of one or many frames according to AcquisitionMode.
    ExposureActive,  //!< Selects a trigger controlling the duration of the exposure of one frame (or Line).
    ExposureEnd,  //!< Selects a trigger controlling the end of the exposure of one Frame (or Line).
    ExposureStart,  //!< Selects a trigger controlling the start of the exposure of one Frame (or Line).
    FrameActive,  //!< Selects a trigger controlling the duration of one frame (mainly used in linescan mode).
    FrameBurstActive,  //!< Selects a trigger controlling the duration of the capture of the bursts of frames in an acquisition.
    FrameBurstEnd,  //!< Selects a trigger ending the capture of the bursts of frames in an acquisition.
    FrameBurstStart,  //!< Selects a trigger starting the capture of the bursts of frames in an acquisition. AcquisitionBurstFrameCount controls the length of each burst unless a FrameBurstEnd trigger is active. The total number of frames captured is also conditioned by AcquisitionFrameCount if AcquisitionMode is MultiFrame.
    FrameEnd,  //!< Selects a trigger ending the capture of one frame (mainly used in linescan mode).
    FrameStart,  //!< Selects a trigger starting the capture of one frame.
    LineStart,  //!< Selects a trigger starting the capture of one Line of a Frame (mainly used in linescan mode).
    MultiSlopeExposureLimit1  //!< Selects a trigger controlling the first duration of a multi-slope exposure. Exposure is continued according to the pre-defined multi-slope settings.
};

/**
\class      CTriggerSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature TriggerSelector
*/
class NEOAPI_CPP_DECL CTriggerSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CTriggerSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CTriggerSelector object
    */
    CTriggerSelector(const CTriggerSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CTriggerSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CTriggerSelector object to assign.
        \return     Object reference with the value set.
    */
    const CTriggerSelector& operator = (const CTriggerSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as TriggerSelector
    */
    operator TriggerSelector() const;
    /**
        \brief     Set the current value.
        \param     value The TriggerSelector value to be written.
        \return    The CTriggerSelector object
    */
    CTriggerSelector& operator = (TriggerSelector value);
    /**
        \brief     Set the current value.
        \param     value The TriggerSelector value to be written.
        \return    The CTriggerSelector object
    */
    CTriggerSelector& Set(TriggerSelector value);
    /**
        \brief     Get the current value.
        \return    The value as TriggerSelector
    */
    TriggerSelector Get() const;
};

/**
\brief Valid values for TriggerSource
\ingroup    GenICamFeatures
 */
enum class TriggerSource {
    Action0 = 0,  //!< Specifies which Action command to use as internal source for the trigger.
    Action1,  //!< Specifies which Action command to use as internal source for the trigger.
    Action2,  //!< Specifies which Action command to use as internal source for the trigger.
    All,  //!< All trigger sources are active. AVAILABLE: (ExposureMode != TriggerWidth)
    CC1,  //!< Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink products only.
    CC2,  //!< Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink products only.
    CC3,  //!< Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink products only.
    CC4,  //!< Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink products only.
    Counter0End,  //!< Specifies which of the Counter signal to use as internal source for the trigger.
    Counter0Start,  //!< Specifies which of the Counter signal to use as internal source for the trigger.
    Counter1End,  //!< Specifies which of the Counter signal to use as internal source for the trigger.
    Counter1Start,  //!< Specifies which of the Counter signal to use as internal source for the trigger.
    Counter2End,  //!< Specifies which of the Counter signal to use as internal source for the trigger.
    Counter2Start,  //!< Specifies which of the Counter signal to use as internal source for the trigger.
    Encoder0,  //!< Specifies which Encoder signal to use as internal source for the trigger.
    Encoder1,  //!< Specifies which Encoder signal to use as internal source for the trigger.
    Encoder2,  //!< Specifies which Encoder signal to use as internal source for the trigger.
    Line0,  //!< Specifies which physical line (or pin) and associated I/O control block to use as external source for the trigger signal.
    Line1,  //!< Specifies which physical line (or pin) and associated I/O control block to use as external source for the trigger signal.
    Line2,  //!< Specifies which physical line (or pin) and associated I/O control block to use as external source for the trigger signal.
    Line3,  //!< Specifies which physical line (or pin) and associated I/O control block to use as external source for the trigger signal. AVAILABLE: Always
    LinkTrigger0,  //!< Specifies which Link Trigger to use as source for the trigger (received from the transport layer).
    LinkTrigger1,  //!< Specifies which Link Trigger to use as source for the trigger (received from the transport layer).
    LinkTrigger2,  //!< Specifies which Link Trigger to use as source for the trigger (received from the transport layer).
    LogicBlock0,  //!< Specifies which Logic Block signal to use as internal source for the trigger.
    LogicBlock1,  //!< Specifies which Logic Block signal to use as internal source for the trigger.
    LogicBlock2,  //!< Specifies which Logic Block signal to use as internal source for the trigger.
    Off,  //!< No trigger source is active. AVAILABLE: (ExposureMode = Timed)
    Software,  //!< Specifies that the trigger source will be generated by software using the TriggerSoftware command.
    SoftwareSignal0,  //!< Specifies that the trigger source will be a signal generated by software using the SoftwareSignalPulse command.
    SoftwareSignal1,  //!< Specifies that the trigger source will be a signal generated by software using the SoftwareSignalPulse command.
    SoftwareSignal2,  //!< Specifies that the trigger source will be a signal generated by software using the SoftwareSignalPulse command.
    Timer0End,  //!< Specifies which Timer signal to use as internal source for the trigger.
    Timer0Start,  //!< Specifies which Timer signal to use as internal source for the trigger.
    Timer1End,  //!< Specifies which Timer signal to use as internal source for the trigger.
    Timer1Start,  //!< Specifies which Timer signal to use as internal source for the trigger.
    Timer2End,  //!< Specifies which Timer signal to use as internal source for the trigger.
    Timer2Start,  //!< Specifies which Timer signal to use as internal source for the trigger.
    UserOutput0,  //!< Specifies which User Output bit signal to use as internal source for the trigger.
    UserOutput1,  //!< Specifies which User Output bit signal to use as internal source for the trigger.
    UserOutput2  //!< Specifies which User Output bit signal to use as internal source for the trigger.
};

/**
\class      CTriggerSource
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature TriggerSource
*/
class NEOAPI_CPP_DECL CTriggerSource : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CTriggerSource(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CTriggerSource object
    */
    CTriggerSource(const CTriggerSource& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CTriggerSource() {}
    /**
        \brief      Assignment operator
        \param      object The CTriggerSource object to assign.
        \return     Object reference with the value set.
    */
    const CTriggerSource& operator = (const CTriggerSource& object);
    /**
        \brief     Get the current value.
        \return    The value as TriggerSource
    */
    operator TriggerSource() const;
    /**
        \brief     Set the current value.
        \param     value The TriggerSource value to be written.
        \return    The CTriggerSource object
    */
    CTriggerSource& operator = (TriggerSource value);
    /**
        \brief     Set the current value.
        \param     value The TriggerSource value to be written.
        \return    The CTriggerSource object
    */
    CTriggerSource& Set(TriggerSource value);
    /**
        \brief     Get the current value.
        \return    The value as TriggerSource
    */
    TriggerSource Get() const;
};

/**
\brief Valid values for UserOutputSelector
\ingroup    GenICamFeatures
 */
enum class UserOutputSelector {
    UserOutput0 = 0,  //!< Selects the bit 0 of the User Output register.
    UserOutput1,  //!< Selects the bit 1 of the User Output register.
    UserOutput2,  //!< Selects the bit 2 of the User Output register.
    UserOutput3,  //!< Selects the bit 2 of the User Output register. AVAILABLE: Always
    UserOutput4  //!< Selects the bit 3 of the User Output register. AVAILABLE: Always
};

/**
\class      CUserOutputSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature UserOutputSelector
*/
class NEOAPI_CPP_DECL CUserOutputSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CUserOutputSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CUserOutputSelector object
    */
    CUserOutputSelector(const CUserOutputSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CUserOutputSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CUserOutputSelector object to assign.
        \return     Object reference with the value set.
    */
    const CUserOutputSelector& operator = (const CUserOutputSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as UserOutputSelector
    */
    operator UserOutputSelector() const;
    /**
        \brief     Set the current value.
        \param     value The UserOutputSelector value to be written.
        \return    The CUserOutputSelector object
    */
    CUserOutputSelector& operator = (UserOutputSelector value);
    /**
        \brief     Set the current value.
        \param     value The UserOutputSelector value to be written.
        \return    The CUserOutputSelector object
    */
    CUserOutputSelector& Set(UserOutputSelector value);
    /**
        \brief     Get the current value.
        \return    The value as UserOutputSelector
    */
    UserOutputSelector Get() const;
};

/**
\brief Valid values for UserSetDefault
\ingroup    GenICamFeatures
 */
enum class UserSetDefault {
    Default = 0,  //!< Select the factory setting user set.
    UserSet0,  //!< Select the user set 0.
    UserSet1,  //!< Select the user set 1.
    UserSet2,  //!< Select the user set 2. AVAILABLE: (UserSet2 was saved before)
    UserSet3  //!< Select the user set 3. AVAILABLE: (UserSet3 was saved before)
};

/**
\class      CUserSetDefault
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature UserSetDefault
*/
class NEOAPI_CPP_DECL CUserSetDefault : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CUserSetDefault(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CUserSetDefault object
    */
    CUserSetDefault(const CUserSetDefault& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CUserSetDefault() {}
    /**
        \brief      Assignment operator
        \param      object The CUserSetDefault object to assign.
        \return     Object reference with the value set.
    */
    const CUserSetDefault& operator = (const CUserSetDefault& object);
    /**
        \brief     Get the current value.
        \return    The value as UserSetDefault
    */
    operator UserSetDefault() const;
    /**
        \brief     Set the current value.
        \param     value The UserSetDefault value to be written.
        \return    The CUserSetDefault object
    */
    CUserSetDefault& operator = (UserSetDefault value);
    /**
        \brief     Set the current value.
        \param     value The UserSetDefault value to be written.
        \return    The CUserSetDefault object
    */
    CUserSetDefault& Set(UserSetDefault value);
    /**
        \brief     Get the current value.
        \return    The value as UserSetDefault
    */
    UserSetDefault Get() const;
};

/**
\brief Valid values for UserSetFeatureSelector
\ingroup    GenICamFeatures
 */
enum class UserSetFeatureSelector {
    AcquisitionFrameCount = 0,  //!< Number of frames to acquire in MultiFrame Acquisition mode. AVAILABLE: Always.
    AcquisitionFrameRate,  //!< Controls the acquisition rate (in Hertz) at which the frames are captured. AVAILABLE: Always
    AcquisitionFrameRateEnable,  //!< Controls if the AcquisitionFrameRate feature is writable and used to control the acquisition rate. AVAILABLE: Always
    AcquisitionMode,  //!< Sets the acquisition mode of the device. It defines mainly the number of frames to capture during an acquisition and the way the acquisition stops. AVAILABLE: Always
    ActionDeviceKey,  //!< Provides the device key that allows the device to check the validity of action commands. The device internal assertion of an action signal is only authorized if the ActionDeviceKey and the action device key value in the protocol message are equal. AVAILABLE: Always
    ActionGroupKey,  //!< Provides the key that the device will use to validate the action on reception of the action protocol message. AVAILABLE: Always
    ActionGroupMask,  //!< Provides the mask that the device will use to validate the action on reception of the action protocol message. AVAILABLE: Always
    AutoFeatureHeight,  //!< Height of the selected Auto Feature Region (in pixels). AVAILABLE: Always.
    AutoFeatureOffsetX,  //!< Horizontal offset from the origin to the Auto Feature Region (in pixels). AVAILABLE: Always.
    AutoFeatureOffsetY,  //!< Vertical offset from the origin to the Auto Feature Region (in pixels). AVAILABLE: Always.
    AutoFeatureRegionMode,  //!< Controls the mode of the selected Auto Feature Region. AVAILABLE: Always.
    AutoFeatureRegionReference,  //!< The Reference Region of interest. The Auto Feature Region is part of this region and all Auto Feature Region features are refs to this Reference Region. AVAILABLE: Always.
    AutoFeatureWidth,  //!< Width of the selected Auto Feature Region (in pixels). AVAILABLE: Always.
    BOPFShift,  //!< Shift Factor for 8bit pixel format caculated from 12 bit mode. AVAILABLE: Always.
    BalanceWhiteAuto,  //!< Controls the mode for automatic white balancing between the color channels. The white balancing ratios are automatically adjusted. AVAILABLE: Always.
    BinningHorizontal,  //!< Number of horizontal photo-sensitive cells to combine together. AVAILABLE: Always
    BinningHorizontalMode,  //!< Sets the mode to use to combine horizontal photo-sensitive cells together when BinningHorizontal is used. AVAILABLE: Always
    BinningVertical,  //!< Number of vertical photo-sensitive cells to combine together. AVAILABLE: Always
    BinningVerticalMode,  //!< Sets the mode used to combine horizontal photo-sensitive cells together when BinningVertical is used. AVAILABLE: Always
    BlackLevel,  //!< Controls the analog black level as an absolute physical value. AVAILABLE: Always
    BrightnessAutoNominalValue,  //!< Sets the nominal value for brightness in percent of full scale. It will be adjust with consider the setting in BrightnessAutoPriority. AVAILABLE: Always.
    BrightnessAutoPriority,  //!< The feature set the highest priority auto feature to adjust the brightness. AVAILABLE: Always.
    ChunkEnable,  //!< Enables the inclusion of the selected Chunk data in the payload of the image. AVAILABLE: Always
    ChunkModeActive,  //!< Activates the inclusion of Chunk data in the payload of the image. AVAILABLE: Always
    ColorTransformationAuto,  //!< Controls the mode for automatic adjusting the gains of the active transformation matrix. AVAILABLE: Always.
    ColorTransformationValue,  //!< Represents the value of the selected Gain factor or Offset inside the Transformation matrix. AVAILABLE: Always.
    CounterDuration,  //!< Sets the duration (or number of events) before the CounterEnd event is generated. AVAILABLE: Always
    CounterEventActivation,  //!< Selects the Activation mode Event Source signal. AVAILABLE: Always
    CounterEventSource,  //!< Select the events that will be the source to increment the Counter. AVAILABLE: Always
    CounterResetActivation,  //!< Selects the Activation mode of the Counter Reset Source signal. AVAILABLE: Always
    CounterResetSource,  //!< Selects the signals that will be the source to reset the Counter. AVAILABLE: Always
    DefectPixelCorrection,  //!< Enable the correction of defect pixels. AVAILABLE: Always
    DeviceLinkThroughputLimit,  //!< Limits the maximum bandwidth of the data that will be streamed out by the device on the selected Link. If necessary, delays will be uniformly inserted between transport layer packets in order to control the peak bandwidth. AVAILABLE: Always
    DeviceSpecific,  //!< Device - Specific
    DeviceTemperatureStatusTransition,  //!< Temperature threshold for selected status transition in degrees Celsius (C). AVAILABLE: Always
    EventNotification,  //!< Activate or deactivate the notification to the host application of the occurrence of the selected Event. AVAILABLE: Always
    ExposureAuto,  //!< Sets the automatic exposure mode when ExposureMode is Timed. The exact algorithm used to implement this control is device-specific. AVAILABLE: Always.
    ExposureAutoMaxValue,  //!< Maximal value of ExposureTime calculable by exposure auto algorithm. AVAILABLE: Always.
    ExposureAutoMinValue,  //!< Minimal value of ExposureTime calculable by exposure auto algorithm. AVAILABLE: Always.
    ExposureMode,  //!< Sets the operation mode of the Exposure (or shutter). AVAILABLE: Always
    ExposureTime,  //!< Sets the Exposure time when ExposureMode is Timed and ExposureAuto is Off. This controls the duration where the photosensitive cells are exposed to light. AVAILABLE: Always
    FixedPatternNoiseCorrection,  //!< Fixed pattern noise correction. AVAILABLE: Always
    FrameCounter,  //!< Sets the frame counter, which is part of the chunk data too. AVAILABLE: Always
    Gain,  //!< Controls the selected gain as an absolute physical value. This is an amplification factor applied to the video signal. AVAILABLE: Always
    GainAuto,  //!< Sets the automatic gain control (AGC) mode. The exact algorithm used to implement AGC is device-specific. AVAILABLE: Always.
    GainAutoMaxValue,  //!< Maximal value of Gain calculable by gain auto algorithm. AVAILABLE: (GainSelector = All).
    GainAutoMinValue,  //!< Minimal value of Gain calculable by gain auto algorithm. AVAILABLE: (GainSelector = All).
    Gamma,  //!< Controls the gamma correction of pixel intensity. This is typically used to compensate for non-linearity of the display system (such as CRT). AVAILABLE: Always.
    GevSCFTD,  //!< This feature indicates the delay (in timestamp counter unit) to insert between each block (image) for this stream channel. AVAILABLE: Always
    GevSCPD,  //!< Controls the delay (in timestamp counter unit) to insert between each packet for this stream channel. This can be used as a crude flow-control mechanism if the application or the network infrastructure cannot keep up with the packets coming from the device. AVAILABLE: Always
    Height,  //!< Height of the image provided by the device (in pixels). AVAILABLE: Always
    LUTContent,  //!< Describes the content of the selected LUT. AVAILABLE: Always.
    LUTEnable,  //!< Activates the selected LUT. AVAILABLE: Always.
    LUTValue,  //!< Returns the Value at entry LUTIndex of the LUT selected by LUTSelector. AVAILABLE: Always.
    LineDebouncerHighTimeAbs,  //!< Sets the absolute value of the selected line debouncer time in microseconds for switch from low to high. AVAILABLE: Always
    LineDebouncerLowTimeAbs,  //!< Sets the absolute value of the selected line debouncer time in microseconds for switch from high to low AVAILABLE: Always
    LineInverter,  //!< Controls the inversion of the signal of the selected input or output Line. AVAILABLE: Always
    LineMode,  //!< Controls if the physical Line is used to Input or Output a signal. AVAILABLE: Always.
    LinePWMDuration,  //!< Sets the duration in microseconds. AVAILABLE: Always.
    LinePWMDutyCycle,  //!< Offers the duty cycle in percent. AVAILABLE: Always.
    LinePWMMaxDuration,  //!< Sets the maximum duration in microseconds. AVAILABLE: Always.
    LinePWMMaxDutyCycle,  //!< Offers the maximal duty cycle in percent. AVAILABLE: Always.
    LinePWMMode,  //!< Selects the PWM mode of the selected output line. AVAILABLE: Always.
    LineSource,  //!< Selects which internal acquisition or I/O source signal to output on the selected Line. LineMode must be Output. AVAILABLE: Always
    OffsetX,  //!< Horizontal offset from the origin to the region of interest (in pixels). AVAILABLE: Always
    OffsetY,  //!< Vertical offset from the origin to the region of interest (in pixels). AVAILABLE: Always
    PixelFormat,  //!< Format of the pixels provided by the device. It represents all the information provided by PixelCoding, PixelSize, PixelColorFilter combined in a single feature. AVAILABLE: Always
    PtpEnable,  //!< Enable the Precision Time Protocol (PTP). AVAILABLE: Always.
    PtpMode,  //!< Selects the PTP clock type the device will act as. AVAILABLE: Always.
    ReadoutMode,  //!< Specifies the operation mode of the readout for the acquisition. AVAILABLE: Always
    ReverseX,  //!< Flip horizontally the image sent by the device. The Region of interest is applied after the flipping. AVAILABLE: Always
    ReverseY,  //!< Flip vertically the image sent by the device. The Region of interest is applied after the flipping. AVAILABLE: Always
    SensorADDigitization,  //!< The feature controls the sensors AD digitization in bits per pixels. AVAILABLE: Always.
    SensorShutterMode,  //!< Sets the shutter mode of the device. AVAILABLE: Always.
    SequencerMode,  //!< Controls if the sequencer mechanism is active. AVAILABLE: Always
    SequencerSetNext,  //!< Specifies the next sequencer set. AVAILABLE: Always
    SequencerSetStart,  //!< Sets the initial/start sequencer set, which is the first set used within a sequencer. AVAILABLE: Always
    SequencerTriggerActivation,  //!< Specifies the activation mode of the sequencer trigger. AVAILABLE: Always
    SequencerTriggerSource,  //!< Specifies the internal signal or physical input line to use as the sequencer trigger source. AVAILABLE: Always
    ShortExposureTimeEnable,  //!< Controls if short exposure time should be supported. AVAILABLE: Always
    TestPattern,  //!< Selects the type of test pattern that is generated by the device as image source. AVAILABLE: Always
    TimerDelay,  //!< Sets the duration (in microseconds) of the delay to apply at the reception of a trigger before starting the Timer. AVAILABLE: Always
    TimerDuration,  //!< Sets the duration (in microseconds) of the Timer pulse. AVAILABLE: Always
    TimerTriggerActivation,  //!< Selects the activation mode of the trigger to start the Timer. AVAILABLE: Always
    TimerTriggerSource,  //!< Selects the source of the trigger to start the Timer. AVAILABLE: Always
    TransferStart,  //!< Starts the streaming of data blocks out of the device. This feature must be available when the TransferControlMode is set to "UserControled". If the TransferStart feature is not writable (locked), the application should not start the transfer and should avoid using the feature until it becomes writable again. AVAILABLE: Always
    TransferStop,  //!< Stops the streaming of data Block(s). The current block transmission will be completed. This feature must be available when the TransferControlMode is set to "UserControlled". AVAILABLE: Always
    TriggerActivation,  //!< Specifies the activation mode of the trigger. AVAILABLE: Always
    TriggerDelay,  //!< Specifies the delay in microseconds (us) to apply after the trigger reception before activating it. AVAILABLE: Always
    TriggerMode,  //!< Controls if the selected trigger is active. AVAILABLE: Always
    TriggerSource,  //!< Specifies the internal signal or physical input Line to use as the trigger source. The selected trigger must have its TriggerMode set to On. AVAILABLE: Always
    UserOutputValue,  //!< Sets the value of the bit selected by UserOutputSelector. AVAILABLE: Always
    UserOutputValueAll,  //!< Sets the value of all the bits of the User Output register. It is subject to the UserOutputValueAllMask. AVAILABLE: Always
    Width  //!< Width of the image provided by the device (in pixels). AVAILABLE: Always
};

/**
\class      CUserSetFeatureSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature UserSetFeatureSelector
*/
class NEOAPI_CPP_DECL CUserSetFeatureSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CUserSetFeatureSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CUserSetFeatureSelector object
    */
    CUserSetFeatureSelector(const CUserSetFeatureSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CUserSetFeatureSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CUserSetFeatureSelector object to assign.
        \return     Object reference with the value set.
    */
    const CUserSetFeatureSelector& operator = (const CUserSetFeatureSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as UserSetFeatureSelector
    */
    operator UserSetFeatureSelector() const;
    /**
        \brief     Set the current value.
        \param     value The UserSetFeatureSelector value to be written.
        \return    The CUserSetFeatureSelector object
    */
    CUserSetFeatureSelector& operator = (UserSetFeatureSelector value);
    /**
        \brief     Set the current value.
        \param     value The UserSetFeatureSelector value to be written.
        \return    The CUserSetFeatureSelector object
    */
    CUserSetFeatureSelector& Set(UserSetFeatureSelector value);
    /**
        \brief     Get the current value.
        \return    The value as UserSetFeatureSelector
    */
    UserSetFeatureSelector Get() const;
};

/**
\brief Valid values for UserSetSelector
\ingroup    GenICamFeatures
 */
enum class UserSetSelector {
    Default = 0,  //!< Selects the factory setting user set.
    UserSet0,  //!< Selects the user set 0.
    UserSet1,  //!< Selects the user set 1.
    UserSet2,  //!< Selects the user set 2. AVAILABLE: Always
    UserSet3  //!< Selects the user set 3. AVAILABLE: Always
};

/**
\class      CUserSetSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature UserSetSelector
*/
class NEOAPI_CPP_DECL CUserSetSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CUserSetSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CUserSetSelector object
    */
    CUserSetSelector(const CUserSetSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CUserSetSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CUserSetSelector object to assign.
        \return     Object reference with the value set.
    */
    const CUserSetSelector& operator = (const CUserSetSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as UserSetSelector
    */
    operator UserSetSelector() const;
    /**
        \brief     Set the current value.
        \param     value The UserSetSelector value to be written.
        \return    The CUserSetSelector object
    */
    CUserSetSelector& operator = (UserSetSelector value);
    /**
        \brief     Set the current value.
        \param     value The UserSetSelector value to be written.
        \return    The CUserSetSelector object
    */
    CUserSetSelector& Set(UserSetSelector value);
    /**
        \brief     Get the current value.
        \return    The value as UserSetSelector
    */
    UserSetSelector Get() const;
};

/**
\brief Valid values for boCalibrationDataConfigurationMode
\ingroup    GenICamFeatures
 */
enum class boCalibrationDataConfigurationMode {
    Off = 0,  //!< Disables the bo calibration data configuration mode.
    On  //!< Enables the bo calibration data configuration mode.
};

/**
\class      CboCalibrationDataConfigurationMode
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature boCalibrationDataConfigurationMode
*/
class NEOAPI_CPP_DECL CboCalibrationDataConfigurationMode : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CboCalibrationDataConfigurationMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CboCalibrationDataConfigurationMode object
    */
    CboCalibrationDataConfigurationMode(const CboCalibrationDataConfigurationMode& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CboCalibrationDataConfigurationMode() {}
    /**
        \brief      Assignment operator
        \param      object The CboCalibrationDataConfigurationMode object to assign.
        \return     Object reference with the value set.
    */
    const CboCalibrationDataConfigurationMode& operator = (const CboCalibrationDataConfigurationMode& object);
    /**
        \brief     Get the current value.
        \return    The value as boCalibrationDataConfigurationMode
    */
    operator boCalibrationDataConfigurationMode() const;
    /**
        \brief     Set the current value.
        \param     value The boCalibrationDataConfigurationMode value to be written.
        \return    The CboCalibrationDataConfigurationMode object
    */
    CboCalibrationDataConfigurationMode& operator = (boCalibrationDataConfigurationMode value);
    /**
        \brief     Set the current value.
        \param     value The boCalibrationDataConfigurationMode value to be written.
        \return    The CboCalibrationDataConfigurationMode object
    */
    CboCalibrationDataConfigurationMode& Set(boCalibrationDataConfigurationMode value);
    /**
        \brief     Get the current value.
        \return    The value as boCalibrationDataConfigurationMode
    */
    boCalibrationDataConfigurationMode Get() const;
};

/**
\brief Valid values for boCalibrationMatrixSelector
\ingroup    GenICamFeatures
 */
enum class boCalibrationMatrixSelector {
    CameraMatrix = 0,  //!< Selects the camera matrix.
    NewCameraMatrix  //!< Selects the camera matrix with consideration of the geometry distortion.
};

/**
\class      CboCalibrationMatrixSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature boCalibrationMatrixSelector
*/
class NEOAPI_CPP_DECL CboCalibrationMatrixSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CboCalibrationMatrixSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CboCalibrationMatrixSelector object
    */
    CboCalibrationMatrixSelector(const CboCalibrationMatrixSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CboCalibrationMatrixSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CboCalibrationMatrixSelector object to assign.
        \return     Object reference with the value set.
    */
    const CboCalibrationMatrixSelector& operator = (const CboCalibrationMatrixSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as boCalibrationMatrixSelector
    */
    operator boCalibrationMatrixSelector() const;
    /**
        \brief     Set the current value.
        \param     value The boCalibrationMatrixSelector value to be written.
        \return    The CboCalibrationMatrixSelector object
    */
    CboCalibrationMatrixSelector& operator = (boCalibrationMatrixSelector value);
    /**
        \brief     Set the current value.
        \param     value The boCalibrationMatrixSelector value to be written.
        \return    The CboCalibrationMatrixSelector object
    */
    CboCalibrationMatrixSelector& Set(boCalibrationMatrixSelector value);
    /**
        \brief     Get the current value.
        \return    The value as boCalibrationMatrixSelector
    */
    boCalibrationMatrixSelector Get() const;
};

/**
\brief Valid values for boCalibrationMatrixValueSelector
\ingroup    GenICamFeatures
 */
enum class boCalibrationMatrixValueSelector {
    Value11 = 0,  //!< Selects matrix value at line 1 column 1.
    Value12,  //!< Selects matrix value at line 1 column 2.
    Value13,  //!< Selects matrix value at line 1 column 3.
    Value21,  //!< Selects matrix value at line 2 column 1.
    Value22,  //!< Selects matrix value at line 2 column 2.
    Value23,  //!< Selects matrix value at line 2 column 3.
    Value31,  //!< Selects matrix value at line 3 column 1.
    Value32,  //!< Selects matrix value at line 3 column 2.
    Value33  //!< Selects matrix value at line 3 column 3.
};

/**
\class      CboCalibrationMatrixValueSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature boCalibrationMatrixValueSelector
*/
class NEOAPI_CPP_DECL CboCalibrationMatrixValueSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CboCalibrationMatrixValueSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CboCalibrationMatrixValueSelector object
    */
    CboCalibrationMatrixValueSelector(const CboCalibrationMatrixValueSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CboCalibrationMatrixValueSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CboCalibrationMatrixValueSelector object to assign.
        \return     Object reference with the value set.
    */
    const CboCalibrationMatrixValueSelector& operator = (const CboCalibrationMatrixValueSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as boCalibrationMatrixValueSelector
    */
    operator boCalibrationMatrixValueSelector() const;
    /**
        \brief     Set the current value.
        \param     value The boCalibrationMatrixValueSelector value to be written.
        \return    The CboCalibrationMatrixValueSelector object
    */
    CboCalibrationMatrixValueSelector& operator = (boCalibrationMatrixValueSelector value);
    /**
        \brief     Set the current value.
        \param     value The boCalibrationMatrixValueSelector value to be written.
        \return    The CboCalibrationMatrixValueSelector object
    */
    CboCalibrationMatrixValueSelector& Set(boCalibrationMatrixValueSelector value);
    /**
        \brief     Get the current value.
        \return    The value as boCalibrationMatrixValueSelector
    */
    boCalibrationMatrixValueSelector Get() const;
};

/**
\brief Valid values for boCalibrationVectorSelector
\ingroup    GenICamFeatures
 */
enum class boCalibrationVectorSelector {
    rvec = 0,  //!< Selects the output rotation vector.
    tvec  //!< Selects the output translation vector.
};

/**
\class      CboCalibrationVectorSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature boCalibrationVectorSelector
*/
class NEOAPI_CPP_DECL CboCalibrationVectorSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CboCalibrationVectorSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CboCalibrationVectorSelector object
    */
    CboCalibrationVectorSelector(const CboCalibrationVectorSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CboCalibrationVectorSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CboCalibrationVectorSelector object to assign.
        \return     Object reference with the value set.
    */
    const CboCalibrationVectorSelector& operator = (const CboCalibrationVectorSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as boCalibrationVectorSelector
    */
    operator boCalibrationVectorSelector() const;
    /**
        \brief     Set the current value.
        \param     value The boCalibrationVectorSelector value to be written.
        \return    The CboCalibrationVectorSelector object
    */
    CboCalibrationVectorSelector& operator = (boCalibrationVectorSelector value);
    /**
        \brief     Set the current value.
        \param     value The boCalibrationVectorSelector value to be written.
        \return    The CboCalibrationVectorSelector object
    */
    CboCalibrationVectorSelector& Set(boCalibrationVectorSelector value);
    /**
        \brief     Get the current value.
        \return    The value as boCalibrationVectorSelector
    */
    boCalibrationVectorSelector Get() const;
};

/**
\brief Valid values for boCalibrationVectorValueSelector
\ingroup    GenICamFeatures
 */
enum class boCalibrationVectorValueSelector {
    Value1 = 0,  //!< Selects vector value 1.
    Value2,  //!< Selects vector value 2.
    Value3  //!< Selects vector value 3.
};

/**
\class      CboCalibrationVectorValueSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature boCalibrationVectorValueSelector
*/
class NEOAPI_CPP_DECL CboCalibrationVectorValueSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CboCalibrationVectorValueSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CboCalibrationVectorValueSelector object
    */
    CboCalibrationVectorValueSelector(const CboCalibrationVectorValueSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CboCalibrationVectorValueSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CboCalibrationVectorValueSelector object to assign.
        \return     Object reference with the value set.
    */
    const CboCalibrationVectorValueSelector& operator = (const CboCalibrationVectorValueSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as boCalibrationVectorValueSelector
    */
    operator boCalibrationVectorValueSelector() const;
    /**
        \brief     Set the current value.
        \param     value The boCalibrationVectorValueSelector value to be written.
        \return    The CboCalibrationVectorValueSelector object
    */
    CboCalibrationVectorValueSelector& operator = (boCalibrationVectorValueSelector value);
    /**
        \brief     Set the current value.
        \param     value The boCalibrationVectorValueSelector value to be written.
        \return    The CboCalibrationVectorValueSelector object
    */
    CboCalibrationVectorValueSelector& Set(boCalibrationVectorValueSelector value);
    /**
        \brief     Get the current value.
        \return    The value as boCalibrationVectorValueSelector
    */
    boCalibrationVectorValueSelector Get() const;
};

/**
\brief Valid values for boGeometryDistortionValueSelector
\ingroup    GenICamFeatures
 */
enum class boGeometryDistortionValueSelector {
    k1 = 0,  //!< Selects geometry distortion value k1.
    k2,  //!< Selects geometry distortion value k2.
    k3,  //!< Selects geometry distortion value k3.
    p1,  //!< Selects geometry distortion value p1.
    p2  //!< Selects geometry distortion value p2.
};

/**
\class      CboGeometryDistortionValueSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature boGeometryDistortionValueSelector
*/
class NEOAPI_CPP_DECL CboGeometryDistortionValueSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CboGeometryDistortionValueSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CboGeometryDistortionValueSelector object
    */
    CboGeometryDistortionValueSelector(const CboGeometryDistortionValueSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CboGeometryDistortionValueSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CboGeometryDistortionValueSelector object to assign.
        \return     Object reference with the value set.
    */
    const CboGeometryDistortionValueSelector& operator = (const CboGeometryDistortionValueSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as boGeometryDistortionValueSelector
    */
    operator boGeometryDistortionValueSelector() const;
    /**
        \brief     Set the current value.
        \param     value The boGeometryDistortionValueSelector value to be written.
        \return    The CboGeometryDistortionValueSelector object
    */
    CboGeometryDistortionValueSelector& operator = (boGeometryDistortionValueSelector value);
    /**
        \brief     Set the current value.
        \param     value The boGeometryDistortionValueSelector value to be written.
        \return    The CboGeometryDistortionValueSelector object
    */
    CboGeometryDistortionValueSelector& Set(boGeometryDistortionValueSelector value);
    /**
        \brief     Get the current value.
        \return    The value as boGeometryDistortionValueSelector
    */
    boGeometryDistortionValueSelector Get() const;
};

/**
\brief Valid values for boSerialConfigBaudRate
\ingroup    GenICamFeatures
 */
enum class boSerialConfigBaudRate {
    Baudrate115200Hz = 0,  //!< Serial interface clock frequency is 115200 Hz.
    Baudrate1843200Hz,  //!< Serial interface clock frequency is 1843200 Hz.
    Baudrate19200Hz,  //!< Serial interface clock frequency is 19200 Hz.
    Baudrate230400Hz,  //!< Serial interface clock frequency is 230400 Hz.
    Baudrate38400Hz,  //!< Serial interface clock frequency is 38400 Hz.
    Baudrate460800Hz,  //!< Serial interface clock frequency is 460800 Hz.
    Baudrate57600Hz,  //!< Serial interface clock frequency is 57600 Hz.
    Baudrate921600Hz,  //!< Serial interface clock frequency is 921600 Hz.
    Baudrate9600Hz  //!< Serial interface clock frequency is 9600 Hz.
};

/**
\class      CboSerialConfigBaudRate
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature boSerialConfigBaudRate
*/
class NEOAPI_CPP_DECL CboSerialConfigBaudRate : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CboSerialConfigBaudRate(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CboSerialConfigBaudRate object
    */
    CboSerialConfigBaudRate(const CboSerialConfigBaudRate& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CboSerialConfigBaudRate() {}
    /**
        \brief      Assignment operator
        \param      object The CboSerialConfigBaudRate object to assign.
        \return     Object reference with the value set.
    */
    const CboSerialConfigBaudRate& operator = (const CboSerialConfigBaudRate& object);
    /**
        \brief     Get the current value.
        \return    The value as boSerialConfigBaudRate
    */
    operator boSerialConfigBaudRate() const;
    /**
        \brief     Set the current value.
        \param     value The boSerialConfigBaudRate value to be written.
        \return    The CboSerialConfigBaudRate object
    */
    CboSerialConfigBaudRate& operator = (boSerialConfigBaudRate value);
    /**
        \brief     Set the current value.
        \param     value The boSerialConfigBaudRate value to be written.
        \return    The CboSerialConfigBaudRate object
    */
    CboSerialConfigBaudRate& Set(boSerialConfigBaudRate value);
    /**
        \brief     Get the current value.
        \return    The value as boSerialConfigBaudRate
    */
    boSerialConfigBaudRate Get() const;
};

/**
\brief Valid values for boSerialConfigDataBits
\ingroup    GenICamFeatures
 */
enum class boSerialConfigDataBits {
    Eight = 0,  //!< Serial data bits are 8.
    Five,  //!< Serial data bits are 5.
    Seven,  //!< Serial data bits are 7.
    Six  //!< Serial data bits are 6.
};

/**
\class      CboSerialConfigDataBits
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature boSerialConfigDataBits
*/
class NEOAPI_CPP_DECL CboSerialConfigDataBits : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CboSerialConfigDataBits(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CboSerialConfigDataBits object
    */
    CboSerialConfigDataBits(const CboSerialConfigDataBits& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CboSerialConfigDataBits() {}
    /**
        \brief      Assignment operator
        \param      object The CboSerialConfigDataBits object to assign.
        \return     Object reference with the value set.
    */
    const CboSerialConfigDataBits& operator = (const CboSerialConfigDataBits& object);
    /**
        \brief     Get the current value.
        \return    The value as boSerialConfigDataBits
    */
    operator boSerialConfigDataBits() const;
    /**
        \brief     Set the current value.
        \param     value The boSerialConfigDataBits value to be written.
        \return    The CboSerialConfigDataBits object
    */
    CboSerialConfigDataBits& operator = (boSerialConfigDataBits value);
    /**
        \brief     Set the current value.
        \param     value The boSerialConfigDataBits value to be written.
        \return    The CboSerialConfigDataBits object
    */
    CboSerialConfigDataBits& Set(boSerialConfigDataBits value);
    /**
        \brief     Get the current value.
        \return    The value as boSerialConfigDataBits
    */
    boSerialConfigDataBits Get() const;
};

/**
\brief Valid values for boSerialConfigParity
\ingroup    GenICamFeatures
 */
enum class boSerialConfigParity {
    Even = 0,  //!< Serial parity is even.
    Mark,  //!< Serial parity is mark.
    None,  //!< Serial parity is none.
    Odd,  //!< Serial parity is odd.
    Space  //!< Serial parity is space.
};

/**
\class      CboSerialConfigParity
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature boSerialConfigParity
*/
class NEOAPI_CPP_DECL CboSerialConfigParity : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CboSerialConfigParity(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CboSerialConfigParity object
    */
    CboSerialConfigParity(const CboSerialConfigParity& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CboSerialConfigParity() {}
    /**
        \brief      Assignment operator
        \param      object The CboSerialConfigParity object to assign.
        \return     Object reference with the value set.
    */
    const CboSerialConfigParity& operator = (const CboSerialConfigParity& object);
    /**
        \brief     Get the current value.
        \return    The value as boSerialConfigParity
    */
    operator boSerialConfigParity() const;
    /**
        \brief     Set the current value.
        \param     value The boSerialConfigParity value to be written.
        \return    The CboSerialConfigParity object
    */
    CboSerialConfigParity& operator = (boSerialConfigParity value);
    /**
        \brief     Set the current value.
        \param     value The boSerialConfigParity value to be written.
        \return    The CboSerialConfigParity object
    */
    CboSerialConfigParity& Set(boSerialConfigParity value);
    /**
        \brief     Get the current value.
        \return    The value as boSerialConfigParity
    */
    boSerialConfigParity Get() const;
};

/**
\brief Valid values for boSerialConfigStopBits
\ingroup    GenICamFeatures
 */
enum class boSerialConfigStopBits {
    One = 0,  //!< Serial stop bit is one.
    OnePtFive,  //!< Serial stop bit is one pt five.
    Two  //!< Serial stop bits are two.
};

/**
\class      CboSerialConfigStopBits
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature boSerialConfigStopBits
*/
class NEOAPI_CPP_DECL CboSerialConfigStopBits : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CboSerialConfigStopBits(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CboSerialConfigStopBits object
    */
    CboSerialConfigStopBits(const CboSerialConfigStopBits& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CboSerialConfigStopBits() {}
    /**
        \brief      Assignment operator
        \param      object The CboSerialConfigStopBits object to assign.
        \return     Object reference with the value set.
    */
    const CboSerialConfigStopBits& operator = (const CboSerialConfigStopBits& object);
    /**
        \brief     Get the current value.
        \return    The value as boSerialConfigStopBits
    */
    operator boSerialConfigStopBits() const;
    /**
        \brief     Set the current value.
        \param     value The boSerialConfigStopBits value to be written.
        \return    The CboSerialConfigStopBits object
    */
    CboSerialConfigStopBits& operator = (boSerialConfigStopBits value);
    /**
        \brief     Set the current value.
        \param     value The boSerialConfigStopBits value to be written.
        \return    The CboSerialConfigStopBits object
    */
    CboSerialConfigStopBits& Set(boSerialConfigStopBits value);
    /**
        \brief     Get the current value.
        \return    The value as boSerialConfigStopBits
    */
    boSerialConfigStopBits Get() const;
};

/**
\brief Valid values for boSerialMode
\ingroup    GenICamFeatures
 */
enum class boSerialMode {
    Bypass = 0,  //!< Bypass mode. UART1 of Power and Process Interface and UART0 Interface are connected.
    Off,  //!< The serial interface is off and shall not be used.
    OpticControl,  //!< The serial interface shall be used for optic control.
    boSerialControl  //!< The serial interface shall be used for bo serial control.
};

/**
\class      CboSerialMode
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature boSerialMode
*/
class NEOAPI_CPP_DECL CboSerialMode : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CboSerialMode(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CboSerialMode object
    */
    CboSerialMode(const CboSerialMode& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CboSerialMode() {}
    /**
        \brief      Assignment operator
        \param      object The CboSerialMode object to assign.
        \return     Object reference with the value set.
    */
    const CboSerialMode& operator = (const CboSerialMode& object);
    /**
        \brief     Get the current value.
        \return    The value as boSerialMode
    */
    operator boSerialMode() const;
    /**
        \brief     Set the current value.
        \param     value The boSerialMode value to be written.
        \return    The CboSerialMode object
    */
    CboSerialMode& operator = (boSerialMode value);
    /**
        \brief     Set the current value.
        \param     value The boSerialMode value to be written.
        \return    The CboSerialMode object
    */
    CboSerialMode& Set(boSerialMode value);
    /**
        \brief     Get the current value.
        \return    The value as boSerialMode
    */
    boSerialMode Get() const;
};

/**
\brief Valid values for boSerialSelector
\ingroup    GenICamFeatures
 */
enum class boSerialSelector {
    UART0 = 0,  //!< Selects the UART0 Interface which can be used, for example, to control optical components.
    UART1  //!< Selects the UART1 Interface which is part of the Power and Process Interface and can be used for RS232 communication.
};

/**
\class      CboSerialSelector
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to control Feature boSerialSelector
*/
class NEOAPI_CPP_DECL CboSerialSelector : public EnumerationFeature {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
        \param      name Name of the Feature
    */
    CboSerialSelector(CamBase* cam, const NeoString& name) : EnumerationFeature(cam, name) {}
    /**
        \brief      Copy-Constructor
        \param      feature A CboSerialSelector object
    */
    CboSerialSelector(const CboSerialSelector& feature) : EnumerationFeature(feature) {}
    /**
        \brief      Destructor
    */
    virtual ~CboSerialSelector() {}
    /**
        \brief      Assignment operator
        \param      object The CboSerialSelector object to assign.
        \return     Object reference with the value set.
    */
    const CboSerialSelector& operator = (const CboSerialSelector& object);
    /**
        \brief     Get the current value.
        \return    The value as boSerialSelector
    */
    operator boSerialSelector() const;
    /**
        \brief     Set the current value.
        \param     value The boSerialSelector value to be written.
        \return    The CboSerialSelector object
    */
    CboSerialSelector& operator = (boSerialSelector value);
    /**
        \brief     Set the current value.
        \param     value The boSerialSelector value to be written.
        \return    The CboSerialSelector object
    */
    CboSerialSelector& Set(boSerialSelector value);
    /**
        \brief     Get the current value.
        \return    The value as boSerialSelector
    */
    boSerialSelector Get() const;
};

/**
\class      FeatureAccess
\ingroup    All
\ingroup    GenICamFeatures

\brief      Class to controll GenICam features
*/
class NEOAPI_CPP_DECL FeatureAccess {
 public:
    /**
        \brief      Constructor
        \param      cam Pointer to the camera
    */
    FeatureAccess(CamBase* cam);
    /**
        \brief      Copy-Constructor
        \param      access A FeatureAccess object
    */
    FeatureAccess(const FeatureAccess& access);
    /**
        \brief      Destructor
    */
    virtual ~FeatureAccess();

    /**
        \brief      Assignment Operator is not implemented
        \param      object The FeatureAccess object to assign.
        \return     Object reference with all features copied.
    */
    const FeatureAccess& operator = (const FeatureAccess& object) = delete;

    /**
        \brief      Aborts the Acquisition immediately. This will end the capture without completing the current Frame or waiting on a trigger. If no Acquisition is in progress, the command is ignored.
    */
    CommandFeature AcquisitionAbort;
    /**
        \brief      Number of frames to acquire in MultiFrame Acquisition mode.
    */
    IntegerFeature AcquisitionFrameCount;
    /**
        \brief      Controls the acquisition rate (in Hertz) at which the frames are captured.
    */
    DoubleFeature AcquisitionFrameRate;
    /**
        \brief      Controls if the AcquisitionFrameRate feature is writable and used to control the acquisition rate. Otherwise, the acquisition rate is implicitly controlled by the combination of other features like ExposureTime, etc...
    */
    BoolFeature AcquisitionFrameRateEnable;
    /**
        \brief      Returns the maximal acquisition rate (in Hertz) at which the frames are captured.
    */
    DoubleFeature AcquisitionFrameRateLimit;
    /**
        \brief      Sets the acquisition mode of the device. It defines mainly the number of frames to capture during an acquisition and the way the acquisition stops.
    */
    CAcquisitionMode AcquisitionMode;
    /**
        \brief      Starts the Acquisition of the device. The number of frames captured is specified by AcquisitionMode.
    */
    CommandFeature AcquisitionStart;
    /**
        \brief      Controls if the Acquisition of the device starts automatically at device start or not.
    */
    BoolFeature AcquisitionStartAuto;
    /**
        \brief      Reads the state of the internal acquisition signal selected using AcquisitionStatusSelector.
    */
    BoolFeature AcquisitionStatus;
    /**
        \brief      Selects the internal acquisition signal to read using AcquisitionStatus.
    */
    CAcquisitionStatusSelector AcquisitionStatusSelector;
    /**
        \brief      Stops the Acquisition of the device at the end of the current Frame. It is mainly used when AcquisitionMode is Continuous but can be used in any acquisition mode.
    */
    CommandFeature AcquisitionStop;
    /**
        \brief      Provides the device key that allows the device to check the validity of action commands. The device internal assertion of an action signal is only authorized if the ActionDeviceKey and the action device key value in the protocol message are equal.
    */
    IntegerFeature ActionDeviceKey;
    /**
        \brief      Provides the key that the device will use to validate the action on reception of the action protocol message.
    */
    IntegerFeature ActionGroupKey;
    /**
        \brief      Provides the mask that the device will use to validate the action on reception of the action protocol message.
    */
    IntegerFeature ActionGroupMask;
    /**
        \brief      Selects to which Action Signal further Action settings apply.
    */
    IntegerFeature ActionSelector;
    /**
        \brief      Sets the aperture (also called iris, f-number, f-stop or f/#) of the lens. The lower the f/# the more light goes through the lens (the "faster" the lens) and the smaller the depth of field.
    */
    DoubleFeature Aperture;
    /**
        \brief      Initializes the aperture and makes it ready for use. The aperture position after initialization is implementation dependent. This feature is only implemented if an additional initialization is required after OpticControllerInitialize.
    */
    CommandFeature ApertureInitialize;
    /**
        \brief      Reads the status of the aperture.
    */
    CApertureStatus ApertureStatus;
    /**
        \brief      ApertureStepper controls the stepper value of the Aperture. 0 is the maximum opening.
    */
    IntegerFeature ApertureStepper;
    /**
        \brief      Returns the Cycle Time of auto feature control loop in milliseconds for once and continuous mode.
    */
    DoubleFeature AutoFeatureCycleTime;
    /**
        \brief      Sets the height of the selected Auto Feature Region (in pixels).
    */
    IntegerFeature AutoFeatureHeight;
    /**
        \brief      Sets the horizontal offset from the origin to the Auto Feature Region (in pixels).
    */
    IntegerFeature AutoFeatureOffsetX;
    /**
        \brief      Sets the vertical offset from the origin to the Auto Feature Region (in pixels).
    */
    IntegerFeature AutoFeatureOffsetY;
    /**
        \brief      Controls the mode of the selected Auto Feature Region.
    */
    CAutoFeatureRegionMode AutoFeatureRegionMode;
    /**
        \brief      Selects the Reference Region of interest. The Auto Feature Region is part of this region and all Auto Feature Region features refers to this Reference Region.
    */
    CAutoFeatureRegionReference AutoFeatureRegionReference;
    /**
        \brief      Selects the region of interest to control. The RegionSelector feature allows devices that are able to extract multiple regions out of an image, to configure the features of those individual regions independently.
    */
    CAutoFeatureRegionSelector AutoFeatureRegionSelector;
    /**
        \brief      Width of the selected Auto Feature Region (in pixels).
    */
    IntegerFeature AutoFeatureWidth;
    /**
        \brief      Enables the Averaging of the camera over at minimum 2 images.
    */
    BoolFeature AveragingEnable;
    /**
        \brief      Sets the number of images using for Averaging of the camera.
    */
    IntegerFeature AveragingImageCount;
    /**
        \brief      Returns the reciprocal value of AveragingImageCount.
    */
    DoubleFeature AveragingNormalization;
    /**
        \brief      Selects the shift factor for 8bit pixel format calculated from 12 bit mode.
    */
    CBOPFShift BOPFShift;
    /**
        \brief      Controls the mode for automatic white balancing between the color channels. The white balancing ratios are automatically adjusted.
    */
    CBalanceWhiteAuto BalanceWhiteAuto;
    /**
        \brief      Returns the status of BalanceWhiteAuto.
    */
    CBalanceWhiteAutoStatus BalanceWhiteAutoStatus;
    /**
        \brief      Sets the baud rate of the RS232 interface.
    */
    CBaudrate Baudrate;
    /**
        \brief      Number of horizontal photo-sensitive cells to combine together. This reduces the horizontal resolution (width) of the image.
    */
    IntegerFeature BinningHorizontal;
    /**
        \brief      Sets the mode to use to combine horizontal photo-sensitive cells together when BinningHorizontal is used.
    */
    CBinningHorizontalMode BinningHorizontalMode;
    /**
        \brief      Sets the number of horizontal and vertical photo-sensitive cells to combine together calculated in camera.
    */
    IntegerFeature BinningRegion0;
    /**
        \brief      Selects which binning engine is controlled by the BinningHorizontal and BinningVertical features.
    */
    CBinningSelector BinningSelector;
    /**
        \brief      Sets the number of horizontal and vertical photo-sensitive cells to combine together calculated in sensor.
    */
    IntegerFeature BinningSensor;
    /**
        \brief      Number of vertical photo-sensitive cells to combine together. This reduces the vertical resolution (height) of the image.
    */
    IntegerFeature BinningVertical;
    /**
        \brief      Sets the mode to use to combine vertical photo-sensitive cells together when BinningVertical is used.
    */
    CBinningVerticalMode BinningVerticalMode;
    /**
        \brief      Enables the feature BitShift of 2 for using LSBs with pixelformat Mono8.
    */
    BoolFeature BitShift;
    /**
        \brief      Controls the analog black level as an absolute physical value. This represents a DC offset applied to the video signal.
    */
    IntegerFeature BlackLevel;
    /**
        \brief      Enables the Black Level Correction.
    */
    BoolFeature BlackLevelCorrectionEnable;
    /**
        \brief      Sets the Black Level Correction Threshold.
    */
    IntegerFeature BlackLevelCorrectionThreshold;
    /**
        \brief      Controls the analog black level as a raw integer value. This represents a DC offset applied to the video signal.
    */
    IntegerFeature BlackLevelRaw;
    /**
        \brief      Selects which Black Level is controlled by the various Black Level features.
    */
    CBlackLevelSelector BlackLevelSelector;
    /**
        \brief      Activates the black reference correction of the sensor.
    */
    BoolFeature BlackReferenceCorrectionEnable;
    /**
        \brief      Controls the sensor internal feature for avoiding the black sun effect.
    */
    CBlackSunSuppression BlackSunSuppression;
    /**
        \brief      Aborts a running sequencer set.
    */
    BoolFeature BoSequencerAbort;
    /**
        \brief      Sets the sequencer sets number of horizontal photo-sensitive cells to combine together. This increases the intensity (or signal to noise ratio) of the pixels and reduces the horizontal resolution (width) of the image.
    */
    IntegerFeature BoSequencerBinningHorizontal;
    /**
        \brief      Sets the sequencer sets number of vertical photo-sensitive cells to combine together. This increases the intensity (or signal to noise ratio) of the pixels and reduces the vertical resolution (height) of the image.
    */
    IntegerFeature BoSequencerBinningVertical;
    /**
        \brief      Enables the sequencer for special multi-frame mode. Normal acquisition will be stopped.
    */
    CBoSequencerEnable BoSequencerEnable;
    /**
        \brief      Sets the sequencer sets exposure time in us.
    */
    DoubleFeature BoSequencerExposure;
    /**
        \brief      Sets the Sequencer number of frames per trigger.
    */
    IntegerFeature BoSequencerFramesPerTrigger;
    /**
        \brief      Sets the sequencer sets global Gain.
    */
    DoubleFeature BoSequencerGain;
    /**
        \brief      Sets the Sequencers height of the image provided by the device (in pixels).
    */
    IntegerFeature BoSequencerHeight;
    /**
        \brief      Selects the Sequencers output lines.
    */
    CBoSequencerIOSelector BoSequencerIOSelector;
    /**
        \brief      Returns the current status of the selected Sequencer output.
    */
    BoolFeature BoSequencerIOStatus;
    /**
        \brief      Returns if the sequencer is running.
    */
    BoolFeature BoSequencerIsRunning;
    /**
        \brief      Sets the number of Loops for the sequencer sets.
    */
    IntegerFeature BoSequencerLoops;
    /**
        \brief      Specifies the running mode of the sequencer.
    */
    CBoSequencerMode BoSequencerMode;
    /**
        \brief      Sets the number of sets to configure.
    */
    IntegerFeature BoSequencerNumberOfSets;
    /**
        \brief      Sets the Offset X for the selected sequencer set.
    */
    IntegerFeature BoSequencerOffsetX;
    /**
        \brief      Sets the Offset Y for the selected sequencer set.
    */
    IntegerFeature BoSequencerOffsetY;
    /**
        \brief      Sets the number of digitized samples outputted simultaneously by the camera A/D conversion stage for the sequencer.
    */
    CBoSequencerSensorDigitizationTaps BoSequencerSensorDigitizationTaps;
    /**
        \brief      Returns the index of the active set of the running sequencer.
    */
    IntegerFeature BoSequencerSetActive;
    /**
        \brief      Sets the number of sets to configure.
    */
    IntegerFeature BoSequencerSetNumberOfSets;
    /**
        \brief      Sets the sequencer sets Read Out Time in us for the current format settings.
    */
    IntegerFeature BoSequencerSetReadOutTime;
    /**
        \brief      Sets the number of repeats of a single parameter set.
    */
    IntegerFeature BoSequencerSetRepeats;
    /**
        \brief      Selects the sequencer set to configure.
    */
    IntegerFeature BoSequencerSetSelector;
    /**
        \brief      Starts or stopps the configured sequence.
    */
    CBoSequencerStart BoSequencerStart;
    /**
        \brief      Sets the Sequencers width of the image provided by the device (in pixels).
    */
    IntegerFeature BoSequencerWidth;
    /**
        \brief      Sets the automatic gain control (AGC) mode. The exact algorithm used to implement AGC is device-specific.
    */
    DoubleFeature BrightnessAutoNominalValue;
    /**
        \brief      Sets the highest priority auto feature to adjust the brightness.
    */
    CBrightnessAutoPriority BrightnessAutoPriority;
    /**
        \brief      Enables the Brightness Correction. Brightness Correction is available for binning only.
    */
    CBrightnessCorrection BrightnessCorrection;
    /**
        \brief      Indicates the factor of brightness correction in binning.
    */
    DoubleFeature BrightnessCorrectionFactor;
    /**
        \brief      Controls the low time in Clock Cycles for the Frame Valid signal between two frames.
    */
    IntegerFeature CLFVALLowTime;
    /**
        \brief      Controls the low time in Clock Cycles for the Line Valid signal between two lines.
    */
    IntegerFeature CLLVALLowTime;
    /**
        \brief      Controls the number of retransmissions allowed when a message channel message times out.
    */
    IntegerFeature CLMCRC;
    /**
        \brief      Provides the transmission timeout value in milliseconds.
    */
    IntegerFeature CLMCTT;
    /**
        \brief      Adds a calibration offset to compensate for an individual "roll" angle of the camera, introduced by mounting tolerances. The offset is added to all type of output data that incorporates an angle, like false color representation and angle of polarization data. The offset is without effect to raw data and to degree of linear polarization data.
    */
    DoubleFeature CalibrationAngleOfPolarizationOffset;
    /**
        \brief      Activates the calibration of the four polarized light channels by applying matrix calculations and an angle offset.
    */
    BoolFeature CalibrationEnable;
    /**
        \brief      Represents the value of the selected gain factor inside the calibration matrix.
    */
    DoubleFeature CalibrationMatrixValue;
    /**
        \brief      Selects the gain factor of the selected calibration matrix.
    */
    CCalibrationMatrixValueSelector CalibrationMatrixValueSelector;
    /**
        \brief      Returns the request ID of the action command that triggered the image.
    */
    IntegerFeature ChunkActionRequestID;
    /**
        \brief      Returns the IP Adress of the action command source that triggered the image.
    */
    IntegerFeature ChunkActionSourceIP;
    /**
        \brief      Returns the number of horizontal and vertical photo-sensitive cells to combine together calculated in camera.
    */
    IntegerFeature ChunkBinningRegion0;
    /**
        \brief      Returns the number of horizontal and vertical photo-sensitive cells to combine together calculated in sensor.
    */
    IntegerFeature ChunkBinningSensor;
    /**
        \brief      Enables the inclusion of the selected Chunk data in the payload of the image.
    */
    BoolFeature ChunkEnable;
    /**
        \brief      Activates the inclusion of Chunk data in the transmitted payload.
    */
    BoolFeature ChunkModeActive;
    /**
        \brief      Selects which Chunk to enable or control.
    */
    CChunkSelector ChunkSelector;
    /**
        \brief      Returns the number of received trigger at the time of the FrameStart event.
    */
    IntegerFeature ChunkTriggerCounter;
    /**
        \brief      This Camera Link specific feature describes the configuration used by the camera. It helps especially when a camera is capable of operation in a non-standard configuration, and when the features PixelSize, SensorDigitizationTaps, and DeviceTapGeometry do not provide enough information for interpretation of the image data provided by the camera.
    */
    CClConfiguration ClConfiguration;
    /**
        \brief      This Camera Link specific feature describes the time multiplexing of the camera link connection to transfer more than the configuration allows, in one single clock.
    */
    CClTimeSlotsCount ClTimeSlotsCount;
    /**
        \brief      Controls the mode for automatic adjusting the gains of the active transformation matrix.
    */
    CColorTransformationAuto ColorTransformationAuto;
    /**
        \brief      Activates the selected Color Transformation module.
    */
    BoolFeature ColorTransformationEnable;
    /**
        \brief      Selects the color transformation factory list tuned to the given color temeperature.
    */
    CColorTransformationFactoryListSelector ColorTransformationFactoryListSelector;
    /**
        \brief      sRGB Gamma 1: Camera was calibrated for the color space sRGB Gamma 1.
    */
    StringFeature ColorTransformationOutputColorSpace;
    /**
        \brief      Resets the ColorTransformation to the selected ColorTransformationFactoryList.
    */
    CommandFeature ColorTransformationResetToFactoryList;
    /**
        \brief      Selects which Color Transformation module is controlled by the various Color Transformation features.
    */
    CColorTransformationSelector ColorTransformationSelector;
    /**
        \brief      Represents the value of the selected Gain factor or Offset inside the Transformation matrix.
    */
    DoubleFeature ColorTransformationValue;
    /**
        \brief      Selects the Gain factor or Offset of the Transformation matrix to access in the selected Color Transformation module.
    */
    CColorTransformationValueSelector ColorTransformationValueSelector;
    /**
        \brief      Controls if the selected component streaming is active.
    */
    BoolFeature ComponentEnable;
    /**
        \brief      Selects a component to activate/deactivate its data streaming.
    */
    CComponentSelector ComponentSelector;
    /**
        \brief      Enables the Concatenation mode.
    */
    IntegerFeature ConcatenationEnable;
    /**
        \brief      Sets the duration (or number of events) before the CounterEnd event is generated.
    */
    IntegerFeature CounterDuration;
    /**
        \brief      Selects the Activation mode Event Source signal.
    */
    CCounterEventActivation CounterEventActivation;
    /**
        \brief      Select the events that will be the source to increment the Counter.
    */
    CCounterEventSource CounterEventSource;
    /**
        \brief      Does a software reset of the selected Counter and starts it. The counter starts counting events immediately after the reset unless a Counter trigger is active. CounterReset can be used to reset the Counter independently from the CounterResetSource. To disable the counter temporarily, set CounterEventSource to Off.
    */
    CommandFeature CounterReset;
    /**
        \brief      Selects the Activation mode of the Counter Reset Source signal.
    */
    CCounterResetActivation CounterResetActivation;
    /**
        \brief      Selects the signals that will be the source to reset the Counter.
    */
    CCounterResetSource CounterResetSource;
    /**
        \brief      Selects which Counter to configure.
    */
    CCounterSelector CounterSelector;
    /**
        \brief      Reads or writes the current value of the selected Counter.
    */
    IntegerFeature CounterValue;
    /**
        \brief      Reads the value of the selected Counter when it was reset by a trigger or by an explicit CounterReset command.
    */
    IntegerFeature CounterValueAtReset;
    /**
        \brief      Sets one byte of custom special data.
    */
    IntegerFeature CustomData;
    /**
        \brief      Controls if the custom data configuration mode is active.
    */
    CCustomDataConfigurationMode CustomDataConfigurationMode;
    /**
        \brief      Selects the index of the custom data byte array.
    */
    IntegerFeature CustomDataSelector;
    /**
        \brief      Horizontal sub-sampling of the image. This reduces the horizontal resolution (width) of the image by the specified horizontal decimation factor.
    */
    IntegerFeature DecimationHorizontal;
    /**
        \brief      Sets the mode used to reduce the horizontal resolution when DecimationHorizontal is used.
    */
    CDecimationHorizontalMode DecimationHorizontalMode;
    /**
        \brief      Vertical sub-sampling of the image. This reduces the vertical resolution (height) of the image by the specified vertical decimation factor.
    */
    IntegerFeature DecimationVertical;
    /**
        \brief      Sets the mode used to reduce the Vertical resolution when DecimationVertical is used.
    */
    CDecimationVerticalMode DecimationVerticalMode;
    /**
        \brief      Enables the correction of defect pixels.
    */
    BoolFeature DefectPixelCorrection;
    /**
        \brief      Determines if the pixel correction is active for the selected entry.
    */
    BoolFeature DefectPixelListEntryActive;
    /**
        \brief      Sets the X position of the pixel.
    */
    IntegerFeature DefectPixelListEntryPosX;
    /**
        \brief      Sets the Y position of the pixel.
    */
    IntegerFeature DefectPixelListEntryPosY;
    /**
        \brief      Sets the index to the defect pixel correction list.
    */
    IntegerFeature DefectPixelListIndex;
    /**
        \brief      Selects which Defect Pixel List to control.
    */
    CDefectPixelListSelector DefectPixelListSelector;
    /**
        \brief      Character set used by the strings of the device.
    */
    CDeviceCharacterSet DeviceCharacterSet;
    /**
        \brief      Returns the frequency of the selected Clock.
    */
    DoubleFeature DeviceClockFrequency;
    /**
        \brief      Selects the clock frequency to access from the device.
    */
    CDeviceClockSelector DeviceClockSelector;
    /**
        \brief      Indicates the number of event channels supported by the device.
    */
    IntegerFeature DeviceEventChannelCount;
    /**
        \brief      Identifier of the product family of the device.
    */
    StringFeature DeviceFamilyName;
    /**
        \brief      Version of the firmware in the device.
    */
    StringFeature DeviceFirmwareVersion;
    /**
        \brief      Source control for frontside UART interface.
    */
    CDeviceFrontUARTSource DeviceFrontUARTSource;
    /**
        \brief      Major version of the GenCP protocol supported by the device.
    */
    IntegerFeature DeviceGenCPVersionMajor;
    /**
        \brief      Minor version of the GenCP protocol supported by the device.
    */
    IntegerFeature DeviceGenCPVersionMinor;
    /**
        \brief      Returns if the license at the device is valid or not for the license type, selected by the DeviceLicenseTypeSelector feature.
    */
    CDeviceLicense DeviceLicense;
    /**
        \brief      Selects the available License types.
    */
    CDeviceLicenseTypeSelector DeviceLicenseTypeSelector;
    /**
        \brief      Indicates the command timeout of the specified Link. This corresponds to the maximum response time of the device for a command sent on that link.
    */
    DoubleFeature DeviceLinkCommandTimeout;
    /**
        \brief      Activate or deactivate the Link's heartbeat.
    */
    CDeviceLinkHeartbeatMode DeviceLinkHeartbeatMode;
    /**
        \brief      Controls the current heartbeat timeout of the specific Link.
    */
    DoubleFeature DeviceLinkHeartbeatTimeout;
    /**
        \brief      Selects which Link of the device to control.
    */
    CDeviceLinkSelector DeviceLinkSelector;
    /**
        \brief      Indicates the speed of transmission negotiated on the specified Link.
    */
    IntegerFeature DeviceLinkSpeed;
    /**
        \brief      Limits the maximum bandwidth of the data that will be streamed out by the device on the selected Link. If necessary, delays will be uniformly inserted between transport layer packets in order to control the peak bandwidth.
    */
    IntegerFeature DeviceLinkThroughputLimit;
    /**
        \brief      Manufacturer information about the device.
    */
    StringFeature DeviceManufacturerInfo;
    /**
        \brief      Returns the Device Manufacturer Version.
    */
    IntegerFeature DeviceManufacturerVersion;
    /**
        \brief      Model of the device.
    */
    StringFeature DeviceModelName;
    /**
        \brief      Endianness of the registers of the device.
    */
    CDeviceRegistersEndianness DeviceRegistersEndianness;
    /**
        \brief      Resets the device to its power up state. After reset, the device must be rediscovered.
    */
    CommandFeature DeviceReset;
    /**
        \brief      Resets the device to its delivery state.
    */
    CommandFeature DeviceResetToDeliveryState;
    /**
        \brief      Major version of the Standard Features Naming Convention that was used to create the device's GenICam XML.
    */
    IntegerFeature DeviceSFNCVersionMajor;
    /**
        \brief      Minor version of the Standard Features Naming Convention that was used to create the device's GenICam XML.
    */
    IntegerFeature DeviceSFNCVersionMinor;
    /**
        \brief      Sub minor version of Standard Features Naming Convention that was used to create the device's GenICam XML.
    */
    IntegerFeature DeviceSFNCVersionSubMinor;
    /**
        \brief      Scan type of the sensor of the device.
    */
    CDeviceScanType DeviceScanType;
    /**
        \brief      Returns if selected sensor is connected.
    */
    BoolFeature DeviceSensorConnected;
    /**
        \brief      Returns if selected image sensor is initialized.
    */
    BoolFeature DeviceSensorInitialized;
    /**
        \brief      Selects which sensor is controlled by the various sensor specific features.
    */
    CDeviceSensorSelector DeviceSensorSelector;
    /**
        \brief      Specifies the type of the sensor.
    */
    CDeviceSensorType DeviceSensorType;
    /**
        \brief      Specifies the version of the CMOSIS sensor.
    */
    CDeviceSensorVersion DeviceSensorVersion;
    /**
        \brief      Device's serial number. This string is a unique identifier of the device.
    */
    StringFeature DeviceSerialNumber;
    /**
        \brief      This feature controls the baud rate used by the selected serial port.
    */
    CDeviceSerialPortBaudRate DeviceSerialPortBaudRate;
    /**
        \brief      Selects which serial port of the device to control.
    */
    CDeviceSerialPortSelector DeviceSerialPortSelector;
    /**
        \brief      Indicates the number of streaming channels supported by the device.
    */
    IntegerFeature DeviceStreamChannelCount;
    /**
        \brief      Endianness of multi-byte pixel data for this stream.
    */
    CDeviceStreamChannelEndianness DeviceStreamChannelEndianness;
    /**
        \brief      Specifies the stream packet size, in bytes, to send on the selected channel for a Transmitter or specifies the maximum packet size supported by a receiver.
    */
    IntegerFeature DeviceStreamChannelPacketSize;
    /**
        \brief      Selects the stream channel to control.
    */
    IntegerFeature DeviceStreamChannelSelector;
    /**
        \brief      Reports the type of the stream channel.
    */
    CDeviceStreamChannelType DeviceStreamChannelType;
    /**
        \brief      Transport Layer type of the device.
    */
    CDeviceTLType DeviceTLType;
    /**
        \brief      Major version of the Transport Layer of the device.
    */
    IntegerFeature DeviceTLVersionMajor;
    /**
        \brief      Minor version of the Transport Layer of the device.
    */
    IntegerFeature DeviceTLVersionMinor;
    /**
        \brief      Sub minor version of the Transport Layer of the device.
    */
    IntegerFeature DeviceTLVersionSubMinor;
    /**
        \brief      This device tap geometry feature describes the geometrical properties characterizing the taps of a camera as presented at the output of the device.
    */
    CDeviceTapGeometry DeviceTapGeometry;
    /**
        \brief      Device temperature in degrees Celsius (C). It is measured at the location selected by DeviceTemperatureSelector.
    */
    DoubleFeature DeviceTemperature;
    /**
        \brief      Returns if the device operates in a critical temperature range.
    */
    BoolFeature DeviceTemperatureExceeded;
    /**
        \brief      Enables the Peltier element.
    */
    BoolFeature DeviceTemperaturePeltierEnable;
    /**
        \brief      Selects the location within the device, where the temperature will be measured.
    */
    CDeviceTemperatureSelector DeviceTemperatureSelector;
    /**
        \brief      Returns the current temperature status of the device.
    */
    CDeviceTemperatureStatus DeviceTemperatureStatus;
    /**
        \brief      Sets the temperature threshold for the selected status transition in degrees Celsius.
    */
    IntegerFeature DeviceTemperatureStatusTransition;
    /**
        \brief      Selects which temperature transition is controlled by the feature DeviceTemperatureStatusTransition.
    */
    CDeviceTemperatureStatusTransitionSelector DeviceTemperatureStatusTransitionSelector;
    /**
        \brief      Returns if the device operates in critical temperature range.
    */
    BoolFeature DeviceTemperatureUnderrun;
    /**
        \brief      Returns the device type.
    */
    CDeviceType DeviceType;
    /**
        \brief      Returns the USB3 Vision unique ID which allows consistent identification of devices.
    */
    StringFeature DeviceUSB3VisionGUID;
    /**
        \brief      User-programmable device identifier.
    */
    StringFeature DeviceUserID;
    /**
        \brief      Name of the manufacturer of the device.
    */
    StringFeature DeviceVendorName;
    /**
        \brief      Version of the device.
    */
    StringFeature DeviceVersion;
    /**
        \brief      Controls the device version.
    */
    IntegerFeature DeviceVersionControl;
    /**
        \brief      Returns the number of discarded events.
    */
    IntegerFeature DiscardedEventCounter;
    /**
        \brief      Controls whether the Energy Efficient / Green Ethernet mode (802.3az) in the PHY is activated or not. A device reboot is needed for changes to take effect.
    */
    BoolFeature EnergyEfficientEthernetEnable;
    /**
        \brief      Activate or deactivate the notification to the host application of the occurrence of the selected Event.
    */
    CEventNotification EventNotification;
    /**
        \brief      Selects which Event to signal to the host application.
    */
    CEventSelector EventSelector;
    /**
        \brief      EventSensor1ConcatenationAvailableTimestamp
    */
    IntegerFeature EventSensor1ConcatenationAvailable;
    /**
        \brief      Returns the Timestamp of the Sensor 1 Concatenation Available Event.
    */
    IntegerFeature EventSensor1ConcatenationAvailableTimestamp;
    /**
        \brief      EventSensor1ConcatenationEmptyTimestamp
    */
    IntegerFeature EventSensor1ConcatenationEmpty;
    /**
        \brief      Returns the Timestamp of the Sensor 1 Concatenation Empty Event.
    */
    IntegerFeature EventSensor1ConcatenationEmptyTimestamp;
    /**
        \brief      EventSensor1ExposureEndTimestamp
    */
    IntegerFeature EventSensor1ExposureEnd;
    /**
        \brief      Returns the Timestamp of the Sensor 1 Exposure End Event. It can be used to determine precisely when the event occured.
    */
    IntegerFeature EventSensor1ExposureEndTimestamp;
    /**
        \brief      EventSensor1ExposureStartTimestamp
    */
    IntegerFeature EventSensor1ExposureStart;
    /**
        \brief      Returns the Timestamp of the Sensor 1 Exposure Start Event.
    */
    IntegerFeature EventSensor1ExposureStartTimestamp;
    /**
        \brief      EventSensor1ReadoutReadoutTimestamp
    */
    IntegerFeature EventSensor1ReadoutEnd;
    /**
        \brief      Returns the Timestamp of the Sensor 1 Readout End Event.
    */
    IntegerFeature EventSensor1ReadoutEndTimestamp;
    /**
        \brief      EventSensor1ReadoutStartTimestamp
    */
    IntegerFeature EventSensor1ReadoutStart;
    /**
        \brief      Returns the Timestamp of the Sensor 1 Readout Start Event.
    */
    IntegerFeature EventSensor1ReadoutStartTimestamp;
    /**
        \brief      EventSensor1TriggerReadyTimestamp
    */
    IntegerFeature EventSensor1TriggerReady;
    /**
        \brief      Returns the Timestamp of the Sensor 1 Trigger Ready Event.
    */
    IntegerFeature EventSensor1TriggerReadyTimestamp;
    /**
        \brief      EventSensor1TriggerSkippedTimestamp
    */
    IntegerFeature EventSensor1TriggerSkipped;
    /**
        \brief      Returns the Timestamp of the Sensor 1 Trigger Skipped Event.
    */
    IntegerFeature EventSensor1TriggerSkippedTimestamp;
    /**
        \brief      EventSensor2ConcatenationAvailableTimestamp
    */
    IntegerFeature EventSensor2ConcatenationAvailable;
    /**
        \brief      Returns the Timestamp of the Sensor 2 Concatenation Available Event.
    */
    IntegerFeature EventSensor2ConcatenationAvailableTimestamp;
    /**
        \brief      EventSensor2ConcatenationEmptyTimestamp
    */
    IntegerFeature EventSensor2ConcatenationEmpty;
    /**
        \brief      Returns the Timestamp of the Sensor 2 Concatenation Empty Event.
    */
    IntegerFeature EventSensor2ConcatenationEmptyTimestamp;
    /**
        \brief      EventSensor2ExposureEndTimestamp
    */
    IntegerFeature EventSensor2ExposureEnd;
    /**
        \brief      Returns the Timestamp of the Sensor 2 Exposure End Event. It can be used to determine precisely when the event occured.
    */
    IntegerFeature EventSensor2ExposureEndTimestamp;
    /**
        \brief      EventSensor2ExposureStartTimestamp
    */
    IntegerFeature EventSensor2ExposureStart;
    /**
        \brief      Returns the Timestamp of the Sensor 2 Exposure Start Event.
    */
    IntegerFeature EventSensor2ExposureStartTimestamp;
    /**
        \brief      EventSensor2ReadoutEndTimestamp
    */
    IntegerFeature EventSensor2ReadoutEnd;
    /**
        \brief      Returns the Timestamp of the Sensor 2 Readout End Event.
    */
    IntegerFeature EventSensor2ReadoutEndTimestamp;
    /**
        \brief      EventSensor2ReadoutStartTimestamp
    */
    IntegerFeature EventSensor2ReadoutStart;
    /**
        \brief      Returns the Timestamp of the Sensor 2 Readout Start Event.
    */
    IntegerFeature EventSensor2ReadoutStartTimestamp;
    /**
        \brief      EventSensor2TriggerReadyTimestamp
    */
    IntegerFeature EventSensor2TriggerReady;
    /**
        \brief      Returns the Timestamp of the Sensor 2 Trigger Ready Event.
    */
    IntegerFeature EventSensor2TriggerReadyTimestamp;
    /**
        \brief      EventSensor2TriggerSkippedTimestamp
    */
    IntegerFeature EventSensor2TriggerSkipped;
    /**
        \brief      Returns the Timestamp of the Sensor 2 Trigger Skipped Event.
    */
    IntegerFeature EventSensor2TriggerSkippedTimestamp;
    /**
        \brief      EventSensorInitializationFailedTimestamp
    */
    IntegerFeature EventSensorInitializationFailed;
    /**
        \brief      Returns the Timestamp of the Sensor Initialization Failed Event. It can be used to determine precisely when the event occurred.
    */
    IntegerFeature EventSensorInitializationFailedTimestamp;
    /**
        \brief      Returns the unique Identifier of the bo Serial UART0 Read Ready type of Event.
    */
    IntegerFeature EventboSerialUART0ReadReady;
    /**
        \brief      Returns the Timestamp of the bo Serial UART0 Read Ready Event.
    */
    IntegerFeature EventboSerialUART0ReadReadyTimestamp;
    /**
        \brief      Returns the unique Identifier of the bo Serial UART1 Read Ready type of Event.
    */
    IntegerFeature EventboSerialUART1ReadReady;
    /**
        \brief      Returns the Timestamp of the bo Serial UART1 Read Ready Event.
    */
    IntegerFeature EventboSerialUART1ReadReadyTimestamp;
    /**
        \brief      Sets the automatic exposure mode when ExposureMode is Timed. The exact algorithm used to implement this control is device-specific.
    */
    CExposureAuto ExposureAuto;
    /**
        \brief      Sets the maximal value of ExposureTime calculable by exposure auto algorithm.
    */
    DoubleFeature ExposureAutoMaxValue;
    /**
        \brief      Sets the minimal value of ExposureTime calculable by exposure auto algorithm.
    */
    DoubleFeature ExposureAutoMinValue;
    /**
        \brief      Sets the offset correction value that the camera applies to each even line in the "Exposure Lines" region when it is located on an even line.
    */
    IntegerFeature ExposureLinesOffsetEven;
    /**
        \brief      Sets the offset correction value that the camera applies to each odd line in the "Exposure Lines" region when it is located on an even line.
    */
    IntegerFeature ExposureLinesOffsetOdd;
    /**
        \brief      Sets the operation mode of the Exposure.
    */
    CExposureMode ExposureMode;
    /**
        \brief      Sets the Exposure time when ExposureMode is Timed and ExposureAuto is Off. This controls the duration where the photosensitive cells are exposed to light.
    */
    DoubleFeature ExposureTime;
    /**
        \brief      Returns the maximum value of the exposure time gap.
    */
    DoubleFeature ExposureTimeGapMax;
    /**
        \brief      Returns the minimum value of the exposure time gap.
    */
    DoubleFeature ExposureTimeGapMin;
    /**
        \brief      Enables the Fixed Pattern Noise Correction.
    */
    BoolFeature FixedPatternNoiseCorrection;
    /**
        \brief      Focal length in millimeters (mm).
    */
    DoubleFeature FocalLength;
    /**
        \brief      Initializes the focal length and makes it ready for use. The focal length position after initialization is implementation dependent. This feature is only implemented if an additional initialization is required after OpticControllerInitialize.
    */
    CommandFeature FocalLengthInitialize;
    /**
        \brief      Reads the status of the focal length.
    */
    CFocalLengthStatus FocalLengthStatus;
    /**
        \brief      Focal power (in diopters/dpt) is mostly used for liquid lenses and indicates how much a liquid lens focuses.
    */
    DoubleFeature FocalPower;
    /**
        \brief      Initializes the focus and makes it ready for use. The focus position after initialization is implementation dependent. This feature is only implemented if an additional initialization is required after OpticControllerInitialize.
    */
    CommandFeature FocusInitialize;
    /**
        \brief      Reads the status of the focus.
    */
    CFocusStatus FocusStatus;
    /**
        \brief      FocusStepper controls the stepper value of the Focus, e.g. ObjectSensorDistance or FocalPower. 0 is the closest focus.
    */
    IntegerFeature FocusStepper;
    /**
        \brief      Sets the frame counter. The frame counter will be incremented with every image taken by the camera. It can be manipulated by writing the features value.
    */
    IntegerFeature FrameCounter;
    /**
        \brief      Enables the 64 bit block ID length.
    */
    BoolFeature GVSPConfigurationBlockID64Bit;
    /**
        \brief      Controls the selected gain as an absolute physical value. This is an amplification factor applied to the video signal.
    */
    DoubleFeature Gain;
    /**
        \brief      Sets the automatic gain control (AGC) mode. The exact algorithm used to implement AGC is device-specific.
    */
    CGainAuto GainAuto;
    /**
        \brief      Sets the maximal value of Gain calculable by gain auto algorithm.
    */
    DoubleFeature GainAutoMaxValue;
    /**
        \brief      Sets the minimal value of Gain calculable by gain auto algorithm.
    */
    DoubleFeature GainAutoMinValue;
    /**
        \brief      Selects which Gain is controlled by the various Gain features.
    */
    CGainSelector GainSelector;
    /**
        \brief      Controls the gamma correction of pixel intensity. This is typically used to compensate for non-linearity of the display system (such as CRT).
    */
    DoubleFeature Gamma;
    /**
        \brief      Controls the device access privilege of an application.
    */
    CGevCCP GevCCP;
    /**
        \brief      Reports the default gateway IP address of the given logical link.
    */
    IntegerFeature GevCurrentDefaultGateway;
    /**
        \brief      Reports the IP address for the given logical link.
    */
    IntegerFeature GevCurrentIPAddress;
    /**
        \brief      Controls whether the DHCP IP configuration scheme is activated on the given logical link.
    */
    BoolFeature GevCurrentIPConfigurationDHCP;
    /**
        \brief      Controls whether the Link Local Address IP configuration scheme is activated on the given logical link.
    */
    BoolFeature GevCurrentIPConfigurationLLA;
    /**
        \brief      Controls whether the PersistentIP configuration scheme is activated on the given logical link.
    */
    BoolFeature GevCurrentIPConfigurationPersistentIP;
    /**
        \brief      Reports the subnet mask of the given logical link.
    */
    IntegerFeature GevCurrentSubnetMask;
    /**
        \brief      Indicates the maximum randomized delay the device will wait to acknowledge a discovery command.
    */
    IntegerFeature GevDiscoveryAckDelay;
    /**
        \brief      Indicates the first URL to the GenICam XML device description file. The First URL is used as the first choice by the application to retrieve the GenICam XML device description file.
    */
    StringFeature GevFirstURL;
    /**
        \brief      Enables the generation of extended status codes.
    */
    BoolFeature GevGVCPExtendedStatusCodes;
    /**
        \brief      Selects the GigE Vision version to control extended status codes for.
    */
    CGevGVCPExtendedStatusCodesSelector GevGVCPExtendedStatusCodesSelector;
    /**
        \brief      Enables the generation of PENDING_ACK.
    */
    BoolFeature GevGVCPPendingAck;
    /**
        \brief      Reports the current IP configuration status.
    */
    CGevIPConfigurationStatus GevIPConfigurationStatus;
    /**
        \brief      Selects which logical link to control.
    */
    IntegerFeature GevInterfaceSelector;
    /**
        \brief      MAC address of the logical link.
    */
    IntegerFeature GevMACAddress;
    /**
        \brief      Controls the destination IP address for the message channel.
    */
    IntegerFeature GevMCDA;
    /**
        \brief      Controls the port to which the device must send messages. Setting this value to 0 closes the message channel.
    */
    IntegerFeature GevMCPHostPort;
    /**
        \brief      Controls the number of retransmissions allowed when a message channel message times out.
    */
    IntegerFeature GevMCRC;
    /**
        \brief      This feature indicates the source port for the message channel.
    */
    IntegerFeature GevMCSP;
    /**
        \brief      Provides the transmission timeout value in milliseconds.
    */
    IntegerFeature GevMCTT;
    /**
        \brief      Controls whether incoming PAUSE Frames are handled on the given logical link.
    */
    BoolFeature GevPAUSEFrameReception;
    /**
        \brief      Controls whether PAUSE Frames can be generated on the given logical link.
    */
    BoolFeature GevPAUSEFrameTransmission;
    /**
        \brief      Controls the persistent default gateway for this logical link. It is only used when the device boots with the Persistent IP configuration scheme.
    */
    IntegerFeature GevPersistentDefaultGateway;
    /**
        \brief      Controls the Persistent IP address for this logical link. It is only used when the device boots with the Persistent IP configuration scheme.
    */
    IntegerFeature GevPersistentIPAddress;
    /**
        \brief      Controls the Persistent subnet mask associated with the Persistent IP address on this logical link. It is only used when the device boots with the Persistent IP configuration scheme.
    */
    IntegerFeature GevPersistentSubnetMask;
    /**
        \brief      Returns the address of the primary application.
    */
    IntegerFeature GevPrimaryApplicationIPAddress;
    /**
        \brief      Returns the UDP source port of the primary application.
    */
    IntegerFeature GevPrimaryApplicationSocket;
    /**
        \brief      Controls the key to use to authenticate primary application switchover requests.
    */
    IntegerFeature GevPrimaryApplicationSwitchoverKey;
    /**
        \brief      Enables the camera to continue to stream, for this stream channel, if its control channel is closed or regardless of the reception of any ICMP messages (such as destination unreachable messages).
    */
    BoolFeature GevSCCFGUnconditionalStreaming;
    /**
        \brief      Controls the destination IP address of the selected stream channel to which a GVSP transmitter must send data stream or the destination IP address from which a GVSP receiver may receive data stream.
    */
    IntegerFeature GevSCDA;
    /**
        \brief      Indicates the delay in timestamp counter unit to insert between each block (image) for the selected Stream Channel.
    */
    IntegerFeature GevSCFTD;
    /**
        \brief      Controls the delay (in GEV timestamp counter unit) to insert between each packet for this stream channel. This can be used as a crude flow-control mechanism if the application or the network infrastructure cannot keep up with the packets coming from the device.
    */
    IntegerFeature GevSCPD;
    /**
        \brief      Controls the port of the selected channel to which a GVSP transmitter must send data stream or the port from which a GVSP receiver may receive data stream. Setting this value to 0 closes the stream channel.
    */
    IntegerFeature GevSCPHostPort;
    /**
        \brief      Index of the logical link to use.
    */
    IntegerFeature GevSCPInterfaceIndex;
    /**
        \brief      The state of this feature is copied into the "do not fragment" bit of IP header of each stream packet. It can be used by the application to prevent IP fragmentation of packets on the stream channel.
    */
    BoolFeature GevSCPSDoNotFragment;
    /**
        \brief      Sends a test packet. When this feature is set, the device will fire one test packet.
    */
    BoolFeature GevSCPSFireTestPacket;
    /**
        \brief      This GigE Vision specific feature corresponds to DeviceStreamChannelPacketSize and should be kept in sync with it. It specifies the stream packet size, in bytes, to send on the selected channel for a GVSP transmitter or specifies the maximum packet size supported by a GVSP receiver.
    */
    IntegerFeature GevSCPSPacketSize;
    /**
        \brief      Indicates the source port of the stream channel.
    */
    IntegerFeature GevSCSP;
    /**
        \brief      Indicates the second URL to the GenICam XML device description file. This URL is an alternative if the application was unsuccessful to retrieve the device description file using the first URL.
    */
    StringFeature GevSecondURL;
    /**
        \brief      Selects the stream channel to control.
    */
    IntegerFeature GevStreamChannelSelector;
    /**
        \brief      Returns if the selected GEV option is supported.
    */
    BoolFeature GevSupportedOption;
    /**
        \brief      Selects the GEV option to interrogate for existing support.
    */
    CGevSupportedOptionSelector GevSupportedOptionSelector;
    /**
        \brief      Enables the High Dynamic Range mode of the camera.
    */
    BoolFeature HDREnable;
    /**
        \brief      Enables the TriggerAutoMode mode for HDR Mode of the camera.
    */
    BoolFeature HDREnableTriggerAutoMode;
    /**
        \brief      Sets the ratio of the total exposure time for the selected slope.
    */
    IntegerFeature HDRExposureRatio;
    /**
        \brief      Returns the ratio of the total exposure time for the selected slope expressed in percent.
    */
    DoubleFeature HDRExposureRatioPercent;
    /**
        \brief      Returns the exposure time for bright areas of image. This value represents the short exposure time, which is derived from (long) ExposureTime divided by HDRExposureTimeRatio.
    */
    DoubleFeature HDRExposureTimeBrightArea;
    /**
        \brief      Returns the exposure time for dark areas of image. This value represents the long exposure timea and is equal to the specified value of the standard feature ExposureTime.
    */
    DoubleFeature HDRExposureTimeDarkArea;
    /**
        \brief      Sets the exposure time ratio for HDR mode. Valid values are only power-of-two numbers. The feature will snap to next/previous valid value when current value is incremented/decremented, else it will round to nearest valid value.
    */
    IntegerFeature HDRExposureTimeRatio;
    /**
        \brief      Returns the sensor gain for bright areas of image. This value represents the lower gain used as offset for the HDR image.
    */
    IntegerFeature HDRGainBrightArea;
    /**
        \brief      Returns the sensor gain for dark areas of image. This value represents the higher gain, which is derived from lower gain and HDRGainRatio.
    */
    IntegerFeature HDRGainDarkArea;
    /**
        \brief      Returns the gain ratio for HDR mode.
    */
    DoubleFeature HDRGainRatio;
    /**
        \brief      Selects the gain ratio for HDR mode.
    */
    CHDRGainRatioSelector HDRGainRatioSelector;
    /**
        \brief      Selects the index of the HDR element to access.
    */
    IntegerFeature HDRIndex;
    /**
        \brief      Sets the saturation threshold of the selected slope.
    */
    IntegerFeature HDRPotentialAbs;
    /**
        \brief      Enables the calculation of an interleaved HDR image of the sensor to an HDR image. If this feature is disabled while HDR is enabled the interleaved HDR image of the sensor will be output.
    */
    BoolFeature HDRProcessingEnable;
    /**
        \brief      Enables smoothing of normalized neighbor pixels in HDR mode.
    */
    BoolFeature HDRProcessingSmoothingEnable;
    /**
        \brief      Specifies the upper threshold to determine valid pixels for HDR processing.
    */
    IntegerFeature HDRProcessingThresholdMax;
    /**
        \brief      Specifies the lower threshold to determine valid pixels for HDR processing.
    */
    IntegerFeature HDRProcessingThresholdMin;
    /**
        \brief      Enables the split view of interleaved HDR image.
    */
    BoolFeature HDRSplitviewEnable;
    /**
        \brief      Sets the gradient at selected grid point for HDR tone-mapping transfer curve.
    */
    DoubleFeature HDRTonemappingCurveGradient;
    /**
        \brief      Sets the grid point for HDR tone-mapping transfer curve.
    */
    IntegerFeature HDRTonemappingCurveGridpoint;
    /**
        \brief      Sets the index of grid point for the user-defined tone-mapping curve.
    */
    IntegerFeature HDRTonemappingCurveGridpointIndex;
    /**
        \brief      Sets the offset at selected grid point for HDR tone-mapping transfer curve.
    */
    IntegerFeature HDRTonemappingCurveOffset;
    /**
        \brief      Selects the predefined transfer curve for global tone-mapping of the calculated HDR image.
    */
    CHDRTonemappingCurvePresetSelector HDRTonemappingCurvePresetSelector;
    /**
        \brief      Resets the tone-mapping curve to the selected HDRTonemappingCurvePreset.
    */
    CommandFeature HDRTonemappingCurveResetToPreset;
    /**
        \brief      Enables the tone-mapping of calculated HDR image. If this feature is deactivated HDR pixels are only cropped to width of specified output pixelformat and HDR information will be lost..
    */
    BoolFeature HDRTonemappingEnable;
    /**
        \brief      Specifies the statistical maximal pixel value for local tone-mapping of the calculated HDR image.
    */
    IntegerFeature HDRTonemappingMax;
    /**
        \brief      Specifies the statistical mean value for local tone-mapping of the calculated HDR image.
    */
    IntegerFeature HDRTonemappingMean;
    /**
        \brief      Enables the HQ Mode of the camera with lower sensor frequency.
    */
    BoolFeature HQModeEnable;
    /**
        \brief      Height of the image provided by the device (in pixels).
    */
    IntegerFeature Height;
    /**
        \brief      Maximum height of the image (in pixels). This dimension is calculated after vertical binning, decimation or any other function changing the vertical dimension of the image.
    */
    IntegerFeature HeightMax;
    /**
        \brief      Returns the high conversion gain of the sensor.
    */
    DoubleFeature HighConversionGain;
    /**
        \brief      Enables the high conversion gain mode inside the sensor.
    */
    BoolFeature HighConversionGainEnable;
    /**
        \brief      Control the rate of the produced compressed stream.
    */
    DoubleFeature ImageCompressionBitrate;
    /**
        \brief      When JPEG is selected as the compression format, a device might optionally offer better control over JPEG-specific options through this feature.
    */
    CImageCompressionJPEGFormatOption ImageCompressionJPEGFormatOption;
    /**
        \brief      Enable a specific image compression mode as the base mode for image transfer. Optionally, chunk data can be appended to the compressed image.
    */
    CImageCompressionMode ImageCompressionMode;
    /**
        \brief      Control the quality of the produced compressed stream.
    */
    IntegerFeature ImageCompressionQuality;
    /**
        \brief      Two rate controlling options are offered: fixed bit rate or fixed quality. The exact implementation to achieve one or the other is vendor-specific.
    */
    CImageCompressionRateOption ImageCompressionRateOption;
    /**
        \brief      Describe the Version of Image Compression implementation.
    */
    StringFeature ImageCompressionVersion;
    /**
        \brief      Returns the data of the image. The size of the image itself is given in the Length element of the feature. The start address is stored in the element Address of the feature.
    */
    RegisterFeature ImageData;
    /**
        \brief      Enables the feature ImageData. If it is switch off the feature ImageData is not available.
    */
    BoolFeature ImageDataEnable;
    /**
        \brief      Returns the interface speed mode as string.
    */
    CInterfaceSpeedMode InterfaceSpeedMode;
    /**
        \brief      Specifies the content of the selected LUT.
    */
    CLUTContent LUTContent;
    /**
        \brief      Activates the selected LUT.
    */
    BoolFeature LUTEnable;
    /**
        \brief      Control the index (offset) of the coefficient to access in the selected LUT.
    */
    IntegerFeature LUTIndex;
    /**
        \brief      Selects which LUT to control.
    */
    CLUTSelector LUTSelector;
    /**
        \brief      Returns the Value at entry LUTIndex of the LUT selected by LUTSelector.
    */
    IntegerFeature LUTValue;
    /**
        \brief      Sets the absolute value of the selected line debouncer time in microseconds for switch from low to high.
    */
    DoubleFeature LineDebouncerHighTime;
    /**
        \brief      Sets the absolute value of the selected line debouncer time in microseconds for switch from low to high.
    */
    DoubleFeature LineDebouncerHighTimeAbs;
    /**
        \brief      Sets the absolute value of the selected line debouncer time in microseconds for switch from high to low.
    */
    DoubleFeature LineDebouncerLowTime;
    /**
        \brief      Sets the absolute value of the selected line debouncer time in microseconds for switch from high to low.
    */
    DoubleFeature LineDebouncerLowTimeAbs;
    /**
        \brief      Controls the current electrical format of the selected physical input or output Line.
    */
    CLineFormat LineFormat;
    /**
        \brief      Controls the inversion of the signal of the selected input or output Line.
    */
    BoolFeature LineInverter;
    /**
        \brief      Returns the minimal length of a line internal reading by the camera in pixels.
    */
    IntegerFeature LineLengthMin;
    /**
        \brief      Controls if the physical Line is used to Input or Output a signal.
    */
    CLineMode LineMode;
    /**
        \brief      Enables the line PWM configuration mode.
    */
    CLinePWMConfigurationMode LinePWMConfigurationMode;
    /**
        \brief      Sets the duration in microseconds.
    */
    IntegerFeature LinePWMDuration;
    /**
        \brief      Sets the duty cycle in percent.
    */
    IntegerFeature LinePWMDutyCycle;
    /**
        \brief      Sets the maximum duration in microseconds.
    */
    IntegerFeature LinePWMMaxDuration;
    /**
        \brief      Sets the maximal duty cycle in percent.
    */
    IntegerFeature LinePWMMaxDutyCycle;
    /**
        \brief      Enables the line PWM configuration mode.
    */
    CLinePWMMode LinePWMMode;
    /**
        \brief      Returns the off time included in the PWM Period in microseconds.
    */
    IntegerFeature LinePWMOffTime;
    /**
        \brief      Returns the period time calculated of the given Duration and Duty Cycle in microseconds.
    */
    IntegerFeature LinePWMPeriodTime;
    /**
        \brief      Selects the physical line (or pin) of the external device connector or the virtual line of the Transport Layer to configure.
    */
    CLineSelector LineSelector;
    /**
        \brief      Selects which internal acquisition or I/O source signal to output on the selected Line. LineMode must be Output.
    */
    CLineSource LineSource;
    /**
        \brief      Returns the current status of the selected input or output Line.
    */
    BoolFeature LineStatus;
    /**
        \brief      Returns the current status of all available Line signals at time of polling in a single bitfield.
    */
    IntegerFeature LineStatusAll;
    /**
        \brief      Returns the number of lost events.
    */
    IntegerFeature LostEventCounter;
    /**
        \brief      Enables the Median filter.
    */
    BoolFeature MedianFilterEnable;
    /**
        \brief      Returns the active memory part to write the images in.
    */
    CMemoryActivePart MemoryActivePart;
    /**
        \brief      Returns the number of filled memory blocks.
    */
    IntegerFeature MemoryFilledBlocks;
    /**
        \brief      Returns the number of free memory blocks.
    */
    IntegerFeature MemoryFreeBlocks;
    /**
        \brief      Returns the maximum number of available memory blocks.It depends on partial scan features, pixelformat and selected acquisition format.
    */
    IntegerFeature MemoryMaxBlocks;
    /**
        \brief      Controls the mode to use the memory.
    */
    CMemoryMode MemoryMode;
    /**
        \brief      Returns the index of the actual used memory block.
    */
    IntegerFeature MemoryPartActiveBlock;
    /**
        \brief      Sest the number of available memory blocks in the selected memory part.
    */
    IntegerFeature MemoryPartBlocks;
    /**
        \brief      Returns the number of filled memory blocks in the selected memory part.
    */
    IntegerFeature MemoryPartFilledBlocks;
    /**
        \brief      Returns the number of free memory blocks in the selected memory part.
    */
    IntegerFeature MemoryPartFreeBlocks;
    /**
        \brief      Writes to the command switch the active memory part incremental.
    */
    CommandFeature MemoryPartIncrementSoftware;
    /**
        \brief      Selects the source to switch the active memory part.
    */
    CMemoryPartIncrementSource MemoryPartIncrementSource;
    /**
        \brief      Selects the mode to use for the selected memory part.
    */
    CMemoryPartMode MemoryPartMode;
    /**
        \brief      Sets the ratio of preview images transmitted to host. A Value of 0 means no images are transmitted. A Value of 1 means every image will be transmitted and so on.
    */
    IntegerFeature MemoryPartPreviewRatio;
    /**
        \brief      Selects on of the available memory parts.
    */
    CMemoryPartSelector MemoryPartSelector;
    /**
        \brief      Horizontal offset from the origin to the region of interest (in pixels).
    */
    IntegerFeature OffsetX;
    /**
        \brief      Vertical offset from the origin to the region of interest (in pixels).
    */
    IntegerFeature OffsetY;
    /**
        \brief      Prepares the optic controller for removal.
    */
    CommandFeature OpticControllerDisconnect;
    /**
        \brief      Name of the device family of the optic controller.
    */
    StringFeature OpticControllerFamilyName;
    /**
        \brief      Version of the firmware in the optic controller.
    */
    StringFeature OpticControllerFirmwareVersion;
    /**
        \brief      Initializes the selected optic controller and makes it ready for use.
    */
    CommandFeature OpticControllerInitialize;
    /**
        \brief      Model name of the optic controller.
    */
    StringFeature OpticControllerModelName;
    /**
        \brief      Selects which optic controller to configure.
    */
    COpticControllerSelector OpticControllerSelector;
    /**
        \brief      Serial number of the optic controller.
    */
    StringFeature OpticControllerSerialNumber;
    /**
        \brief      Reads the status of the optic controller.
    */
    COpticControllerStatus OpticControllerStatus;
    /**
        \brief      Temperature of the optic controller in degrees Celsius (C).
    */
    DoubleFeature OpticControllerTemperature;
    /**
        \brief      Enables the thermal compensation of the optic controller.
    */
    BoolFeature OpticControllerThermalCompensation;
    /**
        \brief      Name of the manufacturer of the optic controller.
    */
    StringFeature OpticControllerVendorName;
    /**
        \brief      Version of the optic controller.
    */
    StringFeature OpticControllerVersion;
    /**
        \brief      PIN to unlock the camera stream.
    */
    IntegerFeature PIN;
    /**
        \brief      Enables the partial scan readout.
    */
    CPartialScanEnabled PartialScanEnabled;
    /**
        \brief      Provides the number of bytes transferred for each data buffer or chunk on the stream channel. This includes any end-of-line, end-of-frame statistics or other stamp data. This is the total size of data payload for a data block.
    */
    IntegerFeature PayloadSize;
    /**
        \brief      Returns the physical pixel size X in um.
    */
    DoubleFeature PhysicalPixelSizeX;
    /**
        \brief      Returns the physical pixel size Y in um.
    */
    DoubleFeature PhysicalPixelSizeY;
    /**
        \brief      Enables the dark pixel and warm pixel correction.
    */
    BoolFeature PixelCorrectionEnable;
    /**
        \brief      Sets the threshold for Pixel correction.
    */
    IntegerFeature PixelCorrectionThreshold;
    /**
        \brief      Format of the pixels provided by the device. It represents all the information provided by PixelSize, PixelColorFilter combined in a single feature.
    */
    CPixelFormat PixelFormat;
    /**
        \brief      Indicates the expected accuracy of the device PTP clock when it is the grandmaster, or in the event it becomes the grandmaster.
    */
    CPtpClockAccuracy PtpClockAccuracy;
    /**
        \brief      Returns the latched clock ID of the PTP device.
    */
    IntegerFeature PtpClockID;
    /**
        \brief      Sets the offset which will be added or subtracted to the cameras internal timestamp.
    */
    IntegerFeature PtpClockOffset;
    /**
        \brief      Sets the mode to handle PtpClockOffset for command PtpClockOffsetSet.
    */
    CPtpClockOffsetMode PtpClockOffsetMode;
    /**
        \brief      Sets PtpClockOffset active like described in PtpClockOffsetMode.
    */
    CommandFeature PtpClockOffsetSet;
    /**
        \brief      Latches the current values from the device's PTP clock data set.
    */
    CommandFeature PtpDataSetLatch;
    /**
        \brief      Sets the offset which will be added or subtracted to the cameras internal timestamp increment.
    */
    IntegerFeature PtpDriftOffset;
    /**
        \brief      Sets the mode to handle PtpDriftOffset for command PtpDriftOffsetSet.
    */
    CPtpDriftOffsetMode PtpDriftOffsetMode;
    /**
        \brief      Sets PtpDriftOffset active like described in PtpDriftOffsetMode.
    */
    CommandFeature PtpDriftOffsetSet;
    /**
        \brief      Enables the Precision Time Protocol (PTP).
    */
    BoolFeature PtpEnable;
    /**
        \brief      Returns the latched grandmaster clock ID of the PTP device. The grandmaster clock ID is the clock ID of the current grandmaster clock.
    */
    IntegerFeature PtpGrandmasterClockID;
    /**
        \brief      Sets ki value of servos pi controller if PtpUseControllerTestSettings = True.
    */
    DoubleFeature PtpKi;
    /**
        \brief      Sets kp value of servos pi controller if PtpUseControllerTestSettings = True.
    */
    DoubleFeature PtpKp;
    /**
        \brief      Selects the PTP clock type the device will act as.
    */
    CPtpMode PtpMode;
    /**
        \brief      Returns the latched offset from the PTP master clock in nanoseconds.
    */
    IntegerFeature PtpOffsetFromMaster;
    /**
        \brief      Returns the latched parent clock ID of the PTP device. The parent clock ID is the clock ID of the current master clock.
    */
    IntegerFeature PtpParentClockID;
    /**
        \brief      Returns the latched state of the clock servo. When the servo is in a locked state, the value returned is 'Locked'. When the servo is in a non-locked state, a device-specific value can be returned to give specific information. If no device-specific value is available to describe the current state of the clock servo, the value should be 'Unknown'.
    */
    CPtpServoStatus PtpServoStatus;
    /**
        \brief      Sets the threshold of time difference to Ptp Master Clock for transition PtpServoStatus Unknown to Locked.
    */
    IntegerFeature PtpServoStatusThreshold;
    /**
        \brief      Returns the latched state of the PTP clock.
    */
    CPtpStatus PtpStatus;
    /**
        \brief      Returns the latched sync message interval from the PTP master clock in milliseconds.
    */
    DoubleFeature PtpSyncMessageInterval;
    /**
        \brief      Returns if the latched sync message interval from the PTP master clock is supported by the device. An unsupported sync message interval may result in PtpServoStatus instability.
    */
    CPtpSyncMessageIntervalStatus PtpSyncMessageIntervalStatus;
    /**
        \brief      Sets the offset which will be added or subtracted to the ptp ethernet Rx and/or Tx timestamps.
    */
    IntegerFeature PtpTimestampOffset;
    /**
        \brief      Sets the mode to handle PtpTimestampOffset for command PtpTimestampOffsetSet.
    */
    CPtpTimestampOffsetMode PtpTimestampOffsetMode;
    /**
        \brief      Sets PtpTimestampOffset active like described in PtpTimestampOffsetMode.
    */
    CommandFeature PtpTimestampOffsetSet;
    /**
        \brief      Uses PtpKp and PtpKi as pi controller values.
    */
    BoolFeature PtpUseControllerTestSettings;
    /**
        \brief      Selects the number of image buffers filled with data of sensor output. If all buffers full the oldest buffer will be overwritten.
    */
    CReadOutBuffering ReadOutBuffering;
    /**
        \brief      Returns the Readout Time in us for current format settings.
    */
    IntegerFeature ReadOutTime;
    /**
        \brief      Specifies the operation mode of the readout for the acquisition.
    */
    CReadoutMode ReadoutMode;
    /**
        \brief      Returns the acquisition mode of the regions.
    */
    CRegionAcquisitionMode RegionAcquisitionMode;
    /**
        \brief      Returns the configuration mode of the regions.
    */
    CRegionConfigurationMode RegionConfigurationMode;
    /**
        \brief      Controls if the selected Region of interest is active and streaming.
    */
    CRegionMode RegionMode;
    /**
        \brief      Selects the Region of interest to control. The RegionSelector feature allows devices that are able to extract multiple regions out of an image, to configure the features of those individual regions independently.
    */
    CRegionSelector RegionSelector;
    /**
        \brief      Returns the transfer mode of the regions.
    */
    CRegionTransferMode RegionTransferMode;
    /**
        \brief      Returns the Version of Multi ROI implementation.
    */
    StringFeature RegionVersion;
    /**
        \brief      Flip horizontally the image sent by the device. The Region of interest is applied after the flipping.
    */
    BoolFeature ReverseX;
    /**
        \brief      Flip vertically the image sent by the device. The Region of interest is applied after the flipping.
    */
    BoolFeature ReverseY;
    /**
        \brief      Controls the length of a serial acknowledge message from RS232 to the device.
    */
    IntegerFeature RxAcknowledgeLength;
    /**
        \brief      Returns the number of discarded messages in receiving direction.
    */
    IntegerFeature RxDiscardedMessages;
    /**
        \brief      Returns the received data if available.
    */
    RegisterFeature RxFiFo;
    /**
        \brief      Returns the length of the current received message in the RS232-Rx FIFO and 0 if no message was received.
    */
    IntegerFeature RxFiFoMessageLength;
    /**
        \brief      Sets the number of attempts to receive a message if direct receiving was not successful.
    */
    IntegerFeature RxRetryCount;
    /**
        \brief      Sets the maximum delay between to received bytes for recognition of message ends in bit times.
    */
    IntegerFeature RxSynchronizationDelay;
    /**
        \brief      Sets the maximum delay between to received bytes for recognition of message ends in us.
    */
    DoubleFeature RxSynchronizationDelayNormalized;
    /**
        \brief      Controls the streaming operation.
    */
    CSIControl SIControl;
    /**
        \brief      Returns the size of the first final Payload Transfer.
    */
    IntegerFeature SIPayloadFinalTransfer1Size;
    /**
        \brief      Returns the size of the second final Payload Transfer.
    */
    IntegerFeature SIPayloadFinalTransfer2Size;
    /**
        \brief      Returns the expected number of Payload Transfers.
    */
    IntegerFeature SIPayloadTransferCount;
    /**
        \brief      Returns the expected size of a single Payload Transfer.
    */
    IntegerFeature SIPayloadTransferSize;
    /**
        \brief      The maximum number of pixels per line for sensor 1.
    */
    IntegerFeature Sensor1XCutLength;
    /**
        \brief      The start point of pixel 0 on a line for sensor 1. It is programmed during sensor adjustment.
    */
    IntegerFeature Sensor1XCutStart;
    /**
        \brief      The maximum number of lines per image for sensor 1.
    */
    IntegerFeature Sensor1YCutLength;
    /**
        \brief      The start point of line 0 for in the image for sensor 1. It is programmed during sensor adjustment.
    */
    IntegerFeature Sensor1YCutStart;
    /**
        \brief      The maximum number of pixels per line for sensor 2.
    */
    IntegerFeature Sensor2XCutLength;
    /**
        \brief      The start point of pixel 0 on a line for sensor 2. It is programmed during sensor adjustment.
    */
    IntegerFeature Sensor2XCutStart;
    /**
        \brief      The maximum number of lines per image for sensor 2.
    */
    IntegerFeature Sensor2YCutLength;
    /**
        \brief      The start point of line 0 for in the image for sensor 2. It is programmed during sensor adjustment.
    */
    IntegerFeature Sensor2YCutStart;
    /**
        \brief      Controls the sensors AD digitization in bits per pixels.
    */
    CSensorADDigitization SensorADDigitization;
    /**
        \brief      Number of digitized samples outputted simultaneously by the camera A/D conversion stage.
    */
    CSensorDigitizationTaps SensorDigitizationTaps;
    /**
        \brief      Enables the Sensor Effect Correction.
    */
    BoolFeature SensorEffectCorrection;
    /**
        \brief      Returns the number of lost frames because of sensor FIFO overflow.
    */
    IntegerFeature SensorFiFoOverflowCounter;
    /**
        \brief      Resets the Sensor FIFO overflow counter to 0.
    */
    CommandFeature SensorFiFoOverflowCounterReset;
    /**
        \brief      Effective height of the sensor in pixels.
    */
    IntegerFeature SensorHeight;
    /**
        \brief      Product name of the imaging Sensor.
    */
    StringFeature SensorName;
    /**
        \brief      Physical size (pitch) in the y direction of a photo sensitive pixel unit.
    */
    DoubleFeature SensorPixelHeight;
    /**
        \brief      Physical size (pitch) in the x direction of a photo sensitive pixel unit.
    */
    DoubleFeature SensorPixelWidth;
    /**
        \brief      Specifies the shutter mode of the device.
    */
    CSensorShutterMode SensorShutterMode;
    /**
        \brief      Number of taps of the camera sensor.
    */
    CSensorTaps SensorTaps;
    /**
        \brief      Effective width of the sensor in pixels.
    */
    IntegerFeature SensorWidth;
    /**
        \brief      Controls if the sequencer configuration mode is active.
    */
    CSequencerConfigurationMode SequencerConfigurationMode;
    /**
        \brief      Enables the selected feature and make it active in all the sequencer sets.
    */
    BoolFeature SequencerFeatureEnable;
    /**
        \brief      Selects which sequencer features to control.
    */
    CSequencerFeatureSelector SequencerFeatureSelector;
    /**
        \brief      Controls if the sequencer mechanism is active.
    */
    CSequencerMode SequencerMode;
    /**
        \brief      Selects to which branching path further path settings applies.
    */
    IntegerFeature SequencerPathSelector;
    /**
        \brief      Contains the currently active sequencer set.
    */
    IntegerFeature SequencerSetActive;
    /**
        \brief      Loads the sequencer set selected by SequencerSetSelector in the device. Even if SequencerMode is off, this will change the device state to the configuration of the selected set.
    */
    CommandFeature SequencerSetLoad;
    /**
        \brief      Specifies the next sequencer set.
    */
    IntegerFeature SequencerSetNext;
    /**
        \brief      Saves the current device state to the sequencer set selected by the SequencerSetSelector.
    */
    CommandFeature SequencerSetSave;
    /**
        \brief      Selects the sequencer set to which further feature settings applies.
    */
    IntegerFeature SequencerSetSelector;
    /**
        \brief      Sets the initial/start sequencer set, which is the first set used within a sequencer.
    */
    IntegerFeature SequencerSetStart;
    /**
        \brief      Specifies the activation mode of the sequencer trigger.
    */
    CSequencerTriggerActivation SequencerTriggerActivation;
    /**
        \brief      Specifies the internal signal or physical input line to use as the sequencer trigger source.
    */
    CSequencerTriggerSource SequencerTriggerSource;
    /**
        \brief      Starts Shading Calibration.
    */
    CommandFeature ShadingCalibrationStart;
    /**
        \brief      Enables Shading Correction.
    */
    BoolFeature ShadingEnable;
    /**
        \brief      Returns the maximum gain for Shading.
    */
    IntegerFeature ShadingMaxGain;
    /**
        \brief      Returns the Port Address for Shading as a hexadecimal value.
    */
    IntegerFeature ShadingPortAddress;
    /**
        \brief      Selects the Shading Port Address.
    */
    CShadingSelector ShadingSelector;
    /**
        \brief      Returns the number of pixels as border at x direction.
    */
    IntegerFeature ShadingXBorder;
    /**
        \brief      Returns the number of pixels as border at y direction.
    */
    IntegerFeature ShadingYBorder;
    /**
        \brief      Enables the Sharpening.
    */
    BoolFeature SharpeningEnable;
    /**
        \brief      Sets the factor for Sharpening.
    */
    IntegerFeature SharpeningFactor;
    /**
        \brief      Selects the Sharpening Mode.
    */
    CSharpeningMode SharpeningMode;
    /**
        \brief      Sets the value of the Sharpening Sensitivity Threshold.
    */
    IntegerFeature SharpeningSensitivityThreshold;
    /**
        \brief      Sets the value of the Sharpening Sensitivity Threshold.
    */
    IntegerFeature SharpeningSensitvityThreshold;
    /**
        \brief      Controls if short exposure time should be supported. Note if this feature is enabled one cannot use the sequencer.
    */
    BoolFeature ShortExposureTimeEnable;
    /**
        \brief      Enables the correction of Shutter Line and Exposure Lines when set to True, disables it when set to False.
    */
    BoolFeature ShutterLineCorrectionEnable;
    /**
        \brief      Sets the offset correction value that the camera applies to the even line in the "Shutter Line" region.
    */
    IntegerFeature ShutterLineOffsetEven;
    /**
        \brief      Sets the offset correction value that the camera applies to the odd line in the "Shutter Line" region.
    */
    IntegerFeature ShutterLineOffsetOdd;
    /**
        \brief      Controls or returns the number of sources supported by the device.
    */
    IntegerFeature SourceCount;
    /**
        \brief      Returns a unique Identifier value that correspond to the selected Source.
    */
    CSourceID SourceID;
    /**
        \brief      Returns a unique Identifier value that correspond to the selected Source.
    */
    IntegerFeature SourceIDValue;
    /**
        \brief      Selects the source to control.
    */
    CSourceSelector SourceSelector;
    /**
        \brief      Returns if the selected MAC address table entry is valid or not.
    */
    BoolFeature SwitchMACAddressTableEntryIsValid;
    /**
        \brief      Provides the MAC address of the selected MAC address table entry.
    */
    IntegerFeature SwitchMACAddressTableEntryMACAddress;
    /**
        \brief      Provides the port number of the selected MAC address table entry.
    */
    IntegerFeature SwitchMACAddressTableEntryPortNumber;
    /**
        \brief      Selects the MAC addresses table entry for the MAC address table entry related features.
    */
    IntegerFeature SwitchMACAddressTableEntrySelector;
    /**
        \brief      Provides the number MAC addresses at switches MAC address table.
    */
    IntegerFeature SwitchNumberOfMACAddresses;
    /**
        \brief      Provides the number of ports of the switch.
    */
    IntegerFeature SwitchNumberOfPorts;
    /**
        \brief      Returns the value of the broadcast valid counter.
    */
    IntegerFeature SwitchPortBroadcastValidCounter;
    /**
        \brief      Returns the value of the buffer full counter.
    */
    IntegerFeature SwitchPortBufferFullCounter;
    /**
        \brief      Provides the buffer size at the selected port.
    */
    IntegerFeature SwitchPortBufferSize;
    /**
        \brief      Returns the value of the CRC error counter.
    */
    IntegerFeature SwitchPortCRCErrorCounter;
    /**
        \brief      Returns the value of the multicast valid counter.
    */
    IntegerFeature SwitchPortMulticastValidCounter;
    /**
        \brief      Provides the number of buffers at the selected port.
    */
    IntegerFeature SwitchPortNumberOfBuffers;
    /**
        \brief      Returns the value of the PAUSE frame reception counter.
    */
    IntegerFeature SwitchPortPAUSEFrameReceptionCounter;
    /**
        \brief      Returns the value of the Packet size error counter.
    */
    IntegerFeature SwitchPortPacketSizeErrorCounter;
    /**
        \brief      Selects the port for the port related features.
    */
    CSwitchPortSelector SwitchPortSelector;
    /**
        \brief      Returns the value of the unicast valid counter.
    */
    IntegerFeature SwitchPortUnicastValidCounter;
    /**
        \brief      Provides the switch version.
    */
    IntegerFeature SwitchVersion;
    /**
        \brief      Used by the Transport Layer to prevent critical features from changing during acquisition.
    */
    IntegerFeature TLParamsLocked;
    /**
        \brief      Selects the type of test pattern that is generated by the device as image source.
    */
    CTestPattern TestPattern;
    /**
        \brief      Selects which test pattern generator is controlled by the TestPattern feature.
    */
    CTestPatternGeneratorSelector TestPatternGeneratorSelector;
    /**
        \brief      Tests the device's pending acknowledge feature. When this feature is written, the device waits a time period corresponding to the value of TestPendingAck before acknowledging the write.
    */
    IntegerFeature TestPendingAck;
    /**
        \brief      Sets the duration (in microseconds) of the delay to apply at the reception of a trigger before starting the Timer.
    */
    DoubleFeature TimerDelay;
    /**
        \brief      Sets the duration (in microseconds) of the Timer pulse.
    */
    DoubleFeature TimerDuration;
    /**
        \brief      Selects which Timer to configure.
    */
    CTimerSelector TimerSelector;
    /**
        \brief      Selects the activation mode of the trigger to start the Timer.
    */
    CTimerTriggerActivation TimerTriggerActivation;
    /**
        \brief      Selects the source of the trigger to start the Timer.
    */
    CTimerTriggerSource TimerTriggerSource;
    /**
        \brief      Latches the current timestamp counter into TimestampLatchValue.
    */
    CommandFeature TimestampLatch;
    /**
        \brief      Returns the latched value of the timestamp counter.
    */
    IntegerFeature TimestampLatchValue;
    /**
        \brief      Returns the latched value of the Ptp timestamp in days since 01.01.1970 00:00:00.
    */
    IntegerFeature TimestampLatchValuePtpDays;
    /**
        \brief      Returns the latched value of the Ptp timestamp in hours since 00:00 AM.
    */
    IntegerFeature TimestampLatchValuePtpHours;
    /**
        \brief      Returns the latched value of the Ptp timestamp in minutes since the last hour.
    */
    IntegerFeature TimestampLatchValuePtpMinutes;
    /**
        \brief      Returns the latched value of the Ptp timestamp in nanoseconds since the last second.
    */
    IntegerFeature TimestampLatchValuePtpNanoseconds;
    /**
        \brief      Returns the latched value of the Ptp timestamp counters in seconds since the last minute.
    */
    IntegerFeature TimestampLatchValuePtpSeconds;
    /**
        \brief      Resets the current value of the device timestamp counter.
    */
    CommandFeature TimestampReset;
    /**
        \brief      Selects the control method for the transfers.
    */
    CTransferControlMode TransferControlMode;
    /**
        \brief      Selects the operation mode of the transfer.
    */
    CTransferOperationMode TransferOperationMode;
    /**
        \brief      Selects which stream transfers are currently controlled by the selected Transfer features.
    */
    CTransferSelector TransferSelector;
    /**
        \brief      Starts the streaming of data blocks out of the device. This feature must be available when the TransferControlMode is set to "UserControlled". If the TransferStart feature is not writable (locked), the application should not start the transfer and should avoid using the feature until it becomes writable again.
    */
    CommandFeature TransferStart;
    /**
        \brief      Reads the status of the Transfer module signal selected by TransferStatusSelector.
    */
    BoolFeature TransferStatus;
    /**
        \brief      Selects which status of the transfer module to read.
    */
    CTransferStatusSelector TransferStatusSelector;
    /**
        \brief      Stops the streaming of data Block(s). The current block transmission will be completed. This feature must be available when the TransferControlMode is set to "UserControlled".
    */
    CommandFeature TransferStop;
    /**
        \brief      Specifies the activation mode of the trigger.
    */
    CTriggerActivation TriggerActivation;
    /**
        \brief      Latches the current timestamp counter into TimestampLatchValue.
    */
    CommandFeature TriggerCounterLatch;
    /**
        \brief      Returns the latched value of the trigger counter.
    */
    IntegerFeature TriggerCounterLatchValue;
    /**
        \brief      Resets the current value of the device trigger counter.
    */
    CommandFeature TriggerCounterReset;
    /**
        \brief      Specifies the delay in microseconds (us) to apply after the trigger reception before activating it.
    */
    DoubleFeature TriggerDelay;
    /**
        \brief      Generates the test event if the event channel for this event is enabled.
    */
    CommandFeature TriggerEventTest;
    /**
        \brief      Controls if the selected trigger is active.
    */
    CTriggerMode TriggerMode;
    /**
        \brief      Specifies the type trigger overlap permitted with the previous frame or line. This defines when a valid trigger will be accepted (or latched) for a new frame or a new line.
    */
    CTriggerOverlap TriggerOverlap;
    /**
        \brief      Selects the type of trigger to configure.
    */
    CTriggerSelector TriggerSelector;
    /**
        \brief      Generates an internal trigger. TriggerSource must be set to Software.
    */
    CommandFeature TriggerSoftware;
    /**
        \brief      Specifies the internal signal or physical input Line to use as the trigger source. The selected trigger must have its TriggerMode set to On.
    */
    CTriggerSource TriggerSource;
    /**
        \brief      Sets the delay between two consecutive bytes inside a sent message in bit times.
    */
    IntegerFeature TxByteDelay;
    /**
        \brief      Sets the delay between two consecutive bytes inside a sent message in us.
    */
    DoubleFeature TxByteDelayNormalized;
    /**
        \brief      Sets the Length of a serial command message from device to RS232.
    */
    IntegerFeature TxCommandoLength;
    /**
        \brief      Returns the number of unsent or discarded messages in sending direction.
    */
    IntegerFeature TxDiscardedMessages;
    /**
        \brief      Writes into the FIFO for sending messages over RS232.
    */
    RegisterFeature TxFiFo;
    /**
        \brief      Returns the number of RS232-Tx FIFO buffers currently free and usable.
    */
    IntegerFeature TxFiFoFreeBufferCount;
    /**
        \brief      Sets the minimal delay between last and first byte of two consecutive sent messages in bit times.
    */
    IntegerFeature TxMessageDelay;
    /**
        \brief      Returns the minimal delay between last and first byte of two consecutive sent messages in us.
    */
    DoubleFeature TxMessageDelayNormalized;
    /**
        \brief      Sets the number of attempts to resend a message if direct sending was not successful.
    */
    IntegerFeature TxRetryCount;
    /**
        \brief      Enables the streaming support for USB 2.0. Note, changing features value causes in an automatically reset of the device!
    */
    BoolFeature USB2SupportEnable;
    /**
        \brief      Selects which bit of the User Output register will be set by UserOutputValue.
    */
    CUserOutputSelector UserOutputSelector;
    /**
        \brief      Sets the value of the bit selected by UserOutputSelector.
    */
    BoolFeature UserOutputValue;
    /**
        \brief      Sets the value of all the bits of the User Output register. It is subject to the UserOutputValueAllMask.
    */
    IntegerFeature UserOutputValueAll;
    /**
        \brief      Returns the data of the selected UserSet. The size of the UserSet itself is given in the Length element of the feature. The start address is stored in the element Address of the feature. The feature is only available if the feature UserSetDataEnable is switched on.
    */
    RegisterFeature UserSetData;
    /**
        \brief      Enables the feature UserSetData. If it is switch to off the feature UserSetData is not available.
    */
    BoolFeature UserSetDataEnable;
    /**
        \brief      Selects the feature User Set to load and make active by default when the device is reset.
    */
    CUserSetDefault UserSetDefault;
    /**
        \brief      Enables the selected feature and make it active in all the UserSets.
    */
    BoolFeature UserSetFeatureEnable;
    /**
        \brief      Selects which individual UserSet feature to control.
    */
    CUserSetFeatureSelector UserSetFeatureSelector;
    /**
        \brief      Loads the User Set specified by UserSetSelector to the device and makes it active.
    */
    CommandFeature UserSetLoad;
    /**
        \brief      Save the User Set specified by UserSetSelector to the non-volatile memory of the device.
    */
    CommandFeature UserSetSave;
    /**
        \brief      Selects the feature User Set to load, save or configure.
    */
    CUserSetSelector UserSetSelector;
    /**
        \brief      Sets the selector for the Start Address of a single UserSet where the UserSet Data can read from.
    */
    IntegerFeature UserSetStartAddressSelector;
    /**
        \brief      Controls the mode for automatic white balancing between the color channels. The white balancing ratios are automatically adjusted.
    */
    CommandFeature WhiteBalance;
    /**
        \brief      Width of the image provided by the device (in pixels).
    */
    IntegerFeature Width;
    /**
        \brief      Maximum width of the image (in pixels). The dimension is calculated after horizontal binning, decimation or any other function changing the horizontal dimension of the image.
    */
    IntegerFeature WidthMax;
    /**
        \brief      Reports the number of discarded action command due to wrong action command parameters (DeviceKey, GroupKey, GroupMask).
    */
    IntegerFeature aActionCommandMACCtrlFramesError;
    /**
        \brief      Reports the number of received action command packets.
    */
    IntegerFeature aActionCommandMACCtrlFramesReceived;
    /**
        \brief      Reports the number of received PAUSE frames.
    */
    IntegerFeature aPAUSEMACCtrlFramesReceived;
    /**
        \brief      Reports the number of discarded packets due to wrong MAC address or wrong IP protocol or wrong UDP port or CRC error.
    */
    IntegerFeature aPacketMACCtrlFramesError;
    /**
        \brief      Reports the number of packets which cannot be received due to full receive buffers.
    */
    IntegerFeature aPacketMACCtrlFramesLost;
    /**
        \brief      Reports the number of correct received packets.
    */
    IntegerFeature aPacketMACCtrlFramesReceived;
    /**
        \brief      Reports the number of discarded resend packets due to wrong stream channel index or full resend queue.
    */
    IntegerFeature aResendMACCtrlFramesError;
    /**
        \brief      Reports the number of received resend packets.
    */
    IntegerFeature aResendMACCtrlFramesReceived;
    /**
        \brief      Angular aperture of the lens as the angular size of the lens aperture as seen from the focal point in degree.
    */
    DoubleFeature boCalibrationAngularAperture;
    /**
        \brief      Controls if the calibration data configuration mode is active.
    */
    CboCalibrationDataConfigurationMode boCalibrationDataConfigurationMode;
    /**
        \brief      Saves the current calibration data.
    */
    CommandFeature boCalibrationDataSave;
    /**
        \brief      Version of the calibration data.
    */
    StringFeature boCalibrationDataVersion;
    /**
        \brief      Focal length in millimeters (mm).
    */
    DoubleFeature boCalibrationFocalLength;
    /**
        \brief      Selects the calibration matrix.
    */
    CboCalibrationMatrixSelector boCalibrationMatrixSelector;
    /**
        \brief      Selected value of calibration matrix.
    */
    DoubleFeature boCalibrationMatrixValue;
    /**
        \brief      Value selector of calibration matrix.
    */
    CboCalibrationMatrixValueSelector boCalibrationMatrixValueSelector;
    /**
        \brief      Selects the calibration vector.
    */
    CboCalibrationVectorSelector boCalibrationVectorSelector;
    /**
        \brief      Selected value of calibration vector.
    */
    DoubleFeature boCalibrationVectorValue;
    /**
        \brief      Value selector of calibration vector.
    */
    CboCalibrationVectorValueSelector boCalibrationVectorValueSelector;
    /**
        \brief      Selected Value of geometry distortion.
    */
    DoubleFeature boGeometryDistortionValue;
    /**
        \brief      Value Selector of geometry distortion.
    */
    CboGeometryDistortionValueSelector boGeometryDistortionValueSelector;
    /**
        \brief      Buffer for exchanging ASCII data over the serial interface. This buffer uses the same memory as boSerialBinaryReadBuffer.
    */
    StringFeature boSerialASCIIReadBuffer;
    /**
        \brief      Buffer for exchanging ASCII data over the serial interface. This buffer uses the same memory as boSerialBinaryWriteBuffer.
    */
    StringFeature boSerialASCIIWriteBuffer;
    /**
        \brief      Buffer for exchanging binary data over the serial interface. This buffer uses the same memory as boSerialASCIIReadBuffer.
    */
    RegisterFeature boSerialBinaryReadBuffer;
    /**
        \brief      Buffer for exchanging binary data over the serial interface. This buffer uses the same memory as boSerialASCIIWriteBuffer.
    */
    RegisterFeature boSerialBinaryWriteBuffer;
    /**
        \brief      When refreshed number of available data bytes for read are shown.
    */
    IntegerFeature boSerialBytesAvailableForRead;
    /**
        \brief      Length of data read with last SerialRead command.
    */
    IntegerFeature boSerialBytesRead;
    /**
        \brief      Length of data to read.
    */
    IntegerFeature boSerialBytesToRead;
    /**
        \brief      Length of data to write.
    */
    IntegerFeature boSerialBytesToWrite;
    /**
        \brief      Length of data written with last boSerialWrite command.
    */
    IntegerFeature boSerialBytesWritten;
    /**
        \brief      Serial interface clock frequency.
    */
    CboSerialConfigBaudRate boSerialConfigBaudRate;
    /**
        \brief      Number of data bits.
    */
    CboSerialConfigDataBits boSerialConfigDataBits;
    /**
        \brief      Serial interface parity.
    */
    CboSerialConfigParity boSerialConfigParity;
    /**
        \brief      Number of stop bits.
    */
    CboSerialConfigStopBits boSerialConfigStopBits;
    /**
        \brief      States the interface mode of the serial interface.
    */
    CboSerialMode boSerialMode;
    /**
        \brief      Command to read data from serial interface.
    */
    CommandFeature boSerialRead;
    /**
        \brief      Selects which serial interface to configure.
    */
    CboSerialSelector boSerialSelector;
    /**
        \brief      Result of the serial error detection mechanism. The value is reset with each read access.
    */
    IntegerFeature boSerialStatus;
    /**
        \brief      Command to write data to serial interface.
    */
    CommandFeature boSerialWrite;
    /**
        \brief      Enables the eVA Applet.
    */
    BoolFeature eVAAppletEnable;
    /**
        \brief      Sets the number of overlapped images if eVA applet is enabled.
    */
    IntegerFeature eVAAppletOverlappedImages;
};
}
#endif  // _NEOAPI_FEATUREACCESS_HPP__
