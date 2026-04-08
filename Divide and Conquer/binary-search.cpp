#include <bits\stdc++.h>

using namespace std;

int main() {
    int data[] = {-5, -2, 0, 1, 2, 4, 5, 6, 7, 10};
    int panjang = 10;
    int target = 10;
    int kiri = 0;
    int kanan = panjang - 1;

    bool found = false;


    cout << "angka yang dicari: " << target << endl;

    while ( kiri <= kanan ) {
        int tengah = (kiri + kanan) / 2;

        if (data[tengah] == target) {
            cout << "Data ditemukan di index ke: " << tengah << "datanya adalah" << data[tengah] << endl;
            found = true;
            break;
        } else if ( data[tengah] < target ) {
            kiri = tengah + 1;
        } else {
            kanan = tengah - 1;
        }
    }

    if (!found) {
        cout << "Gak ketemu wis, mbuh" << endl;
    }
}