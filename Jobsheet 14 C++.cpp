#include <iostream>
using namespace std;

int main (){
	int x = 1, n, y = 1;
	cout << "Masukkan 2 digit terakhir NIM anda  = ";
	cin >> n;
	do{y *= n;
		x++;
	}while ( x <= 2);
	cout << y;
return 0;}
