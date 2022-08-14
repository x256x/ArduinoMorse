/*
 * m_init:  関数 m 初期化用の関数
 *          m_init(ピン番号,周波数(<=32 or 0),スピード(!=0))
 * 
 * m:       モールスで表せる(多分)すべての文字に対応に対応
 *          char*型  Spaceは空でも可
 */
void setup(){
  m_init(13,0,50);
  //String s = "ah my heart will be hopping";
  m_str("ah my heart will be hopping");
  //int l = s.length();
  /*int j=0;
  int h=1;
  String c;
  c = s.substring(j,h);
  m(c.c_str());
  j++;h++;
  c = s.substring(j,h);
  m(c.c_str());
  j++;h++;
  c = s.substring(j,h);
  m(c.c_str());*/

  /*int l = s.length();
  int h=0;
  int j=1;
  String c;
  for(int i=0; i<l; i++){
      c = s.substring(j,h);
      m(c.c_str());
      j++;h++;
  }*/


  /*m("a");
  m("h");
  m("");
  m("m");
  m("y");
  m("");
  m("h");
  m("e");
  m("a");
  m("r");
  m("t");
  m("");
  m("w");
  m("i");
  m("l");
  m("l");
  m("");
  m("b");
  m("e");
  m("");
  m("h");
  m("o");
  m("p");
  m("p");
  m("i");
  m("n");
  m("g");
  m("");
  m("ア");
  m("ア");
  m("コ");
  m("コ");
  m("ロ");
  m("ガ");
  m("ピ");
  m("ヨ");
  m("ン");
  m("ピ");
  m("ヨ");
  m("ン");
  m("ス");
  m("ル");
  m("ン");
  m("ジ");
  m("ヤ");
  m("ー");*/
}

void loop(){
}
