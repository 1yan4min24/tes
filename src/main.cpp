#include <iostream>
#include "../include/pilih.hpp"
using namespace std;

int main() {
    int pilih;
    do {
        cout << "\n=== SISTEM PELELANGAN IKAN ===\n";
        cout << "1. Menu Nelayan\n";
        cout << "2. Menu Tengkulak\n";
        cout << "3. Menu Orang Pasar\n";
        cout << "0. Keluar\n";
        cout << "Pilih: ";
        cin >> pilih;

        switch (pilih) {
        case 1: MenuNelayan(); break;
        case 2: MenuTengkulak(); break;
        case 3: MenuOrangPasar(); break;
        }
    } while (pilih != 0);

    return 0;
}
