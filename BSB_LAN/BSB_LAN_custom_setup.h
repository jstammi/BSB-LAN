// Add custom code for setup function here which will be included at the end of the function

#ifdef ESP32

  sntp_set_time_sync_notification_cb(time_synced_cb);

#endif ESP32
