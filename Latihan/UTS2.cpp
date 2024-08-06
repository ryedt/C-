#include<iostream>
using  namespace std;
int main()
{
	cout<<"Diskon Potongan Harga"<<endl;
	cout<<endl;
	int jumlah, akhir;

cout<<"Total belanja = Rp. ";
cin>> jumlah;
cout<<endl;
if(jumlah >= 80000){
		akhir=jumlah - (0.1*jumlah);
		cout<<"\nSelamat, anda mendapatkan diskon 10%"<<endl;
	}
	else if((jumlah > 50000)&&(jumlah <= 80000)){
		akhir=jumlah;
		cout<<"Selamat, anda mendapatkan piring cantik"<<endl;
	}
	else if((jumlah >10000)&&(jumlah <= 50000)){
		akhir=jumlah;
	    cout<<"Selamat, anda mendapatkan gelas cantik"<<endl;
	}
	else{
		cout<<"Tidak ada Bonus"<<endl;
	}
	cout<<"Total Bayar = Rp. "<<akhir<<endl;
	return 0;
}
