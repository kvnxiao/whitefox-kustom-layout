/* Copyright (C) 2014-2016 by Jacob Alexander
 *
 * This file is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This file is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this file.  If not, see <http://www.gnu.org/licenses/>.
 */

// This file was generated by the kll compiler, DO NOT EDIT.
// Generation Date:    2017-07-14
// KLL Backend:        kiibohd
// KLL Git Rev:        fa41fab82e71e15f568fd23e6fdf6741442bfdc6
// KLL Git Changes:    None
// Compiler arguments:
//    ../../kll/kll.py
//      /home/kvnxiao/kiibohd/controller/Scan/ISSILed/capabilities.kll
//      /home/kvnxiao/kiibohd/controller/Scan/MatrixARM/capabilities.kll
//      /home/kvnxiao/kiibohd/controller/Macro/PartialMap/capabilities.kll
//      /home/kvnxiao/kiibohd/controller/Output/pjrcUSB/capabilities.kll
//      /home/kvnxiao/kiibohd/controller/Scan/WhiteFox/scancode_map.kll
//      -d
//      /home/kvnxiao/kiibohd/controller/kll/layouts/truefox0.kll
//      /home/kvnxiao/kiibohd/controller/kll/layouts/stdFuncMap.kll
//      -p
//      /home/kvnxiao/kiibohd/controller/kll/layouts/truefox1.kll
//      /home/kvnxiao/kiibohd/controller/kll/layouts/stdFuncMap.kll
//    --backend
//      kiibohd
//    --templates
//      /home/kvnxiao/kiibohd/controller/kll/templates/kiibohdKeymap.h
//      /home/kvnxiao/kiibohd/controller/kll/templates/kiibohdDefs.h
//    --outputs
//      generatedKeymap.h
//      kll_defs.h
//
// - Base Layer -
//    ISSILedCapabilities
//      /home/kvnxiao/kiibohd/controller/Scan/ISSILed/capabilities.kll
//    MatrixArmCapabilities
//      /home/kvnxiao/kiibohd/controller/Scan/MatrixARM/capabilities.kll
//    PartialMapCapabilities
//      /home/kvnxiao/kiibohd/controller/Macro/PartialMap/capabilities.kll
//    pjrcUSBCapabilities
//      /home/kvnxiao/kiibohd/controller/Output/pjrcUSB/capabilities.kll
//    WhiteFox
//      /home/kvnxiao/kiibohd/controller/Scan/WhiteFox/scancode_map.kll
// - Default Layer -
//    WhiteFox
//      /home/kvnxiao/kiibohd/controller/kll/layouts/truefox0.kll
//    stdFuncMap
//      /home/kvnxiao/kiibohd/controller/kll/layouts/stdFuncMap.kll
// - Partial Layers -
//    Layer 1
//     WhiteFox
//       /home/kvnxiao/kiibohd/controller/kll/layouts/truefox1.kll
//     stdFuncMap
//       /home/kvnxiao/kiibohd/controller/kll/layouts/stdFuncMap.kll



#pragma once

// ----- Enums -----

// Capability Indices
typedef enum CapabilityIndex {
	LED_control_capability_index,
	Macro_layerLatch_capability_index,
	Macro_layerLock_capability_index,
	Macro_layerRotate_capability_index,
	Macro_layerShift_capability_index,
	Macro_layerState_capability_index,
	Output_consCtrlSend_capability_index,
	Output_flashMode_capability_index,
	Output_kbdProtocolBoot_capability_index,
	Output_kbdProtocolNKRO_capability_index,
	Output_noneSend_capability_index,
	Output_sysCtrlSend_capability_index,
	Output_toggleKbdProtocol_capability_index,
	Output_usbCodeSend_capability_index,
	Output_usbMouse_capability_index,
} CapabilityIndex;



// ----- Defines -----

// -- Interconnect Node Maximum --
#define InterconnectNodeMax 0x1


// -- Capability / KLL Defines --

#define enableKeyboard_define 1
#define enableUSBResume_define 1
#define enableUSBSuspend_define 1
#define enableMouse_define 1
#define StrobeDelay_define 0
#define StateWordSize_define 8
#define enableJoystick_define 0
#define DebounceThrottleDiv_define 0
#define enableRawIO_define 0
#define enableVirtualSerialPort_define 1
#define ISSILedBrightness1_define  \
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* C1-1 -> C1-16 */ \
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* C2-1 -> C2-16 */ \
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* C3-1 -> C3-16 */ \
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* C4-1 -> C4-16 */ \
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* C5-1 -> C5-16 */ \
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* C6-1 -> C6-16 */ \
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* C7-1 -> C7-16 */ \
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* C8-1 -> C8-16 */ \
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* C9-1 -> C9-16 */ \

#define MinDebounceTime_define 5
#define flashModeEnabled_define 0
#define IndexWordSize_define 16
#define KeyboardLocale_define 0
#define ISSILedMask1_define  \
	0xFF, 0x00, /* C1-1 -> C1-16 */ \
	0xFF, 0x00, /* C2-1 -> C2-16 */ \
	0xFF, 0x00, /* C3-1 -> C3-16 */ \
	0xFF, 0x00, /* C4-1 -> C4-16 */ \
	0xFF, 0x00, /* C5-1 -> C5-16 */ \
	0xFF, 0x00, /* C6-1 -> C6-16 */ \
	0xFF, 0x00, /* C7-1 -> C7-16 */ \
	0xFF, 0x00, /* C8-1 -> C8-16 */ \
	0xFF, 0x00, /* C9-1 -> C9-16 */ \

#define USBProtocol_define 1
#define enableUSBLowPowerNegotiation_define 0
#define DebounceDivThreshold_define 65535
#define enableDeviceRestartOnUSBTimeout_define 0
#define CapabilitiesNum_KLL 15
#define ResultMacroNum_KLL 99
#define TriggerMacroNum_KLL 109
#define LayerNum_KLL 2

// -- Built-in Defines --


