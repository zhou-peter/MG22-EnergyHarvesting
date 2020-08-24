// This file is generated by Simplicity Studio.  Please do not edit manually.
//
//

// Enclosing macro to prevent multiple inclusion
#ifndef __GPD_CONFIG__
#define __GPD_CONFIG__


// Top level macros
#define EMBER_AF_DEVICE_NAME "gpd-mg22-brd4182a-latest-sdk"


// Generated plugin macros

// Use this macro for running the application on a SLWSTK6021A board with BRD4182A radio boards
//#define WSTK_BOARD

// Use this macro to check if ADC plugin is included
#define EMBER_AF_PLUGIN_ADC

// Use this macro to check if Antenna Stub plugin is included
#define EMBER_AF_PLUGIN_ANTENNA_STUB

// Use this macro to check if GPD App Configuration plugin is included
#define EMBER_AF_PLUGIN_APPS
// User options for plugin GPD App Configuration
#define EMBER_AF_PLUGIN_APPS_APP_DEVICE_ID 2
#define EMBER_AF_PLUGIN_APPS_APP_CHANNEL_SET { 11, 15, 20, 24, 25, 12, 13, 14, 16, 17, 18, 19, 21, 22, 23, 26 }
#define EMBER_AF_PLUGIN_APPS_APP_CHANNEL_SET_LENGTH (16)
#define EMBER_AF_PLUGIN_APPS_APPLICATION_ID EMBER_GPD_APP_ID_SRC_ID
#define EMBER_AF_PLUGIN_APPS_SRC_ID 305419896
#define EMBER_AF_PLUGIN_APPS_IEEE { 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88 }
#define EMBER_AF_PLUGIN_APPS_GPD_ENDPOINT 99
#define EMBER_AF_PLUGIN_APPS_MAC_SEQ EMBER_GPD_MAC_SEQ_INCREMENTAL
#define EMBER_AF_PLUGIN_APPS_BIDIR_CAPABLE true
#define EMBER_AF_PLUGIN_APPS_RX_OFFSET 20
#define EMBER_AF_PLUGIN_APPS_RX_WINDOW 80
#define EMBER_AF_PLUGIN_APPS_RX_CAPABILITY true
#define EMBER_AF_PLUGIN_APPS_PAN_ID_REQUEST false
#define EMBER_AF_PLUGIN_APPS_SECURITY_LEVEL EMBER_GPD_SECURITY_LEVEL_LONG_FULL
#define EMBER_AF_PLUGIN_APPS_SECURITY_KEY_TYPE EMBER_GPD_SECURITY_KEY_TYPE_OOB
#define EMBER_AF_PLUGIN_APPS_KEY { 0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88, 0x99, 0xaa, 0xbb, 0xcc, 0xdd, 0xee, 0xff }
#define EMBER_AF_PLUGIN_APPS_KEY_LENGTH (16)
#define EMBER_AF_PLUGIN_APPS_KEY_REQUEST true
#define EMBER_AF_PLUGIN_APPS_KEY_ENCRYPT true
#define EMBER_AF_PLUGIN_APPS_FIXED_LOCATION true
#define EMBER_AF_PLUGIN_APPS_APP_INFO false
#define EMBER_AF_PLUGIN_APPS_GPD_APP_NUMBER_OF_CHANNEL_REQUEST_PER_CHANNEL_WITH_AC_SET 4
#define EMBER_AF_PLUGIN_APPS_GPD_APP_NUMBER_OF_CHANNEL_REQUEST_PER_CHANNEL 4
#define EMBER_AF_PLUGIN_APPS_GPD_APP_NUMBER_OF_COMMISSIONING_REQUEST 4

// Use this macro to check if Button plugin is included
#define EMBER_AF_PLUGIN_BUTTON

// Use this macro to check if CCM* Encryption plugin is included
#define EMBER_AF_PLUGIN_CCM_ENCRYPTION
// User options for plugin CCM* Encryption
#define EMBER_AF_PLUGIN_CCM_ENCRYPTION_MBEDTLS_CCM
#define USE_MBEDTLS_CCM

// Use this macro to check if GPD CLI plugin is included
//#define EMBER_AF_PLUGIN_CLI

// Use this macro to check if Radio Coexistence Stub plugin is included
#define EMBER_AF_PLUGIN_COEXISTENCE_STUB

// Use this macro to check if Command Interpreter plugin is included
//#define EMBER_AF_PLUGIN_COMMAND_INTERPRETER2

// Use this macro to check if Ember Minimal Printf plugin is included
//#define EMBER_AF_PLUGIN_EMBER_MINIMAL_PRINTF

// Use this macro to check if GPD Components plugin is included
#define EMBER_AF_PLUGIN_GPD_COMPONENTS

// Use this macro to check if HAL Library plugin is included
#define EMBER_AF_PLUGIN_HAL_LIBRARY

// Use this macro to check if LED plugin is included
//#define EMBER_AF_PLUGIN_LED

// Use this macro to check if mbed TLS plugin is included
#define EMBER_AF_PLUGIN_MBEDTLS
// User options for plugin mbed TLS
#define EMBER_AF_PLUGIN_MBEDTLS_CONF_DEVICE_ACCELERATION
#define EMBER_AF_PLUGIN_MBEDTLS_CONF_DEVICE_ACCELERATION_APP

// Use this macro to check if NVM3 Library plugin is included
#define EMBER_AF_PLUGIN_NVM3
// User options for plugin NVM3 Library
#define EMBER_AF_PLUGIN_NVM3_FLASH_PAGES 4
#define EMBER_AF_PLUGIN_NVM3_CACHE_SIZE 200
#define EMBER_AF_PLUGIN_NVM3_MAX_OBJECT_SIZE 254
#define EMBER_AF_PLUGIN_NVM3_USER_REPACK_HEADROOM 0

// Use this macro to check if RAIL Library plugin is included
#define EMBER_AF_PLUGIN_RAIL_LIBRARY
// User options for plugin RAIL Library
#define EMBER_AF_PLUGIN_RAIL_LIBRARY_RAILPHYDEF 1

// Use this macro to check if Serial plugin is included
#define EMBER_AF_PLUGIN_SERIAL

// Use this macro to check if Simulated EEPROM version 2 to NVM3 Upgrade Stub plugin is included
#define EMBER_AF_PLUGIN_SIM_EEPROM2_TO_NVM3_UPGRADE_STUB


// Generated API headers

// API adc-cortexm3 from ADC plugin
#define EMBER_AF_API_ADC_CORTEXM3 "../../../../../SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.7/platform/base/hal/plugin/adc/adc-cortexm3.h"

// API adc from ADC plugin
#define EMBER_AF_API_ADC "../../../../../SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.7/platform/base/hal/plugin/adc/adc.h"

// API antenna from Antenna Stub plugin
#define EMBER_AF_API_ANTENNA "../../../../../SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.7/platform/base/hal/plugin/antenna/antenna.h"

// API button from Button plugin
#define EMBER_AF_API_BUTTON "../../../../../SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.7/platform/base/hal/micro/button.h"

// API coexistence from Radio Coexistence Stub plugin
#define EMBER_AF_API_COEXISTENCE "../../../../../SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.7/platform/radio/rail_lib/plugin/coexistence/protocol/ieee802154/coexistence-802154.h"

// API command-interpreter2 from Command Interpreter plugin
#define EMBER_AF_API_COMMAND_INTERPRETER2 "../../../../../SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.7/protocol/zigbee/app/util/serial/command-interpreter2.h"

// API crc from HAL Library plugin
#define EMBER_AF_API_CRC "../../../../../SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.7/platform/base/hal/micro/crc.h"

// API endian from HAL Library plugin
#define EMBER_AF_API_ENDIAN "../../../../../SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.7/platform/base/hal/micro/endian.h"

// API hal from HAL Library plugin
#define EMBER_AF_API_HAL "../../../../../SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.7/platform/base/hal/hal.h"

// API random from HAL Library plugin
#define EMBER_AF_API_RANDOM "../../../../../SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.7/platform/base/hal/micro/random.h"

// API system-timer from HAL Library plugin
#define EMBER_AF_API_SYSTEM_TIMER "../../../../../SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.7/platform/base/hal/micro/system-timer.h"

// API token-cortexm3 from HAL Library plugin
#define EMBER_AF_API_TOKEN_CORTEXM3 "../../../../../SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.7/platform/base/hal/micro/cortexm3/token.h"

// API token from HAL Library plugin
#define EMBER_AF_API_TOKEN "../../../../../SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.7/platform/base/hal/micro/token.h"

// API led from LED plugin
#define EMBER_AF_API_LED "../../../../../SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.7/platform/base/hal/micro/led.h"

// API nvm3 from NVM3 Library plugin
#define EMBER_AF_API_NVM3 "../../../../../SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.7/platform/base/hal/plugin/nvm3/nvm3-token.h"

// API rail-library from RAIL Library plugin
#define EMBER_AF_API_RAIL_LIBRARY "../../../../../SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.7/platform/radio/rail_lib/common/rail.h"

// API serial from Serial plugin
#define EMBER_AF_API_SERIAL "../../../../../SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.7/platform/base/hal/plugin/serial/serial.h"


// Custom macros
#ifdef EMBER_AF_RADIO
#undef EMBER_AF_RADIO
#endif
#define EMBER_AF_RADIO EFR32

#ifdef EMBER_AF_RADIO_FULL
#undef EMBER_AF_RADIO_FULL
#endif
#define EMBER_AF_RADIO_FULL EFR32MG22C224F512IM40

#ifdef EMBER_AF_RADIO_FAMILY
#undef EMBER_AF_RADIO_FAMILY
#endif
#define EMBER_AF_RADIO_FAMILY M

#ifdef EMBER_AF_RADIO_SERIES
#undef EMBER_AF_RADIO_SERIES
#endif
#define EMBER_AF_RADIO_SERIES 2

#ifdef EMBER_AF_RADIO_DEVICE_CONFIGURATION
#undef EMBER_AF_RADIO_DEVICE_CONFIGURATION
#endif
#define EMBER_AF_RADIO_DEVICE_CONFIGURATION 2

#ifdef EMBER_AF_RADIO_PERFORMANCE
#undef EMBER_AF_RADIO_PERFORMANCE
#endif
#define EMBER_AF_RADIO_PERFORMANCE C

#ifdef EMBER_AF_RADIO_RADIO
#undef EMBER_AF_RADIO_RADIO
#endif
#define EMBER_AF_RADIO_RADIO 224

#ifdef EMBER_AF_RADIO_FLASH
#undef EMBER_AF_RADIO_FLASH
#endif
#define EMBER_AF_RADIO_FLASH 512K

#ifdef EMBER_AF_RADIO_TEMP
#undef EMBER_AF_RADIO_TEMP
#endif
#define EMBER_AF_RADIO_TEMP I

#ifdef EMBER_AF_RADIO_PACKAGE
#undef EMBER_AF_RADIO_PACKAGE
#endif
#define EMBER_AF_RADIO_PACKAGE M

#ifdef EMBER_AF_RADIO_PINS
#undef EMBER_AF_RADIO_PINS
#endif
#define EMBER_AF_RADIO_PINS 40

#ifdef EMBER_AF_RADIO_MODULE
#undef EMBER_AF_RADIO_MODULE
#endif
#define EMBER_AF_RADIO_MODULE XX

#ifdef EMBER_AF_MCU
#undef EMBER_AF_MCU
#endif
#define EMBER_AF_MCU EFR32

#ifdef EMBER_AF_MCU_FULL
#undef EMBER_AF_MCU_FULL
#endif
#define EMBER_AF_MCU_FULL EFR32MG22C224F512IM40

#ifdef EMBER_AF_MCU_FAMILY
#undef EMBER_AF_MCU_FAMILY
#endif
#define EMBER_AF_MCU_FAMILY M

#ifdef EMBER_AF_MCU_SERIES
#undef EMBER_AF_MCU_SERIES
#endif
#define EMBER_AF_MCU_SERIES 2

#ifdef EMBER_AF_MCU_DEVICE_CONFIGURATION
#undef EMBER_AF_MCU_DEVICE_CONFIGURATION
#endif
#define EMBER_AF_MCU_DEVICE_CONFIGURATION 2

#ifdef EMBER_AF_MCU_PERFORMANCE
#undef EMBER_AF_MCU_PERFORMANCE
#endif
#define EMBER_AF_MCU_PERFORMANCE C

#ifdef EMBER_AF_MCU_RADIO
#undef EMBER_AF_MCU_RADIO
#endif
#define EMBER_AF_MCU_RADIO 224

#ifdef EMBER_AF_MCU_FLASH
#undef EMBER_AF_MCU_FLASH
#endif
#define EMBER_AF_MCU_FLASH 512K

#ifdef EMBER_AF_MCU_TEMP
#undef EMBER_AF_MCU_TEMP
#endif
#define EMBER_AF_MCU_TEMP I

#ifdef EMBER_AF_MCU_PACKAGE
#undef EMBER_AF_MCU_PACKAGE
#endif
#define EMBER_AF_MCU_PACKAGE M

#ifdef EMBER_AF_MCU_PINS
#undef EMBER_AF_MCU_PINS
#endif
#define EMBER_AF_MCU_PINS 40

#ifdef EMBER_AF_MCU_MODULE
#undef EMBER_AF_MCU_MODULE
#endif
#define EMBER_AF_MCU_MODULE XX

#ifdef EMBER_AF_BOARD_TYPE
#undef EMBER_AF_BOARD_TYPE
#endif
#define EMBER_AF_BOARD_TYPE BRD4182A

#ifdef USE_MBEDTLS_CCM
#undef USE_MBEDTLS_CCM
#endif
#define USE_MBEDTLS_CCM true



#endif // __GPD_CONFIG__
