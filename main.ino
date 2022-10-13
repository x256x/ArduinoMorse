  /*==========================*/
 /*<Copyright (c) 2022 x256x>*/
/*==========================*/
void setup(){
  m_init(13,0,50);
  Serial.begin(9600);
}

void loop(){
  if (Serial.available() > 0){
    String str1=Serial.readString();
    m_str(str1);
  }
}
