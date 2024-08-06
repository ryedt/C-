#include<iostream>
using namespace std;
struct buku
{
	char kode[9];
	string nama;
	int thn;
	string pengarang;
	int harga;
};
buku bk[6];
main()
{
	int i=1;
	for(i=1;i<2;i++)
	{
		cout<<"Memasukkan Data Indek ke - "<<i<<endl;
		cout<<"Masukkan Kode Buku = ";cin.getline(bk[i].kode,9);
		cout<<"Masukkan Nama Buku = ";getline(cin,bk[i].nama);
		cout<<"Masukkan Tahun terbit = ";cin>>bk[i].thn;
		cout<<"Masukkan Pengarang = ";cin>>bk[i].pengarang;
		cout<<"Masukkan Harga Buku = ";cin>>bk[i].harga;
		cin.ignore();
	}
	for(i=1;i<2;i++)
	{
		cout<<"\n\nMenampilkan Data Indek Ke - "<<i<<endl;
		cout<<"Kode Buku\t\t ="<<bk[i].kode<<endl;
		cout<<"Nama Buku\t\t = "<<bk[i].nama<<endl;
		cout<<"Tahun terbit\t = "<<bk[i].thn<<endl;
		cout<<"Pengarang\t\t = "<<bk[i].pengarang<<endl;
		cout<<"Harga Buku\t\t = "<<bk[i].harga<<endl;
	}
}
