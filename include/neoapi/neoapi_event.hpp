/** \file neoapi_camera.hpp
 \brief        This file is part of the NeoAPI. It provides the C++ API Interface.

 Copyright (c) by Baumer Optronic GmbH. All rights reserved, please see the provided licence document for full details.
*/
#ifndef _NEOAPI_EVENT_HPP__
#define _NEOAPI_EVENT_HPP__

#include "neoapi_common.hpp"
#include "neoapi_featureaccess.hpp"

class EventData;

namespace NeoAPI {

/**
    \ingroup       All
    \ingroup       Main
    \brief         Provides access to events

    This class provides an easy way to work with events. It provides access to camera events
    as well as plug and play events.

    The Class has a set of methods to get information about an event.

    More information about the events of your specific camera can be found in the documentation of your
    camera available at the member area of the [Baumer Website](https://vt.baumer.com).
*/
class NEOAPI_CPP_DECL NeoEvent {
 public:
    /**
        \brief      Constructor
    */
    NeoEvent();

    /**
        \overload   NeoEvent(const NeoEvent& object)
        \param[in]  object A NeoEvent object
    */
    NeoEvent(const NeoEvent& object);

    /**
        \brief      Destructor
    */
    virtual ~NeoEvent();

    /**
        \brief      Provides the "=" operator.
        \param[in]  object A NeoEvent object
        \return     The NeoEvent object
    */
    const NeoEvent& operator = (const NeoEvent& object);

    /**
        \brief     Check if the event is empty or filled with data
        \return    False if the event is filled with data, otherwise true
        \see       Cam::GetEvent()
        \see       Cam::GetPnPEvent()
    */
    virtual bool IsEmpty() const;

    /**
        \brief      Get the name of the NeoEvent object.
        \return     The name of the Feature object, empty if the event does not contain any data.
    */
    virtual NeoString GetName() const;

    /**
        \brief      Get the timestamp of the NeoEvent object.
        \return     The timestamp of the Feature object, zero if the event does not contain any data.
    */
    virtual uint64_t GetTimestamp() const;

    /**
        \brief      Get the id of the NeoEvent object.
        \return     The id of the Feature object, zero if the event does not contain any data.
    */
    virtual uint64_t GetId() const;

    /**
        \brief      Get the id of the camera.
        \return     The id of the camera, empty if the event does not contain any data.
    */
    virtual NeoString GetCameraId() const;

 protected:
    /**
        \var        data_
        \brief      Stores internal data
    */
    EventData* data_;
};

}  // namespace NeoAPI
#endif  // _NEOAPI_EVENT_HPP__
