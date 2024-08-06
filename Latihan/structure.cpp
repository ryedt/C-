#include<iostream>
using namespace std;
struct mahasiswa
{
	string nama;
	char nim[9];
	double ipk;
};
mahasiswa mhs;
main()
{
	cout<<"Memasukkan Data"<<endl;
	cout<<"Masukkan Nama = ";getline(cin,mhs.nama);
	cout<<"Masukkan NIM = ";cin.getline(mhs.nim,9);
	cout<<"Masukkan IPK = ";cin>>mhs.ipk;
	cout<<"\n\nMenampilkan Data "<<endl;
	cout<<"Nama\t\t = "<<mhs.nama<<endl;
	cout<<"NIM\t\t = "<<mhs.nim<<endl;
	cout<<"Ipk\t\t = "<<mhs.ipk<<endl;
}
