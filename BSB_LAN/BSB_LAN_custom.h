
/*
 * This script sends the current time and date to the heater when having been notified of a ntp time sync event.
 * For this to make sense, you must have the USE_NTP definement enabled in BSB_LAN_config.h.
 * Works only on ESP32-based microcontrollers, not (yet) Arduino Due!
*/
#if defined(ESP32)
  if (custom_ntp_synced) {
    custom_ntp_synced = false;
    char date_string[20];
    struct tm now;
    getLocalTime(&now,0);
    sprintf_P(date_string,"%02d.%02d.%d_%02d:%02d:%02d", now.tm_mday, now.tm_mon + 1, now.tm_year + 1900, now.tm_hour,now.tm_min,now.tm_sec);
    set(0,date_string,1);
  }
#endif
