#include <iostream>
using namespace std;

int main(){
	int num,i;
	bool isPrime = true;
	
	cout<<"Masukkan sebuah bilangan bulat positif : ";
	cin>>num;
	
	for(i=2;i<=num/2;i++){
		if(num%i==0){
			isPrime = false;
			break;
		}
	}
	cout<<"\n";
	if(isPrime)
		cout<<num<<" adalah bilangan prima";
	else
		cout<<num<<" bukan bilangan prima";
	return 0;
}
