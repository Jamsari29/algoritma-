#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main ()
{

	//deklarasi variable
	int angka ;
	
	//input angka 
	cout<<"masukkan angka : "; cin>>angka;
	cout<<endl;
    //seleksi pembandingan AND , kedua kondisi harus bernilai benar 
    if ((angka>0) && (angka < 10))
	cout<<"anda memasukan angka antara 1 sampai 9" ;
	else cout<<"yang anda masukan bukan antara 1 sampai 9" ;

} 
 
