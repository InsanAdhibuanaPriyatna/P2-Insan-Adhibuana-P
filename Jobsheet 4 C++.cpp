#include <iostream>
using namespace std;

int main (){
 	int nilai;
 	
	cout<<"masukan bilangan = " <<endl;
	cin>>nilai;
	
	if(nilai < 0){
		cout<<"status : bilangan negatif";
	}else if(nilai > 0){
		cout<<"status : bilangan positif";
	}else {
		cout<<"status : bilangan 0";
	}
return 0;}
