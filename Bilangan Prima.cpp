#include <iostream>
#include <cmath>
using namespace std;
 
//fungsi untuk menentukan apakah suatu bilangan prima atau tidak
bool isPrime(int n){
	if(n <= 1){
		return false;
		
	}
	for(int i=2 ; i<=sqrt(n) ; i++){
		if(n% i==0){
			return false;
		}
	}
	return true;
}

//fungsi untuk menampilkan semua bilangan prima yang lebih kecil atau sama dengan n
void printPrimes(int n){
	for(int i=2 ; i<=n ; i++){
		if(isPrime(i)){
			cout<<i<<" ";
		}
	}
}

//fungsi utama
int main(){
	int n = 30;
	cout<<"Bilangan prima yang lebih kecil atau sama dengen "<<n<<" adalah : ";
	printPrimes(n);
	cout<<endl;
	return 0;
}
