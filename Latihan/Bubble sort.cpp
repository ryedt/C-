#include<iostream>
#include<conio.h>
using namespace std;
int main()

{
	int data[10];
	int i, j, k, tmp, jumlah=0;
	cout<<"Masukkan jumlah bilangan : ";
	cin>>k;
	
	for(i=0; i<k; i++)
	{
		cout<<"Masukkan Angka ke "<<(i+1)<<" : ";
		cin>>data[i];
		jumlah=jumlah+data[i];
	}
	
	cout<<"\nData sebelum diurutkan : "<<endl;
	
	for(i=0; i<k; i++)
	{
		cout<<data[i]<<" ";
	}
	cout<<endl;
	
	for(i=0;i<k;i++){
		for(j=i+1;j<k;j++)
		{
			if(data[i]>data[j])
			{
				tmp=data[i];
				data[i]=data[j];
				data[j]=tmp;
			}
		}
	}
	
	cout<<"\nData setelah diurutkan : "<<endl;
	
	for(i=0;i<k;i++)
	{
		{
			cout<<data[i]<<" ";
		}
	}
	
	cout<<"\n\nJumlah dari bilangan = "<<jumlah;
	return 0;
}
