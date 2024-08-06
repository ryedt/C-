#include <iostream>
using namespace std;
main(){
	
	int i,n,x,jumlah;
	double rerata;
	i=1;
	jumlah=0;
	
	cout<<"Masukkan jumlah bilangan : ";
	cin>>x;
	
	while (i<=x){
		cout<<"Masukkan Bilangan ke"<<i<<" : ";
		cin>>n;
		jumlah=jumlah+n;
		i++;
	}
	rerata=jumlah/x;

	cout<<"\nNilai Rata-rata : "<<rerata<<endl;
}

