#include <iostream>
using namespace std;
main()
{
	int nilai[5];
	int i, jumlah=0;
	float rata;
	for(i=1;i<5;i++)
	{
		cout<<"Masukkan Data ke "<<i<<" = ";
		cin>>nilai[i];
	}
	cout<<"Mencetak Deret Bilangan = ";
	for(i=1;i<5;i++)
	{
		cout<<nilai[i]<<" ";
		jumlah=jumlah+nilai[i];
	}
	cout<<"\nJumlah Bilangan = "<<jumlah<<endl;
}
