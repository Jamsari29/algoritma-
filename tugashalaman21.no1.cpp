#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main ()
{

	//deklarasi variable
	int yard, kaki, inchi, meter;
	cout<<"masukan satauan meter: "; cin>>meter;
	
	//menghitung konversi
	yard = meter / 0.9144 ;
	kaki = meter / 0.3048 ;
	inchi = meter / 0.0254 ;
	cout<<endl ;
	
	
	//menampilkan hasilnya 
	cout<<yard<<" Yard " <<kaki<<" Kaki " <<inchi<<" Inchi ";
	return 0;
}
