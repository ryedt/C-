#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cout << "Masukkan tiga bilangan bulat Pertama: ";
    cin >> a;
    cout << "Masukkan tiga bilangan bulat Kedua: ";
    cin >> b;
    cout << "Masukkan tiga bilangan bulat Ketiga: ";
    cin >> c;
    
    cout << "\n";

    if (a > b) {
        if (a > c) {
            cout << "Bilangan terbesar adalah: " << a << endl;
        } else {
            cout << "Bilangan terbesar adalah: " << c << endl;
        }
    } else {
        if (b > c) {
            cout << "Bilangan terbesar adalah: " << b << endl;
        } else {
            cout << "Bilangan terbesar adalah: " << c << endl;
        }
    }

    return 0;
}
