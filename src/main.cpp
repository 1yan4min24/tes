#include <iostream>
#include "../include/pilih.hpp"

int main() {
    int pilih;
    do {
        std::cout << "\n=== SISTEM PELELANGAN IKAN ===\n";
        std::cout << "1. Menu Nelayan\n";
        std::cout << "2. Menu Tengkulak\n";
        std::cout << "3. Menu Orang Pasar\n";
        std::cout << "0. Keluar\n";
        std::cout << "Pilih: ";
        std::cin >> pilih;

        switch (pilih) {
        case 1: MenuNelayan(); break;
        case 2: MenuTengkulak(); break;
        case 3: MenuOrangPasar(); break;
        }
    } while (pilih != 0);

    return 0;
}
