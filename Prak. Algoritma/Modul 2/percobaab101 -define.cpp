/* Percobaab I-3 Deklarasi Konstanta
 * percobaan101.cpp
 * menggunakan konstanta define
  */
 #include <iostream>
 
 using namespace std;
 
 #define phi 3,14
 
 int main()
 {
 	float jari_jari, luas;
 	
 	jari_jari = 7.0;
 	
 	luas = phi * jari_jari * jari_jari;
 	
 	cout << "Luas lingkaran = " << luas << endl;
 	
 	return 0;
 }
