\page gevipconfig The gevipconfig-tool
# The gevipconfig-tool

the gevipconfig-tool can be used to configure the networking of your camera it can also be used as part of your setup or in a script to automate the process
## Introduction

GigE Vision devices need a valid IP address to operate as expected. A valid IP address has to be in the subnet of the network interface card, the device is connected to and has to be unique.

For example:

### Example 1
NIC: IP 192.168.1.1 Subnet 255.255.255.0
Camera: IP 192.168.2.1 Subnet 255.255.255.0

-> invalid: different subnet

### Example 2
NIC: IP 192.168.1.1 Subnet 255.255.255.0
Camera: IP 192.168.1.1 Subnet 255.255.255.0

-> invalid: same subnet but also same ip address

### Example 3
NIC: IP 192.168.1.1 Subnet 255.255.255.0
Camera: IP 192.168.1.2 Subnet 255.255.255.0

-> valid: same subnet and different ip address

## Basic Usage

**To work properly on linux, super user privileges are required!**

Running `gevipconfig`without any parameter will list all detected GigE Vision devices and their connection settings.

Running `gevipconfig -a` will issue a forceip command to all devices which are not in the same subnet as the NIC they are connected to. This will (temporarily, until the camera is restarted) enable you to connect to the devices.

If you require a permanent network setting for the camera, you can use the "persistent IP" feature or the DHCP option

If you want to change specific devices, call `gevipconfig -c "SERIAL NUMBER"` and replace "SERIAL NUMBER" with the serial number of the device to modify.
eg. `gevipconfig -c 700001817369`.

For a detailed description of all supported command line parameters call `gevipconfig -h`.

## Command line parameter

### -h [ --help ]
    Show all valid command line parameter with their description.

### --version
    Show the version information.

### -v [ --verbose ]
    Show additional information. (e.g. all network adapters with the connected gev devices)

### --silent
    Show only fatal errors (overrides verbose)

### -t [ --timeout ] arg
    Timeout to wait for cameras to answer discovery broadcast message.

### -a [ --all ]
    Set an ip address matching the subnet of connected network interface for all detected gev devices. Additional device specific options will be ignored.

###   -c [ --camera ] arg
    Set an ip address matching to the subnet of the network interface for the selected device (by serial number or MAC address)

###   -i [ --ip ] arg
    Set the target ip address (eg. 169.254.23.12). Works only in combination with camera option!

###   -s [ --subnet ] arg
    Set the target subnet (eg. 255.255.0.0). Works only in combination with ip option!

###   -p [ --persistent ]
    Configure persistent ip address.

###   --no-persistent
    Disable persistent ip address.

###   --dhcp
    Enable dhcp mode of device

###   --no-dhcp
    Disable dhcp mode of device

###   --arp
    Add static ARP entry to avoid packet loss. (Windows only + requires administrator privilege)

###   --no-rp-filter
    Disable reverse path filtering. (Linux only)

###   --rp-filter
    Restore reverse path filtering. (Linux only)