#include<iostream>
using namespace std;
struct tinggal
{
	string desa;
	string kota;
	char pos[5];
};
struct tgl_lahir
{
	int tgl;
	int bln;
	int thn;
};
struct mahasiswa
{
	char nim[9];
	string nama;
	double ipk;
	tinggal alt;
	tgl_lahir lahir;
};
mahasiswa mhs;
main()
{
	cout<<"Memasukkan Data Mahasiswa"<<endl;
	cout<<"Masukkan NIM = ";cin.getline(mhs.nim,9);
	cout<<"Masukkan NAMA = ";getline(cin,mhs.nama);
	cout<<"Masukkan IPK = ";cin>>mhs.ipk;
	cout<<"Tanggal Lahir \n";
	cout<<"Tanggal = ";cin>>mhs.lahir.tgl;
	cout<<"Bulan = ";cin>>mhs.lahir.bln;
	cout<<"Tahun = ";cin>>mhs.lahir.thn;
	cout<<"Alamat \n";
	cout<<"Desa = ";cin.ignore();getline(cin,mhs.alt.desa);
	cout<<"Kota = ";getline(cin,mhs.alt.kota);
	cout<<"Kode POS = ";cin>>mhs.alt.pos;
	
	cout<<"\n\nMenampilkan Data"<<endl;
	cout<<"Nim\t\t = "<<mhs.nim<<endl;
	cout<<"Nama\t\t = "<<mhs.nama<<endl;
	cout<<"Ipk\t\t = "<<mhs.ipk<<endl;
	cout<<"Tanggal Lahir = "<<mhs.lahir.tgl<<"-"<<mhs.lahir.bln<<"-"<<mhs.lahir.thn<<endl;
	cout<<"Desa\t\t = "<<mhs.alt.desa<<endl;
	cout<<"Kota\t\t = "<<mhs.alt.kota<<endl;
	cout<<"Kode Pos\t = "<<mhs.alt.pos<<endl;
	
}
