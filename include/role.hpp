#pragma once
#include <vector>
#include "ikan.hpp"

class Nelayan {
public:
    std::vector<Ikan> tangkapan;
    void InputTangkapan();
    void LihatPermintaan();
};

class Tengkulak {
public:
    std::vector<Ikan> lot; 
    void LihatPermintaan();
    void LiatLOT();
    void Lelang();
    void Beli_IkanLelang();
};

class OrangPasar {
public:
    void InformasiIkan();
    void Beli_Ikan();
    void Jual_Ikan();
};
