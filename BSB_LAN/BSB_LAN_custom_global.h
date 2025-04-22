// Add custom code for global functions here which will be included in the global section

#ifdef ESP32

#include "esp_sntp.h"

bool custom_ntp_synced = false;

// callback function to show when NTP was synchronized
void time_synced_cb(struct timeval *tv)  {
  custom_ntp_synced = true;
}

#endif // ESP32
