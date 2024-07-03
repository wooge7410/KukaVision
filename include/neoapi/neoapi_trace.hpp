/* Copyright 2020 Baumer Optronic */
#ifndef _NEOAPI_TRACE_HPP__
#define _NEOAPI_TRACE_HPP__

#include "neoapi_common.hpp"

namespace NeoAPI {
/**
\brief Valid values for trace severity
\ingroup    All
*/
enum class NeoTraceSeverity {
    All = 0,  //!< All (including internal)
    Info,  //!< Info
    Warning,  //!< Warning
    Error  //!< Error
};

/**
    \ingroup    All
    \brief      Trace callback class to derive from an get Trace messages
*/
class NEOAPI_CPP_DECL NeoTraceCallback {
 public:
    /**
        \brief      Constructor
    */
    NeoTraceCallback();

    /**
        \brief      Destructor
    */
    virtual ~NeoTraceCallback();

    /**
        \brief      Overwrite this method to receive trace messages
        \param[in]  msg The trace message
    */
    virtual void LogCallback(const NeoString& msg);
};

/**
    \ingroup    All
    \brief      Trace class which offers the possibility to enable trace for different targets
*/
class NEOAPI_CPP_DECL NeoTrace {
 public:
    /**
        \brief      Constructor
    */
    NeoTrace();

    /**
        \brief      Destructor
    */
    virtual ~NeoTrace();

    /**
        \brief      Trace an info message.
        \param[in]  msg The message to trace.
    */
    void Info(const NeoString& msg) const;

    /**
        \brief      Trace an info message.
        \param[in]  msg The message to trace.
        \param[in]  mod The module or unit name to trace.
        \param[in]  fct The function or device name to trace.
        \param[in]  object The object to trace.
    */
    void Info(const NeoString& msg, const NeoString& mod, const NeoString& fct, void* object = nullptr) const;

    /**
        \brief      Trace a warning message.
        \param[in]  msg The message to trace.
    */
    void Warning(const NeoString& msg) const;

    /**
        \brief      Trace a warning message.
        \param[in]  msg The message to trace.
        \param[in]  mod The module or unit name to trace.
        \param[in]  fct The function or device name to trace.
        \param[in]  object The object to trace.
    */
    void Warning(const NeoString& msg, const NeoString& mod, const NeoString& fct, void* object = nullptr) const;

    /**
        \brief      Trace an error message.
        \param[in]  msg The message to trace.
    */
    void Error(const NeoString& msg) const;

    /**
        \brief      Trace an error message.
        \param[in]  msg The message to trace.
        \param[in]  mod The module or unit name to trace.
        \param[in]  fct The function or device name to trace.
        \param[in]  object The object to trace.
    */
    void Error(const NeoString& msg, const NeoString& mod, const NeoString& fct, void* object = nullptr) const;

    /**
        \brief      Enable trace output to file.
        \param[in]  filename The filename(including folder) to store the trace.
        \exception  NotConnectedException No device connected.
    */
    void EnableLogfile(const NeoString& filename) const;

    /**
        \brief      Disable trace output to file.
    */
    void DisableLogfile() const;

    /**
        \brief      Enable trace callback.
        \param[in]  callback The LogCallback method of the given object will be called for every trace message.
    */
    void EnableLogCallback(const NeoTraceCallback& callback) const;

    /**
        \brief      Disable trace callback.
    */
    void DisableLogCallback() const;

    /**
        \brief      Filter trace messages by setting a minimum severity.
        \param[in]  severity The target severity.
    */
    void SetSeverity(NeoTraceSeverity severity) const;
};
}  // namespace NeoAPI

#endif  // _NEOAPI_TRACE_HPP__
