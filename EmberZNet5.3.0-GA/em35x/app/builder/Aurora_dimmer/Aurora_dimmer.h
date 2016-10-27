// This file is generated by Ember Desktop.  Please do not edit manually.
//
//

// Enclosing macro to prevent multiple inclusion
#ifndef __APP_AURORA_DIMMER_H__
#define __APP_AURORA_DIMMER_H__


/**** Included Header Section ****/

/**** ZCL Section ****/
#define ZA_PROMPT "Aurora_dimmer"
#define ZCL_USING_BASIC_CLUSTER_SERVER
#define ZCL_USING_IDENTIFY_CLUSTER_CLIENT
#define ZCL_USING_IDENTIFY_CLUSTER_SERVER
#define ZCL_USING_GROUPS_CLUSTER_SERVER
#define ZCL_USING_SCENES_CLUSTER_SERVER
#define ZCL_USING_ON_OFF_CLUSTER_SERVER
#define ZCL_USING_LEVEL_CONTROL_CLUSTER_SERVER
#define ZCL_USING_OTA_BOOTLOAD_CLUSTER_CLIENT
#define ZCL_USING_COLOR_CONTROL_CLUSTER_SERVER
#define ZCL_USING_GENERIC_TUNNEL_CLUSTER_SERVER
#define ZCL_USING_TUNNELING_CLUSTER_SERVER
/**** Optional Attributes ****/
#define ZCL_USING_BASIC_CLUSTER_APPLICATION_VERSION_ATTRIBUTE 
#define ZCL_USING_BASIC_CLUSTER_MANUFACTURER_NAME_ATTRIBUTE 
#define ZCL_USING_BASIC_CLUSTER_MODEL_IDENTIFIER_ATTRIBUTE 
#define ZCL_USING_LEVEL_CONTROL_CLUSTER_ON_OFF_TRANSITION_TIME_ATTRIBUTE 
#define ZCL_USING_COLOR_CONTROL_CLUSTER_COLOR_CONTROL_CURRENT_HUE_ATTRIBUTE 
#define ZCL_USING_COLOR_CONTROL_CLUSTER_COLOR_CONTROL_CURRENT_SATURATION_ATTRIBUTE 
#define ZCL_USING_COLOR_CONTROL_CLUSTER_COLOR_CONTROL_COLOR_TEMPERATURE_ATTRIBUTE 
#define EMBER_AF_MANUFACTURER_CODE 0x1010
#define EMBER_AF_DEFAULT_RESPONSE_POLICY_ALWAYS

/**** Cluster endpoint counts ****/
#define EMBER_AF_BASIC_CLUSTER_SERVER_ENDPOINT_COUNT (3)
#define EMBER_AF_IDENTIFY_CLUSTER_CLIENT_ENDPOINT_COUNT (3)
#define EMBER_AF_IDENTIFY_CLUSTER_SERVER_ENDPOINT_COUNT (3)
#define EMBER_AF_GROUPS_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_SCENES_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_ON_OFF_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_LEVEL_CONTROL_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_OTA_BOOTLOAD_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_COLOR_CONTROL_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_GENERIC_TUNNEL_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_TUNNELING_CLUSTER_SERVER_ENDPOINT_COUNT (1)

/**** CLI Section ****/
#define EMBER_AF_GENERATE_CLI

/**** Security Section ****/
#define EMBER_KEY_TABLE_SIZE (0)
#define EMBER_AF_HAS_SECURITY_PROFILE_HA

/**** Network Section ****/
#define EMBER_SUPPORTED_NETWORKS (1)
#define EMBER_AF_NETWORK_INDEX_PRIMARY (0)
#define EMBER_AF_DEFAULT_NETWORK_INDEX EMBER_AF_NETWORK_INDEX_PRIMARY
#define EMBER_AF_HAS_COORDINATOR_NETWORK
#define EMBER_AF_HAS_ROUTER_NETWORK
#define EMBER_AF_HAS_RX_ON_WHEN_IDLE_NETWORK
#define EMBER_AF_TX_POWER_MODE EMBER_TX_POWER_MODE_USE_TOKEN

/*** Bindings section ****/
#define EMBER_BINDING_TABLE_SIZE (8)

/**** HAL Section ****/
#define CUSTOM_TOKEN_HEADER "../../../../../../AONE_Zigbee/EmberZNet5.3.0-GA/em35x/app/builder/Aurora_dimmer/Aurora_dimmer_tokens_1.h"

/**** Callback Section ****/
#define EMBER_CALLBACK_COLOR_CONTROL_CLUSTER_MOVE_TO_COLOR
#define EMBER_CALLBACK_COLOR_CONTROL_CLUSTER_MOVE_COLOR
#define EMBER_CALLBACK_COLOR_CONTROL_CLUSTER_STEP_COLOR
#define EMBER_CALLBACK_COLOR_CONTROL_CLUSTER_MOVE_TO_COLOR_TEMPERATURE
#define EMBER_CALLBACK_GENERIC_TUNNEL_CLUSTER_MATCH_PROTOCOL_ADDRESS
#define EMBER_CALLBACK_OTA_BOOTLOAD_CLUSTER_IMAGE_BLOCK_RESPONSE
#define EMBER_CALLBACK_OTA_BOOTLOAD_CLUSTER_UPGRADE_END_RESPONSE
#define EMBER_CALLBACK_OTA_BOOTLOAD_CLUSTER_QUERY_NEXT_IMAGE_RESPONSE
#define EMBER_CALLBACK_MAIN_START
#define EMBER_CALLBACK_MAIN_TICK
#define EMBER_CALLBACK_STACK_STATUS
#define EMBER_CALLBACK_OTA_BOOTLOAD_CLUSTER_IMAGE_NOTIFY
#define EMBER_CALLBACK_MAIN_INIT
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_LEVEL_CONTROL_CLUSTER_SERVER_INIT
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_LEVEL_CONTROL_CLUSTER_SERVER_TICK
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_MOVE_TO_LEVEL
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_MOVE_TO_LEVEL_WITH_ON_OFF
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_MOVE
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_MOVE_WITH_ON_OFF
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_STEP
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_STEP_WITH_ON_OFF
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_STOP
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_STOP_WITH_ON_OFF
#define EMBER_CALLBACK_ON_OFF_CLUSTER_OFF
#define EMBER_CALLBACK_ON_OFF_CLUSTER_ON
#define EMBER_CALLBACK_ON_OFF_CLUSTER_TOGGLE
#define EMBER_CALLBACK_ON_OFF_CLUSTER_ON_OFF_CLUSTER_SET_VALUE
#define EMBER_CALLBACK_ON_OFF_CLUSTER_ON_OFF_CLUSTER_LEVEL_CONTROL_EFFECT
#define EMBER_CALLBACK_OTA_BOOTLOAD_CLUSTER_OTA_BOOTLOAD_CLUSTER_CLIENT_INIT
#define EMBER_CALLBACK_OTA_BOOTLOAD_CLUSTER_OTA_BOOTLOAD_CLUSTER_CLIENT_TICK
#define EMBER_CALLBACK_OTA_CLIENT_INCOMING_MESSAGE_RAW
#define EMBER_CALLBACK_OTA_CLIENT_START
#define EMBER_CALLBACK_OTA_BOOTLOAD_CLUSTER_OTA_BOOTLOAD_CLUSTER_CLIENT_DEFAULT_RESPONSE
#define EMBER_CALLBACK_OTA_CLIENT_VERSION_INFO
#define EMBER_CALLBACK_OTA_CLIENT_DOWNLOAD_COMPLETE
#define EMBER_CALLBACK_OTA_CLIENT_BOOTLOAD
#define EMBER_CALLBACK_OTA_CLIENT_CUSTOM_VERIFY_CALLBACK
#define EMBER_CALLBACK_TUNNELING_CLUSTER_TUNNELING_CLUSTER_SERVER_INIT
#define EMBER_CALLBACK_TUNNELING_CLUSTER_TUNNELING_CLUSTER_SERVER_TICK
#define EMBER_CALLBACK_TUNNELING_CLUSTER_TUNNELING_CLUSTER_SERVER_ATTRIBUTE_CHANGED
#define EMBER_CALLBACK_TUNNELING_CLUSTER_REQUEST_TUNNEL
#define EMBER_CALLBACK_TUNNELING_CLUSTER_CLOSE_TUNNEL
#define EMBER_CALLBACK_TUNNELING_CLUSTER_TRANSFER_DATA_CLIENT_TO_SERVER
#define EMBER_CALLBACK_TUNNELING_CLUSTER_TRANSFER_DATA_ERROR_CLIENT_TO_SERVER
#define EMBER_CALLBACK_INCOMING_ROUTE_ERROR_HANDLER
#define EMBER_APPLICATION_HAS_INCOMING_ROUTE_ERROR_HANDLER
#define EMBER_CALLBACK_EZSP_INCOMING_ROUTE_ERROR_HANDLER
#define EZSP_APPLICATION_HAS_INCOMING_ROUTE_ERROR_HANDLER
#define EMBER_CALLBACK_GET_SOURCE_ROUTE_OVERHEAD
#define EMBER_CALLBACK_SET_SOURCE_ROUTE_OVERHEAD
#define EMBER_CALLBACK_COUNTER_HANDLER
#define EMBER_APPLICATION_HAS_COUNTER_HANDLER
#define EMBER_CALLBACK_EZSP_COUNTER_ROLLOVER_HANDLER
#define EZSP_APPLICATION_HAS_COUNTER_ROLLOVER_HANDLER
#define EMBER_CALLBACK_EEPROM_INIT
#define EMBER_CALLBACK_EEPROM_NOTE_INITIALIZED_STATE
#define EMBER_CALLBACK_EEPROM_SHUTDOWN
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY_QUERY_RESPONSE
#define EMBER_CALLBACK_GROUPS_CLUSTER_GROUPS_CLUSTER_SERVER_INIT
#define EMBER_CALLBACK_GROUPS_CLUSTER_ADD_GROUP
#define EMBER_CALLBACK_GROUPS_CLUSTER_VIEW_GROUP
#define EMBER_CALLBACK_GROUPS_CLUSTER_GET_GROUP_MEMBERSHIP
#define EMBER_CALLBACK_GROUPS_CLUSTER_REMOVE_GROUP
#define EMBER_CALLBACK_GROUPS_CLUSTER_REMOVE_ALL_GROUPS
#define EMBER_CALLBACK_GROUPS_CLUSTER_ADD_GROUP_IF_IDENTIFYING
#define EMBER_CALLBACK_GROUPS_CLUSTER_ENDPOINT_IN_GROUP
#define EMBER_CALLBACK_GROUPS_CLUSTER_CLEAR_GROUP_TABLE
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY_CLUSTER_SERVER_INIT
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY_CLUSTER_SERVER_TICK
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY_CLUSTER_SERVER_ATTRIBUTE_CHANGED
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY_QUERY
#define EMBER_CALLBACK_CHECK_FOR_SLEEP
#define EMBER_CALLBACK_NCP_IS_AWAKE_ISR
#define EMBER_CALLBACK_GET_CURRENT_SLEEP_CONTROL
#define EMBER_CALLBACK_GET_DEFAULT_SLEEP_CONTROL
#define EMBER_CALLBACK_SET_DEFAULT_SLEEP_CONTROL
#define EMBER_CALLBACK_UNUSED_PAN_ID_FOUND
#define EMBER_CALLBACK_JOINABLE_NETWORK_FOUND
#define EMBER_CALLBACK_SCAN_ERROR
#define EMBER_CALLBACK_FIND_UNUSED_PAN_ID_AND_FORM
#define EMBER_CALLBACK_START_SEARCH_FOR_JOINABLE_NETWORK
#define EMBER_CALLBACK_GET_FORM_AND_JOIN_EXTENDED_PAN_ID
#define EMBER_CALLBACK_SET_FORM_AND_JOIN_EXTENDED_PAN_ID
#define EMBER_CALLBACK_OTA_BOOTLOAD
#define EMBER_CALLBACK_OTA_STORAGE_INIT
#define EMBER_CALLBACK_OTA_STORAGE_GET_COUNT
#define EMBER_CALLBACK_OTA_STORAGE_SEARCH
#define EMBER_CALLBACK_OTA_STORAGE_ITERATOR_FIRST
#define EMBER_CALLBACK_OTA_STORAGE_ITERATOR_NEXT
#define EMBER_CALLBACK_OTA_STORAGE_CLEAR_TEMP_DATA
#define EMBER_CALLBACK_OTA_STORAGE_WRITE_TEMP_DATA
#define EMBER_CALLBACK_OTA_STORAGE_GET_FULL_HEADER
#define EMBER_CALLBACK_OTA_STORAGE_GET_TOTAL_IMAGE_SIZE
#define EMBER_CALLBACK_OTA_STORAGE_READ_IMAGE_DATA
#define EMBER_CALLBACK_OTA_STORAGE_CHECK_TEMP_DATA
#define EMBER_CALLBACK_OTA_STORAGE_FINISH_DOWNLOAD
#define EMBER_CALLBACK_OTA_STORAGE_DRIVER_INIT
#define EMBER_CALLBACK_OTA_STORAGE_DRIVER_READ
#define EMBER_CALLBACK_OTA_STORAGE_DRIVER_WRITE
#define EMBER_CALLBACK_OTA_STORAGE_DRIVER_DOWNLOAD_FINISH
#define EMBER_CALLBACK_OTA_STORAGE_DRIVER_INVALIDATE_IMAGE
#define EMBER_CALLBACK_OTA_STORAGE_DRIVER_RETRIEVE_LAST_STORED_OFFSET
#define EMBER_CALLBACK_OTA_STORAGE_DRIVER_PREPARE_TO_RESUME_DOWNLOAD
#define EMBER_CALLBACK_SCENES_CLUSTER_SCENES_CLUSTER_SERVER_INIT
#define EMBER_CALLBACK_SCENES_CLUSTER_ADD_SCENE
#define EMBER_CALLBACK_SCENES_CLUSTER_VIEW_SCENE
#define EMBER_CALLBACK_SCENES_CLUSTER_REMOVE_SCENE
#define EMBER_CALLBACK_SCENES_CLUSTER_REMOVE_ALL_SCENES
#define EMBER_CALLBACK_SCENES_CLUSTER_STORE_SCENE
#define EMBER_CALLBACK_SCENES_CLUSTER_RECALL_SCENE
#define EMBER_CALLBACK_SCENES_CLUSTER_GET_SCENE_MEMBERSHIP
#define EMBER_CALLBACK_SCENES_CLUSTER_STORE_CURRENT_SCENE
#define EMBER_CALLBACK_SCENES_CLUSTER_RECALL_SAVED_SCENE
#define EMBER_CALLBACK_SCENES_CLUSTER_CLEAR_SCENE_TABLE
#define EMBER_CALLBACK_SCENES_CLUSTER_SCENES_CLUSTER_MAKE_INVALID
#define EMBER_CALLBACK_SCENES_CLUSTER_REMOVE_SCENES_IN_GROUP
/**** Debug printing section ****/

// Global switch
#define EMBER_AF_PRINT_ENABLE
// Individual areas
#define EMBER_AF_PRINT_CORE 0x0001
#define EMBER_AF_PRINT_DEBUG 0x0002
#define EMBER_AF_PRINT_APP 0x0004
#define EMBER_AF_PRINT_ATTRIBUTES 0x0008
#define EMBER_AF_PRINT_ON_OFF_CLUSTER 0x0010
#define EMBER_AF_PRINT_LEVEL_CONTROL_CLUSTER 0x0020
#define EMBER_AF_PRINT_OTA_BOOTLOAD_CLUSTER 0x0040
#define EMBER_AF_PRINT_COLOR_CONTROL_CLUSTER 0x0080
#define EMBER_AF_PRINT_TUNNELING_CLUSTER 0x0101
#define EMBER_AF_PRINT_BITS { 0xFF, 0x01 }
#define EMBER_AF_PRINT_NAMES { \
  "Core",\
  "Debug",\
  "Application",\
  "Attributes",\
  "On/off",\
  "Level Control",\
  "Over the Air Bootloading",\
  "Color Control",\
  "Tunneling",\
  NULL\
}
#define EMBER_AF_PRINT_NAME_NUMBER 9


#define EMBER_AF_SUPPORT_COMMAND_DISCOVERY


// Generated plugin macros

// Use this macro to check if Address Table plugin is included
#define EMBER_AF_PLUGIN_ADDRESS_TABLE
// User options for plugin Address Table
#define EMBER_AF_PLUGIN_ADDRESS_TABLE_SIZE 2
#define EMBER_AF_PLUGIN_ADDRESS_TABLE_TRUST_CENTER_CACHE_SIZE 2

// Use this macro to check if Aurora Button Join Code plugin is included
#define EMBER_AF_PLUGIN_AURORA_BUTTON_JOINING
// User options for plugin Aurora Button Join Code
#define EMBER_AF_PLUGIN_AURORA_BUTTON_JOINING_PERMIT_JOIN_TIMEOUT 60
#define EMBER_AF_PLUGIN_AURORA_BUTTON_JOINING_EZ_MODE

// Use this macro to check if Aurora Colour Control plugin is included
#define EMBER_AF_PLUGIN_AURORA_COLOUR_CONTROL

// Use this macro to check if Aurora Host Protocol plugin is included
#define EMBER_AF_PLUGIN_AURORA_HOST_PROTOCOL

// Use this macro to check if Aurora Level Control server cluster plugin is included
#define EMBER_AF_PLUGIN_AURORA_LEVEL_CONTROL
// User options for plugin Aurora Level Control server cluster
#define EMBER_AF_PLUGIN_AURORA_LEVEL_CONTROL_MAXIMUM_LEVEL 255
#define EMBER_AF_PLUGIN_AURORA_LEVEL_CONTROL_MINIMUM_LEVEL 0
#define EMBER_AF_PLUGIN_AURORA_LEVEL_CONTROL_RATE 0

// Use this macro to check if Aurora On/Off server cluster plugin is included
#define EMBER_AF_PLUGIN_AURORA_ON_OFF

// Use this macro to check if Aurora OTA Bootload Cluster Client plugin is included
#define EMBER_AF_PLUGIN_AURORA_OTA_CLIENT
// User options for plugin Aurora OTA Bootload Cluster Client
#define EMBER_AF_PLUGIN_AURORA_OTA_CLIENT_AUTO_START
#define EMBER_AF_PLUGIN_AURORA_OTA_CLIENT_SET_IMAGE_STAMP
#define EMBER_AF_PLUGIN_AURORA_OTA_CLIENT_QUERY_DELAY_MINUTES 5
#define EMBER_AF_PLUGIN_AURORA_OTA_CLIENT_QUERY_ERROR_THRESHOLD 10
#define EMBER_AF_PLUGIN_AURORA_OTA_CLIENT_DOWNLOAD_DELAY_MS 0
#define EMBER_AF_PLUGIN_AURORA_OTA_CLIENT_DOWNLOAD_ERROR_THRESHOLD 10
#define EMBER_AF_PLUGIN_AURORA_OTA_CLIENT_UPGRADE_WAIT_THRESHOLD 10
#define EMBER_AF_PLUGIN_AURORA_OTA_CLIENT_SERVER_DISCOVERY_DELAY_MINUTES 10
#define EMBER_AF_PLUGIN_AURORA_OTA_CLIENT_RUN_UPGRADE_REQUEST_DELAY_MINUTES 10
#define EMBER_AF_PLUGIN_AURORA_OTA_CLIENT_PAGE_REQUEST_SIZE 1024
#define EMBER_AF_PLUGIN_AURORA_OTA_CLIENT_PAGE_REQUEST_TIMEOUT_SECONDS 5
#define EMBER_AF_PLUGIN_AURORA_OTA_CLIENT_VERIFY_DELAY_MS 10
#define EMBER_AF_PLUGIN_AURORA_OTA_CLIENT_SIGNER_EUI0 { 0x00, 0x0D, 0x6F, 0x00, 0x00, 0x19, 0x8B, 0x36 }
#define EMBER_AF_PLUGIN_AURORA_OTA_CLIENT_SIGNER_EUI1 { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }
#define EMBER_AF_PLUGIN_AURORA_OTA_CLIENT_SIGNER_EUI2 { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }

// Use this macro to check if Aurora OTA Bootload Cluster Client Policy plugin is included
#define EMBER_AF_PLUGIN_AURORA_OTA_CLIENT_POLICY
#define CUSTOMER_APPLICATION_VERSION EMBER_AF_PLUGIN_AURORA_OTA_CLIENT_POLICY_FIRMWARE_VERSION1
#define OTA_TAG_AURORA_STM32_IMAGE 0xF000
// User options for plugin Aurora OTA Bootload Cluster Client Policy
#define EMBER_AF_PLUGIN_AURORA_OTA_CLIENT_POLICY_MAX_OTA_IMAGE_TYPES 2
#define EMBER_AF_PLUGIN_AURORA_OTA_CLIENT_POLICY_IMAGE_TYPE_ID1 0
#define EMBER_AF_PLUGIN_AURORA_OTA_CLIENT_POLICY_FIRMWARE_VERSION1 2
#define EMBER_AF_PLUGIN_AURORA_OTA_CLIENT_POLICY_HARDWARE_VERSION1 0
#define EMBER_AF_PLUGIN_AURORA_OTA_CLIENT_POLICY_IMAGE_TYPE_ID2 22136
#define EMBER_AF_PLUGIN_AURORA_OTA_CLIENT_POLICY_FIRMWARE_VERSION2 20
#define EMBER_AF_PLUGIN_AURORA_OTA_CLIENT_POLICY_HARDWARE_VERSION2 0
#define EMBER_AF_PLUGIN_AURORA_OTA_CLIENT_POLICY_EBL_VERIFICATION
#define EMBER_AF_PLUGIN_AURORA_OTA_CLIENT_POLICY_INCLUDE_HARDWARE_VERSION
#define EMBER_AF_PLUGIN_AURORA_OTA_CLIENT_POLICY_DELETE_FAILED_DOWNLOADS

// Use this macro to check if Aurora PWM plugin is included
#define EMBER_AF_PLUGIN_AURORA_PWM

// Use this macro to check if Aurora Tunneling server cluster plugin is included
#define EMBER_AF_PLUGIN_AURORA_TUNNELING_SERVER
// User options for plugin Aurora Tunneling server cluster
#define EMBER_AF_PLUGIN_AURORA_TUNNELING_SERVER_TUNNEL_LIMIT 8
#define EMBER_AF_PLUGIN_AURORA_TUNNELING_SERVER_CLOSE_TUNNEL_TIMEOUT 65535
#define EMBER_AF_PLUGIN_AURORA_TUNNELING_SERVER_MAXIMUM_INCOMING_TRANSFER_SIZE 128

// Use this macro to check if Concentrator Support plugin is included
#define EMBER_AF_PLUGIN_CONCENTRATOR
#define EMBER_APPLICATION_HAS_SOURCE_ROUTING
#define EZSP_APPLICATION_HAS_ROUTE_RECORD_HANDLER
// User options for plugin Concentrator Support
#define EMBER_AF_PLUGIN_CONCENTRATOR_CONCENTRATOR_TYPE LOW_RAM_CONCENTRATOR
#define EMBER_SOURCE_ROUTE_TABLE_SIZE 7
#define EZSP_HOST_SOURCE_ROUTE_TABLE_SIZE 32
#define EMBER_AF_PLUGIN_CONCENTRATOR_MIN_TIME_BETWEEN_BROADCASTS_SECONDS 10
#define EMBER_AF_PLUGIN_CONCENTRATOR_MAX_TIME_BETWEEN_BROADCASTS_SECONDS 60
#define EMBER_AF_PLUGIN_CONCENTRATOR_ROUTE_ERROR_THRESHOLD 3
#define EMBER_AF_PLUGIN_CONCENTRATOR_DELIVERY_FAILURE_THRESHOLD 1
#define EMBER_AF_PLUGIN_CONCENTRATOR_MAX_HOPS 0

// Use this macro to check if Counters plugin is included
#define EMBER_AF_PLUGIN_COUNTERS
// User options for plugin Counters

// Use this macro to check if EEPROM plugin is included
#define EMBER_AF_PLUGIN_EEPROM
// User options for plugin EEPROM
#define EMBER_AF_PLUGIN_EEPROM_PARTIAL_WORD_STORAGE_COUNT 2

// Use this macro to check if EZ-Mode Commissioning plugin is included
#define EMBER_AF_PLUGIN_EZMODE_COMMISSIONING
// User options for plugin EZ-Mode Commissioning
#define EMBER_AF_PLUGIN_EZMODE_COMMISSIONING_IDENTIFY_TIMEOUT 180

// Use this macro to check if Groups server cluster plugin is included
#define EMBER_AF_PLUGIN_GROUPS_SERVER

// Use this macro to check if Identify cluster plugin is included
#define EMBER_AF_PLUGIN_IDENTIFY

// Use this macro to check if Idle/Sleep plugin is included
#define EMBER_AF_PLUGIN_IDLE_SLEEP
// User options for plugin Idle/Sleep

// Use this macro to check if Network Find plugin is included
#define EMBER_AF_PLUGIN_NETWORK_FIND
#define EMBER_AF_DISABLE_FORM_AND_JOIN_TICK
// User options for plugin Network Find
#define EMBER_AF_PLUGIN_NETWORK_FIND_CHANNEL_MASK 0x07FFF800UL
#define EMBER_AF_PLUGIN_NETWORK_FIND_RADIO_TX_POWER 8
#define EMBER_AF_PLUGIN_NETWORK_FIND_EXTENDED_PAN_ID { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }
#define EMBER_AF_PLUGIN_NETWORK_FIND_DURATION 5
#define EMBER_AF_PLUGIN_NETWORK_FIND_JOINABLE_SCAN_TIMEOUT_MINUTES 1

// Use this macro to check if OTA Cluster Platform Bootloader plugin is included
#define EMBER_AF_PLUGIN_OTA_BOOTLOAD

// Use this macro to check if OTA Bootload Cluster Common Code plugin is included
#define EMBER_AF_PLUGIN_OTA_COMMON

// Use this macro to check if OTA Bootload Cluster Storage Common Code plugin is included
#define EMBER_AF_PLUGIN_OTA_STORAGE_COMMON

// Use this macro to check if OTA Simple Storage Module plugin is included
#define EMBER_AF_PLUGIN_OTA_STORAGE_SIMPLE

// Use this macro to check if OTA Simple Storage EEPROM Driver plugin is included
#define EMBER_AF_PLUGIN_OTA_STORAGE_SIMPLE_EEPROM
// User options for plugin OTA Simple Storage EEPROM Driver
#define EMBER_AF_PLUGIN_OTA_STORAGE_SIMPLE_EEPROM_SOC_BOOTLOADING_SUPPORT
#define EMBER_AF_PLUGIN_OTA_STORAGE_SIMPLE_EEPROM_STORAGE_START 0
#define EMBER_AF_PLUGIN_OTA_STORAGE_SIMPLE_EEPROM_STORAGE_END 524288
#define EMBER_AF_PLUGIN_OTA_STORAGE_SIMPLE_EEPROM_DOWNLOAD_OFFSET_SAVE_RATE 1024

// Use this macro to check if Scenes server cluster plugin is included
#define EMBER_AF_PLUGIN_SCENES
// User options for plugin Scenes server cluster
#define EMBER_AF_PLUGIN_SCENES_TABLE_SIZE 3
#define EMBER_AF_PLUGIN_SCENES_USE_TOKENS


// Generated API headers


// Custom macros
#ifdef HOST_SERIAL_PORT
#undef HOST_SERIAL_PORT
#endif
#define HOST_SERIAL_PORT 1

#ifdef HOST_BAUD_RATE
#undef HOST_BAUD_RATE
#endif
#define HOST_BAUD_RATE BAUD_115200

#ifdef APP_SERIAL
#undef APP_SERIAL
#endif
#define APP_SERIAL 0

#ifdef EMBER_ASSERT_SERIAL_PORT
#undef EMBER_ASSERT_SERIAL_PORT
#endif
#define EMBER_ASSERT_SERIAL_PORT 0

#ifdef EMBER_AF_BAUD_RATE
#undef EMBER_AF_BAUD_RATE
#endif
#define EMBER_AF_BAUD_RATE 19200

#ifdef EMBER_SERIAL0_MODE
#undef EMBER_SERIAL0_MODE
#endif
#define EMBER_SERIAL0_MODE EMBER_SERIAL_FIFO

#ifdef EMBER_SERIAL0_RX_QUEUE_SIZE
#undef EMBER_SERIAL0_RX_QUEUE_SIZE
#endif
#define EMBER_SERIAL0_RX_QUEUE_SIZE 128

#ifdef EMBER_SERIAL0_TX_QUEUE_SIZE
#undef EMBER_SERIAL0_TX_QUEUE_SIZE
#endif
#define EMBER_SERIAL0_TX_QUEUE_SIZE 128

#ifdef EMBER_SERIAL0_BLOCKING
#undef EMBER_SERIAL0_BLOCKING
#endif
#define EMBER_SERIAL0_BLOCKING

#ifdef EMBER_SERIAL1_MODE
#undef EMBER_SERIAL1_MODE
#endif
#define EMBER_SERIAL1_MODE EMBER_SERIAL_FIFO

#ifdef EMBER_SERIAL1_RX_QUEUE_SIZE
#undef EMBER_SERIAL1_RX_QUEUE_SIZE
#endif
#define EMBER_SERIAL1_RX_QUEUE_SIZE 128

#ifdef EMBER_SERIAL1_TX_QUEUE_SIZE
#undef EMBER_SERIAL1_TX_QUEUE_SIZE
#endif
#define EMBER_SERIAL1_TX_QUEUE_SIZE 128

#ifdef EMBER_SERIAL1_BLOCKING
#undef EMBER_SERIAL1_BLOCKING
#endif
#define EMBER_SERIAL1_BLOCKING



#endif // __APP_AURORA_DIMMER_H__