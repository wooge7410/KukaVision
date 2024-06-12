/** \file neoapi_camera.hpp
Copyright (c) by Baumer Optronic GmbH. All rights reserved, please see the provided licence document for full details.
*/
#ifndef _NEOAPI_CAMERA_HPP__
#define _NEOAPI_CAMERA_HPP__

#include "neoapi_common.hpp"
#include "neoapi_featureaccess.hpp"
#include "neoapi_event.hpp"

/**
 \defgroup     Main Cam Interface Classes
 \brief        This group describes the most important NeoAPI classes

 \defgroup     GenICamFeatures GenICam feature classes
 \brief        This group provides the GenICam feature classes

 \defgroup     Support Supporting Classes
 \brief        This classes aim to support your development

 \defgroup     Exception Exception Classes
 \brief        All Cam Exception Classes

 \defgroup     All All Cam Classes
 \brief        All NeoAPI classes
*/

class FeatureStackData;
class CamData;
class BufferBaseData;

namespace NeoAPI {

class FeatureStack;
class BufferBase;
class Image;
class NeoEvent;
class CamInfo;
class NeoImageCallback;
class NeoEventCallback;

/**
    \ingroup    All
    \brief      Base camera class from which other camera classes inherit functionality

    This class provides all methods to work with a camera.
    You can use it to search and connect a camera, get and set camera features and retrieve images from the camera.

*/
class NEOAPI_CPP_DECL CamBase {
 public:
    /**
        \brief      Constructor
    */
    CamBase();

    /**
    \brief      Copy-Constructor
    \param[in]  object A CamBase object
    */
    CamBase(const CamBase& object);

    /**
        \brief      Destructor
    */
    virtual ~CamBase();

    /**
        \brief      This function returns the current library version
        \return     The version number in the format "Mayor.Minor.Patch"
    */
    static NeoString GetLibraryVersion();

    /**
        \brief      The "=" operator

        This creates a copy of the other CamBase object. All copies are linked to the same physical camera.
        That means that every call to Connect, Disconnect, SetFeature,... will effect all copys of a Cam or CamBase Object.

        \param[in]  object A CamBase object
        \return     The CamBase object
    */
    const CamBase& operator = (const CamBase& object);

    /**
        \brief      Connect a GenICam camera device to work with it

        The Connect method is called to establish a connection to a GenICam compatible camera device. To connect to
        a specific camera the identifier can be used. The identifier will be used to search for a camera.

        Possible Values for the camera identifier are:
        \code{.none}
        Transport Layer Type - "U3V" USB3 Vision Standard or "GEV" Gigabit Ethernet Vision
        Camera Model Name    - "VCXU-32M" or "VLXT-123C.I" this value can read from the SFNC Feature "ModelName"
        Camera Serial Number - "700004105902" the unique number
        Camera User ID       - "Camera_left" A user defined string which can be set to a camera permanently
        USB Port ID          - "P10-2" U3V only, describes the USB-Hub and Port the camera is attached to
        U3V Vision GUID      - "282500003F46" a globally unique identifier for U3V devices
        IP-Address           - The currently assigned IP Address of the camera or the ethernet Interface
                                SFNC Feature "GEVPrimaryApplicationIPAddress" and "GEVCurrentIPAddress"
        MAC-Address          - "00:06:BE:01:F8:06" the MAC-Address of the GEV camera (found on the camera)
        Interface name       - ???????????????????????????????
        \endcode

        If the identifier is empty, one of the connected camera will be choosen. If a U3V camera is present, it will be
        chosen first. Only if no U3V device can be found the GigE Vision interface will scanned.

        If the system does not change between calling the connect method, the method will always connect with
        the same camera to work in a consistent way. This is achieved by the search algorithm which will return
        the camera device with the lowest/smallest serial number on the interface.

        \note       Please remember that a camera is always connected exclusively to one Cam object. That means you
                    can only connect to a camera after all previous connections (also from other programs) are
                    disconnected.

        \warning    It is possible to call this method more than once, however, once a camera is connected it will
                    keep that existing connection open.

        \param[in]  identifier A string value with the camera identifier
        \return     The CamBase object

        \exception NoAccessException Cam Device can not be opened
                   NotConnectedException No device matching the given criterias is connected

        \code
        using namespace NeoAPI;

        Cam camera;                     // create a camera object
        camera.Connect("U3V");          // connect to any USB3 Vision device
        // or
        camera.Connect("168.192.2.24")  //connect to the camera with the coresponding IP
        Image img = camera.GetImage();  // retrieve an image
        \endcode

        \see        CamBase::IsConnected()
        \review     20190402
    */
    virtual CamBase& Connect(const NeoString& identifier = "");

    /**
        \brief      Disconnect a GenICam camera device
        \return     The CamBase object
    */
    virtual CamBase& Disconnect();

    /**
        \brief      Checks if a camera is connected

        Before using a camera it needs to be connected and initialized. Use the `IsConnected()` method to check if
        your Cam object is connected with a camera and that this camera is ready to be configured and
        stream images.

        \return     True if a camera is connected, otherwise false

        \code
        using namespace NeoAPI;
        Cam camera;                         // create the camera object
        camera.Connect();                   // connect to any camera
        if (camera.IsConnected())
        {
            Image img = camera.GetImage();  // retrieve an image
        }
        \endcode

        \see        CamBase::Connect()
        \review 20190402
    */
    virtual bool IsConnected() const;

    /**
        \brief      Start streaming from this camera. (Streaming is started by Conncet)
        \return     The CamBase object
    */
    virtual CamBase& StartStreaming();

    /**
        \brief      Stop streaming from this camera.
        \return     The CamBase object
    */
    virtual CamBase& StopStreaming();

    /**
        \brief      Checks if a camera is streaming
        \return     True if a camera is streaming, otherwise false
    */
    virtual bool IsStreaming() const;

    /**
        \brief Get a Feature to access to it's properties, see Cam::f for a more convenient way to access features.

        You can use this method in case a camera feature is not accessable through Cam::f.

        \note More information about the GenICam SFNC (Standard %Feature Naming Convention) can be found in the
        GenICam SFNC Document on the [EMVA Website](https://www.emva.org/wp-content/uploads/GenICam_SFNC_v2_4.pdf).

        \note More information about the available features and vendor-specific features of your specific camera can be
        found in the documentation of your camera which is available at the member area of the
        [Baumer Website](https://vt.baumer.com).

        \param[in]  name The name of the feature to retrieve (SFNC Name)
        \return     The Feature object
        \exception  NotConnectedException No device connected.
        \exception  FeatureAccessException The feature is not accessible.

        \code
        using namespace NeoAPI;
        Cam camera;                                 // create the camera object
        camera.Connect();                           // connect to any camera
        Feature f = camera.GetFeature('Gain');      // get the feature f
        std::cout << f.GetDisplayName() << " | " << f.GetDoubleMax() << std::endl; // Print name and maximum value
        \endcode

        \see        Cam::f
        \see        Feature
        \review 20190402
    */
    virtual Feature& GetFeature(const NeoString& name) const;

    /**
        \brief Check if a feature is supported by a camera, see Cam::f for a more convenient way to access features.

        You can use this method in case a camera feature is not accessable through Cam::f.

        \param[in]  name The name of the feature to read (SFNC Name)
        \return     True if the feature is supported by the camera otherwise false
        \exception  NotConnectedException No device connected

        \code
        using namespace NeoAPI;

        \code{.cpp}
        using namespace NeoAPI;
        Cam cam; // create the Cam object
        cam.Connect(); // connect to any camera
        if (cam.HasFeature("Gain"))
          cam.SetFeature("Gain", 1.24);
        \endcode

        \see        Cam::f
        \see        Feature
        \review 20190402
    */
    virtual bool HasFeature(const NeoString& name) const;

    /**
        \brief      Indicates that the Feature object is readable.
        \param[in]  name The name of the Feature
        \return     True if the Feature object is readable, otherwise false
        \exception  NotConnectedException No device connected.
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual bool IsReadable(const NeoString& name) const;

    /**
        \brief      Indicates that the Feature object is writable.
        \param[in]  name The name of the Feature
        \return     True if the Feature object is readable, otherwise false
        \exception  NotConnectedException No device connected.
        \exception  FeatureAccessException The calling object is not valid
    */
    virtual bool IsWritable(const NeoString& name) const;

    /**
        \brief Set the value of a feature of the camera, see Cam::f for a more convenient way to access features

        You can use this method in case a camera feature is not accessable through Cam::f

        \param[in]  name  The name of the feature to write (SFNC Name)
        \param[in]  value An int64_t value which should be written
        \return     The CamBase object
        \exception  NotConnectedException No device connected
        \exception  FeatureAccessException The feature is not accessible

        \code
        using namespace NeoAPI;
        Cam camera;                       // create the camera object
        camera.Connect();                 // connect to any camera
        camera.SetFeature("Gain", 1.24);  // set the Feature
        \endcode

        \see        Cam::f
        \see        Feature
    */
    virtual CamBase& SetFeature(const NeoString& name, int64_t value);

    /**
        \overload
        \param[in]  name  The name of the feature to write (SFNC Name)
        \param[in]  value An int32_t value which should be written
        \return     The CamBase object
    */
    virtual CamBase& SetFeature(const NeoString& name, int32_t value);

    /**
        \overload
        \param[in]  name  The name of the feature to write (SFNC Name)
        \param[in]  value A double value which should be written
        \return     The CamBase object
    */
    virtual CamBase& SetFeature(const NeoString& name, double value);

    /**
        \overload
        \param[in]  name  The name of the feature to write (SFNC Name)
        \param[in]  value A string value which should be written
        \return     The CamBase object
    */
    virtual CamBase& SetFeature(const NeoString& name, const NeoString& value);

    /**
        \overload
        \param[in]  name  The name of the feature to write (SFNC Name)
        \param[in]  value A const char* value which should be written
        \return     The CamBase object
    */
    virtual CamBase& SetFeature(const NeoString& name, const char* value);

    /**
        \overload
        \param[in]  name  The name of the feature to write (SFNC Name)
        \param[in]  value A bool value which should be written
        \return     The CamBase object
    */
    virtual CamBase& SetFeature(const NeoString& name, bool value);

    /**
        \brief      Executes an executable SFNC-ICommand-Feature of the camera

        Some Features are used to trigger an action in the camera. The most commonly used one is probably the
        AquisitionStart/AquisitionStop commands. The Execute() method is used to execute one of those features.

        \note       Check the [GenICam SFNC document](https://www.emva.org/wp-content/uploads/GenICam_SFNC_v2_4.pdf)
                    for more info on the ICommand Interface

        \param[in]  name The name of the feature to execute (SFNC Name)
        \return     The CamBase object
        \exception  NotConnectedException No device connected
        \exception  FeatureAccessException The feature is not accessible
    */
    virtual CamBase& Execute(const NeoString& name);

    /**
        \brief      Get a list of all available features of the camera
        \return     A list of available Features
        \exception  NotConnectedException No device connected
        \see FeatureList
    */
    virtual FeatureList& GetFeatureList();

    /**
    \brief      Get a list of all available runtime infos
    \return     A list of available runtime infos
    \exception  NotConnectedException No device connected
    \see FeatureList
    */
    virtual FeatureList& GetRuntimeInfoList();

    /**
        \brief      Set the value of multiple feature of the camera in one operation
        \param[in]  featurestack  A set of features to write
        \return     The CamBase object
        \exception  NotConnectedException No device connected
        \exception  FeatureAccessException One or more features are not accessible
        \see        FeatureStack::Add()
    */
    virtual CamBase& WriteFeatureStack(const FeatureStack& featurestack);

    /**
        \brief      Get an image from the camera

        The GetImage method is used to retrieve an image from the camera to work with it. All buffer-handling is
        done internally for you, so that no further setup is needed to acquire an image. In the default
        configuration, the method will always return the latest (newest) image transferred from the camera. please
        refer to the section \ref images_buffers to learn how to configure the buffer-handling to change that
        behavior.

        By default, each camera object creates and uses 10 Buffers to ensure reliable image delivery. You can change
        this default using the SetImageBufferCount() method.

        The time until an image is available can be quite large. Depending on the current state and settings like
        ExposureTime. The time consists out of camera start up time, the exposure time, the readout time of the
        sensor and the time for transport into host memory.

        If no image is available at the time the method is called, it will wait for the timeout specified with the
        parameter timeout (in ms). The default Timeout is 400 ms.

        \note       If the camera is in trigger mode, you need to ensure you trigger the camera before an image can be
                    retrieved.

        \warning    The internal buffer, used to store images arriving from the camera, is given to you to avoid
                    copying of the data. It can only be reused by neoAPI once you have returned it from your
                    application by destroying your image object. If you do not return the buffers you will receive
                    an NoImageBufferException.

        \param[in]  timeout Timeout in ms to wait for an image, default is 400 ms
        \return     The Image object with all relevant data, could be empty
        \exception  NotConnectedException No device connected
        \exception  NoImageBufferException No image buffer available to store data
        \see        CamBase::GetImageBufferCount()
        \see        Image::IsEmpty()
        \review 20190402
    */
    virtual Image GetImage(uint32_t timeout = 400);

    /**
        \brief      Delete the image queue

        \return     The CamBase object
        \exception  NotConnectedException No device connected.
    */
    virtual CamBase& ClearImages();

    /**
        \brief      Enable image callback.

        \param[in]  callback The ImageCallback method of the given object will be called for every image data.
        \return     The CamBase object
    */
    virtual CamBase& EnableImageCallback(const NeoImageCallback& callback);

    /**
        \brief      Disable image callback.

        \return     The CamBase object
    */
    virtual CamBase& DisableImageCallback();

    /**
        \brief      In user buffer mode the camera uses buffers provided by AddUserBuffer.

        In this mode memory blocks allocated by other frameworks
        like e.g. OpenCV are used as acquisition buffers for the camera.

        \param[in]  user_buffers True to enable UserBufferMode, otherwise false (default ist true)

        \return     The CamBase object
     */
    virtual CamBase& SetUserBufferMode(bool user_buffers = true);

    /**
        \brief      In user buffer mode the camera uses buffers provided by AddUserBuffer.

        In this mode memory blocks allocated by other frameworks
        like e.g. OpenCV are used as acquisition buffers for the camera.

        \return     The state of user buffer mode
     */
    virtual bool GetUserBufferMode();

    /**
        \brief      Add a user allocated memory for use as buffer in UserBufferMode

        \param[in]  buffer object derived from NeoAPI::BufferBase that should used as buffer

        \return     The CamBase object
        \exception  InvalidArgumentException  buffer is not initialized correctly
     */
    virtual CamBase& AddUserBuffer(BufferBase* buffer);

    /**
        \brief      Revoke a user allocated memory from buffer list

        Image objects that refer to a revoked memory will not be invalidated.
        This means the memory will not used anymore for image acquisition
        but Image objects holded by the user are only valid until the revoked memory is not freed.

        \param[in]  buffer object derived from NeoAPI::BufferBase that not used anymore by NeoAPI

        \return     The CamBase object
     */
    virtual CamBase& RevokeUserBuffer(BufferBase* buffer);

    /**
        \brief      Set the number of internal used image buffers

        The number of internal image buffers is equal to the maximum images that can be worked on in parallel.
        If you call GetImage without having an free internal image buffer to store the data, the GetImage method
        will not be able to store any new images coming from the camera and will throw an exception.

        As each buffer needs memory to store an incoming image, you should try to reduce the amount of buffers
        where possible.

        \param[in]  buffercount Image buffer count, if set to zero buffercount will be set to the default of 10 buffers
        \return     The CamBase object
        \see        \ref images_buffers
        \review 20190402
    */
    virtual CamBase& SetImageBufferCount(size_t buffercount = 10);

    /**
        \brief      Get the current number of internal or external image buffers

        Provides the current number of internal or externally provided image buffers used to store incoming images
        from the camera until they can be processed

        \return     The current image buffer count
        \see        CamBase::GetImage()
        \see        CamBase::SetImageBufferCount()
        \review 20190402
    */
    virtual size_t GetImageBufferCount();

    /**
        \brief      Set the number of internal image buffers to be cycled automatically

        By changing the `SetImageBufferCount()` and `SetImageBufferCycleCount()` the three different buffer modes
        can be configured. Please see @ref images_buffers for details

        \param[in]  cyclecount Image buffer count
        \return     The CamBase object
        \review 20190402
    */
    virtual CamBase& SetImageBufferCycleCount(size_t cyclecount = 1);

    /**
        \brief      Get the number of internal image buffers to be cycled automatically
        \return     the number of internal image buffers to be cycled automatically
    */
    virtual size_t GetImageBufferCycleCount();

    /**
        \brief      In synchronous mode the acquisition will restart for every feature change, to ensure new values will
                    be reflected in the next image

        When a feature is set to a new value, this change may take some time to take effect. In free running mode the
        camera may transfer one or more images based on the last value. To ensure new values will reflect in the next
        image the acquisition is stopped, the value of the feature is set and the acquisition will be restarted

        \note The synchronous mode is active by default

        \param[in]  synchronous True to enable SynchronMode, otherwise false (default ist true)
        \return     The CamBase object
        \see        CamBase::GetImage()
        \review 20190402
    */
    virtual CamBase& SetSynchronFeatureMode(bool synchronous = true);

    /**
        \brief      In synchronous mode the acquisition will restart for every feature change, to ensure new values will
                    be reflected in the next image

        When a feature is set to a new value, this change may take some time to take effect. In free running mode the
        camera may transfer one or more images based on the last value. To ensure new values will reflect in the next
        image the acquisition is stopped, the value of the feature is set and the acquisition will be restarted

        \note The synchronous mode is active by default

        \return     The state of synchronous mode
        \see        CamBase::GetImage()
    */
    virtual bool GetSynchronFeatureMode();

    /**
        \brief      With AdjustFeatureValueMode enabled feature values will be checked an adjusted where necessary.

        Some Feature can only be changed with a fixed increment. If a feature is set to a value the device can not handle, the value will be adjusted to the next valid value

        \note The AdjustFeatureValueMode is active by default

        \param[in]  adjust True to adjust feature values, otherwise false (default ist true)
        \return     The CamBase object
        \see        CamBase::GetImage()
        \review 20190402
    */
    virtual CamBase& SetAdjustFeatureValueMode(bool adjust = true);

    /**
        \brief      With AdjustFeatureValueMode enabled feature values will be checked an adjusted where necessary.

        Some Feature can only be changed with a fixed increment. If a feature is set to a value the device can not handle, the value will be adjusted to the next valid value

        \note The AdjustFeatureValueMode is active by default
        \return     The state of adjust value mode
        \see        CamBase::GetImage()
    */
    virtual bool GetAdjustFeatureValueMode();

    /**
        \brief      Query the list of the names of the existing chunk data

        To activate individual chunk data in a targeted manner, you need their names; the list of all names can be read here.

        \return     A list containing all possible chunks for this camera
    */
    virtual const NeoStringList& GetAvailableChunks(void);

    /**
        \brief      Allow and disallow all or individual chunk data

        If name is empty all chunk data will processed

        \param[in]  name of chunk data to enable
        \return     The CamBase object
        \exception  FeatureAccessException requesting a specific chunk by name which is not available
        \exception  NoAccessException device is not connected anymore
        \exception  NotConnectedException No device connected
        \see        CamBase::GetAvailableChunks()
    */
    virtual CamBase& EnableChunk(const NeoString& name = "");

    /**
        \brief      Disallow all or individual chunk data

        If name is empty all chunk data will processed

        \param[in]  name of chunk data to disable
        \return     The CamBase object
        \exception  NoAccessException device is not connected anymore
        \exception  NotConnectedException No device connected
        \see        CamBase::GetAvailableChunks()
    */
    virtual CamBase& DisableChunk(const NeoString& name = "");

    /**
        \brief      Get a list of event names supported by the camera

        A GenICam camera can support many events which alert to changes of a data item in the camera. Typical sources
        of events are Acquisition, Timer, Counter and I/O lines. To enable individual events use the EventEnable()
        method.

        \return     A list containing the names of possible events
        \see        Cambase::EventEnable()
    */
    virtual const NeoStringList& GetAvailableEvents();

    /**
        \brief      Get a list of event names enabled in the camera

        A GenICam camera can support many events which alert to changes of a data item in the camera. Typical sources
        of events are Acquisition, Timer, Counter and I/O lines. To enable individual events use the EventEnable()
        method.

        \return     A list containing the names of enabled events
        \see        Cambase::EventEnable()
    */
    virtual const NeoStringList& GetEnabledEvents();

    /**
        \brief      Enable a camera event

        Please be aware that enabling many events can produce quite some traffic on the interface which might impact
        the performance of the camera. To get a list of possible event names please use the GetAvailableEvents() method.

        \param[in]  name of event to enable
        \param[in]  max_queuesize max number of events in queue
        \return     The CamBase object
        \see        CamBase::GetAvailableEvents()
    */
    virtual CamBase& EnableEvent(const NeoString& name, uint32_t max_queuesize = 1000);

    /**
        \brief      Disable a camera event

        \param[in]  name of event to disable
        \return     The CamBase object
        \see        CamBase::GetAvailableEvents()
    */
    virtual CamBase& DisableEvent(const NeoString& name);

    /**
        \brief      Get an event from the camera

        The GetEvent method is used to retrieve an event from the camera to work with it. If an event is waiting to be
        retrieved, it will return immediately, if no event is available at the time the method is called, it will wait
        for the timeout specified with the parameter timeout (in ms). The default Timeout is 400 ms.

        \note       Please be aware, that the event you require needs to be enabled first by using the EventEnable()
                    method.

        \param[in]  name Name of event to wait for, default is empty to wait for any event
        \param[in]  timeout Timeout in ms to wait for an event, default is 400 ms
        \return     The NeoEvent object with all relevant data, could be empty
        \exception  NotConnectedException No device connected.
        \see        Cambase::EventEnable()
        \see        NeoEvent::IsEmpty()
    */
    virtual NeoEvent GetEvent(const NeoAPI::NeoString& name = "", uint32_t timeout = 400);

    /**
        \brief      Delete the event queue

        \param[in]  name Name of event to remove from queue, default is empty to drop all events
        \return     The CamBase object
        \exception  NotConnectedException No device connected.
        \see        Cambase::EventEnable()
    */
    virtual CamBase& ClearEvents(const NeoAPI::NeoString& name = "");

    /**
        \brief      Enable event callback.

        \param[in]  callback The EventCallback method of the given object will be called for every event data.
        \param[in]  name Name of event to wait for, default is empty to wait for any event
        \return     The CamBase object
    */
    virtual CamBase& EnableEventCallback(const NeoEventCallback& callback, const NeoAPI::NeoString& name = "");

    /**
        \brief      Disable event callback.

        \param[in]  name of event to disable
        \return     The CamBase object
    */
    virtual CamBase& DisableEventCallback(const NeoAPI::NeoString& name = "");

    /**
        \brief      Checks if a camera is online

        A camera may be offline if a device reset was performed or as consequence of power issues or  the removal of a
        cable. If the camera is offline no access to features is possible and the attemp to access any feature will lead to an exception.

        \warning    If a camera has been offline all configurations not stored in a user set will be reset to the
                    defaults.

        \return     True if the camera is online and ready to use, otherwise false
    */
    virtual bool IsOnline() const;

    /**
        \brief      Get the number of times the camera was offline

        This counter will increase every time the camera goes offline and is intended to keep track of pnp events. If
        this number increases over time there is likely an issue with your system which should be fixed.

        \return     The counter of offline events for this camera
        \see        CamBase::IsOnline()
    */
    virtual uint64_t GetOfflineCount() const;

    /**
        \brief      Get a plug and play event from the camera

        The GetPnPEvent method is used to retrieve an plug and play event from the camera to work with it. If an event
        is waiting to be retrieved, it will return immediately, if no event is available at the time the method is
        called, it will wait for the timeout specified with the parameter timeout (in ms). The default Timeout is 400
        ms.

        \param[in]  timeout Timeout in ms to wait for an event, default is 400 ms
        \return     The NeoEvent object with all relevant data, could be empty
        \exception  NotConnectedException No device connected.
        \see        NeoEvent::IsEmpty()
    */
    virtual NeoEvent GetPnPEvent(uint32_t timeout = 400);

    /**
        \brief      Delete the event queue

        \return     The CamBase object
        \exception  NotConnectedException No device connected.
        \see        Cambase::EventEnable()
    */
    virtual CamBase& ClearPnPEvents();

    /**
        \brief      Enable event callback.

        \param[in]  callback The EventCallback method of the given object will be called for every event data.
        \return     The CamBase object
    */
    virtual CamBase& EnablePnPEventCallback(const NeoEventCallback& callback);

    /**
        \brief      Disable event callback.
        \return     The CamBase object
    */
    virtual CamBase& DisablePnPEventCallback();

    /**
        \brief      Get basic information about the camera.
        \return     The camera information
    */
    virtual CamInfo GetInfo() const;

 protected:
    /**
        \brief      Holds all internal data
    */
    CamData* data_;
};

/**
    \ingroup    All
    \ingroup    Main
    \brief      Main camera class &mdash; connect, set features, retrieve images

    This class provides all methods to work with a camera.
    You can use it to search and connect a camera, get and set camera features and retrieve images from the camera.

    The aim of this Interface is to reduce the complexity associated with the programming of a GenICam camera. The
    Interface will also greatly reduce the amount of code necessary to interact with a GenICam camera.

    Where ever there is an option the API provides you with a default carefully chosen to work in most circumstances.
    However, you can always change those settings once you understand the value of changing it.

    More information and the general concepts about the GenICam Standard can be found at the
    [EMVA Website](https://www.emva.org/standards-technology/genicam/genicam-downloads/).

    USAGE:

    \code
    using namespace NeoAPI;

    Cam camera;
    camera.Connect();                          // connect to any camera
    camera.SetFeature('ExposureTime', 20000);  // set the Exposure Time
    Image img = camera.GetImage();             // get an image from the camera
    \endcode

    \review 20190402
*/
class NEOAPI_CPP_DECL Cam : public CamBase {
 public:
    /**
        \brief      Constructor
    */
    Cam();

    /**
        \brief      Copy-Constructor
        \param[in]  object A Cam object
    */
    Cam(const Cam& object);

    /**
         \brief      Destructor
    */
    virtual ~Cam();

    /**
        \brief      The "=" operator
        \param[in]  object A Cam object
        \return     The Cam object
    */
    const Cam& operator = (const Cam& object);

    /**
        \brief      Connect a GenICam camera device to work with it

        The Connect method is called to establish a connection to a GenICam compatible camera device. To connect to
        a specific camera the identifier can be used. The identifier will be used to search for a camera.

        Possible Values for the camera identifier are:
        \code{.none}
        Transport Layer Type - "U3V" USB3 Vision Standard or "GEV" Gigabit Ethernet Vision
        Camera Model Name    - "VCXU-32M" or "VLXT-123C.I" this value can read from the SFNC Feature "ModelName"
        Camera Serial Number - "700004105902" the unique number
        Camera User ID       - "Camera_left" A user defined string which can be set to a camera permanently
        USB Port ID          - "P10-2" U3V only, describes the USB-Hub and Port the camera is attached to
        U3V Vision GUID      - "282500003F46" a globally unique identifier for U3V devices
        IP-Address           - The currently assigned IP Address of the camera or the ethernet Interface
                                SFNC Feature "GEVPrimaryApplicationIPAddress" and "GEVCurrentIPAddress"
        MAC-Address          - "00:06:BE:01:F8:06" the MAC-Address of the GEV camera (found on the camera)
        Interface name       - ???????????????????????????????
        \endcode

        If the identifier is empty, one of the connected camera will be choosen. If a U3V camera is present, it will be
        chosen first. Only if no U3V device can be found the GigE Vision interface will scanned.

        If the system does not change between calling the connect method, the method will always connect with
        the same camera to work in a consistent way. This is achieved by the search algorithm which will return
        the camera device with the lowest/smallest serial number on the interface

        \note       Please remember that a camera is always connected exclusively to one Cam object. That means you
                    can only connect to a camera after all previous connections (also from other programs) are
                    disconnected

        \warning    It is possible to call this method more than once, however, once a camera is connected it will
                    keep that existing connection open

        \param[in]  identifier A string value with the camera identifier
        \return     The Cam object

        \exception NoAccessException Cam Device can not be opened
                   NotConnectedException No device matching the given criterias is connected

        \code
        using namespace NeoAPI;

        Cam camera;                     // create a camera object
        camera.Connect("U3V");          // connect to any USB3 Vision device
        // or
        camera.Connect("168.192.2.24")  //connect to the camera with the coresponding IP
        Image img = camera.GetImage();  // retrieve an image
        \endcode

        \see        Cam::IsConnected()
        \review     20190402
    */
    virtual Cam& Connect(const NeoString& identifier = "");

    /**
        \brief      Disconnect a GenICam camera device
        \return     The Cam object
    */
    virtual Cam& Disconnect();

    /**
        \brief      Start streaming from this camera. (Streaming is started by Conncet)
        \return     The Cam object
    */
    virtual Cam& StartStreaming();

    /**
        \brief      Stop streaming from this camera.
        \return     The Cam object
    */
    virtual Cam& StopStreaming();

    /**
        \brief Set the value of a feature of the camera, see Cam::f for a more convenient way to access features

        You can use this method in case a camera feature is not accessable through Cam::f

        \param[in]  name  The name of the feature to write (SFNC Name)
        \param[in]  value An int64_t value which should be written
        \return     The Cam object
        \exception  NotConnectedException No device connected
        \exception  FeatureAccessException The feature is not accessible

        \code
        using namespace NeoAPI;
        Cam camera;                       // create the camera object
        camera.Connect();                 // connect to any camera
        camera.SetFeature("Gain", 1.24);  // set the Feature
        \endcode

        \see        Cam::f
        \see        Feature
        \review 20190402

    */
    virtual Cam& SetFeature(const NeoString& name, int64_t value);

    /**
        \overload

        \param[in]  name  The name of the feature to write (SFNC Name)
        \param[in]  value The int32_t value which should be written to the feature
        \return     The Cam object
        \review 20190402
    */
    virtual Cam& SetFeature(const NeoString& name, int32_t value);

    /**
        \overload

        \param[in]  name  The name of the feature to write (SFNC Name)
        \param[in]  value The double value which should be written to the feature
        \return     The Cam object
        \review 20190402
    */
    virtual Cam& SetFeature(const NeoString& name, double value);

    /**
        \overload

        \param[in]  name  The name of the feature to write (SFNC Name)
        \param[in]  value The String value which should be written to the feature
        \return     The Cam object
        \review 20190402
    */
    virtual Cam& SetFeature(const NeoString& name, const NeoString& value);

    /**
        \overload

        \param[in]  name  The name of the feature to write (SFNC Name)
        \param[in]  value The const char* value which should be written to the feature
        \return     The Cam object
        \review 20190402
    */
    virtual Cam& SetFeature(const NeoString& name, const char* value);

    /**
        \overload

        \param[in]  name  The name of the feature to write (SFNC Name)
        \param[in]  value The bool value which should be written to the feature
        \return     The Cam object
        \review 20190402
    */
    virtual Cam& SetFeature(const NeoString& name, bool value);

    /**
        \brief      Executes an exectutable SFNC-ICommand-Feature of the camera

        Some Features are used to trigger an action in the camera. The most commonly used one is probably the
        AquisitionStart/AquisitionStop commands. The Execute() method is used to execute one of those features.

        \note       Check the [GenICam SFNC document](https://www.emva.org/wp-content/uploads/GenICam_SFNC_v2_4.pdf)
                    for more info on the ICommand Interface

        \param[in]  name The name of the feature to execute (SFNC Name)
        \return     The Cam object
        \exception  NotConnectedException No device connected
        \exception  FeatureAccessException The feature is not accessible
        \review 20190402
    */
    virtual Cam& Execute(const NeoString& name);

    /**
        \brief      Set the value of multiple feature of the camera in one operation
        \param[in]  featurestack  A set of features to write
        \return     The Cam object
        \exception  NotConnectedException No device connected
        \exception  FeatureAccessException One or more features are not accessible
        \see        FeatureStack::Add()
    */
    virtual Cam& WriteFeatureStack(const FeatureStack& featurestack);

    /**
        \brief      Delete the image queue

        \return     The Cam object
        \exception  NotConnectedException No device connected.
    */
    virtual Cam& ClearImages();

    /**
        \brief      Enable image callback.

        \param[in]  callback The ImageCallback method of the given object will be called for every image data.
        \return     The Cam object
    */
    virtual Cam& EnableImageCallback(const NeoImageCallback& callback);

    /**
        \brief      Disable image callback.
        \return     The Cam object
    */
    virtual Cam& DisableImageCallback();

    /**
        \brief      In user buffer mode the camera uses buffers provided by AddUserBuffer.

        In this mode memory blocks allocated by other frameworks
        like e.g. OpenCV are used as acquisition buffers for the camera.

        \param[in]  user_buffers True to enable UserBufferMode, otherwise false (default ist true)

        \return     The Cam object
     */
    virtual Cam& SetUserBufferMode(bool user_buffers = true);

    /**
        \brief      Add a user allocated memory for use as buffer in UserBufferMode

        \param[in]  buffer object derived from NeoAPI::BufferBase that should used as buffer

        \return     The Cam object
        \exception  InvalidArgumentException  buffer is not initialized correctly
     */
    virtual Cam& AddUserBuffer(BufferBase* buffer);

    /**
        \brief      Revoke a user allocated memory from buffer list

        Image objects that refer to a revoked memory will not be invalidated.
        This means the memory will not used anymore for image acquisition
        but Image objects holded by the user are only valid until the revoked memory is not freed.

        \param[in]  buffer object derived from NeoAPI::BufferBase that not used anymore by NeoAPI

        \return     The Cam object
     */
    virtual Cam& RevokeUserBuffer(BufferBase* buffer);

    /**
        \brief      Set the number of internal used image buffers

        The number of internal image buffers is equal to the maximum images that can be worked on in parallel.
        If you call GetImage without having an free internal image buffer to store the data, the GetImage method
        will not be able to store any new images coming from the camera and will throw an exception.

        As each buffer needs memory to store an incoming image, you should try to reduce the amount of buffers
        where possible

        \param[in]  buffercount Image buffer count, if set to zero buffercount will be set to the default of 10 buffers
        \return     The Cam object
        \see        \ref images_buffers
        \review 20190402
    */
    virtual Cam& SetImageBufferCount(size_t buffercount = 10);

    /**
        \brief      Set the number of internal image buffers to be cycled automatically

        By changing the `SetImageBufferCount()` and `SetImageBufferCycleCount()` the three different buffer modes
        can be configured. Please see @ref images_buffers for details

        \param[in]  cyclecount Image buffer count
        \return     The Cam object
        \review 20190402
    */
    virtual Cam& SetImageBufferCycleCount(size_t cyclecount = 1);

    /**
        \brief      In synchronous mode the acquisition will restart for every feature change, to ensure new values will
                    be reflected in the next image

        When a feature is set to a new value, this change may take some time to take effect. In free running mode the
        camera may transfer one or more images based on the last value. To ensure new values will reflect in the next
        image the acquisition is stopped, the value of the feature is set and the acquisition will be restarted

        \note The synchronous mode is active by default

        \param[in]  synchronous True to enable SynchronMode, otherwise false (default ist true)
        \return     The Cam object
        \see        Cam::GetImage()
        \review 20190402
    */
    virtual Cam& SetSynchronFeatureMode(bool synchronous = true);

    /**
        \brief      With AdjustFeatureValueMode enabled feature values will be checked an adjusted where necessary

        Some Feature can only be changed with a fixed increment. If a feature is set to a value the device can not handle, the value will be adjusted to the next valid value

        \note The AdjustFeatureValueMode is active by default

        \param[in]  adjust True to Adjust feature values, otherwise false (default ist true)
        \return     The Cam object
        \see        Cam::GetImage()
        \review 20190402
    */
    virtual Cam& SetAdjustFeatureValueMode(bool adjust = true);

    /**
        \brief      Allow all or individual chunk data

        If name is empty all chunk data will processed

        \param[in]  name - empty string for all chunk data or name from GetAvailableChunks for special chunk data
        \return     The Cam object
        \exception  FeatureAccessException requesting a specific chunk by name which is not available
        \exception  NoAccessException device is not connected anymore
        \exception  NotConnectedException No device connected
        \see        Cam::GetAvailableChunks()
    */
    virtual Cam& EnableChunk(const NeoString& name = "");

    /**
        \brief      Disallow all or individual chunk data

        If name is empty all chunk data will processed

        \param[in]  name - empty string for all chunk data or name from GetAvailableChunks for special chunk data
        \return     The Cam object
        \exception  NoAccessException device is not connected anymore
        \exception  NotConnectedException No device connected
        \see        Cam::GetAvailableChunks()
    */
    virtual Cam& DisableChunk(const NeoString& name = "");

    /**
        \brief      Allow individual events.

        \param[in]  name of event to enable
        \param[in]  max_queuesize max number of events in queue
        \return     The Cam object
        \see        Cam::GetAvailableEvents()
    */
    virtual Cam& EnableEvent(const NeoString& name, uint32_t max_queuesize = 1000);

    /**
        \brief      Disallow individual events.

        \param[in]  name of event to disable
        \return     The Cam object
        \see        Cam::GetAvailableEvents()
    */
    virtual Cam& DisableEvent(const NeoString& name);

    /**
        \brief      Delete the event queue

        \param[in]  name Name of event to remove from queue, default is empty to drop all events
        \return     The Cam object
        \exception  NotConnectedException No device connected.
        \see        Cam::EventEnable()
    */
    virtual Cam& ClearEvents(const NeoAPI::NeoString& name = "");

    /**
        \brief      Enable event callback.

        \param[in]  callback The EventCallback method of the given object will be called for every event data.
        \param[in]  name Name of event to wait for, default is empty to wait for any event
        \return     The Cam object
    */
    virtual Cam& EnableEventCallback(const NeoEventCallback& callback, const NeoAPI::NeoString& name = "");

    /**
        \brief      Disable event callback.

        \param[in]  name of event to disable
        \return     The Cam object
    */
    virtual Cam& DisableEventCallback(const NeoAPI::NeoString& name = "");

    /**
        \brief      Delete the event queue

        \return     The CamBase object
        \exception  NotConnectedException No device connected.
        \see        Cambase::EventEnable()
    */
    virtual Cam& ClearPnPEvents();

    /**
        \brief      Enable event callback.

        \param[in]  callback The EventCallback method of the given object will be called for every event data.
        \return     The CamBase object
    */
    virtual Cam& EnablePnPEventCallback(const NeoEventCallback& callback);

    /**
        \brief      Disable event callback.
        \return     The CamBase object
    */
    virtual Cam& DisablePnPEventCallback();

    /**
        \brief      Provides access to the generated camera features

        A GenICam camera has hundreds of features which are used to configure the camera as required. The methode f
        encapsulates all those features

        \code
        NeoAPI::Cam camera = NeoAPI::Cam();
        camera.Connect();
        camera.f().ExposureTime = 20000;
        std::cout << camera.f().Gain << std::endl;
        camera.f().TriggerMode = NeoAPI::TriggerMode::On;
        camera.f().TriggerSoftware.Execute();
        \endcode

        \return     The FeatureAccess object
        \exception  NotConnectedException No device connected
        \exception  FeatureAccessException One or more features are not accessible
    */
    virtual FeatureAccess& f() const;

 protected:
     /**
     Holds the Feature Access object
     */
     FeatureAccess* f_;
};

/**
    \ingroup        All
    \ingroup        Support
    \brief          A collection of camera features

    The FeatureStack provides you with the ability to write many GenICam Feature values quickly to a camera.
    Instead of sending/waiting for validation for each single feature the FeatureStack allows to send many
    Features in one operation and only validate the whole operation once
*/
class NEOAPI_CPP_DECL FeatureStack {
 public:
    /**
        \brief      Constructor
    */
    FeatureStack();

    /**
        \brief      Copy-Constructor
        \param[in]  object A FeatureStack object
    */
    FeatureStack(const FeatureStack& object);

    /**
        \brief      Destructor
    */
    virtual ~FeatureStack();

    /**
        \brief      The "=" operator
        \param[in]  object A FeatureStack object
        \return     The FeatureStack object
    */
    const FeatureStack& operator = (const FeatureStack& object);

    /**
        \brief      Add a feature/value pair to the FeatureStack

        \param[in]  name  The name of the feature to write (SFNC Name)
        \param[in]  value An int32_t value which should be written
        \return     The FeatureStack object

        \code
        using namespace NeoAPI;

        FeatureStack stack;               // create a FeatureStack object
        stack.Add("Gain", 1.24);          // add features
        stack.Add("Width", 640);
        stack.Add("Height", 480);
        Cam camera;                       // create a Cam object
        camera.Connect();                 // connect to any camera
        camera.WriteFeatureStack(stack);  // write the features to the camera
        \endcode
    */
    virtual FeatureStack& Add(const NeoString& name, int32_t value);

    /**
        \overload
        \param[in]  name  The name of the feature to write (SFNC Name)
        \param[in]  value An int64_t value which should be written
        \return     The FeatureStack object
    */
    virtual FeatureStack& Add(const NeoString& name, int64_t value);

    /**
        \overload
        \param[in]  name  The name of the feature to write (SFNC Name)
        \param[in]  value A double value which should be written
        \return     The FeatureStack object
    */
    virtual FeatureStack& Add(const NeoString& name, double value);

    /**
        \overload
        \param[in]  name  The name of the feature to write (SFNC Name)
        \param[in]  value A bool value which should be written
        \return     The FeatureStack object
    */
    virtual FeatureStack& Add(const NeoString& name, bool value);

    /**
        \overload
        \param[in]  name  The name of the feature to write (SFNC Name)
        \param[in]  value A const char* value which should be written
        \return     The FeatureStack object
    */
    virtual FeatureStack& Add(const NeoString& name, const char* value);

    /**
        \overload
        \param[in]  name  The name of the feature to write (SFNC Name)
        \param[in]  value A String value which should be written
        \return     The FeatureStack object
    */
    virtual FeatureStack& Add(const NeoString& name, const NeoString& value);

    /**
        \overload
        \param[in]  name  The name of the feature to execute (SFNC Name)
        \return     The FeatureStack object
    */
    virtual FeatureStack& Add(const NeoString& name);

    /**
        \brief      Remove all features from the collection
        \return     The FeatureStack object
    */
    virtual FeatureStack& Clear();

    /**
        \brief  In replace mode register accesses are merged together. Only the merge result is written to the camera

        Use the replace mode to speed up feature changes. In some scenarios, it is desired to write each value
        separately. This may be the case if  some values are to be applied before a SW trigger and some after

        \note The ReplaceMode is deactivated by default

        \param[in]  replace  Combine multiple register accesses if possible
        \return     The FeatureStack object
    */
    virtual FeatureStack& SetReplaceMode(bool replace = true);

    /**
        \brief      CamBase::WriteFeatureStack can access the protected data of this class
        \param[in]  featurestack  A feature collection to write to the camera
        \return     The CamBase object
    */
    friend CamBase& CamBase::WriteFeatureStack(const FeatureStack& featurestack);

 protected:
    /**
        \brief      Holds all internal data
    */
    FeatureStackData* data_;
};

/**
    \ingroup    All
    \brief      Image callback class to derive from an get image data
*/
class NEOAPI_CPP_DECL NeoImageCallback {
 public:
    /**
        \brief      Constructor
    */
    NeoImageCallback();

    /**
        \brief      Destructor
    */
    virtual ~NeoImageCallback();

    /**
        \brief      Overwrite this method to receive image data
        \param[in]  image The image data
    */
    virtual void ImageCallback(const Image& image);
};

/**
    \ingroup    All
    \brief      Event callback class to derive from an get event data
*/
class NEOAPI_CPP_DECL NeoEventCallback {
 public:
    /**
        \brief      Constructor
    */
    NeoEventCallback();

    /**
        \brief      Destructor
    */
    virtual ~NeoEventCallback();

    /**
        \brief      Overwrite this method to receive event data
        \param[in]  event The event data
    */
    virtual void EventCallback(const NeoEvent& event);
};

/**
    \ingroup    All
    \brief      Base class to derive from for use as user buffer
*/
class NEOAPI_CPP_DECL BufferBase {
 public:
    /**
        \brief      Constructor
    */
    BufferBase();
    /**
        \brief      Copy Constructor
    */
    BufferBase(const BufferBase& object);
    /**
        \brief      Destructor
    */
    virtual ~BufferBase();
    /**
        \brief      will assign a memory object for use as a buffer

        If the buffer object is not assigned to a camera object it is valid to assign a new memory.
        When it is allready assigned to a camera object NeoAPI::InvalidArgumentException will be thrown.

        \param[in] memory address to the memory
        \param[in] size   size of the memory
        \return     void
        \exception  InvalidArgumentException  when arguments changed and allready assigned to a camera object
    */
    void RegisterMemory(void* memory, size_t size);
    /**
        \brief      unregister a previous assigned memory

        If the buffer object is assigned to a camera the buffer will be revoked automatically.

        \return     void
    */
    void UnregisterMemory();

 protected:
    BufferBaseData* data_;
};

}  // namespace NeoAPI
#endif  // _NEOAPI_CAMERA_HPP__
