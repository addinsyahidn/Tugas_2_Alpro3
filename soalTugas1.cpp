#include <iostream>
using namespace std;

int main(){
    int biaya(0), jam[2];
    string transportasi[2];

    do {
        system("cls");
        cout << "Keberangkatan\t: "; cin >> jam[0];
        cout << "Kepulangan\t: "; cin >> jam[1];
    } while(jam[0] < 1 || jam[1] < 1 || jam[0] > 24 || jam[1] > 24);
    // memastikan agar waktunya ga anomali


    for (int i(0); i <= 1; i++)
    /*
        i berperan sebagai penunjuk keberangkatan atau kepulangan
        dimulai dari 0 (keberangkatan) karena indeks array dari 0 (keberangkatan)
        berhenti di 1 (kepulangngan) karena ukuran array cuman 2 (0, 1)
        ga pake kurawa karena if- else if - else dihitung 1
    */
    if ((jam[i] > 5 && jam[i] < 9) || (jam[i] > 14 && jam[i] < 18))
        // pake && karena batas jam, pake || karena beroperasi di waktu yang lain
            transportasi[i] = "Bus Hijau";
        // dimulai dari Bus Hijau karena yang paling murah (gratis)
        else if(jam[i] > 6 && jam[i] < 19) {
        // else if agar dia ga meriksa lagi kalo dah dapet Bus HIjau (dianggap 1 if-else-if)
            biaya += 5000;
            transportasi[i] = "Bus Linus";
        // Bus Linus karena yang ke-2 termurah
        }
        else {
        // else karena beroperasi full (1-24)
            biaya += 10000;
            transportasi[i] = "Angkot";
        // Angkot karena termahal
        }

    cout << "Keberangkatan\t: " << transportasi[0] << endl;
    cout << "Kepulangan\t: " << transportasi[1] << endl;
    cout << "Total Biaya\t: " << biaya;
    return 0;
}
