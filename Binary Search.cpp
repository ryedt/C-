#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int key) {
   if (high >= low) {
      int mid = low + (high - low) / 2;
      if (arr[mid] == key)
         return mid;
      if (arr[mid] > key)
         return binarySearch(arr, low, mid - 1, key);
      return binarySearch(arr, mid + 1, high, key);
   }
   return -1;
}

int main() {
   int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
   int n = sizeof(arr) / sizeof(arr[0]);
   int key = 23;
   int result = binarySearch(arr, 0, n - 1, key);
   (result == -1) ? cout << "Element is not present in array"
                  : cout << "Element is present at index " << result;
   return 0;
}
