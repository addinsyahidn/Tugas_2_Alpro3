#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {   
    string bil;
    int bilint[2]{0, 0}, count(0);
    bool alfa, beta;
    // saya buat variabel bool biar ga pening liatnya
    do {
        system("cls");
        cout << "bilangan 4 digit: ";
        cin >> bil;
    } while(bil.length() != 4);
    // mastikan input 4 digit

    for (int i(0); i <= 2; i++)
    // for dari 0 - 2 (3 digit) karena ada 4 digit jadi pas i + 1 ga kelebihan
        if (bil[i] < bil[i + 1]) count++;
        // kalo index selatjutnya lebih besar, +1
        else if (bil[i] > bil[i + 1]) count--;
        /*
        kalo lebih kecil -1
        kalo sama ga dipedulikan, biar count 3 atau -3 hanya ketika berurutan
        */

    bilint[0] = stoi(bil.substr(0, 2));
    // ubah ke int dari string index 1, sebanyak 2 char
    bilint[1] = stoi(bil.substr(2));
    // ubah ke int dari string index 2, ga dibatasin jumlah charnya

    alfa = count / 3;
    // kalau count ga sampe 3/-3 bakal (+/-) 0,... karena int desimal bakal dibuang jadi sisa 0 (false)
    beta = abs(bilint[0] - bilint[1]) > 29;
    // pake abs biar yang dilihat selisihnya saja dan 2 digit mana yang lebih besar ga dilihat

    if (alfa && beta) cout << "bilangan "<< bil <<" adalah gamma";
    // gamma dulu karena mencakupi 2 status
    else if (alfa) cout << "bilangan "<< bil <<" adalah alfa";
    else if (beta) cout << "bilangan "<< bil <<" adalah beta";
    // alfa dan beta punya status khusus makanya else if
    else cout << "bilangan "<< bil <<" adalah delta";
    // delta nilai yang ga memenuhi lainnya makanya else

    return 0;
} 
