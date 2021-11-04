/* Percobaab I-3 Deklarasi Konstanta
 * percobaan101.cpp
 * menggunakan konstanta const
  */
 #include <iostream>
 
 using namespace std;
 
 
 int main()
 {
 	const float phi = 3.14;
 	float jari_jari, luas;
 	
 	jari_jari = 7.0;
 	
 	luas = phi * jari_jari * jari_jari;
 	
 	cout << "Luas lingkaran = " << jari_jari << endl;
 	
 	return 0;
 }
