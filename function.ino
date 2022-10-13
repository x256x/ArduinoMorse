  /*==========================*/
 /*<Copyright (c) 2022 x256x>*/
/*==========================*/
int dly[5];
int PIN;
int fre;

void m_init(int x,int y,int z){
  PIN=x;
  if(fre==0)
    pinMode(PIN,OUTPUT);
  fre=y;
  dly[1]=z;
  dly[2]=z*2;
  dly[3]=z*3;
  dly[4]=z*4;
}
void m_str(String x){
  int l = x.length();
  int ex=0;
  int ey=1;
  int jx=0;
  int jy=3;
  String s;
  for(int i=0; i<l; i++){
    s = x.substring(jx,jy);
    if(strcmp(s.c_str(),"あ")>=0&&strcmp(s.c_str(),"ゔ")<=0){
      s[1]+=0x1;s[2]+=0x20; // <--Hiragana to Katakana
      m(s.c_str());
      ex+=3;ey+=3;jx+=3;jy+=3;i+=2;
    }else if(strcmp(s.c_str(),"゙")>=0&&strcmp(s.c_str(),"ー")<=0){
      m(s.c_str());
      ex+=3;ey+=3;jx+=3;jy+=3;i+=2;
    }else{
      s = x.substring(ex,ey);
      m(s.c_str());
      ex++;ey++;jx++;jy++;
    }
  }
}
void t(int x){
  if(fre!=0){
    if(x==0){
      tone(PIN,fre,dly[1]);
      delay(dly[2]);
    }else if(x==1){
      tone(PIN,fre,dly[3]);
      delay(dly[4]);
    }
  }else if(fre==0){
    if(x==0){
      digitalWrite(PIN,HIGH);
      delay(dly[1]);
      digitalWrite(PIN,LOW);
      delay(dly[1]);
    }else if(x==1){
      digitalWrite(PIN,HIGH);
      delay(dly[3]);
      digitalWrite(PIN,LOW);
      delay(dly[1]);
    }
  }
}
void m(const char* x){
  //      |Strings                               |Morse                         |Delaytime     |Callfunction
        if(strcmp(x,"0")==0)                    { t(1);t(1);t(1);t(1);t(1);      delay(dly[2]);
  }else if(strcmp(x,"1")==0)                    { t(0);t(1);t(1);t(1);t(1);      delay(dly[2]);
  }else if(strcmp(x,"2")==0)                    { t(0);t(0);t(1);t(1);t(1);      delay(dly[2]);
  }else if(strcmp(x,"3")==0)                    { t(0);t(0);t(0);t(1);t(1);      delay(dly[2]);
  }else if(strcmp(x,"4")==0)                    { t(0);t(0);t(0);t(0);t(1);      delay(dly[2]);
  }else if(strcmp(x,"5")==0)                    { t(0);t(0);t(0);t(0);t(0);      delay(dly[2]);
  }else if(strcmp(x,"6")==0)                    { t(1);t(0);t(0);t(0);t(0);      delay(dly[2]);
  }else if(strcmp(x,"7")==0)                    { t(1);t(1);t(0);t(0);t(0);      delay(dly[2]);
  }else if(strcmp(x,"8")==0)                    { t(1);t(1);t(1);t(0);t(0);      delay(dly[2]);
  }else if(strcmp(x,"9")==0)                    { t(1);t(1);t(1);t(1);t(0);      delay(dly[2]);
  }else if(strcmp(x,"イ")==0||strcmp(x,"a")==0) { t(0);t(1);                     delay(dly[2]);
  }else if(strcmp(x,"ロ")==0)                   { t(0);t(1);t(0);t(1);           delay(dly[2]);
  }else if(strcmp(x,"ハ")==0||strcmp(x,"b")==0) { t(1);t(0);t(0);t(0);           delay(dly[2]);
  }else if(strcmp(x,"バ")==0)                   {                                               m("ハ");m("゛");
  }else if(strcmp(x,"ニ")==0||strcmp(x,"c")==0) { t(1);t(0);t(1);t(0);           delay(dly[2]);
  }else if(strcmp(x,"ホ")==0||strcmp(x,"d")==0) { t(1);t(0);t(0);                delay(dly[2]);
  }else if(strcmp(x,"ボ")==0)                   {                                               m("ホ");m("゛");
  }else if(strcmp(x,"ヘ")==0||strcmp(x,"e")==0) { t(0);                          delay(dly[2]);
  }else if(strcmp(x,"ベ")==0)                   {                                               m("ヘ");m("゛");
  }else if(strcmp(x,"ト")==0)                   { t(0);t(0);t(1);t(0);t(0);      delay(dly[2]);
  }else if(strcmp(x,"ド")==0)                   {                                               m("ト");m("゛");
  }else if(strcmp(x,"チ")==0||strcmp(x,"f")==0) { t(0);t(0);t(1);t(0);           delay(dly[2]);
  }else if(strcmp(x,"ヂ")==0)                   {                                               m("チ");m("゛");
  }else if(strcmp(x,"リ")==0||strcmp(x,"g")==0) { t(1);t(1);t(0);                delay(dly[2]);
  }else if(strcmp(x,"ヌ")==0||strcmp(x,"h")==0) { t(0);t(0);t(0);t(0);           delay(dly[2]);
  }else if(strcmp(x,"ル")==0)                   { t(1);t(0);t(1);t(1);t(0);      delay(dly[2]);
  }else if(strcmp(x,"ヲ")==0||strcmp(x,"j")==0) { t(0);t(1);t(1);t(1);           delay(dly[2]);
  }else if(strcmp(x,"ヺ")==0)                   {                                               m("ヲ");m("゛");
  }else if(strcmp(x,"ワ")==0||strcmp(x,"k")==0) { t(1);t(0);t(1);                delay(dly[2]);
  }else if(strcmp(x,"ヷ")==0)                   {                                               m("ワ");m("゛");
  }else if(strcmp(x,"カ")==0||strcmp(x,"l")==0) { t(0);t(1);t(0);t(0);           delay(dly[2]);
  }else if(strcmp(x,"ガ")==0)                   {                                               m("カ");m("゛");
  }else if(strcmp(x,"ヨ")==0||strcmp(x,"m")==0) { t(1);t(1);                     delay(dly[2]);
  }else if(strcmp(x,"タ")==0||strcmp(x,"n")==0) { t(1);t(0);                     delay(dly[2]);
  }else if(strcmp(x,"ダ")==0)                   {                                               m("タ");m("゛");
  }else if(strcmp(x,"レ")==0||strcmp(x,"o")==0) { t(1);t(1);t(1);                delay(dly[2]);
  }else if(strcmp(x,"ソ")==0)                   { t(1);t(1);t(1);t(0);           delay(dly[2]);
  }else if(strcmp(x,"ゾ")==0)                   {                                               m("ソ");m("゛");
  }else if(strcmp(x,"ツ")==0||strcmp(x,"p")==0) { t(0);t(1);t(1);t(0);           delay(dly[2]);
  }else if(strcmp(x,"ヅ")==0)                   {                                               m("ツ");m("゛");
  }else if(strcmp(x,"ネ")==0||strcmp(x,"q")==0) { t(1);t(1);t(0);t(1);           delay(dly[2]);
  }else if(strcmp(x,"ナ")==0||strcmp(x,"r")==0) { t(0);t(1);t(0);                delay(dly[2]);
  }else if(strcmp(x,"ラ")==0||strcmp(x,"s")==0) { t(0);t(0);t(0);                delay(dly[2]);
  }else if(strcmp(x,"ム")==0||strcmp(x,"t")==0) { t(1);                          delay(dly[2]);
  }else if(strcmp(x,"ウ")==0||strcmp(x,"u")==0) { t(0);t(0);t(1);                delay(dly[2]);
  }else if(strcmp(x,"ヴ")==0)                   {                                               m("ウ");m("゛");
  }else if(strcmp(x,"ヰ")==0)                   { t(0);t(1);t(0);t(0);t(1);      delay(dly[2]);
  }else if(strcmp(x,"ヸ")==0)                   {                                               m("ヰ");m("゛");
  }else if(strcmp(x,"ノ")==0)                   { t(0);t(0);t(1);t(1);           delay(dly[2]);
  }else if(strcmp(x,"オ")==0)                   { t(0);t(1);t(0);t(0);t(0);      delay(dly[2]);
  }else if(strcmp(x,"ク")==0||strcmp(x,"v")==0) { t(0);t(0);t(0);t(1);           delay(dly[2]);
  }else if(strcmp(x,"グ")==0)                   {                                               m("ク");m("゛");
  }else if(strcmp(x,"ヤ")==0||strcmp(x,"w")==0) { t(0);t(1);t(1);                delay(dly[2]);
  }else if(strcmp(x,"マ")==0||strcmp(x,"x")==0) { t(1);t(0);t(0);t(1);           delay(dly[2]);
  }else if(strcmp(x,"ケ")==0||strcmp(x,"y")==0) { t(1);t(0);t(1);t(1);           delay(dly[2]);
  }else if(strcmp(x,"ゲ")==0)                   {                                               m("ケ");m("゛");
  }else if(strcmp(x,"フ")==0||strcmp(x,"z")==0) { t(1);t(1);t(0);t(0);           delay(dly[2]);
  }else if(strcmp(x,"ブ")==0)                   {                                               m("フ");m("゛");
  }else if(strcmp(x,"コ")==0)                   { t(1);t(1);t(1);t(1);           delay(dly[2]);
  }else if(strcmp(x,"ゴ")==0)                   {                                               m("コ");m("゛");
  }else if(strcmp(x,"エ")==0)                   { t(1);t(0);t(1);t(1);t(1);      delay(dly[2]);
  }else if(strcmp(x,"テ")==0)                   { t(0);t(1);t(0);t(1);t(1);      delay(dly[2]);
  }else if(strcmp(x,"デ")==0)                   {                                               m("テ");m("゛");
  }else if(strcmp(x,"ア")==0)                   { t(1);t(1);t(0);t(1);t(1);      delay(dly[2]);
  }else if(strcmp(x,"サ")==0)                   { t(1);t(0);t(1);t(0);t(1);      delay(dly[2]);
  }else if(strcmp(x,"ザ")==0)                   {                                               m("サ");m("゛");
  }else if(strcmp(x,"キ")==0)                   { t(1);t(0);t(1);t(0);t(0);      delay(dly[2]);
  }else if(strcmp(x,"ギ")==0)                   {                                               m("キ");m("゛");
  }else if(strcmp(x,"ユ")==0)                   { t(1);t(0);t(0);t(1);t(1);      delay(dly[2]);
  }else if(strcmp(x,"メ")==0)                   { t(1);t(0);t(0);t(0);t(1);      delay(dly[2]);
  }else if(strcmp(x,"ミ")==0)                   { t(0);t(0);t(1);t(0);t(1);      delay(dly[2]);
  }else if(strcmp(x,"シ")==0)                   { t(1);t(1);t(0);t(1);t(0);      delay(dly[2]);
  }else if(strcmp(x,"ジ")==0)                   {                                               m("シ");m("゛");
  }else if(strcmp(x,"ヱ")==0)                   { t(0);t(1);t(1);t(0);t(0);      delay(dly[2]);
  }else if(strcmp(x,"ヹ")==0)                   {                                               m("ヱ");m("゛");
  }else if(strcmp(x,"ヒ")==0)                   { t(1);t(1);t(0);t(0);t(1);      delay(dly[2]);
  }else if(strcmp(x,"ビ")==0)                   {                                               m("ヒ");m("゛");
  }else if(strcmp(x,"モ")==0)                   { t(1);t(0);t(0);t(1);t(0);      delay(dly[2]);
  }else if(strcmp(x,"セ")==0)                   { t(0);t(1);t(1);t(1);t(0);      delay(dly[2]);
  }else if(strcmp(x,"ゼ")==0)                   {                                               m("セ");m("゛");
  }else if(strcmp(x,"ス")==0)                   { t(1);t(1);t(1);t(0);t(1);      delay(dly[2]);
  }else if(strcmp(x,"ズ")==0)                   {                                               m("ス");m("゛");
  }else if(strcmp(x,"ン")==0)                   { t(0);t(1);t(0);t(1);t(0);      delay(dly[2]);
  }else if(strcmp(x,"゛")==0||strcmp(x,"i")==0) { t(0);t(0);                     delay(dly[2]);
  }else if(strcmp(x,".")==0)                    { t(0);t(1);t(0);t(1);t(0);t(1); delay(dly[2]);
  }else if(strcmp(x,",")==0)                    { t(1);t(1);t(0);t(0);t(1);t(1); delay(dly[2]);
  }else if(strcmp(x,":")==0)                    { t(1);t(1);t(1);t(0);t(0);t(0); delay(dly[2]);
  }else if(strcmp(x,"?")==0)                    { t(0);t(0);t(1);t(1);t(0);t(0); delay(dly[2]);
  }else if(strcmp(x,"'")==0)                    { t(0);t(1);t(1);t(1);t(1);t(0); delay(dly[2]);
  }else if(strcmp(x,"-")==0)                    { t(1);t(0);t(0);t(0);t(0);t(1); delay(dly[2]);
  }else if(strcmp(x,"(")==0)                    { t(1);t(0);t(1);t(1);t(0);t(1); delay(dly[2]);
  }else if(strcmp(x,")")==0)                    { t(0);t(1);t(0);t(0);t(1);t(0); delay(dly[2]);
  }else if(strcmp(x,"/")==0)                    { t(1);t(0);t(0);t(1);t(0);      delay(dly[2]);
  }else if(strcmp(x,"=")==0)                    { t(1);t(0);t(0);t(0);t(1);      delay(dly[2]);
  }else if(strcmp(x,"+")==0)                    { t(0);t(1);t(0);t(1);t(0);      delay(dly[2]);
  }else if(strcmp(x,"\"")==0)                   { t(0);t(1);t(0);t(0);t(1);t(0); delay(dly[2]);
  }else if(strcmp(x,"*")==0)                    { t(1);t(0);t(0);t(1);           delay(dly[2]);
  }else if(strcmp(x,"@")==0)                    { t(0);t(1);t(1);t(0);t(1);t(0); delay(dly[2]);
  }else if(strcmp(x,"゜")==0)                   { t(0);t(0);t(1);t(1);t(0);      delay(dly[2]);
  }else if(strcmp(x,"ー")==0)                   { t(0);t(1);t(1);t(0);t(1);      delay(dly[2]);
  }else if(strcmp(x,"､")==0)                    { t(0);t(1);t(0);t(1);t(0);t(1); delay(dly[2]);
  }else if(strcmp(x," ")==0||strcmp(x,"")==0)   {                                delay(dly[4]);
  }
}
