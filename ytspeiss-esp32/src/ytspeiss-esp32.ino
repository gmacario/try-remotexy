/*
   -- ytspeiss-esp32 --
   
   This source code of graphical user interface 
   has been generated automatically by RemoteXY editor.
   To compile this code using RemoteXY library 3.1.8 or later version 
   download by link http://remotexy.com/en/library/
   To connect using RemoteXY mobile app by link http://remotexy.com/en/download/                   
     - for ANDROID 4.11.1 or later version;
     - for iOS 1.9.1 or later version;
    
   This source code is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.    
*/

//////////////////////////////////////////////
//        RemoteXY include library          //
//////////////////////////////////////////////

// RemoteXY select connection mode and include library 
#define REMOTEXY_MODE__ESP32CORE_BLE
#include <BLEDevice.h>

#include <RemoteXY.h>

// RemoteXY connection settings 
#define REMOTEXY_BLUETOOTH_NAME "RemoteXY"


// RemoteXY configurate  
#pragma pack(push, 1)
uint8_t RemoteXY_CONF[] =   // 72 bytes
  { 255,5,0,6,0,65,0,16,31,1,8,1,6,11,10,10,69,0,26,71,
  10,10,1,2,0,23,11,22,11,2,26,31,31,79,78,0,79,70,70,0,
  71,56,15,28,33,33,0,2,24,255,0,0,0,0,0,0,180,67,0,0,
  180,66,0,0,240,65,0,0,112,65,24,0 };
  
// this structure defines all the variables and events of your control interface 
struct {

    // input variables
  float compass_1; // from 0 to 359.999 
  uint8_t switch_1; // =1 if switch ON and =0 if OFF 

    // output variables
  int16_t sound_1; // =0 no sound, else ID of sound, =1001 for example, look sound list in app 
  float instrument_1;  // from 0 to 360 

    // other variable
  uint8_t connect_flag;  // =1 if wire connected, else =0 

} RemoteXY;
#pragma pack(pop)

/////////////////////////////////////////////
//           END RemoteXY include          //
/////////////////////////////////////////////

#define PIN_SWITCH_1 5


void setup() 
{
  RemoteXY_Init (); 
  
  pinMode (PIN_SWITCH_1, OUTPUT);
  
  // TODO you setup code
  
}

void loop() 
{ 
  RemoteXY_Handler ();

  RemoteXY.instrument_1 = RemoteXY.compass_1;
  
  digitalWrite(PIN_SWITCH_1, (RemoteXY.switch_1==0)?LOW:HIGH);
  
  // TODO you loop code
  // use the RemoteXY structure for data transfer
  // do not call delay() 


}