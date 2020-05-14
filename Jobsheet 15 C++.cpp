#include <iostream>
using namespace std;

int main (){
	int x = 21;
	mulai:
	cout << x << endl;
	x--;
		if (x>=19)
			goto mulai;
		else
			goto akhir;
	akhir:
return 0;}
