/* \file neoapi_feature.hpp
 \brief        This file is part of the NeoAPI - It provides the C++ API Interface.

 Copyright (c) by Baumer Optronic GmbH. All rights reserved, please see the provided license document for full details.
 */
#ifndef _NEOAPI_FEATURE_HPP__
#define _NEOAPI_FEATURE_HPP__

#include "neoapi_common.hpp"

class FeatureData;
class FeatureListData;
class FeatureListIteratorData;

namespace NeoAPI {
class CamBase;
class FeatureList;
class FeatureListIterator;

/**
    \ingroup       All
    \ingroup       Main
    \brief         Provides access to camera features

    This class provides an easy way to work with camera features. It provides access to the GenICam SFNC features
    as well as custom features the camera might support.

    The Class has a set of methods to get information about and work with a feature (such as type, minimum
    and maximum values), find out if a feature is accessible (available/readable/writable) and to read or write features.

    More information about the GenICam SFNC (standard feature naming convention) can be found at the [EMVA Website]
    (https://www.emva.org/standards-technology/genicam/genicam-downloads/).

    More information about the features of your specific camera can be found in the documentation of your
    camera available at the member area of the [Baumer Website](https://vt.baumer.com).
*/
class NEOAPI_CPP_DECL Feature {
 public:
    /**
        \brief      Constructor
    */
    Feature();

    /**
        \overload   Feature(const Feature& object)
        \param[in]  object A Feature object to work with
    */
    Feature(const Feature& object);

    /**
        \brief      Destructor
    */
    virtual ~Feature();

    /**
        \brief      Provides the "=" operator
        \param[in]  object A Feature object to work with
        \return     The Feature object
    */
    const Feature& operator = (const Feature& object);

    /**
        \brief     Get the current value of the Feature object as integer

        Valid for the interface types 'IFloat', 'IInteger', 'IEnumeration' and 'IBoolean'

        \return    The current Feature value
        \exception FeatureAccessException The calling object is not valid
        \see GetInt
    */
    operator int32_t() const;

    /**
        \brief     Get the current value of the Feature object as integer

        Valid for the interface types 'IFloat', 'IInteger', 'IEnumeration' and 'IBoolean'

        \return    The current Feature value
        \exception FeatureAccessException The calling object is not valid
        \see GetInt
    */
    operator long int() const;  // NOLINT

    /**
        \brief     Get the current value of the Feature object as integer

        Valid for the interface types 'IFloat', 'IInteger', 'IEnumeration' and 'IBoolean'

        \return    The current Feature value
        \exception FeatureAccessException The calling object is not valid
        \see GetInt
    */
    operator long long int() const;  // NOLINT

    /**
        \brief     Get the current value of the Feature object as floating-point number

        Valid for the interface types 'IFloat', 'IInteger', 'IEnumeration' and 'IBoolean'

        \return    The current Feature value
        \exception FeatureAccessException The calling object is not valid
        \see GetDouble
    */
    operator double() const;

    /**
        \brief     Get the current value of the Feature object as boolean value

        Only valid for the interface type 'IBoolean'

        \return    The current Feature value
        \exception FeatureAccessException The calling object is not valid
        \see GetBool
    */
    operator bool() const;

    /**
        \brief     Get the current value of the Feature object as a string
        \return    The current Feature value
        \exception FeatureAccessException The calling object is not valid
        \see GetString
    */
    operator NeoString() const;
    /**
        \brief     Writes an integer value to the Feature object

        Valid for the interface types 'IFloat', 'IInteger', 'IEnumeration' and 'IBoolean'

        \param[in] value An integer value to be written
        \return    The Feature object
        \exception FeatureAccessException The calling object is not valid
        \see SetInt
    */
    Feature& operator = (int32_t value);

    /**
        \brief     Writes an integer value to the Feature object

        Valid for the interface types 'IFloat', 'IInteger', 'IEnumeration' and 'IBoolean'

        \param[in] value An integer value to be written
        \return    The Feature object
        \exception FeatureAccessException The calling object is not valid
        \see SetInt
    */
    Feature& operator = (int64_t value);

    /**
        \brief     This function writes a floating-point value to the Feature object

        Valid for the interface types 'IFloat', 'IInteger', 'IEnumeration' and 'IBoolean'

        \param[in] value A floating-point value to be written
        \return    The Feature object
        \exception FeatureAccessException The calling object is not valid
        \see SetDouble
    */
    Feature& operator = (double value);

    /**
        \brief     Writes a boolean value to the Feature object

        Only valid for the interface type 'IBoolean'

        \param[in] value A boolean value to be written
        \return    The Feature object
        \exception FeatureAccessException The calling object is not valid
        \see SetBool
    */
    Feature& operator = (bool value);

    /**
        \brief     Writes a const char* value to the Feature object
        \param[in] value A string value to be written
        \return    The Feature object
        \exception FeatureAccessException The calling object is not valid
        \see SetString
    */
    Feature& operator = (const char* value);

    /**
        \brief     Writes a String value to the Feature object
        \param[in] value A string value to be written
        \return    The Feature object
        \exception FeatureAccessException The calling object is not valid
        \see SetString
    */
    Feature& operator = (const NeoString& value);

    /**
        \brief     Get the GenICam data type of the Feature object

        GenICam features can have different interface (data) types. Depending on the interface type, different
        feature access methods are provided

        \code{.none}
        IInteger     - data type integer
        IFloat       - data type float
        IBool        - data type boolean
        IString      - data type string
        IEnumeration - data type enumeration, can be a selector or an enumeration
        ICommand     - command features are executable features
        ICategory    - used to group features which belong together
        \endcode

        \return    The interface type of the Feature object
        \exception FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetInterface() const;

    /**
        \brief      Get a short description of the Feature object
        \return     The short description of the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetToolTip() const;

    /**
        \brief      Get the description of the Feature object
        \return     The description text of the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetDescription() const;

    /**
        \brief      Get the name of the Feature object
        \return     The name of the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetName() const;

    /**
        \brief      Get the display name of the Feature object
        \return     The display name of the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetDisplayName() const;

    /**
        \brief      Get the recommended visibility (Beginner/Expert/Guru or Invisible) of the Feature object
        \return     A string representing the visibility of the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetVisibility() const;

    /**
        \brief      Indicates that the Feature object is readable
        \return     True if the Feature object is readable, otherwise false
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual bool IsReadable() const;

    /**
        \brief      Indicates if a Feature object is writeable
        \return     True if the Feature object is writable, otherwise false
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual bool IsWritable() const;

    /**
        \brief      Get a value, which recommends the representation type of the Feature object in a GUI

        The presentation is only available for the interface types IFloat and IInteger.

        Possible values are:
        \code{.none}
        Linear      - IFloat and IInteger
        Logarithmic - IFloat and IInteger
        PureNumber  - IFloat and IInteger
        Boolean     - IInteger
        HexNumber   - IInteger
        IPV4Address - IInteger
        MACAddress  - IInteger
        \endcode

        \return     The recommended representation of the Feature object in a GUI
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetRepresentation() const;

    /**
        \brief      Get the physical unit of the Feature object, only available for the types 'IFloat' and 'IInteger'
        \return     The physical unit of the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetUnit() const;

    /**
        \brief      Indicates whether the Feature object is available

        "Not available" or false is equivalent to the access mode 'NA'

        \return     True if the Feature object is available to work with it, otherwise false
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual bool IsAvailable() const;

    /**
        \brief      Get a list of all possible values of the Feature object

        Only valid for interface type 'IEnumeration'

        \return     The list of all possible values of the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual const FeatureList& GetEnumValueList() const;

    /**
        \brief      Get the current value of the Feature object as integer

        Valid for the interface types 'IFloat', 'IInteger', 'IEnumeration' and 'IBoolean'

        \return     The current Feature value
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual int64_t GetInt() const;

    /**
        \brief      Writes an integer value to the Feature object

        Valid for the interface types 'IFloat', 'IInteger', 'IEnumeration' and 'IBoolean'

        \param[in]  value An integer value to be written
        \return     The Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual Feature& SetInt(int64_t value);

    /**
        \brief      Get the smallest allowed value of the Feature object as integer

        Valid for the interface types 'IInteger' and 'IFloat'

        \return     The smallest allowed value of the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual int64_t GetIntMin() const;

    /**
        \brief      Get the largest allowed value of the Feature object as integer

        Valid for the interface types 'IInteger' and 'IFloat'

        \return     The largest allowed value of the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual int64_t GetIntMax() const;

    /**
        \brief      Get the allowed step size for the value of the Feature object as integer

        Valid for the interface types 'IInteger' and 'IFloat'

        \return     The allowed step size for the value of the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual int64_t GetIntInc() const;

    /**
        \brief      Get the current value of the Feature object as floating-point number

        Valid for the interface types 'IFloat', 'IInteger', 'IEnumeration' and 'IBoolean'

        \return     The current value of the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual double GetDouble() const;

    /**
        \brief      Write a floating-point value to the Feature object

        Valid for the interface types 'IFloat', 'IInteger', 'IEnumeration' and 'IBoolean'

        \param[in]  value A floating-point value to be written
        \return     The Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual Feature& SetDouble(double value);

    /**
        \brief      Get the smallest allowed value of the Feature object as a floating-point number

        Valid for the interface types 'IFloat' and 'IInteger'

        \return     The smallest allowed value of the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual double GetDoubleMin() const;

    /**
        \brief      Get the largest allowed value of the Feature object as a floating-point number

        Valid for the interface types 'IFloat' and 'IInteger'

        \return     The largest allowed value of the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual double GetDoubleMax() const;

    /**
        \brief      Get the allowed step size for the value of the Feature object as a floating-point number

        Valid for the interface types 'IFloat' and 'IInteger'

        \return     The allowed step size for the value of the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual double GetDoubleInc() const;

    /**
        \brief      Get the precision for the corresponding double

        Only valid for the interface type 'IFloat'

        \return     A non-negative number for the precision the double should be displayed
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual uint64_t GetDoublePrecision() const;

    /**
        \brief      Get the maximum allowed string-length of the Feature object

        Only valid for the interface type 'IString'

        \return     The maximum length of the string
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual int64_t GetMaxStringLength() const;

    /**
        \brief      Get the value of a Feature as a string
        \return     The value of the Feature object
        \exception  FeatureAccessException The calling object is not valid.
    */
    virtual NeoString GetString() const;

    /**
        \brief      Write the value of a Feature as a string
        \param[in]  value A string value to be written
        \return     The Feature object
        \exception  FeatureAccessException The calling object is not valid.
    */
    virtual Feature& SetString(const NeoString& value);

    /**
        \brief      Executes the command of the Feature object

        Only valid for the interface type 'ICommand'

        \return     The Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual Feature& Execute();

    /**
        \brief      Indicates whether the command of the Feature object is still executing

        Only valid for the interface type 'ICommand'. Must be supported by the camera. Currently no Baumer camera is
        supporting this

        \return     False if the command of the Feature object is still been executed, true if it finished executing
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual bool IsDone() const;

    /**
        \brief      Get the current value of the Feature object as boolean value

        Only valid for the interface type 'IBoolean'

        \return     The current value of the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual bool GetBool() const;

    /**
        \brief      Write a boolean value to the Feature object

        Only valid for the interface type 'IBoolean'

        \param[in]  value A boolean value to be written
        \return     The Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual Feature& SetBool(bool value);

    /**
        \brief      Indicates whether the Feature object is a selector

        A selector is a possibility to define feature dependencies. The current value of a selector Feature has an
        impact on the value of another Feature object. Valid for the interface types 'IInteger' and 'IEnumeration'

        \return     True if the Feature object is a selector, otherwise false
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual bool IsSelector() const;

    /**
        \brief      Get a list of features that depend on this selector Feature

        Valid for the interface types 'IInteger' and 'IEnumeration'

        \return     The list of all features that depend on this selector Feature
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual FeatureList& GetSelectedFeatureList() const;

    /**
        \brief      Get the length in bytes of the memory pointed to by the Feature object

        Only valid for the interface type 'IRegister'

        \return     The length in bytes of the memory pointed to by the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual uint64_t GetRegisterLength() const;

    /**
        \brief      Get the address of the memory pointed to by the Feature object

        Only valid for the interface type 'IRegister'

        \return     The address of the memory pointed to by the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual uint64_t GetRegisterAddress() const;

    /**
        \brief      Reads the memory pointed to by the Feature object and writes it into the provided buffer

        Only valid for the interface type 'IRegister'

        \param[in]  buffer The destination buffer into which the read data is copied
        \param[in]  length The size of the destination buffer. The method GetRegisterLength provides the necessary size
        \return     The Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual Feature& GetRegister(void* buffer, uint64_t length);

    /**
        \brief      Writes the memory pointed to by the Feature object

        Only valid for the interface type 'IRegister'

        \param[in]  buffer The buffer for the data to be written
        \param[in]  length The size of the destination buffer. The method GetRegisterLength provides the necessary size
        \return     The Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual Feature& SetRegister(void* buffer, uint64_t length);

 protected:
    /**
        \var        data_
        \brief      Stores internal data
    */
    FeatureData* data_;
};

/**
    \ingroup       All
    \ingroup       Support
    \brief         Provides list functionality for camera features
*/
class NEOAPI_CPP_DECL FeatureList {
 public:
    /**
        \brief    Constructor
    */
    FeatureList();

    /**
        \brief    Constructor
        \param[in] object A FeatureList object
    */
    FeatureList(const FeatureList& object);

    /**
        \brief    Destructor
    */
    virtual ~FeatureList();

    /**
        \brief      The "=" operator

        This creates a copy of the other FeatureList object.

        \param[in]  object A FeatureList object
        \return     The FeatureList object
        */
    virtual FeatureList& operator = (const FeatureList& object);

    /**
        \brief    Provides the array access operator

        \param[in] name The name of the feature to access
        \return    The Feature object
    */
    virtual Feature& operator[](const NeoString& name);

    /**
        \brief     Check if a feature is supported by this camera

        \param[in] name The name of the feature to read (SFNC Name)
        \return    True if the feature is supported by the camera
    */
    virtual bool HasFeature(const NeoString& name) const;

    /**
        \brief      Indicates that the Feature object is readable
        \param[in]  name The name of the Feature
        \return     bool True if the Feature object is readable, otherwise false
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual bool IsReadable(const NeoString& name) const;

    /**
        \brief      Indicates that the Feature object is writeable
        \param[in]  name The name of the Feature
        \return     bool True if the Feature object is readable, otherwise false
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual bool IsWritable(const NeoString& name) const;

    /**
        \brief    Provides the number of features in this list
        \return   The number of features
    */
    virtual size_t GetSize() const;

    /**
        \brief    Provides iterator functionality
    */
    typedef NeoAPI::FeatureListIterator iterator;

    /**
        \brief    Provides iterator functionality
        \return   iterator
    */
    virtual iterator begin() const;


    /**
        \brief    Provides iterator functionality
        \return   iterator
    */
    virtual iterator end() const;

    /**
        \brief      Get an iterator by feature name
        \param[in]  name The name of the Feature
        \return     iterator

        \code
        using namespace NeoAPI;
        Cam camera;                     // create a camera object
        camera.Connect();               // connect to any device

        // the internal list is accessed only one time to get the iterator
        FeatureListIterator iter = camera.GetFeatureList().find("SpecialFeature");
        if (iter != camera.GetFeatureList().end()) {  // check if feature exists
            (*iter).SetInt(1);                        // set feature
        }
        // or (every time the feature name is passed, a search on the internal list takes place.)
        if (camera.HasFeature("SpecialFeature")) {    // check if feature exists
            camera.SetFeature("SpecialFeature", 1);   // set feature
        }
        \endcode
    */
    virtual iterator find(const NeoString& name) const;

 protected:
    /**
        \brief    internal data store
    */
    FeatureListData* data_;
};

/**
    \ingroup       All
    \ingroup       Support

    \brief         Provides iterator functionality for the FeatureList
*/
class NEOAPI_CPP_DECL FeatureListIterator {
 public:
    /**
        \brief    Constructor
    */
    FeatureListIterator();

    /**
        \brief    Constructor
        \param[in] object A FeatureListIterator object
    */
    FeatureListIterator(const FeatureListIterator& object);

    /**
        \brief    Destructor
    */
    virtual ~FeatureListIterator();

    /**
        \brief     Provides the "=" operator
        \param[in] object A FeatureListIterator object
        \return    The FeatureListIterator object
    */
    const FeatureListIterator& operator= (const FeatureListIterator& object);

    /**
        \brief     provides the "==" operator
        \param[in] object A FeatureListIterator
        \return    bool
    */
    virtual bool operator==(const FeatureListIterator& object);

    /**
        \brief     provides the "==" operator
        \param[in] object A FeatureListIterator
        \return    bool
    */
    virtual bool operator==(const FeatureListIterator& object) const;

    /**
        \brief     provides the "!=" operator
        \param[in] object A FeatureListIterator
        \return    bool
    */
    virtual bool operator!=(const FeatureListIterator& object);

    /**
        \brief     provides the "!=" operator
        \param[in] object A FeatureListIterator
        \return    bool
    */
    virtual bool operator!=(const FeatureListIterator& object) const;

    /**
        \brief     provides the "++" operator
        \return    FeatureListIterator
    */
    FeatureListIterator& operator++();

    /**
        \brief     provides the "++" operator
        \return    FeatureListIterator object
    */
    FeatureListIterator operator++(int);

    /**
        \brief     provides the "*" operator
        \return    The reference to the Feature object
    */
    Feature& operator*() const;

    /**
        \brief    Get the name of the current Feature
        \return   The name as a NeoString
    */
    virtual NeoString GetName() const;

 protected:
    /**
        \brief    Internal data store
    */
    FeatureListIteratorData* data_;
};

/**
    \ingroup    All
    \ingroup    GenICamFeatures

    \brief      Base Feature class providing the interface to be used independent of Feature data-type
*/
class NEOAPI_CPP_DECL BaseFeature {
 public:
    /**
        \brief      Constructor
        \param[in]  cam The pointer to the camera
        \param[in]  name The name of the Feature
    */
    BaseFeature(CamBase* cam, const NeoString& name);

    /**
        \brief      Copy-Constructor
        \param[in]  feature A BaseFeature object
    */
    BaseFeature(const BaseFeature& feature);
    /**
        \brief      Destructor
    */
    virtual ~BaseFeature();

    /**
        \brief     Provides the "=" operator
        \param[in] object A BaseFeature object
        \return    The BaseFeature object
    */
    const BaseFeature& operator = (const BaseFeature& object);

    /**
        \brief     Get the GenICam interface type of the Feature object

        Depending on the GenICam interface type, different feature access methods are provided.
        The available interface types are defined in header file bgapi2_def.h.
        See definitions BGAPI2_NODEINTERFACE_xxx

        \return    The interface type of the Feature object
        \exception FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetInterface() const;

    /**
        \brief      Get a short description of the Feature object
        \return     The short description of the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetToolTip() const;

    /**
        \brief      Get the description of the Feature object
        \return     The description text of the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetDescription() const;

    /**
        \brief      Get the name of the Feature object
        \return     The name of the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetName() const;

    /**
        \brief      Get the display name of the Feature object
        \return     The display name of the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetDisplayName() const;

    /**
        \brief      Get the recommended visibility (Beginner/Expert/Guru or Invisible) of the Feature object
        \return     A string representing the visibility of the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetVisibility() const;

    /**
        \brief      Indicates that the Feature object is readable
        \return     True if the Feature object is readable, otherwise false
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual bool IsReadable() const;

    /**
        \brief      Indicates if a Feature object is writeable
        \return     True if the Feature object is writable, otherwise false
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual bool IsWritable() const;

    /**
        \brief      Indicates whether the Feature object is available

        "Not available" or false is equivalent to the access mode 'NA'

        \return     True if the Feature object is available to work with it, otherwise false
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual bool IsAvailable() const;

 protected:
    /**
        \brief    Internal pointer to the camera
    */
    CamBase* cam_;
    /**
        \brief    Internal name of the feature
    */
    NeoString name_;
};

/**
    \ingroup    All
    \ingroup    GenICamFeatures

    \brief      Class providing the 'IFloat' interface
*/
class NEOAPI_CPP_DECL DoubleFeature : public BaseFeature {
 public:
    /**
        \brief      Constructor
        \param[in]  cam The pointer to the camera
        \param[in]  name The name of the Feature
    */
    DoubleFeature(CamBase* cam, const NeoString& name);

    /**
        \brief      Copy-Constructor
        \param[in]  feature A DoubleFeature object
    */
    DoubleFeature(const DoubleFeature& feature);

    /**
        \brief      Destructor
    */
    virtual ~DoubleFeature();

    /**
        \brief     Provides the "=" operator
        \param[in] object A DoubleFeature object
        \return    The DoubleFeature object
    */
    const DoubleFeature& operator = (const DoubleFeature& object);

    /**
        \brief     Get the current value of the Feature object as floating-point number

        \return    The current value of the Feature object
        \exception FeatureAccessException The calling object is not valid
        \see GetDouble
    */
    operator double() const;

    /**
        \brief     This function writes a floating-point value to the Feature object

        \param[in] value A floating-point value to be written
        \return    The DoubleFeature object
        \exception FeatureAccessException The calling object is not valid
        \see SetDouble
    */
    DoubleFeature& operator = (double value);


    /**
        \brief      Get the current value of the Feature object as floating-point number

        \return     The current value of the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual double Get() const;

    /**
        \brief      This function writes a floating-point value to the Feature object

        \param[in]  value A floating-point value to be written
        \return     The DoubleFeature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual DoubleFeature& Set(double value);

    /**
        \brief      Get the smallest allowed value of the Feature object as a floating-point number

        \return     The smallest allowed value of the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual double GetMin() const;

    /**
        \brief      Get the largest allowed value of the Feature object as a floating-point number

        \return     The largest allowed value of the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual double GetMax() const;

    /**
        \brief      Get the allowed step size for the value of the Feature object as a floating-point number

        \return     The allowed step size for the value of the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual double GetInc() const;

    /**
        \brief      Get the precision for the corresponding double

        \return     A non-negative number for the precision the double should be displayed
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual uint64_t GetPrecision() const;

    /**
        \brief      Get the value of the Feature as a NeoString
        \return     The value of the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetString() const;

    /**
        \brief      Get the physical unit of the Feature object. Only available for the interface types 'IFloat' and 'IInteger'
        \return     The physical unit of the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetUnit() const;

    /**
        \brief      Get a value, which recommends the representation type of the Feature object in a GUI

        The presentation is only available for the interface types IFloat and IInteger.

        Possible values are:
        \code{.none}
        Linear      - IFloat and IInteger
        Logarithmic - IFloat and IInteger
        PureNumber  - IFloat and IInteger
        \endcode

        \return     The recommended value for the representation of the Feature object in a GUI
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetRepresentation() const;
};

/**
    \ingroup    All
    \ingroup    GenICamFeatures

    \brief      Class providing the 'IInteger' interface
*/
class NEOAPI_CPP_DECL IntegerFeature : public BaseFeature {
 public:
    /**
        \brief      Constructor
        \param[in]  cam The pointer to the camera
        \param[in]  name The name of the Feature
    */
    IntegerFeature(CamBase* cam, const NeoString& name);

    /**
        \brief      Copy-Constructor
        \param[in]  feature A IntegerFeature object
    */
    IntegerFeature(const IntegerFeature& feature);

    /**
        \brief      Destructor
    */
    virtual ~IntegerFeature();

    /**
        \brief     Provides the "=" operator
        \param[in] object A IntegerFeature object
        \return    The IntegerFeature object
    */
    const IntegerFeature& operator = (const IntegerFeature& object);

    /**
        \brief     Get the current value of the Feature object as integer

        Valid for the interface types 'IFloat', 'IInteger', 'IEnumeration' and 'IBoolean'

        \return    The current value of the Feature object
        \exception FeatureAccessException The calling object is not valid
        \see GetInt
    */
    operator int64_t() const;

    /**
        \brief     Writes an integer value to the Feature object

        \param[in] value An integer value to be written
        \return    The IntegerFeature object
        \exception FeatureAccessException The calling object is not valid
        \see       SetInt
    */
    IntegerFeature& operator = (int32_t value);

    /**
        \brief     Writes an integer value to the Feature object

        \param[in] value An integer value to be written
        \return    The IntegerFeature object
        \exception FeatureAccessException The calling object is not valid
        \see       SetInt
    */
    IntegerFeature& operator = (int64_t value);

    /**
        \brief      Get the current value of the Feature object as integer

        \return     The current Feature value
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual int64_t Get() const;

    /**
        \brief      Writes an integer value to the Feature object

        \param[in]  value An integer value to be written
        \return     The IntegerFeature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual IntegerFeature& Set(int64_t value);

    /**
        \brief      Get the smallest allowed value of the Feature object as integer

        \return     The smallest allowed value of the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual int64_t GetMin() const;

    /**
        \brief      Get the largest allowed value of the Feature object as integer

        \return     The largest allowed value of the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual int64_t GetMax() const;

    /**
        \brief      Get the allowed step size for the value of the Feature object as integer

        \return     The allowed step size for the value of the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual int64_t GetInc() const;

    /**
        \brief      Get the value of the Feature as a string
        \return     The value of the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetString() const;

    /**
        \brief      Get the physical unit of the Feature object. Only available for the interface types 'IFloat' and 'IInteger'
        \return     The physical unit of the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetUnit() const;

    /**
        \brief      Get a value, which recommends the representation type of the Feature object in a GUI

        The presentation is only available for the interface types IFloat and IInteger.

        Possible values are:
        \code{.none}
        Linear      - IFloat and IInteger
        Logarithmic - IFloat and IInteger
        PureNumber  - IFloat and IInteger
        Boolean     - IInteger
        HexNumber   - IInteger
        IPV4Address - IInteger
        MACAddress  - IInteger
        \endcode

        \return     The recommended value for the representation of the Feature object in a GUI
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetRepresentation() const;

    /**
        \brief      Indicates whether the Feature object is a selector

        A selector is a possibility to define feature dependencies. The current value of a selector Feature has an
        impact on the value of another Feature object

        \return     True if the Feature object is a selector, otherwise false
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual bool IsSelector() const;

    /**
        \brief      Get a list of features that depend on this selector Feature

        \return     The list of all features that depend on this selector Feature
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual FeatureList& GetSelectedFeatureList() const;
};

/**
    \ingroup    All
    \ingroup    GenICamFeatures

    \brief      Class providing the 'IString' interface
*/
class NEOAPI_CPP_DECL StringFeature : public BaseFeature {
 public:
    /**
        \brief      Constructor
        \param[in]  cam The pointer to the camera
        \param[in]  name The name of the Feature
    */
    StringFeature(CamBase* cam, const NeoString& name);

    /**
        \brief      Copy-Constructor
        \param[in]  feature A StringFeature object
    */
    StringFeature(const StringFeature& feature);

    /**
        \brief     Provides the "=" operator
        \param[in] object A StringFeature object
        \return    The StringFeature object
    */
    const StringFeature& operator = (const StringFeature& object);


    /**
        \brief      Destructor
    */
    virtual ~StringFeature();

    /**
        \brief     Get the current value of the Feature object as a string
        \return    A NeoString object
    */
    operator NeoString() const;

    /**
        \brief     Provides the "=" operator
        \param[in] value A string value to be written
        \return    The StringFeature object
        \exception FeatureAccessException The calling object is not valid
        \see SetString
    */
    StringFeature& operator = (const char* value);

    /**
        \param[in] value A string value to be written
        \return    The StringFeature object
        \exception FeatureAccessException The calling object is not valid
        \see SetString
    */
    StringFeature& operator = (const NeoString& value);

    /**
        \brief      Get the maximum allowed string-length of the Feature object

        \return     The maximum length of the string
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual int64_t GetMaxStringLength() const;

    /**
        \brief      Get the value of the Feature as a string
        \return     The value of the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetString() const;

    /**
        \brief      Write the value of the Feature as a string
        \param[in]  value A string value to be written
        \return     The StringFeature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual StringFeature& SetString(const NeoString& value);
};

/**
    \ingroup    All
    \ingroup    GenICamFeatures

    \brief      Class providing the 'IBoolean' interface
*/
class NEOAPI_CPP_DECL BoolFeature : public BaseFeature {
 public:
    /**
        \brief      Constructor
        \param[in]  cam The pointer to the camera
        \param[in]  name The name of the Feature
    */
    BoolFeature(CamBase* cam, const NeoString& name);

    /**
        \brief      Copy-Constructor
        \param[in]  feature A BoolFeature object
    */
    BoolFeature(const BoolFeature& feature);

    /**
        \brief      Destructor
    */
    virtual ~BoolFeature();

    /**
        \brief     Provides the "=" operator
        \param[in] object A BoolFeature object
        \return    The BoolFeature object
    */
    const BoolFeature& operator = (const BoolFeature& object);

    /**
        \brief     Get the current value of the Feature object as boolean value

        \return    The current value of the Feature object
        \exception FeatureAccessException The calling object is not valid
        \see GetBool
    */
    operator bool() const;

    /**
        \brief     This function writes a boolean value to the Feature object

        \param[in] value A boolean value to be written
        \return    The BoolFeature object
        \exception FeatureAccessException The calling object is not valid
        \see SetBool
    */
    BoolFeature& operator = (bool value);

    /**
        \brief      Get the current value of the Feature object as boolean value

        \return     The current value of the Feature object as boolean value
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual bool Get() const;

    /**
        \brief      This function writes a boolean value to the Feature object

        \param[in]  value A boolean value to be written
        \return     The BoolFeature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual BoolFeature& Set(bool value);

    /**
        \brief      Get the value of the Feature as a string
        \return     The value of the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetString() const;
};

/**
    \ingroup    All
    \ingroup    GenICamFeatures

    \brief      Class providing the 'ICommand' interface
*/
class NEOAPI_CPP_DECL CommandFeature : public BaseFeature {
 public:
    /**
        \brief      Constructor
        \param[in]  cam The pointer to the camera
        \param[in]  name The name of the Feature
    */
    CommandFeature(CamBase* cam, const NeoString& name);
    /**
        \brief      Copy-Constructor
        \param[in]  feature A CommandFeature object
    */
    CommandFeature(const CommandFeature& feature);
    /**
        \brief      Destructor
    */
    virtual ~CommandFeature();

    /**
        \brief     Provides the "=" operator
        \param[in] object A CommandFeature object
        \return    The CommandFeature object
    */
    const CommandFeature& operator = (const CommandFeature& object) = delete;

    /**
        \brief      Executes the command of the Feature object
        \return     The CommandFeature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual CommandFeature& Execute();

    /**
        \brief      Indicates whether the command of the Feature object is still executing

        \return     False if the command of the Feature object is still been executed, true if it finished executing
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual bool IsDone() const;

    /**
        \brief      Get the value of the Feature as a string
        \return     The value of the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetString() const;
};

/**
    \ingroup    All
    \ingroup    GenICamFeatures

    \brief      Base class providing the 'IEnumeration' interface
*/
class NEOAPI_CPP_DECL EnumerationFeature : public BaseFeature {
 public:
    /**
        \brief      Constructor
        \param[in]  cam The pointer to the camera
        \param[in]  name The name of the Feature
    */
    EnumerationFeature(CamBase* cam, const NeoString& name);

    /**
        \brief      Copy-Constructor
        \param[in]  feature A EnumerationFeature object
    */
    EnumerationFeature(const EnumerationFeature& feature);

    /**
        \brief      Destructor
    */
    virtual ~EnumerationFeature();

    /**
        \brief     Provides the "=" operator
        \param[in] object A EnumerationFeature object
        \return    The EnumerationFeature object
    */
    const EnumerationFeature& operator = (const EnumerationFeature& object);

    /**
        \brief      Get a list of all possible values of the Feature object

        Only valid for interface type 'IEnumeration'

        \return     The list of all possible values of the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual const FeatureList& GetEnumValueList() const;

    /**
        \brief      Get the current value of the Feature object as integer

        \return     The current value of the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual int64_t GetInt() const;

    /**
        \brief      Writes an integer value to the Feature object

        \param[in]  value An integer value to be written
        \return     The EnumerationFeature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual EnumerationFeature& SetInt(int64_t value);

    /**
        \brief      Get the current value of the Feature as a string
        \return     The current value of the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual NeoString GetString() const;

    /**
        \brief      Write the value of the Feature as a string
        \param[in]  value A string value to be written
        \return     The EnumerationFeature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual EnumerationFeature& SetString(const NeoString& value);

    /**
        \brief      Indicates whether the Feature object is a selector

        A selector is a possibility to define feature dependencies. The current value of a selector feature has an
        impact on the value of another Feature object

        \return     True if the Feature object is a selector, otherwise false
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual bool IsSelector() const;

    /**
        \brief      Get a list of features that depend on this selector feature

        \return     The list of all features that depend on this selector Feature
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual FeatureList& GetSelectedFeatureList() const;
};

/**
    \ingroup    All
    \ingroup    GenICamFeatures

    \brief      Base class providing the 'IRegister' interface
*/
class NEOAPI_CPP_DECL RegisterFeature : public BaseFeature {
 public:
    /**
        \brief      Constructor
        \param[in]  cam The pointer to the camera
        \param[in]  name The name of the Feature
    */
    RegisterFeature(CamBase* cam, const NeoString& name);

    /**
        \brief      Copy-Constructor
        \param[in]  feature A RegisterFeature object
    */
    RegisterFeature(const RegisterFeature& feature);

    /**
        \brief     Provides the "=" operator
        \param[in] object A RegisterFeature object
        \return    The RegisterFeature object
    */
    const RegisterFeature& operator = (const RegisterFeature& object) = delete;

    /**
        \brief      Destructor
    */
    virtual ~RegisterFeature();

    /**
        \brief      Get the length in bytes of the memory pointed to by the Feature object

        \return     The length in bytes of the memory pointed to by the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual uint64_t GetRegisterLength() const;

    /**
        \brief      Get the address of the memory pointed to by the Feature object

        \return     The address of the memory pointed to by the Feature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual uint64_t GetRegisterAddress() const;

    /**
        \brief      Reads the memory pointed to by the Feature object and writes it into the provided buffer

        \param[in]  buffer The destination buffer into which the read data is copied
        \param[in]  length The size of the destination buffer. The method GetRegisterLength provides the necessary size
        \return     The RegisterFeature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual RegisterFeature& GetRegister(void* buffer, uint64_t length);

    /**
        \brief      Writes the memory pointed to by the Feature object

        \param[in]  buffer The buffer for the data to be written
        \param[in]  length The size of the destination buffer. The method GetRegisterLength provides the necessary size
        \return     The RegisterFeature object
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual RegisterFeature& SetRegister(void* buffer, uint64_t length);
};

}  // namespace NeoAPI
#endif  // _NEOAPI_FEATURE_HPP__
