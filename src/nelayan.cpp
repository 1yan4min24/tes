#include <iostream>
#include "../include/role.hpp"

void Nelayan::InputTangkapan() {
    Ikan i;
    std::cout << "Masukkan nama ikan: ";
    std::cin >> i.nama;
    std::cout << "Jumlah tangkapan: ";
    std::cin >> i.jumlah;
    std::cout << "Harga dasar: ";
    std::cin >> i.harga;

    tangkapan.push_back(i);
    std::cout << "Tangkapan berhasil dicatat!\n";
}

void Nelayan::LihatPermintaan() {
    std::cout << "\n=== PERMINTAAN PASAR ===\n";
    std::cout << "Ikan Tuna (100kg)\n";
    std::cout << "Ikan Cakalang (150kg)\n";
    std::cout << "Ikan Tongkol (80kg)\n";
}
