#include <iostream>
#include "../include/role.hpp"

void Tengkulak::LihatPermintaan() {
    std::cout << "\n=== PERMINTAAN PASAR ===\n";
    std::cout << "Tuna: 100kg\nCakalang: 150kg\nTongkol: 80kg\n";
}

void Tengkulak::LiatLOT() {
    std::cout << "\n=== LOT LELANG ===\n";
    if (lot.empty()) {
        std::cout << "Belum ada ikan di LOT.\n";
        return;
    }

    for (const auto &i : lot) {
        std::cout << "- " << i.nama << " | " << i.jumlah << "kg | Harga: " << i.harga << "\n";
    }
}

void Tengkulak::Lelang() {
    std::cout << "\nNelayan memasukkan hasil tangkapan ke LOT...\n";
    lot.push_back({"Tuna", 50, 30000});
    lot.push_back({"Cakalang", 70, 25000});
    lot.push_back({"Tongkol", 40, 20000});
    std::cout << "LOT Lelang telah dibuat!\n";
}

void Tengkulak::Beli_IkanLelang() {
    if (lot.empty()) {
        std::cout << "Tidak ada ikan di LOT.\n";
        return;
    }

    std::string nama;
    std::cout << "Masukkan nama ikan yang ingin dibeli: ";
    std::cin >> nama;

    for (auto it = lot.begin(); it != lot.end(); ++it) {
        if (it->nama == nama) {
            std::cout << "Berhasil membeli " << nama << " sebanyak " << it->jumlah << "kg\n";
            lot.erase(it);
            return;
        }
    }
    std::cout << "Ikan tidak ditemukan.\n";
}
