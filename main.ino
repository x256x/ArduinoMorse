  /*==========================*/
 /*<Copyright (c) 2022 x256x>*/
/*==========================*/
#include "libmorse.h"

String str;

void setup(){
  morse_init(13,1000,100);
  Serial.begin(9600);
}

void loop(){
  if (Serial.available() > 0){
    str=Serial.readString();
    morse_string(str);
  }
}
