#include <iostream>
#include <chrono>

using namespace std;

// Fungsi untuk mencari elemen dalam array menggunakan algoritma pencarian biner
int binarySearch(int arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

int main() {
    int n = 1000000; // Ukuran array
    int arr[n]; // Deklarasi array dengan ukuran n

    // Mengisi array dengan bilangan bulat secara acak
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }

    // Mengurutkan array
    sort(arr, arr + n);

    int x = 50; // Angka yang dicari dalam array
    auto start = high_resolution_clock::now(); // Menghitung waktu awal eksekusi

    int result = binarySearch(arr, 0, n - 1, x); // Memanggil fungsi binarySearch

    auto stop = high_resolution_clock::now(); // Menghitung waktu akhir eksekusi
    auto duration = duration_cast<microseconds>(stop - start); // Menghitung durasi eksekusi dalam mikrosekon

    if (result == -1) {
        cout << "Angka " << x << " tidak ditemukan dalam array" << endl;
    } else {
        cout << "Angka " << x << " ditemukan pada indeks ke-" << result << endl;
    }

    cout << "Waktu eksekusi: " << duration.count() << " mikrosekon" << endl; // Output durasi eksekusi

    return 0;
}
