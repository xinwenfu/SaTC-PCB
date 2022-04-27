
This Example shows how  to use BLE to implement OTA for the SIC2_EDU board. This example is an adaptation of an existing guide to do OTA via BLE which can be found here below.

https://learn.sparkfun.com/tutorials/esp32-ota-updates-over-ble-from-a-react-web-application/all#introduction 

This is my board, not my code!! Code credit:  [ ENGLANDSAURUS ]

Tools needed:
  * SatC_EDU IoT Kit
  * A PC running Windows that has Arduino IDE installed (dont forget to add the espressif ESP32 board to the ide!) 
  * A PC running Linux (Ubunut, Arch, etc...), also have nodeJS and npm installed https://linuxize.com/post/how-to-install-node-js-on-ubuntu-20-04/
  * Micro-USB cable with data lines 

Setup:
  *add ESP32 capability to arduino ide : https://randomnerdtutorials.com/installing-the-esp32-board-in-arduino-ide-windows-instructions/
  *Install NPM and NODEJS to linux machine 
  
Step 1: (Arrange Files)
  Download or clone this repo and extract it to a known location. Do this on both the windows machine and the linux machine. 
  
Step 2: (Set up & Flash SatC_EDU)
  *Open arduino ide and open the Arduino sketch titled "BLE_OTA_main" 
  *Select the ESP32 Dev Module under "tools -> Board" in the ide
  *Under "Partitioon Schemes" select "Minimal SPIFFS(1.9MB APP with OTA/190KB SPIFFS", this will configure the partition sizes on the ESP32 to allocate space to store the update.
  
Step 3:
  *In the linux machine, open a command termnial (ctrl + alt + t) 
  *Navigate to where you unzipped the git clone and cd into WebApp
   if using the VM use " cd Desktop/ESP32_OTA_BLE_React_WebApp_Demo-master/WebApp " - NOTE:[ I extracted to the desktop but you can put the file anywhere... ]
  * Run the command "HPPT = true npm start". This will begin the WebApp
  
  
  


