/* Membuat Program Billing Warnet */
/*Bayu Rizqi Pratama*/
/*20051397052*/
/*2020B*/

#include <iostream>
#include <conio.h>

using namespace std;
int main(void)
{
	char nama[40],x;
	int nokomptr,jam1,mnt1,dtk1,jam2,mnt2,dtk2,jmldtk,totalbayar,jmluang,sisa;
	int tarif=5000;
	
	pilihan :
	cout <<endl;
	cout <<"----------- WELCOME TO WIBU.NET ---------- \n";
    cout <<"------------------------------------------ \n";
    cout << endl;
	
	cout<<"=========================================="<<endl;
	cout<<"No Komputer : ";cin>>nokomptr;
	cout<<"Nama User   : ";cin>>nama;
	cout<<"=========================================="<<endl;
	cout << endl;
	 
	cout <<"------------------ MULAI ----------------- \n";
	cout<<"Jam   Mulai   : ";cin>>jam1;
	cout<<"Menit Mulai   : ";cin>>mnt1;
	cout<<"Detik Mulai   : ";cin>>dtk1;
	cout<<"=========================================="<<endl;
	cout << endl;
	
	cout <<"----------------- SELESAI ---------------- \n";
	cout<<"Jam   Selesai : ";cin>>jam2;
	cout<<"Menit Selesai : ";cin>>mnt2;
	cout<<"Detik Selesai : ";cin>>dtk2;
	cout<<"=========================================="<<endl;
	cout<<endl;
	
	jmldtk = ((jam2-jam1)*3600) + ((mnt2-mnt1)*60) + (dtk2-dtk1);
	totalbayar = jmldtk * tarif / 3600;
	
	cout<<"No Komputer     : "<<nokomptr<<endl;
	cout<<"Nama User       : "<<nama<<endl;
	cout<<"Lama Penggunaan : "<<(jam2-jam1)<< "Jam" <<(mnt2-mnt1)<< "Menit" <<(dtk2-dtk1)<< "Detik" <<endl;
	cout<<"Total           : Rp."<<totalbayar<<endl;
	cout<<"=========================================="<<endl;
	
	do {
		cout<<"Jumlah Uang     : Rp.";cin>>jmluang;
		if (jmluang<totalbayar)
		cout<<"Maaf, uang anda kurang\n"<<endl;
	}
	 while (jmluang<totalbayar);
	 
	 sisa=jmluang-totalbayar;
	 cout<<"Kembalian Uang  : Rp."<<sisa<<"\n"<<endl;
	 cout<<"=========================================="<<endl;
	 cout<<"Terima Kasih, Silahkan Berkunjung Kembali"<<endl;
	 cout<<"KEMBALI KE MENU AWAL [y/t] : ";cin>>x;
	 	if(x=='y'){
	 		goto pilihan;
		 }
		else if(x=='t')
	getch();
}
