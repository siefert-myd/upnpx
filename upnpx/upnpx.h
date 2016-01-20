//
//  upnpx.h
//  upnpx
//
//  Created by Sean Siefert on 1/14/16.
//  Copyright © 2016 Bruno Keymolen. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for upnpx.
FOUNDATION_EXPORT double upnpxVersionNumber;

//! Project version string for upnpx.
FOUNDATION_EXPORT const unsigned char upnpxVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <upnpx/PublicHeader.h>

#import "BasicDeviceParser.h"
#import "BasicHTTPServer_ObjC.h"
#import "BasicParser.h"
#import "BasicParserAsset.h"
#import "BasicServiceParser.h"
#import "BasicUPnPDevice.h"
#import "BasicUPnPService.h"
#import "BinaryLight1Device.h"
#import "DeviceFactory.h"
#import "DigitalSecurityCamera1Device.h"
#import "DimmableLight1Device.h"
#import "InternetGateway2Device.h"
#import "LAN1Device.h"
#import "LastChangeParser.h"
#import "MediaPlaylist.h"
#import "MediaRenderer1Device.h"
#import "MediaServer1BasicObject.h"
#import "MediaServer1ContainerObject.h"
#import "MediaServer1Device.h"
#import "MediaServer1ItemObject.h"
#import "MediaServer1ItemRes.h"
#import "MediaServerBasicObjectParser.h"
#import "NSString+UPnPExtentions.h"
#import "OrderedDictionary.h"
#import "SoapAction.h"
#import "SoapActionsAVTransport1.h"
#import "SoapActionsCallManagement1.h"
#import "SoapActionsConfigurationManagement1.h"
#import "SoapActionsConnectionManager1.h"
#import "SoapActionsContentDirectory1.h"
#import "SoapActionsDeviceProtection1.h"
#import "SoapActionsDigitalSecurityCameraMotionImage1.h"
#import "SoapActionsDigitalSecurityCameraSettings1.h"
#import "SoapActionsDigitalSecurityCameraStillImage1.h"
#import "SoapActionsDimming1.h"
#import "SoapActionsInputConfig1.h"
#import "SoapActionsLANHostConfigManagement1.h"
#import "SoapActionsLayer3Forwarding1.h"
#import "SoapActionsMediaManagement1.h"
#import "SoapActionsMessaging1.h"
#import "SoapActionsRendering.h"
#import "SoapActionsRenderingControl1.h"
#import "SoapActionsSwitchPower1.h"
#import "SoapActionsWANCableLinkConfig1.h"
#import "SoapActionsWANCommonInterfaceConfig1.h"
#import "SoapActionsWANDSLLinkConfig1.h"
#import "SoapActionsWANEthernetLinkConfig1.h"
#import "SoapActionsWANIPConnection1.h"
#import "SoapActionsWANIPConnection2.h"
#import "SoapActionsWANIPv6FirewallControl1.h"
#import "SoapActionsWANPOTSLinkConfig1.h"
#import "SoapActionsWANPPPConnection1.h"
#import "SSDPDB_ObjC.h"
#import "StateVariable.h"
#import "StateVariableList.h"
#import "StateVariableRange.h"
#import "TelephonyClient1Device.h"
#import "TelephonyServer1Device.h"
#import "UPnPDB.h"
#import "UPnPEventParser.h"
#import "UPnPEvents.h"
#import "UPnPManager.h"
#import "WAN2Device.h"
#import "WANConnection1Device.h"
#import "WANConnection2Device.h"
#import "upnpx.h"