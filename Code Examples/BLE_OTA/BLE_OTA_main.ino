#include "BLE.h"
#include "soc/timer_group_struct.h"
#include "soc/timer_group_reg.h"
/**Bluetooth**/
BLE BT;

void setup(void) {
  Serial.begin(115200);
  Serial.println("Serial Begin");
  Serial.println();
  
  Serial.print("HW v");
  Serial.print(HARDWARE_VERSION_MAJOR);
  Serial.print(".");
  Serial.println(HARDWARE_VERSION_MINOR);
  
  Serial.print("SW v");
  Serial.print(SOFTWARE_VERSION_MAJOR);
  Serial.print(".");
  Serial.print(SOFTWARE_VERSION_MINOR);
  Serial.print(".");
  Serial.println(SOFTWARE_VERSION_PATCH);
  
  BT.begin("ESP32 OTA Updates");
}

void loop(void) {
  TIMERG0.wdt_wprotect=TIMG_WDT_WKEY_VALUE;
  TIMERG0.wdt_feed=1;
  TIMERG0.wdt_wprotect=0;
}
