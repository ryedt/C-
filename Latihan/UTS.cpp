#include <iostream>
using namespace std;
int main()
{
	int data[10];
	int akhir, i, k, jumlah=0;
	cout<<"Masukkan jumlah pembelian : ";
	cin>>k;
	
	for(i=0; i<k; i++)
	{
		cout<<"Masukkan Harga Ke "<<(i+1)<<" = Rp. ";
		cin>>data[i];
		jumlah=jumlah+data[i];
	}
	cout<<"\nTotal Pembelian = Rp. "<<jumlah;


	cout<<"\n\n===BONUS PEMBELIAN==="<<endl;
	
	if(jumlah > 80000){
		akhir=jumlah - (0.1*jumlah);
		cout<<"\nSelamat, anda mendapatkan diskon 10%"<<endl;
		cout<<"Total bayar = RP. "<<akhir;
	}
	else if((jumlah > 50000)&&(jumlah <= 80000)){
		cout<<"Selamat, anda mendapatkan piring cantik"<<endl;
	}
	else if((jumlah >10000)&&(jumlah <= 50000)){
	    cout<<"Selamat, anda mendapatkan gelas cantik"<<endl;
	}
	else{
		cout<<"Tidak ada Bonus"<<endl;
	}
	
	return 0;
}
