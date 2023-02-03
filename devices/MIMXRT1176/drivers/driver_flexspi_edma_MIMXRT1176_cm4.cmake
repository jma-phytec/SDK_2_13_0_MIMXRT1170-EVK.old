include_guard()
message("driver_flexspi_edma component is included.")

target_sources(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/fsl_flexspi_edma.c
)


target_include_directories(${MCUX_SDK_PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/.
)


include(driver_edma_MIMXRT1176_cm4)

include(driver_flexspi_MIMXRT1176_cm4)

