/* \file neoapi_common.hpp
 \brief        This file is part of the NeoAPI - It provides the C++ API Interface.
 Copyright (c) by Baumer Optronic GmbH. All rights reserved, please see the provided licence document for full details.
 */
#ifndef _NEOAPI_COMMON_HPP__
#define _NEOAPI_COMMON_HPP__

#include <string.h>
#include <cstddef>
#include <cstdint>

#if defined(_WIN32)
#ifdef neoapi_cpp_EXPORTS
#define NEOAPI_CPP_DECL __declspec(dllexport)
#else
#define NEOAPI_CPP_DECL __declspec(dllimport)
#endif
#elif defined(__GNUC__) && (__GNUC__ >= 4) && (defined(__linux__) || defined(__APPLE__))
#define NEOAPI_CPP_DECL __attribute__((visibility("default")))
#else
#define NEOAPI_CPP_DECL
#endif

class StringData;
class NeoStringListData;
class NeoStringListIteratorData;
class CamExceptionData;

namespace NeoAPI {

/**
    \ingroup        All
    \ingroup        Support

    \brief          Provides a String object to aid the development with different compilers

    Unfortunately the C++ string object is not stable, which means the standard string object <std::string>
    cannot be linked if the compiler version does not match. To overcome this nuisance this Object
    provides a string wrapper which is compatible with <std::string>
*/
class NEOAPI_CPP_DECL NeoString {
 public:
    /**
        \brief      Constructor
    */
    NeoString();

    /**
        \overload
        \param[in]  object A NeoString Object
    */
    NeoString(const NeoString& object);

    /**
        \overload
        \param[in]  text A const char pointer
    */
    NeoString(const char* text);  // NOLINT

    /**
        \brief      Destructor
    */
    virtual ~NeoString();

    /**
        \brief      Provides the "="" operator
        \param[in]  text A const char pointer to some text
        \return     The NeoString Object
    */
    const NeoString& operator= (const char * text);

    /**
        \overload
        \param[in]  object A String object
        \return     The NeoString Object
    */
    const NeoString& operator= (const NeoString& object);

    /**
        \brief      Provides the "==" operator
        \param[in]  object A NeoString object
        \return     True if equal otherwise false
    */
    bool operator== (const NeoString& object);

    /**
        \brief      Provides the "==" operator
        \param[in]  object A NeoString object
        \return     True if equal otherwise false
    */
    bool operator== (const NeoString& object) const;

    /**
        \overload
        \param[in]  text A const char pointer to some text
        \return     True if equal otherwise false
    */
    bool operator== (const char* text);

    /**
        \overload
        \param[in]  text A const char pointer to some text
        \return     True if equal otherwise false
    */
    bool operator== (const char* text) const;

    /**
        \brief      Provides the "!=" operator
        \param[in]  object A NeoString object
        \return     True if not equal otherwise false
    */
    bool operator!= (const NeoString& object);

    /**
        \brief      Provides the "!=" operator
        \param[in]  object A NeoString object
        \return     True if not equal otherwise false
    */
    bool operator!= (const NeoString& object) const;

    /**
        \overload
        \param[in] text A const char pointer to some text
        \return    True if not equal otherwise false
    */
    bool operator!= (const char* text);

    /**
        \overload
        \param[in] text A const char pointer to some text
        \return    True if not equal otherwise false
    */
    bool operator!= (const char* text) const;

    /**
        \brief      provides a c-style null-terminated string
        \return     The pointer to a null-terminated string
    */
    const char* c_str() const;

    /**
        \brief      Provides the const char *() operator
        \return     Const char pointer
    */
    operator const char *() const;

    /**
        \brief      Provides the length of the String
        \return     The number of characters in this object
    */
    size_t length() const;

 protected:
    /**
        \var        data_
        \brief      Holds all internal data
    */
    StringData* data_;
};

/**
    \ingroup       All
    \ingroup       Support

    \brief         Provides iterator functionality for the StringList
*/
class NEOAPI_CPP_DECL NeoStringListIterator {
 public:
    /**
        \brief     Constructor
    */
    NeoStringListIterator();

    /**
        \brief     Constructor
        \param[in] object A NeoStringListIterator object
    */
    NeoStringListIterator(const NeoStringListIterator& object);

    /**
        \brief    Destructor
    */
    virtual ~NeoStringListIterator();

    /**
        \brief     Provides the "=" operator
        \param[in] object A NeoStringListIterator object
        \return    The NeoStringListIterator object
    */
    const NeoStringListIterator& operator= (const NeoStringListIterator& object);

    /**
        \brief     provides the "==" operator
        \param[in] object A NeoStringListIterator
        \return    bool
    */
    virtual bool operator==(const NeoStringListIterator& object);

    /**
        \brief     provides the "==" operator
        \param[in] object A NeoStringListIterator
        \return    bool
    */
    virtual bool operator==(const NeoStringListIterator& object) const;

    /**
        \brief     provides the "=!" operator
        \param[in] object A NeoStringListIterator
        \return    bool
    */
    virtual bool operator!=(const NeoStringListIterator& object);

    /**
        \brief     provides the "=!" operator
        \param[in] object A NeoStringListIterator
        \return    bool
    */
    virtual bool operator!=(const NeoStringListIterator& object) const;

    /**
        \brief     provides the "++" operator
        \return    NeoStringListIterator
    */
    NeoStringListIterator& operator++();

    /**
        \brief     provides the "++" operator
        \return    NeoStringListIterator object
    */
    NeoStringListIterator operator++(int);

    /**
        \brief     provides the "*" operator
        \return    The NeoString object
    */
    NeoString& operator*();

 protected:
    /**
        \brief    Internal data store
    */
    NeoStringListIteratorData* data_;
};


/**
    \ingroup       All
    \ingroup       Support

    \brief         Provides iterator functionality for the StringList
*/
class NEOAPI_CPP_DECL NeoStringListConstIterator {
 public:
    /**
        \brief    Constructor
    */
    NeoStringListConstIterator();

    /**
        \brief    Constructor
        \param[in] object A NeoStringListConstIterator object
    */
    NeoStringListConstIterator(const NeoStringListConstIterator& object);

    /**
        \brief    Destructor
    */
    virtual ~NeoStringListConstIterator();

    /**
        \brief     Provides the "=" operator
        \param[in] object A NeoStringListConstIterator object
        \return    The NeoStringListConstIterator object
    */
    const NeoStringListConstIterator& operator = (const NeoStringListConstIterator& object);

    /**
        \brief     provides the "==" operator
        \param[in] object A NeoStringListConstIterator
        \return    bool
    */
    virtual bool operator==(const NeoStringListConstIterator& object);

    /**
        \brief     provides the "==" operator
        \param[in] object A NeoStringListConstIterator
        \return    bool
    */
    virtual bool operator==(const NeoStringListConstIterator& object) const;

    /**
        \brief     provides the "=!" operator
        \param[in] object A NeoStringListConstIterator
        \return    bool
    */
    virtual bool operator!=(const NeoStringListConstIterator& object);

    /**
        \brief     provides the "=!" operator
        \param[in] object A NeoStringListConstIterator
        \return    bool
    */
    virtual bool operator!=(const NeoStringListConstIterator& object) const;

    /**
        \brief     provides the "++" operator
        \return    NeoStringListConstIterator
    */
    NeoStringListConstIterator& operator++();

    /**
        \brief     provides the "++" operator
        \return    NeoStringListConstIterator object
    */
    NeoStringListConstIterator operator++(int);

    /**
        \brief     provides the "*" operator
        \return    The NeoString object
    */
    const NeoString& operator*() const;

 protected:
    /**
        \brief    Internal data store
    */
    NeoStringListIteratorData* data_;
};


/**
    \ingroup       All
    \ingroup       Support
    \brief         Provides list functionality for strings

    This class will help you to iterate through a list of strings, it implements iterator functionality and can be used as below.

    ~~~{.cpp}
    #include <iostream>
    #include "neoapi/neoapi.hpp"
    NeoAPI::Cam camera = NeoAPI::Cam();
    camera.Connect();
    NeoAPI::NeoStringList a = camera.GetAvailableChunks();

    for (NeoAPI::NeoStringList::iterator i = a.begin(); i != a.end(); ++i)
    {
        std::cout << *i << std::endl;
    }

    for (int i = 0; i < a.size(); i++)
    {
        std::cout << a[i]<< std::endl;
    }

    for (NeoAPI::NeoString i : a)
    {
        std::cout << i << std::endl;
    }
    ~~~
*/
class NEOAPI_CPP_DECL NeoStringList {
 public:
    /**
        \brief    Constructor
    */
    NeoStringList();

    /**
        \brief    Constructor
        \param[in] object A NeoStringList object
    */
    NeoStringList(const NeoStringList& object);

    /**
        \brief    Destructor
    */
    virtual ~NeoStringList();

    /**
        \brief      The "=" operator.
        \param[in]  object A NeoStringList object
        \return     The NeoStringList object
     */
    virtual NeoStringList& operator = (const NeoStringList& object);

    /**
        \brief    Provides the array access operator
        \param[in] index The index of the NeoString to access
        \return   The NeoString object
    */
    virtual NeoString& operator[](size_t index);

    /**
        \brief    Deletes the element at the end of the queue
    */
    void pop_back();

    /**
        \brief    Adds an element to the end of a list
        \param[in] val The element added to the end of the list
    */
    void push_back(const NeoString& val);

    /**
        \brief    Erases all the elements of a list
    */
    void clear();

   /**
        \brief    Provides the number of strings in this list
        \return   The number of strings
    */
    virtual size_t size() const;

    /**
        \brief    Provides iterator functionality
    */
    typedef NeoAPI::NeoStringListIterator iterator;

    /**
        \brief    Provides iterator functionality
    */
    typedef NeoAPI::NeoStringListConstIterator const_iterator;

    /**
        \brief    Provides iterator functionality
        \return   iterator
    */
    virtual iterator begin();

    /**
        \brief    Provides iterator functionality
        \return   iterator
    */
    virtual const_iterator begin() const;

    /**
        \brief    Provides iterator functionality
        \return   iterator
    */
    virtual iterator end();

    /**
        \brief    Provides iterator functionality
        \return   iterator
    */
    virtual const_iterator end() const;

    /**
        \brief      Get an iterator by value
        \param[in]  value The value to look for
        \return     iterator
*/
    virtual iterator find(const NeoString& value);

    /**
        \brief      Get an iterator by value
        \param[in]  value The value to look for
        \return     iterator
    */
    virtual const_iterator find(const NeoString& value) const;

 protected:
    /**
        \brief    internal data store
    */
    NeoStringListData* data_;
};

/**
    \ingroup       All
    \ingroup       Exception
    \brief         Base neoAPI Exception class
*/
class NEOAPI_CPP_DECL NeoException {
 public:
    /**
        \brief     Constructor
        \param[in] description A description
    */
    explicit NeoException(const char* description);

    /**
        \brief      Copy-Constructor
        \param[in]  object An NeoException object
    */
    NeoException(const NeoException& object);

    /**
        \brief      Destructor
    */
    virtual ~NeoException();

    /**
        \brief      The "=" operator
        \param[in]  object An NeoException object
        \return     The NeoException object
    */
    const NeoException& operator = (const NeoException& object);

    /**
        \brief    Get the Description of the thrown Exception
        \return   The Description of the thrown Exception
    */
    const char* GetDescription();

 private:
    /**
        \brief   internal data store
    */
    CamExceptionData* data_;
};

/**
    \ingroup       All
    \ingroup       Exception
    \brief         No camera connected Exception
*/
class NEOAPI_CPP_DECL NotConnectedException : public NeoException {
 public:
    /**
        \brief     Constructor
        \param[in] description A description
    */
    explicit NotConnectedException(const char* description);

    /**
        \brief     Destroy the NotConnectedException object
    */
    virtual ~NotConnectedException();
};

/**
    \ingroup       All
    \ingroup       Exception
    \brief         Camera not accessible Exception
*/
class NEOAPI_CPP_DECL NoAccessException : public NeoException {
 public:
    /**
        \brief     Constructor
        \param[in] description A description
    */
    explicit NoAccessException(const char* description);

    /**
        \brief     Destructor
    */
    virtual ~NoAccessException();
};

/**
    \ingroup        All
    \ingroup        Exception
    \brief          Feature not accessible Exception
*/
class NEOAPI_CPP_DECL FeatureAccessException : public NeoException {
 public:
    /**
        \brief     Constructor
        \param[in] description A description
    */
    explicit FeatureAccessException(const char* description);

    /**
        \brief     Destructor
    */
    virtual ~FeatureAccessException();
};

/**
    \ingroup       All
    \ingroup       Exception
    \brief         Requesting an image while holding all available image resources
*/
class NEOAPI_CPP_DECL NoImageBufferException : public NeoException {
 public:
    /**
        \brief     Constructor
        \param[in] description A description
    */
    explicit NoImageBufferException(const char* description);

    /**
        \brief     Destructor
    */
    virtual ~NoImageBufferException();
};

/**
    \ingroup       All
    \ingroup       Exception
    \brief         File not accessible Exception
*/
class NEOAPI_CPP_DECL FileAccessException : public NeoException {
 public:
    /**
        \brief     Constructor
        \param[in] description A description
    */
    explicit FileAccessException(const char* description);

    /**
        \brief    Destructor
    */
    virtual ~FileAccessException();
};

/**
    \ingroup       All
    \ingroup       Exception
    \brief         Invalid Arguments Exception
*/
class NEOAPI_CPP_DECL InvalidArgumentException : public NeoException {
 public:
    /**
        \brief     Constructor
        \param[in] description A description
    */
    explicit InvalidArgumentException(const char* description);

    /**
        \brief    Destructor
    */
    virtual ~InvalidArgumentException();
};
}  // namespace NeoAPI
#endif  // _NEOAPI_COMMON_HPP__
