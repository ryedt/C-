#include<iostream>
using namespace std;
int main()
{
	int x=8, y, *z;
	z=&x;
	y=*z;
	cout<<"Nilai X = "<<x<<endl;
	cout<<"Alamat X = "<<x<<endl;
	cout<<"alamat Z = "<<z<<endl;
	cout<<"Alamat Y = "<<y<<endl;
	cout<<"Nilai yang Disimpan Pada Alamat"<<endl;
	cout<<z<<" Adalah "<<y<<endl;
}
