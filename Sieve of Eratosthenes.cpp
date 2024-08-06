#include <iostream>
#include <vector>
using namespace std;

vector<bool> sieve (int n){
	vector<bool> prime (n+1, true);
	
	prime[0] = false;
	prime[1] = false;
	
	for (int i = 2; i*i <= n; i++) {
		if (prime[i]){
			for (int j = i*i; j <= n; j += i) {
				prime[j] = false;
			}
		}
	}  
	return prime;
}

int main() {
	int n;
	cout<<"Masukkan batas atas bilangan prima: ";
	cin>>n;

	vector<bool> prime = sieve(n);

	cout<<"Bilangan prima antara 1 dan "<< n <<" adalah: ";
	for (int i = 2; i <= n; i++) {
		if (prime[i]) {
			cout<<i<<" ";
		}
	}
	cout<<endl;
	return 0;
}
