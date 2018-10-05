#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
int main ()
{
		
	//deklarasi variable
	int MasukJam12,MasukMenit12,MasukDetik12 ;
	int KeluarJam12,KeluarMenit12,KeluarDetik12 ;
	int SelisihJam12,SelisihMenit12,SelisihDetik12 ;
	
	//input data jam masuk
	cout<<"Waktu masuk "<<endl ;
	cout<<"jam :" ; cin>>MasukJam12 ;
	cout<<"menit :" ; cin>>MasukMenit12 ;
	cout<<"detik :" ; cin>>MasukDetik12 ;
	
	//input data jam keluar
	cout<<"Waktu keluar "<<endl;
	cout<<"jam :" ; cin>>KeluarJam12 ;
	cout<<"menit " ;cin>>KeluarMenit12 ;
	cout<<"detik " ; cin>>KeluarDetik12 ;
	
	//menghitung selisih jam 
	if ((KeluarJam12 - MasukJam12) <0) {
			SelisihJam12 = (24 + KeluarJam12) - MasukJam12 ;
	}
else {
	SelisihJam12 = KeluarJam12 - MasukJam12 ;
}

	//menghitung selisih menit
	if ((KeluarMenit12 - MasukMenit12) <0) {
		SelisihMenit12 = (60 + KeluarMenit12)  - MasukMenit12;
	}
	else { 
	SelisihMenit12 = KeluarMenit12 - MasukMenit12 ;
	}
		
	//menghitung selisih detik
	if ((KeluarDetik12-MasukDetik12)<0) {
		SelisihDetik12 = ( 60 + KeluarDetik12) - MasukDetik12 ;
		}
		else {
			SelisihDetik12 = KeluarDetik12 - MasukDetik12 ;
		}
	//menampilkan hasilnya
	cout<<"Selisih Waktu"<<endl ;
	cout<<SelisihJam12<<"SelisihJam "<<SelisihMenit12<<"SelisihMenit "<<SelisihDetik12<<" SelisihDetik "<<endl;
	getch ();
	return 0;
	
}
