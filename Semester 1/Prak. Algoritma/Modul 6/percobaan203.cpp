/* Percobaan II-7: Percabangan switch
 * percobaan207.cpp */
 #include <iostream>
 
 using namespace std;
 
 int main()
 {
 	int nilai;
 	
 	cout << "Masukkan sebuah nilai = ";
 	cin >> nilai; // 85/10 = 8.5 -> 8
 	
 	switch (nilai/10)
 	{
 		case 10:
 		case 9:
 		case 8:
 			cout << "Huruf mutu Anda adalah A." << endl;
 			break;
 		case 7:
 			cout << "Huruf mutu Anda adalah B." << endl;
 			break;
 		case 6:
 			cout << "Huruf mutu Anda adalah C." << endl;
 			break;
 		case 5:
 			cout << "Huruf mutu Anda adalah D." << endl;
 			break;
 		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			cout << "Huruf mutu Anda adalah D." << endl;
			break;
		default:
			cout << "Nilai di luar jangkauan" << endl;
	}

 	return 0;
 }

