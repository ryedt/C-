#include <iostream>
using namespace std;
struct mahasiswa
{
	char npm[9];
	string nama;
	float ipk;
};
mahasiswa mhs;
main()
{
	cout<<"memasukkan Data"<<endl;
	cout<<"masukkan NPM  = ";cin.getline(mhs.npm,9);
	cout<<"Masukkan Nama = ";getline(cin,mhs.nama);
	cout<<"Masukkan IPK = ";cin>>mhs.ipk;
	cout<<"\n\nMenampilkan Data "<<endl;
	cout<<"Npm\t\t = "<<mhs.npm<<endl;
	cout<<"Nama\t\t = "<<mhs.nama<<endl;
	cout<<"Ipk\t\t = "<<mhs.ipk<<endl;
}
