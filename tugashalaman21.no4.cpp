#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
int main ()
{
		
	//deklarasi variable
	int tinggibadan,sisa,beratbadanideal ;
	cout<<"MASUKAN TINGGI BADAN : "; cin>>tinggibadan;
	
	//menghitung konversi 
	sisa = (tinggibadan - 100)*0.1 ;
	beratbadanideal = tinggibadan - 100 - sisa;
	cout<<endl;
	
	//menampilkan hasil
	cout<<" BERAT BADAN IDEAL:" << beratbadanideal<<endl ;
	getch () ;
	 return 0 ;
}
