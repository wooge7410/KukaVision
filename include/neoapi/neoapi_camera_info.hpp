/* \file neoapi_camera_info.hpp
 \brief        This file is part of the NeoAPI - It provides the C++ API Interface.
 Copyright (c) by Baumer Optronic GmbH. All rights reserved, please see the provided licence document for full details.
 */
#ifndef _NEOAPI_CAMERA_INFO_HPP__
#define _NEOAPI_CAMERA_INFO_HPP__
#include "neoapi_common.hpp"
#include "neoapi_camera.hpp"
#include "neoapi_event.hpp"

class CamInfoData;
class CamInfoListIteratorData;
class CamInfoListData;

namespace NeoAPI {

/**
    \ingroup    All
    \ingroup    Main

    \brief      Camera info container class which offers basic information about an available camera

    If neoapi.CamInfoList is called it will return a list of cameras, you can use the neoapi.CamInfo() class to get
    information about a camera in this list.
*/
class NEOAPI_CPP_DECL CamInfo {
 public:
    /**
        \brief      Constructor
    */
    CamInfo();
    /**
        \brief      Copy-Constructor
        \param[in]  object A CamInfo object
    */
    CamInfo(const CamInfo& object);
    /**
        \brief     Provides the "=" operator
        \param[in] object A CamInfo object
        \return    The CamInfo object
    */
    CamInfo& operator = (const CamInfo& object);
    /**
        \brief      Destructor
    */
    virtual ~CamInfo();
    /**
        \brief      Get the ID of the camera, this is unique to each camera in combination with a Baumer producer
        \return     The ID
    */
    virtual NeoString GetId() const;
    /**
        \brief      Get the camera model name
        \return     The model name
    */
    virtual NeoString GetModelName() const;
    /**
        \brief      Get the camera serial number
        \return     The serial number
    */
    virtual NeoString GetSerialNumber() const;
    /**
        \brief      Get the transport layer type
        \return     The transport layer type
    */
    virtual NeoString GetTLType() const;
    /**
        \brief      Get the camera vendor name
        \return     The vendor name
    */
    virtual NeoString GetVendorName() const;

    /**
        \brief      Get the USB3 vision GUID
        \note       Only valid for USB3 Vision cameras
        \return     The USB3 Vision GUID
    */
    virtual NeoString GetUSB3VisionGUID() const;
    /**
        \brief      Get the USB port ID
        \note       Only valid for USB3 Vision cameras
        \return     The port ID
    */
    virtual NeoString GetUSBPortID() const;

    /**
        \brief      Get the cameras ethernet IP address
        \note       Only valid for GigE Vision cameras
        \return     The IP address
    */
    virtual NeoString GetGevIpAddress() const;
    /**
        \brief      Get the cameras ethernet subnet mask
        \note       Only valid for GigE Vision cameras
        \return     The subnet mask
    */
    virtual NeoString GetGevSubnetMask() const;
    /**
        \brief      Get the cameras ethernet gateway IP
        \note       Only valid for GigE Vision cameras
        \return     The gateway
    */
    virtual NeoString GetGevGateway() const;
    /**
        \brief      Get the cameras ethernet MAC address
        \note       Only valid for GigE Vision cameras
        \return     The MAC address
    */
    virtual NeoString GetGevMACAddress() const;
    /**
        \brief      Check if this camera is available for connection
        \return     true if this camera can be connected, false otherwise
    */
    virtual bool IsConnectable() const;

 protected:
     /**
         \brief    internal data store
     */
     CamInfoData* data_;
};

/**
    \ingroup       All
    \ingroup       Support

    \brief         Provides iterator functionality for the CamInfoList
*/
class NEOAPI_CPP_DECL CamInfoListIterator {
 public:
     /**
        \brief    Constructor
    */
    CamInfoListIterator();

    /**
        \brief    Constructor
        \param[in] object A CamInfoListIterator object
    */
    CamInfoListIterator(const CamInfoListIterator& object);

    /**
        \brief    Destructor
    */
    virtual ~CamInfoListIterator();

    /**
        \brief     Provides the "=" operator
        \param[in] object A CamInfoListIterator object
        \return    The CamInfoListIterator object
    */
    const CamInfoListIterator& operator= (const CamInfoListIterator& object);

    /**
        \brief     provides the "==" operator
        \param[in] object A FeatureListIterator
        \return    bool
    */
    virtual bool operator==(const CamInfoListIterator& object) const;


    /**
        \brief     provides the "!=" operator
        \param[in] object A FeatureListIterator
        \return    bool
    */
    virtual bool operator!=(const CamInfoListIterator& object) const;

    /**
        \brief     provides the "++" operator
        \return    CamInfoListIterator
    */
    CamInfoListIterator& operator++();

    /**
        \brief     provides the "++" operator
        \return    CamInfoListIterator object
    */
    CamInfoListIterator operator++(int);

    /**
    \brief     provides the "*" operator
    \return    The reference to the CamInfo object
    */
    CamInfo& operator*() const;

 protected:
    /**
        \brief    internal data store
    */
     CamInfoListIteratorData* data_;
};

/**
    \ingroup    All
    \ingroup    Main
    \brief      Provides a list of physically connected cameras available to be used/connected with neoAPI

    You can use this class if you don't know what camera(s) might be connected during program operation. With
    the neoapi::CamInfoList::Refresh() method you can update the list to reflect current system status
    We provide Plug and Play Events for the CamInfoList class which you can poll or register an callback for.
    Those will notify you of any changes on the system. If you get such an event, you still need to call neoapi.
    CamInfoList.Refresh() manually to update the list, see \ref events_and_pnp_concepts for details

    \note       This is a singleton and is only instanciated once
*/
class NEOAPI_CPP_DECL CamInfoList {
 public:
     /**
        \brief    Get the single instance.
        \return   The instance of the CamInfoList
    */
    static CamInfoList& Get() {
        static CamInfoList instance;
        return instance;
    }

    /**
        \brief     Deleted copy construct
    */
    CamInfoList(const CamInfoList&) = delete;
    /**
        \brief     Deleted move constract
    */
    CamInfoList(const CamInfoList&&) = delete;

    /**
        \brief     Deleted copy assign
    */
    void operator=(CamInfoList const&) = delete;
    /**
        \brief     Deleted move assign
    */
    void operator=(CamInfoList&&) = delete;

    /**
        \brief      Provides the array access operator
        \param[in]  index The index of the CamInfo to access
        \return     The CamInfo object
    */
    virtual CamInfo& operator[](size_t index);

    /**
        \brief    Refresh camera list
        \return   True if the list has changed, otherwise false
    */
    virtual bool Refresh();

    /**
        \brief    Provides the current number of cameras in this list
        \return   The number of cameras
    */
    virtual size_t size() const;

    /**
        \brief      Get a plug and play event from the camera info list

        The GetPnPEvent method is used to retrieve plug and play events from the camera info list. Those events notify
        you that one ore more camera has been connected or disconnected from the system. If an event is waiting
        to be retrieved, it will return immediately, if no event is available at the time the method is called,
        it will wait for the timeout specified with the parameter timeout (in ms). The default Timeout is 400 ms

        \param[in]  timeout Timeout in ms to wait for an event, default is 400 ms
        \return     The NeoEvent object with all relevant data, could be empty
        \see        NeoEvent::IsEmpty()
    */
    virtual NeoEvent GetPnPEvent(uint32_t timeout = 400);

    /**
        \brief      Delete all events in the event queue
        \return     The CamInfoList object
    */
    virtual CamInfoList& ClearPnPEvents();

    /**
        \brief      Enable event callback to get notified of changes of the CamInfoList
        \param[in]  callback The EventCallback method of the given object will be called for every event data.
        \return     The CamInfoList object
    */
    virtual CamInfoList& EnablePnPEventCallback(const NeoEventCallback& callback);

    /**
        \brief      Disable an active event callback
        \return     The CamInfoList object
    */
    virtual CamInfoList& DisablePnPEventCallback();

    /**
        \brief    Provides iterator functionality
    */
    typedef CamInfoListIterator iterator;

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

 protected:
    /**
        \brief    Constructor
    */
     CamInfoList();
     /**
        \brief      Destructor
    */
     virtual ~CamInfoList();

    /**
        \brief    internal data store
    */
    CamInfoListData* data_;
};

}  // namespace NeoAPI

#endif  // _NEOAPI_CAMERA_INFO_HPP__
