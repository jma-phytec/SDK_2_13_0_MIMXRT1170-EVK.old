# CROSS COMPILER SETTING
SET(CMAKE_SYSTEM_NAME Generic)
CMAKE_MINIMUM_REQUIRED (VERSION 3.10.0)

# THE VERSION NUMBER
SET (Tutorial_VERSION_MAJOR 1)
SET (Tutorial_VERSION_MINOR 0)

# ENABLE ASM
ENABLE_LANGUAGE(ASM)

SET(CMAKE_STATIC_LIBRARY_PREFIX)
SET(CMAKE_STATIC_LIBRARY_SUFFIX)

SET(CMAKE_EXECUTABLE_LIBRARY_PREFIX)
SET(CMAKE_EXECUTABLE_LIBRARY_SUFFIX)

# CURRENT DIRECTORY
SET(ProjDirPath ${CMAKE_CURRENT_SOURCE_DIR})

SET(EXECUTABLE_OUTPUT_PATH ${ProjDirPath}/${CMAKE_BUILD_TYPE})
SET(LIBRARY_OUTPUT_PATH ${ProjDirPath}/${CMAKE_BUILD_TYPE})


project(netx_duo_iperf)

set(MCUX_BUILD_TYPES sdram_release flexspi_nor_release sdram_debug flexspi_nor_debug)

set(MCUX_SDK_PROJECT_NAME netx_duo_iperf.elf)

if (NOT DEFINED SdkRootDirPath)
    SET(SdkRootDirPath ${ProjDirPath}/../../../../../..)
endif()

SET(CMAKE_STATIC_LIBRARY_PREFIX "lib")

SET(CMAKE_STATIC_LIBRARY_SUFFIX ".a")

SET(CMAKE_TRY_COMPILE_TARGET_TYPE STATIC_LIBRARY)

SET(THREADX_ARCH "cortex_m7")

SET(THREADX_TOOLCHAIN "gnu")

SET(NX_USER_FILE ${ProjDirPath}/../nx_user.h)

SET(FX_USER_FILE ${ProjDirPath}/../fx_user.h)

SET(TX_USER_FILE ${ProjDirPath}/../tx_user.h)

include(${ProjDirPath}/flags.cmake)

include(${ProjDirPath}/config.cmake)

add_executable(${MCUX_SDK_PROJECT_NAME} 
"${ProjDirPath}/../pin_mux.c"
"${ProjDirPath}/../pin_mux.h"
"${ProjDirPath}/../netx_duo_iperf.c"
"${ProjDirPath}/../nx_iperf.c"
"${ProjDirPath}/../nx_iperf.h"
"${ProjDirPath}/../tx_user.h"
"${ProjDirPath}/../fx_user.h"
"${ProjDirPath}/../nx_driver_imxrt_irq.c"
"${ProjDirPath}/../nx_driver_imxrt.c"
"${ProjDirPath}/../nx_driver_imxrt.h"
"${ProjDirPath}/../nx_user.h"
"${ProjDirPath}/../board.c"
"${ProjDirPath}/../board.h"
"${ProjDirPath}/../clock_config.c"
"${ProjDirPath}/../clock_config.h"
"${ProjDirPath}/../dcd.c"
"${ProjDirPath}/../dcd.h"
)

target_include_directories(${MCUX_SDK_PROJECT_NAME} PUBLIC
    ${ProjDirPath}/..
)

set(CMAKE_MODULE_PATH
    ${SdkRootDirPath}/rtos/azure-rtos
    ${SdkRootDirPath}/devices/MIMXRT1176/drivers
    ${SdkRootDirPath}/components/phy/device/phyksz8081
    ${SdkRootDirPath}/components/phy/device/phyrtl8211f
    ${SdkRootDirPath}/components/lists
    ${SdkRootDirPath}/components/uart
    ${SdkRootDirPath}/components/serial_manager
    ${SdkRootDirPath}/devices/MIMXRT1176
    ${SdkRootDirPath}/devices/MIMXRT1176/drivers/cm7
    ${SdkRootDirPath}/boards/evkmimxrt1170/xip
    ${SdkRootDirPath}/devices/MIMXRT1176/xip
    ${SdkRootDirPath}/devices/MIMXRT1176/utilities
    ${SdkRootDirPath}/CMSIS/Core/Include
    ${SdkRootDirPath}/components/phy
)

# include modules
include(middleware_azure_rtos_nxd_MIMXRT1176_cm7)

include(driver_enet_MIMXRT1176_cm7)

include(driver_phy-device-ksz8081_MIMXRT1176_cm7)

include(driver_phy-device-rtl8211f_MIMXRT1176_cm7)

include(component_lists_MIMXRT1176_cm7)

include(component_lpuart_adapter_MIMXRT1176_cm7)

include(component_serial_manager_MIMXRT1176_cm7)

include(driver_common_MIMXRT1176_cm7)

include(component_serial_manager_uart_MIMXRT1176_cm7)

include(driver_lpuart_MIMXRT1176_cm7)

include(device_MIMXRT1176_CMSIS_MIMXRT1176_cm7)

include(device_MIMXRT1176_startup_MIMXRT1176_cm7)

include(driver_cache_armv7_m7_MIMXRT1176_cm7)

include(driver_clock_MIMXRT1176_cm7)

include(driver_dcdc_soc_MIMXRT1176_cm7)

include(driver_igpio_MIMXRT1176_cm7)

include(driver_iomuxc_MIMXRT1176_cm7)

include(driver_lpi2c_MIMXRT1176_cm7)

include(driver_pmu_1_MIMXRT1176_cm7)

include(driver_xip_board_evkmimxrt1170_MIMXRT1176_cm7)

include(driver_xip_device_MIMXRT1176_cm7)

include(utility_assert_MIMXRT1176_cm7)

include(utility_debug_console_MIMXRT1176_cm7)

include(middleware_azure_rtos_nxd_template_MIMXRT1176_cm7)

include(middleware_azure_rtos_fx_MIMXRT1176_cm7)

include(middleware_azure_rtos_fx_template_MIMXRT1176_cm7)

include(middleware_azure_rtos_tx_MIMXRT1176_cm7)

include(middleware_azure_rtos_tx_template_MIMXRT1176_cm7)

include(driver_memory_MIMXRT1176_cm7)

include(driver_anatop_ai_MIMXRT1176_cm7)

include(CMSIS_Include_core_cm_MIMXRT1176_cm7)

include(driver_phy-common_MIMXRT1176_cm7)

include(utilities_misc_utilities_MIMXRT1176_cm7)

include(device_MIMXRT1176_system_MIMXRT1176_cm7)


add_subdirectory(${SdkRootDirPath}/rtos/azure-rtos/threadx ./CMakeFiles/libthreadx)

add_subdirectory(${SdkRootDirPath}/rtos/azure-rtos/filex ./CMakeFiles/libfilex)

add_subdirectory(${SdkRootDirPath}/rtos/azure-rtos/netxduo ./CMakeFiles/libnetxduo)

IF(NOT DEFINED TARGET_LINK_SYSTEM_LIBRARIES)  
    SET(TARGET_LINK_SYSTEM_LIBRARIES "-lm -lc -lgcc -lnosys")  
ENDIF()  

TARGET_LINK_LIBRARIES(${MCUX_SDK_PROJECT_NAME} PRIVATE -Wl,--start-group)

target_link_libraries(${MCUX_SDK_PROJECT_NAME} PRIVATE "azrtos::netxduo")
target_link_libraries(${MCUX_SDK_PROJECT_NAME} PRIVATE "azrtos::filex")
target_link_libraries(${MCUX_SDK_PROJECT_NAME} PRIVATE "azrtos::threadx")

target_link_libraries(${MCUX_SDK_PROJECT_NAME} PRIVATE ${TARGET_LINK_SYSTEM_LIBRARIES})

TARGET_LINK_LIBRARIES(${MCUX_SDK_PROJECT_NAME} PRIVATE -Wl,--end-group)


