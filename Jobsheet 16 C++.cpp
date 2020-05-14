#include <iostream>
using namespace std;

int main (){
	int nim, batas;
	cout << "Masukkan 2 digit NIM terakhir anda = ";
	cin >> nim;
	cout<<"Masukkan batas = ";
	cin>> batas;
	mulai:
	cout << nim << endl;
	nim++;
	if (nim<=batas)
		goto mulai;
		else
		goto akhir;
	akhir:
return 0;}
