#include <iostream> 
#include <string>
#include <iomanip>
using namespace std;
int main() {
	//Inisialisasi atau deklarasi variabel
	int jum_beli, bayar,diskon,jumlah[50], harga[50], sub_tot[50];
	string nama_barang[50];
	float tot;
	char yesNo;
do{

	cout<<"\n\t===     MINI MARKET GYB     ===="<<endl;
	cout<<"\tLimpasu RT.05 RW.03 Kec. Limpasu"<<endl;
	cout<<"\t==    Telp. 0822-1069-5330    =="<<endl;
	cout<<"\t================================"<<endl;
	cout<<endl;
	cout<<"Masukan Jumlah Beli : ";
	cin>>jum_beli;
	
	for (int i=0; i<jum_beli;i++){
		cout<<endl;
		cout<<"Masukan Barang Ke-"<<i+1<<endl;
		cout<<endl;
		
		cout<<"Nama Barang : ";
		cin>>nama_barang[i];
		
		cout<<"Jumlah      : ";
		cin>>jumlah[i];
		
		cout<<"Harga       : ";
		cin>>harga[i];
		
		sub_tot[i]=jumlah[i]*harga[i];
		tot+=sub_tot[i];
	}
	
	cout<<endl;
	cout<<"	 STRUK BELANJA MINI MARKET GYB		"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	cout<<"No   Barang    Jumlah     Harga     Sub Total"<<endl;
	for (int i=0;i<jum_beli;i++){
		cout<<i+1<<setw(8)<<nama_barang[i]<<setw(10)<<jumlah[i]<<setw(12)<<harga[i]<<setw(12)<<sub_tot[i]<<endl;
	}
	cout<<"--------------------------------------------------"<<endl;

	cout<<"Apakah Ada Pesanan Lainnya (Y/N)?";
    cin>>yesNo; 
    
	//Kondisi untuk menentukan diskon yang didapatkan berdasarkan total belanja
	if (tot>=100000){
		diskon=0.06*tot;
	} else if (tot>=50000){
		diskon=0.04*tot;
	}else if (tot>=25000){
		diskon=0.02*tot;
	}else {
		diskon=0;
	}
	
 } while(yesNo == 'Y' || yesNo == 'y');
	
	//Menampilkan Keterangan
	cout<<"\nJumlah Bayar : Rp."<<tot<<endl;
	cout<<"Dikon        : Rp."<<diskon<<endl;
	cout<<"Total Bayar  : Rp."<<tot-diskon<<endl;
	cout<<"Bayar        : Rp.";
	cin>>bayar;
	cout<<"Kembali      : Rp."<<(bayar-(tot-diskon))<<endl;
	
	cout << "\n Terima Kasih Atas Kunjungan Anda DI MINI MARKET GYB ";
	return 0;
}

