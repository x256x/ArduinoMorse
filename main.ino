  /*-------------*/
 /*<2022, x256x>*/
/*-------------*/
/*
 * m_init:  関数 m 初期化用の関数
 *          m_init(ピン番号,周波数(<=32 or 0),スピード(!=0))
 * 
 * m:       モールスで表せる(多分)すべての文字に対応に対応
 *          char*型  Spaceは空でも可
 * 
 *m_str:    引数はString型
 */
void setup(){
	m_init(13,0,500);
	Serial.begin(9600);
}

void loop(){	//シリアルモニタからの文字列をモールスで出力
	if (Serial.available() > 0){
		String str1=Serial.readString();
		m_str(str1);
	}
}
