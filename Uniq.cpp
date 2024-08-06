#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 2, 3, 5, 6, 1}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    bool unique;

    for (int i = 0; i < n; i++) {
        unique = true;

        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                unique = false;
                break;
            }
        }

        if (unique) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
