#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string>
using namespace std;

int main(){
int pin,menu,pilihan,awal;
int transfer,tarik, setor;
string rekening;
char a;
int saldo=100000000;

awal:
cout<<"SELAMAT DATANG\n\n";
cout<<"pin = 151515\n";
cout<<"masukkan pin Anda : ";
cin>>pin;
if (pin==151515)
{

menu:
cout<<"===MENU UTAMA===\n";
cout<<"\n1. Cek Saldo\n2. Setoran\n3. Transfer";
cout<<"\nmasukkan pilihan Anda : ";
cin>>menu;
switch(menu){
case 1:
cout<<"1. Cek Saldo \n\n";
cout<<"Jumlah saldo Anda sebesar:\nRp."<<saldo;
cout<<"\n=======================================\n";
break;

case 2:
cout<<"2. Setoran\n\n";
cout<<"Masukkan jumlah uang yang ingin disetor:\n";
cin>>setor;
cout<<"\nSetoran anda: Rp. " << setor;
cout<<"\nJumlah saldo anda: Rp. "<<saldo;
saldo=saldo+setor;
cout<<"\nJumlah Saldo Anda: Rp. " << saldo;
cout<<"\n=======================================\n";
break;

case 3:
cout<<"3. Transfer\n\n";
cout<<"Masukkan jumlah uang yang ingin ditransfer:\n";
cin>>transfer;
cout<<"\nMasukkan nomor rekening penerima:\n ";
cin>>rekening;
cout<<"\nTransfer ke nomor rekening ( "<<rekening<< " )\n";
cout<<"Jumlah yang ingin ditransfer: Rp. "<<
transfer;
cout<<"\nTransfer berhasil.\n\n";
saldo=saldo-transfer;
cout<< "Sisa Saldo Anda: Rp. "<<saldo;
cout<<"\n=======================================\n";
break;
}

cout<<"\n\nApakah Anda ingin melanjutkan transaksi? (y/n)"<<endl;
cin>>a;
if(a=='y'||a=='Y'){
goto menu;
}
else if (a=='n'||a=='N'){
cout<<"\nTerima kasih...............:*";
}
}
else{
cout<<"PIN Anda Salah, coba lagi!\n\n";
goto awal;
}
return 0;
}
