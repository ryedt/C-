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
	cin>>jum_beli; //Pengguna memasukan jumlah beli
	
	for (int i=0; i<jum_beli;i++){
		cout<<endl;
		cout<<"Masukan Barang Ke-"<<i+1<<endl;
		cout<<endl;
		
		cout<<"Nama Barang : ";
		cin>>nama_barang[i]; //Pengguna input nama barang disimpan pada array nama_barang
		
		cout<<"Jumlah      : ";
		cin>>jumlah[i]; //Pengguna input jumlah disimpan pada array jumlah
		
		cout<<"Harga       : ";
		cin>>harga[i]; //Pengguna input harga disimpan pada array harga
		
		sub_tot[i]=jumlah[i]*harga[i]; // Menjumlahkan Harga sub total barang
		tot+=sub_tot[i]; //Menjumlahkan seluruh sub total barang
	}
	
	cout<<endl;
	cout<<"	 STRUK BELANJA MINI MARKET GYB		"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	cout<<"No   Barang    Jumlah     Harga     Sub Total"<<endl;
	for (int i=0;i<jum_beli;i++){
		cout<<i+1<<setw(8)<<nama_barang[i]<<setw(10)<<jumlah[i]<<setw(12)<<harga[i]<<setw(12)<<sub_tot[i]<<endl; //Menampilkan semua nilai array
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
	cout<<"\nJumlah Bayar : Rp."<<tot<<endl;//Menampilkan jumlah bayar (belum termasuk diskon)
	cout<<"Dikon        : Rp."<<diskon<<endl; //Menampilkan diskon
	cout<<"Total Bayar  : Rp."<<tot-diskon<<endl;//Menampilkan total harga yang harus dibayar
	cout<<"Bayar        : Rp.";
	cin>>bayar; // Input dari user untuk jumlah yang dibayar
	cout<<"Kembali      : Rp."<<(bayar-(tot-diskon))<<endl; // Menampilkan uang kembali
	
	cout << "\n Terima Kasih Atas Kunjungan Anda DI MINI MARKET GYB ";
	return 0;
}
