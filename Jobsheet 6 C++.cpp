#include <iostream>
using namespace std;

int main (){
 	int IP;
	cout<<"masukkan IP = ";
	cin>>IP;
	if ((IP >= 3.00) && (IP =4.00))
	{
		cout<<"SKS yang dapat diambil: 24 SKS";
	}else if((IP >= 2.50) && (IP < 3.00))
	{
		cout<<"SKS yang dapat diambil: 21 SKS";
	}else if((IP >= 2.00) && (IP < 2.50))
	{
		cout<<"SKS yang dapat diambil: 18 SKS";
	}else if((IP >= 2.00) && (IP < 2.50))
	{
		cout<<"SKS yang dapat diambil: 18 SKS";
	}else if((IP >= 1.50) && (IP < 2.00))
	{
		cout<<"SKS yang dapat diambil: 15 SKS";
	}else if((IP >= 0.00) && (IP < 1.50))
	{
		cout<<"SKS yang dapat diambil: 12 SKS";
	}else 
	{
		cout<<"ERROR";
	}
return 0;}
