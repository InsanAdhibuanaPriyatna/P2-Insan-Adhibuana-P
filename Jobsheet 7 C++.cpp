#include <iostream>
using namespace std;

int main (){
	int IPK ;
	
	cout << "Jumlah IPK: ";
	cin >> IPK;
	
	switch (IPK){
		case 4:
	cout << "CUMLAUDE"<< endl;
  break ;
		case 3:
	cout << "Memuaskan "<< endl;
  break;
		case 2:
	cout << "Lulus"<<endl;
  break;
	default:
		cout<< "Tidak lulus" << endl ;
    break;
	}

	return 0;
}
