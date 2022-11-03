# ArduinoMorse
<img src="/img/logo.jpg" alt="logo" width="375px">

## Overview
This code outputs morse code.

## Function
- `void morse_init(pin,frequency,delay);`
	- set morse
- `void morse_string(string);`
	- convert string to morse code
- `void m(char*);`
	- convert char\* to morse code

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

## Licence
[MIT licence](LICENSE)