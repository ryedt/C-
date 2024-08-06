#include <iostream>
using namespace std;

void findPair(int arr[], int n, int sum)
{
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                cout << "Pasangan bilangan yang ditemukan: " << arr[i] << " dan " << arr[j] << endl;
                return;
            }
        }
    }
    cout << "Tidak ditemukan pasangan bilangan yang menghasilkan jumlah " << sum << endl;
}

int main()
{
    int arr[] = {3, 5, 7, 9, 11, 13};
    int sum = 16;
    int n = sizeof(arr)/sizeof(arr[0]);
    
    findPair(arr, n, sum);
    
    return 0;
}
