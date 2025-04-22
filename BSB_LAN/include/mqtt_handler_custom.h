
#ifndef MQTT_HANDLER_CUSTOM_H
#define MQTT_HANDLER_CUSTOM_H

void on_set(float line,      // the ProgNr of the heater parameter
            const char *val, // the value to set
            bool setcmd) {
  // any custom handling of parameter having been set bwo mqtt
}

#endif
