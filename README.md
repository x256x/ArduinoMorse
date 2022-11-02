# ArduinoMorse 

## Overview
This code outputs morse code.  
  
## Function

- void m_init(pin,frequency,delay);
	- initialize m
- void m_str(string);
	- convert string to morse code
- void m(char*);
	- convert char* to morse code

## Example

```c++
  /*==========================*/
 /*<Copyright (c) 2022 x256x>*/
/*==========================*/
#include "libmorse.h"

String str;

void setup(){
  morse_init(13,1000,50);
  Serial.begin(9600);
}

void loop(){
  if (Serial.available() > 0){
    str=Serial.readString();
    morse_string(str);
  }
}
```