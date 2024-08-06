#include <iostream>
using namespace std;

int main()
{
	int angka;
	char yn;
do{

	cout<<"\nMasukkan angka : ";
	cin>> angka;
	cout<<"\n";
	if (angka>10){
		cout<<angka<<" lebih besar dari 10"<<endl;
	}else{
		cout<<angka<<" lebih kecil atau sama dengan 10"<<endl;
	}
	cout<<"\ncoba angka lain : (y/n)";
	cin>> yn;
}
	while(yn == 'y' || yn == 'y' );
}


