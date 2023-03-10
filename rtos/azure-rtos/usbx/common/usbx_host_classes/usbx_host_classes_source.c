#include "src/ux_host_class_asix_activate.c"
#include "src/ux_host_class_asix_configure.c"
#include "src/ux_host_class_asix_deactivate.c"
#include "src/ux_host_class_asix_endpoints_get.c"
#include "src/ux_host_class_asix_entry.c"
#include "src/ux_host_class_asix_interrupt_notification.c"
#include "src/ux_host_class_asix_read.c"
#include "src/ux_host_class_asix_reception_callback.c"
#include "src/ux_host_class_asix_setup.c"
#include "src/ux_host_class_asix_thread.c"
#include "src/ux_host_class_asix_transmission_callback.c"
#include "src/ux_host_class_asix_write.c"
#include "src/ux_host_class_audio_activate.c"
#include "src/ux_host_class_audio_alternate_setting_locate.c"
#include "src/ux_host_class_audio_configure.c"
#include "src/ux_host_class_audio_control_get.c"
#include "src/ux_host_class_audio_control_value_get.c"
#include "src/ux_host_class_audio_control_value_set.c"
#include "src/ux_host_class_audio_deactivate.c"
#include "src/ux_host_class_audio_descriptor_get.c"
#include "src/ux_host_class_audio_device_controls_list_get.c"
#include "src/ux_host_class_audio_device_type_get.c"
#include "src/ux_host_class_audio_endpoints_get.c"
#include "src/ux_host_class_audio_entry.c"
#include "src/ux_host_class_audio_read.c"
#include "src/ux_host_class_audio_streaming_sampling_get.c"
#include "src/ux_host_class_audio_streaming_sampling_set.c"
#include "src/ux_host_class_audio_streaming_terminal_get.c"
#include "src/ux_host_class_audio_transfer_request.c"
#include "src/ux_host_class_audio_transfer_request_completed.c"
#include "src/ux_host_class_audio_write.c"
#include "src/ux_host_class_cdc_acm_activate.c"
#include "src/ux_host_class_cdc_acm_capabilities_get.c"
#include "src/ux_host_class_cdc_acm_command.c"
#include "src/ux_host_class_cdc_acm_configure.c"
#include "src/ux_host_class_cdc_acm_deactivate.c"
#include "src/ux_host_class_cdc_acm_endpoints_get.c"
#include "src/ux_host_class_cdc_acm_entry.c"
#include "src/ux_host_class_cdc_acm_ioctl.c"
#include "src/ux_host_class_cdc_acm_read.c"
#include "src/ux_host_class_cdc_acm_reception_callback.c"
#include "src/ux_host_class_cdc_acm_reception_start.c"
#include "src/ux_host_class_cdc_acm_reception_stop.c"
#include "src/ux_host_class_cdc_acm_transfer_request_completed.c"
#include "src/ux_host_class_cdc_acm_transmission_callback.c"
#include "src/ux_host_class_cdc_acm_write.c"
#include "src/ux_host_class_cdc_acm_write_with_callback.c"
#include "src/ux_host_class_cdc_ecm_activate.c"
#include "src/ux_host_class_cdc_ecm_deactivate.c"
#include "src/ux_host_class_cdc_ecm_endpoints_get.c"
#include "src/ux_host_class_cdc_ecm_entry.c"
#include "src/ux_host_class_cdc_ecm_interrupt_notification.c"
#include "src/ux_host_class_cdc_ecm_mac_address_get.c"
#include "src/ux_host_class_cdc_ecm_thread.c"
#include "src/ux_host_class_cdc_ecm_transmission_callback.c"
#include "src/ux_host_class_cdc_ecm_transmit_queue_clean.c"
#include "src/ux_host_class_cdc_ecm_write.c"
#include "src/ux_host_class_gser_activate.c"
#include "src/ux_host_class_gser_command.c"
#include "src/ux_host_class_gser_configure.c"
#include "src/ux_host_class_gser_deactivate.c"
#include "src/ux_host_class_gser_endpoints_get.c"
#include "src/ux_host_class_gser_entry.c"
#include "src/ux_host_class_gser_ioctl.c"
#include "src/ux_host_class_gser_read.c"
#include "src/ux_host_class_gser_reception_callback.c"
#include "src/ux_host_class_gser_reception_start.c"
#include "src/ux_host_class_gser_reception_stop.c"
#include "src/ux_host_class_gser_write.c"
#include "src/ux_host_class_hid_activate.c"
#include "src/ux_host_class_hid_client_register.c"
#include "src/ux_host_class_hid_client_search.c"
#include "src/ux_host_class_hid_configure.c"
#include "src/ux_host_class_hid_deactivate.c"
#include "src/ux_host_class_hid_descriptor_parse.c"
#include "src/ux_host_class_hid_entry.c"
#include "src/ux_host_class_hid_field_decompress.c"
#include "src/ux_host_class_hid_global_item_parse.c"
#include "src/ux_host_class_hid_idle_get.c"
#include "src/ux_host_class_hid_idle_set.c"
#include "src/ux_host_class_hid_idle_set_run.c"
#include "src/ux_host_class_hid_instance_clean.c"
#include "src/ux_host_class_hid_interrupt_endpoint_search.c"
#include "src/ux_host_class_hid_item_data_get.c"
#include "src/ux_host_class_hid_keyboard_activate.c"
#include "src/ux_host_class_hid_keyboard_callback.c"
#include "src/ux_host_class_hid_keyboard_deactivate.c"
#include "src/ux_host_class_hid_keyboard_entry.c"
#include "src/ux_host_class_hid_keyboard_ioctl.c"
#include "src/ux_host_class_hid_keyboard_key_get.c"
#include "src/ux_host_class_hid_keyboard_tasks_run.c"
#include "src/ux_host_class_hid_keyboard_thread.c"
#include "src/ux_host_class_hid_local_item_parse.c"
#include "src/ux_host_class_hid_main_item_parse.c"
#include "src/ux_host_class_hid_mouse_activate.c"
#include "src/ux_host_class_hid_mouse_buttons_get.c"
#include "src/ux_host_class_hid_mouse_callback.c"
#include "src/ux_host_class_hid_mouse_deactivate.c"
#include "src/ux_host_class_hid_mouse_entry.c"
#include "src/ux_host_class_hid_mouse_position_get.c"
#include "src/ux_host_class_hid_mouse_wheel_get.c"
#include "src/ux_host_class_hid_periodic_report_start.c"
#include "src/ux_host_class_hid_periodic_report_stop.c"
#include "src/ux_host_class_hid_remote_control_activate.c"
#include "src/ux_host_class_hid_remote_control_callback.c"
#include "src/ux_host_class_hid_remote_control_deactivate.c"
#include "src/ux_host_class_hid_remote_control_entry.c"
#include "src/ux_host_class_hid_remote_control_usage_get.c"
#include "src/ux_host_class_hid_report_add.c"
#include "src/ux_host_class_hid_report_callback_register.c"
#include "src/ux_host_class_hid_report_compress.c"
#include "src/ux_host_class_hid_report_decompress.c"
#include "src/ux_host_class_hid_report_descriptor_get.c"
#include "src/ux_host_class_hid_report_get.c"
#include "src/ux_host_class_hid_report_id_get.c"
#include "src/ux_host_class_hid_report_item_analyse.c"
#include "src/ux_host_class_hid_report_set.c"
#include "src/ux_host_class_hid_report_set_run.c"
#include "src/ux_host_class_hid_resources_free.c"
#include "src/ux_host_class_hid_tasks_run.c"
#include "src/ux_host_class_hid_transfer_request_completed.c"
#include "src/ux_host_class_hub_activate.c"
#include "src/ux_host_class_hub_change_detect.c"
#include "src/ux_host_class_hub_change_process.c"
#include "src/ux_host_class_hub_configure.c"
#include "src/ux_host_class_hub_deactivate.c"
#include "src/ux_host_class_hub_descriptor_get.c"
#include "src/ux_host_class_hub_entry.c"
#include "src/ux_host_class_hub_feature.c"
#include "src/ux_host_class_hub_hub_change_process.c"
#include "src/ux_host_class_hub_interrupt_endpoint_start.c"
#include "src/ux_host_class_hub_port_change_connection_process.c"
#include "src/ux_host_class_hub_port_change_enable_process.c"
#include "src/ux_host_class_hub_port_change_over_current_process.c"
#include "src/ux_host_class_hub_port_change_process.c"
#include "src/ux_host_class_hub_port_change_reset_process.c"
#include "src/ux_host_class_hub_port_change_suspend_process.c"
#include "src/ux_host_class_hub_port_reset.c"
#include "src/ux_host_class_hub_ports_power.c"
#include "src/ux_host_class_hub_status_get.c"
#include "src/ux_host_class_hub_transfer_request_completed.c"
#include "src/ux_host_class_pima_activate.c"
#include "src/ux_host_class_pima_command.c"
#include "src/ux_host_class_pima_configure.c"
#include "src/ux_host_class_pima_deactivate.c"
#include "src/ux_host_class_pima_device_info_get.c"
#include "src/ux_host_class_pima_device_reset.c"
#include "src/ux_host_class_pima_endpoints_get.c"
#include "src/ux_host_class_pima_entry.c"
#include "src/ux_host_class_pima_notification.c"
#include "src/ux_host_class_pima_num_objects_get.c"
#include "src/ux_host_class_pima_object_close.c"
#include "src/ux_host_class_pima_object_copy.c"
#include "src/ux_host_class_pima_object_delete.c"
#include "src/ux_host_class_pima_object_get.c"
#include "src/ux_host_class_pima_object_handles_get.c"
#include "src/ux_host_class_pima_object_info_get.c"
#include "src/ux_host_class_pima_object_info_send.c"
#include "src/ux_host_class_pima_object_move.c"
#include "src/ux_host_class_pima_object_open.c"
#include "src/ux_host_class_pima_object_send.c"
#include "src/ux_host_class_pima_object_transfer_abort.c"
#include "src/ux_host_class_pima_read.c"
#include "src/ux_host_class_pima_request_cancel.c"
#include "src/ux_host_class_pima_session_close.c"
#include "src/ux_host_class_pima_session_open.c"
#include "src/ux_host_class_pima_storage_ids_get.c"
#include "src/ux_host_class_pima_storage_info_get.c"
#include "src/ux_host_class_pima_thumb_get.c"
#include "src/ux_host_class_pima_write.c"
#include "src/ux_host_class_printer_activate.c"
#include "src/ux_host_class_printer_configure.c"
#include "src/ux_host_class_printer_deactivate.c"
#include "src/ux_host_class_printer_device_id_get.c"
#include "src/ux_host_class_printer_endpoints_get.c"
#include "src/ux_host_class_printer_entry.c"
#include "src/ux_host_class_printer_name_get.c"
#include "src/ux_host_class_printer_read.c"
#include "src/ux_host_class_printer_soft_reset.c"
#include "src/ux_host_class_printer_status_get.c"
#include "src/ux_host_class_printer_write.c"
#include "src/ux_host_class_prolific_activate.c"
#include "src/ux_host_class_prolific_command.c"
#include "src/ux_host_class_prolific_configure.c"
#include "src/ux_host_class_prolific_deactivate.c"
#include "src/ux_host_class_prolific_endpoints_get.c"
#include "src/ux_host_class_prolific_entry.c"
#include "src/ux_host_class_prolific_ioctl.c"
#include "src/ux_host_class_prolific_read.c"
#include "src/ux_host_class_prolific_reception_callback.c"
#include "src/ux_host_class_prolific_reception_start.c"
#include "src/ux_host_class_prolific_reception_stop.c"
#include "src/ux_host_class_prolific_setup.c"
#include "src/ux_host_class_prolific_transfer_request_completed.c"
#include "src/ux_host_class_prolific_write.c"
#include "src/ux_host_class_storage_activate.c"
#include "src/ux_host_class_storage_cbw_initialize.c"
#include "src/ux_host_class_storage_check_run.c"
#include "src/ux_host_class_storage_configure.c"
#include "src/ux_host_class_storage_deactivate.c"
#include "src/ux_host_class_storage_device_initialize.c"
#include "src/ux_host_class_storage_device_reset.c"
#include "src/ux_host_class_storage_device_support_check.c"
#include "src/ux_host_class_storage_driver_entry.c"
#include "src/ux_host_class_storage_endpoints_get.c"
#include "src/ux_host_class_storage_entry.c"
#include "src/ux_host_class_storage_lock.c"
#include "src/ux_host_class_storage_max_lun_get.c"
#include "src/ux_host_class_storage_media_capacity_get.c"
#include "src/ux_host_class_storage_media_characteristics_get.c"
#include "src/ux_host_class_storage_media_check.c"
#include "src/ux_host_class_storage_media_format_capacity_get.c"
#include "src/ux_host_class_storage_media_get.c"
#include "src/ux_host_class_storage_media_lock.c"
#include "src/ux_host_class_storage_media_mount.c"
#include "src/ux_host_class_storage_media_open.c"
#include "src/ux_host_class_storage_media_protection_check.c"
#include "src/ux_host_class_storage_media_read.c"
#include "src/ux_host_class_storage_media_recovery_sense_get.c"
#include "src/ux_host_class_storage_media_write.c"
#include "src/ux_host_class_storage_partition_read.c"
#include "src/ux_host_class_storage_read_write_run.c"
#include "src/ux_host_class_storage_request_sense.c"
#include "src/ux_host_class_storage_sense_code_translate.c"
#include "src/ux_host_class_storage_start_stop.c"
#include "src/ux_host_class_storage_tasks_run.c"
#include "src/ux_host_class_storage_thread_entry.c"
#include "src/ux_host_class_storage_transport_bo.c"
#include "src/ux_host_class_storage_transport.c"
#include "src/ux_host_class_storage_transport_cb.c"
#include "src/ux_host_class_storage_transport_cbi.c"
#include "src/ux_host_class_storage_transport_run.c"
#include "src/ux_host_class_storage_unit_ready_test.c"
#include "src/ux_host_class_swar_activate.c"
#include "src/ux_host_class_swar_configure.c"
#include "src/ux_host_class_swar_deactivate.c"
#include "src/ux_host_class_swar_endpoints_get.c"
#include "src/ux_host_class_swar_entry.c"
#include "src/ux_host_class_swar_ioctl.c"
#include "src/ux_host_class_swar_read.c"
#include "src/ux_host_class_swar_reception_callback.c"
#include "src/ux_host_class_swar_reception_start.c"
#include "src/ux_host_class_swar_reception_stop.c"
#include "src/ux_host_class_swar_write.c"
#include "src/ux_host_class_video_activate.c"
#include "src/ux_host_class_video_alternate_setting_locate.c"
#include "src/ux_host_class_video_channel_start.c"
#include "src/ux_host_class_video_configure.c"
#include "src/ux_host_class_video_control_get.c"
#include "src/ux_host_class_video_control_list_get.c"
#include "src/ux_host_class_video_control_request.c"
#include "src/ux_host_class_video_control_value_get.c"
#include "src/ux_host_class_video_control_value_set.c"
#include "src/ux_host_class_video_deactivate.c"
#include "src/ux_host_class_video_descriptor_get.c"
#include "src/ux_host_class_video_endpoints_get.c"
#include "src/ux_host_class_video_entities_parse.c"
#include "src/ux_host_class_video_entry.c"
#include "src/ux_host_class_video_format_data_get.c"
#include "src/ux_host_class_video_frame_data_get.c"
#include "src/ux_host_class_video_frame_interval_get.c"
#include "src/ux_host_class_video_frame_parameters_set.c"
#include "src/ux_host_class_video_input_format_get.c"
#include "src/ux_host_class_video_input_terminal_get.c"
#include "src/ux_host_class_video_ioctl.c"
#include "src/ux_host_class_video_max_payload_get.c"
#include "src/ux_host_class_video_read.c"
#include "src/ux_host_class_video_start.c"
#include "src/ux_host_class_video_stop.c"
#include "src/ux_host_class_video_transfer_buffer_add.c"
#include "src/ux_host_class_video_transfer_buffers_add.c"
#include "src/ux_host_class_video_transfer_callback_set.c"
#include "src/ux_host_class_video_transfer_request.c"
#include "src/ux_host_class_video_transfer_request_callback.c"
#include "src/ux_host_class_video_transfer_request_completed.c"

/* v6.2.0 */
#include "src/ux_host_class_audio_control_request.c"
#include "src/ux_host_class_audio_descriptors_parse.c"
#include "src/ux_host_class_audio_entity_control_get.c"
#include "src/ux_host_class_audio_entity_control_value_get.c"
#include "src/ux_host_class_audio_entity_control_value_set.c"
#include "src/ux_host_class_audio_feedback_get.c"
#include "src/ux_host_class_audio_feedback_set.c"
#include "src/ux_host_class_audio_feedback_transfer_completed.c"
#include "src/ux_host_class_audio_interrupt_notification.c"
#include "src/ux_host_class_audio_interrupt_start.c"
#include "src/ux_host_class_audio_raw_sampling_parse.c"
#include "src/ux_host_class_audio_stop.c"
#include "src/ux_host_class_hub_tasks_run.c"
