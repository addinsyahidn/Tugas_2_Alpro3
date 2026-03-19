#include <iostream>
using namespace std;

int main() {
    float ip, gaji;
    
    cout << "Masukkan IP: ";
    cin >> ip;
    cout << "Masukkan Gaji Orang Tua (dalam juta): ";
    cin >> gaji;

    if (ip >= 3.5) {
        cout << "Kategori Beasiswa: 4" << endl;
    }
    else if (gaji < 1 && ip < 3.5) {
        cout << "Kategori Beasiswa: 1" << endl;
    }
    else if (gaji >= 1 && gaji <= 5 && ip < 3.5) {
        if (ip >= 2.0) {
            cout << "Kategori Beasiswa: 3" << endl;
        } else {
            cout << "Kategori Beasiswa: 2" << endl;
        }
    }
    else {
        cout << "Tidak berhak mendapatkan beasiswa" << endl;
    }

    return 0;
}
