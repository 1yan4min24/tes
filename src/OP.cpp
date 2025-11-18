#include <iostream>
#include "../include/role.hpp"

void OrangPasar::InformasiIkan() {
    std::cout << "\n=== INFORMASI IKAN ===\n";
    std::cout << "Tuna, Cakalang, Tongkol tersedia di pelelangan.\n";
}

void OrangPasar::Beli_Ikan() {
    std::string nama;
    std::cout << "Masukkan nama ikan yang ingin dibeli: ";
    std::cin >> nama;
    std::cout << "Anda membeli ikan " << nama << "\n";
}

void OrangPasar::Jual_Ikan() {
    std::string nama;
    int jumlah;
    std::cout << "Nama ikan yang dijual: ";
    std::cin >> nama;
    std::cout << "Jumlah: ";
    std::cin >> jumlah;
    std::cout << "Penjualan ikan " << nama << " berhasil!\n";
}
