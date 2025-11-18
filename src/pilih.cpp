#include <iostream>
#include "../include/pilih.hpp"
#include "../include/role.hpp"

Nelayan nelayan;
Tengkulak tengkulak;
OrangPasar op;

void MenuNelayan() {
    int pilih;
    do {
        std::cout << "\n=== MENU NELAYAN ===\n";
        std::cout << "1. Input Tangkapan\n";
        std::cout << "2. Lihat Permintaan Pasar\n";
        std::cout << "0. Kembali\n";
        std::cout << "Pilih: ";
        std::cin >> pilih;

        switch (pilih) {
        case 1: nelayan.InputTangkapan(); break;
        case 2: nelayan.LihatPermintaan(); break;
        }
    } while (pilih != 0);
}

void MenuTengkulak() {
    int pilih;
    do {
        std::cout << "\n=== MENU TENGKULAK ===\n";
        std::cout << "1. Lihat Permintaan Pasar\n";
        std::cout << "2. Lihat LOT\n";
        std::cout << "3. Lelang\n";
        std::cout << "4. Beli Ikan Lelang\n";
        std::cout << "0. Kembali\n";
        std::cout << "Pilih: ";
        std::cin >> pilih;

        switch (pilih) {
        case 1: tengkulak.LihatPermintaan(); break;
        case 2: tengkulak.LiatLOT(); break;
        case 3: tengkulak.Lelang(); break;
        case 4: tengkulak.Beli_IkanLelang(); break;
        }
    } while (pilih != 0);
}

void MenuOrangPasar() {
    int pilih;
    do {
        std::cout << "\n=== MENU ORANG PASAR ===\n";
        std::cout << "1. Informasi Ikan\n";
        std::cout << "2. Beli Ikan\n";
        std::cout << "3. Jual Ikan\n";
        std::cout << "0. Kembali\n";
        std::cout << "Pilih: ";
        std::cin >> pilih;

        switch (pilih) {
        case 1: op.InformasiIkan(); break;
        case 2: op.Beli_Ikan(); break;
        case 3: op.Jual_Ikan(); break;
        }
    } while (pilih != 0);
}
