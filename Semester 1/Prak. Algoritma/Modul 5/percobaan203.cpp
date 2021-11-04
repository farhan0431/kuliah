/* Percobaan II-3: Operator bitwise
 * percobaan203.cpp */
#include <iostream>

 using namespace std;
 int main()
 {
 	int m = 90, n = 10;
 	cout << m << " << 2 " << " = " << (m<<2) << endl;
 	cout << m << " >> 1 " << " = " << (m>>1) << endl;
 	cout << m << " & " << n << " = " << (m&n) << endl;
 	cout << m << " i " << n << " = " << (m|n) << endl;

 	return 0;
 }

