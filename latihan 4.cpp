#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main () 
{
		
	char huruf;
	cout<<"masukan huruf kecil : "; cin>>huruf;
	cout<<endl;
	
	//seleksi pembandingan OR, ssalah satu kondisi bernilai benar
	if ((huruf == 'a') || (huruf == 'i') || (huruf == 'u') || (huruf == 'e') || (huruf == 'o'))
	cout<<"anda memasukan huruf vokal"<<endl;
	
	else
	cout<<"yang anda masukan adalah huruf konsonan"<<endl;
}
	
	
