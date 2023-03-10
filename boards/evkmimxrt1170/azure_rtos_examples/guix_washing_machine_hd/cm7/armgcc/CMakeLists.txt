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


project(guix_washing_machine_hd)

set(MCUX_BUILD_TYPES flexspi_nor_sdram_debug flexspi_nor_sdram_release)

set(MCUX_SDK_PROJECT_NAME guix_washing_machine_hd.elf)

if (NOT DEFINED SdkRootDirPath)
    SET(SdkRootDirPath ${ProjDirPath}/../../../../../..)
endif()

SET(CMAKE_STATIC_LIBRARY_PREFIX "lib")

SET(CMAKE_STATIC_LIBRARY_SUFFIX ".a")

SET(CMAKE_TRY_COMPILE_TARGET_TYPE STATIC_LIBRARY)

SET(THREADX_ARCH "cortex_m7")

SET(THREADX_TOOLCHAIN "gnu")

SET(GX_USER_FILE ${ProjDirPath}/../gx_user.h)

SET(TX_USER_FILE ${ProjDirPath}/../tx_user.h)

include(${ProjDirPath}/flags.cmake)

include(${ProjDirPath}/config.cmake)

add_executable(${MCUX_SDK_PROJECT_NAME} 
"${ProjDirPath}/../display_support.h"
"${ProjDirPath}/../display_support.c"
"${ProjDirPath}/../pin_mux.c"
"${ProjDirPath}/../pin_mux.h"
"${ProjDirPath}/../touch_support.c"
"${ProjDirPath}/../touch_support.h"
"${ProjDirPath}/../gx_display_driver_imxrt11xx_565rgb.c"
"${ProjDirPath}/../tx_user.h"
"${ProjDirPath}/../gx_user.h"
"${ProjDirPath}/../demo_guix_washing_machine.c"
"${ProjDirPath}/../demo_guix_washing_machine.h"
"${ProjDirPath}/../garments.c"
"${ProjDirPath}/../demo_guix_washing_machine_resources.c"
"${ProjDirPath}/../demo_guix_washing_machine_resources.h"
"${ProjDirPath}/../demo_guix_washing_machine_specifications.c"
"${ProjDirPath}/../demo_guix_washing_machine_specifications.h"
"${ProjDirPath}/../temperature.c"
"${ProjDirPath}/../washer_on.c"
"${ProjDirPath}/../water_level.c"
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
    ${SdkRootDirPath}/components/video
    ${SdkRootDirPath}/components/video/display
    ${SdkRootDirPath}/components/video/display/rm68200
    ${SdkRootDirPath}/components/video/display/hx8394
    ${SdkRootDirPath}/components/video/display/rm68191
    ${SdkRootDirPath}/devices/MIMXRT1176/drivers
    ${SdkRootDirPath}/components/video/display/mipi_dsi_cmd
    ${SdkRootDirPath}/components/video/display/dc/lcdifv2
    ${SdkRootDirPath}/components/video/display/dc/elcdif
    ${SdkRootDirPath}/components/gt911
    ${SdkRootDirPath}/components/lists
    ${SdkRootDirPath}/components/uart
    ${SdkRootDirPath}/components/serial_manager
    ${SdkRootDirPath}/devices/MIMXRT1176
    ${SdkRootDirPath}/devices/MIMXRT1176/drivers/cm7
    ${SdkRootDirPath}/boards/evkmimxrt1170/xip
    ${SdkRootDirPath}/devices/MIMXRT1176/xip
    ${SdkRootDirPath}/devices/MIMXRT1176/utilities
    ${SdkRootDirPath}/boards/evkmimxrt1170/xmcd
    ${SdkRootDirPath}/CMSIS/Core/Include
    ${SdkRootDirPath}/components/video/display/dc
)

# include modules
include(middleware_azure_rtos_gx_MIMXRT1176_cm7)

include(driver_video-common_MIMXRT1176_cm7)

include(driver_display-common_MIMXRT1176_cm7)

include(driver_display-rm68200_MIMXRT1176_cm7)

include(driver_display-hx8394_MIMXRT1176_cm7)

include(driver_display-rm68191_MIMXRT1176_cm7)

include(driver_mipi_dsi_split_MIMXRT1176_cm7)

include(driver_display-mipi-dsi-cmd_MIMXRT1176_cm7)

include(driver_common_MIMXRT1176_cm7)

include(driver_dc-fb-lcdifv2_MIMXRT1176_cm7)

include(driver_elcdif_MIMXRT1176_cm7)

include(driver_dc-fb-elcdif_MIMXRT1176_cm7)

include(driver_lpi2c_MIMXRT1176_cm7)

include(driver_gt911_MIMXRT1176_cm7)

include(driver_soc_src_MIMXRT1176_cm7)

include(driver_pxp_MIMXRT1176_cm7)

include(component_lists_MIMXRT1176_cm7)

include(component_lpuart_adapter_MIMXRT1176_cm7)

include(component_serial_manager_MIMXRT1176_cm7)

include(component_serial_manager_uart_MIMXRT1176_cm7)

include(driver_lpuart_MIMXRT1176_cm7)

include(device_MIMXRT1176_CMSIS_MIMXRT1176_cm7)

include(device_MIMXRT1176_startup_MIMXRT1176_cm7)

include(driver_cache_armv7_m7_MIMXRT1176_cm7)

include(driver_clock_MIMXRT1176_cm7)

include(driver_dcdc_soc_MIMXRT1176_cm7)

include(driver_igpio_MIMXRT1176_cm7)

include(driver_iomuxc_MIMXRT1176_cm7)

include(driver_pmu_1_MIMXRT1176_cm7)

include(driver_xip_board_evkmimxrt1170_MIMXRT1176_cm7)

include(driver_xip_device_MIMXRT1176_cm7)

include(utility_assert_MIMXRT1176_cm7)

include(utility_debug_console_MIMXRT1176_cm7)

include(middleware_azure_rtos_tx_MIMXRT1176_cm7)

include(middleware_azure_rtos_tx_template_MIMXRT1176_cm7)

include(driver_xmcd_evkmimxrt1170_MIMXRT1176_cm7)

include(driver_anatop_ai_MIMXRT1176_cm7)

include(CMSIS_Include_core_cm_MIMXRT1176_cm7)

include(driver_soc_mipi_csi2rx_MIMXRT1176_cm7)

include(driver_dc-fb-common_MIMXRT1176_cm7)

include(driver_lcdifv2_MIMXRT1176_cm7)

include(driver_memory_MIMXRT1176_cm7)

include(utilities_misc_utilities_MIMXRT1176_cm7)

include(device_MIMXRT1176_system_MIMXRT1176_cm7)


add_subdirectory(${SdkRootDirPath}/rtos/azure-rtos/threadx ./CMakeFiles/libthreadx)

add_subdirectory(${SdkRootDirPath}/rtos/azure-rtos/guix ./CMakeFiles/libguix)

IF(NOT DEFINED TARGET_LINK_SYSTEM_LIBRARIES)  
    SET(TARGET_LINK_SYSTEM_LIBRARIES "-lm -lc -lgcc -lnosys")  
ENDIF()  

TARGET_LINK_LIBRARIES(${MCUX_SDK_PROJECT_NAME} PRIVATE -Wl,--start-group)

target_link_libraries(${MCUX_SDK_PROJECT_NAME} PRIVATE "azrtos::guix")
target_link_libraries(${MCUX_SDK_PROJECT_NAME} PRIVATE "azrtos::threadx")

target_link_libraries(${MCUX_SDK_PROJECT_NAME} PRIVATE ${TARGET_LINK_SYSTEM_LIBRARIES})

TARGET_LINK_LIBRARIES(${MCUX_SDK_PROJECT_NAME} PRIVATE -Wl,--end-group)


