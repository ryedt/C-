#include<iostream>
using namespace std;
struct mahasiswa
{
	char nim[9];
	string nama;
	string alamat;
	double ipk;
};
mahasiswa mhs[5];
main()
{
	int i=0;
	for(i=0;i<2;i++)
	{
		cout<<"Memasukkan Data Indek ke - "<<i<<endl;
		cout<<"Masukkan NIM = ";cin.getline(mhs[i].nim,9);
		cout<<"Masukkan Nama = ";getline(cin,mhs[i].nama);
		cout<<"Masukkan Alamat = ";getline(cin,mhs[i].alamat);
		cout<<"Masukkan IPK = ";cin>>mhs[i].ipk;
		cin.ignore();
	}
	for(i=0;i<2;i++)
	{
		cout<<"\n\nMenampilkan Data Indek Ke - "<<i<<endl;
		cout<<"Nim\t\t ="<<mhs[i].nim<<endl;
		cout<<"Nama\t\t = "<<mhs[i].nama<<endl;
		cout<<"Alamat\t\t = "<<mhs[i].alamat<<endl;
		cout<<"Ipk\t\t = "<<mhs[i].ipk<<endl;
	}
}
