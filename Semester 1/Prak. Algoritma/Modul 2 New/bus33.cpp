/* Percobaab I-3 Deklarasi Konstanta
 * percobaan101.cpp
 * menggunakan konstanta const
  */
 #include <iostream>
 
 using namespace std;
 
 
 int main()
 {
 	int jumlah_bus, jumlah_siswa, mini_bus = 0;
 	
 	cout<<"Masukkan jumlah siswa :";
 	cin>>jumlah_siswa;
 	
 	
 	
 	while(jumlah_siswa >= 30)
 	{
 		jumlah_bus += 1;
 		jumlah_siswa -= 30;
 	}
 	while(jumlah_siswa >= 7)
 	{
 		mini_bus += 1;
 		jumlah_siswa -= 7;
 	}
 	
 
//	 
	cout<<"Jumlah Bus :"<<jumlah_bus<<endl;
	cout<<"Jumlah Mini Bus :"<<mini_bus<<endl;
	cout<<"Jumlah Siswa Tertolak :"<<jumlah_siswa<<endl;
 	
 		
 	return 0;
 }
