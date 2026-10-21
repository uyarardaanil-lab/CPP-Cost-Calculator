#include <iostream>
#include <string>

int main() {
    // Değişken Tanımlamaları
    std::string markaModel;
    double hamFiyat;
    double vergiOrani;

    std::cout << "=== AUZEF & C++ PROJE MAĞAZASI ===" << std::endl;
    std::cout << "Araç / Proje Adı: ";
    std::cin >> markaModel;

    std::cout << "Ham Fiyat (TL): ";
    std::cin >> hamFiyat;

    std::cout << "Vergi Oranı (% cinsinden, örn 20 veya 80): ";
    std::cin >> vergiOrani;

    // Matematiksel Hesaplamalar
    double vergiTutari = hamFiyat * (vergiOrani / 100.0);
    double toplamFiyat = hamFiyat + vergiTutari;

    // Şık Fatura Çıktısı
    std::cout << "\n========================================" << std::endl;
    std::cout << "        HESAPLAMA DETAYLARI            " << std::endl;
    std::cout << "========================================" << std::endl;
    std::cout << "Proje / Makine : " << markaModel << std::endl;
    std::cout << "Ham Fiyat      : " << hamFiyat << " TL" << std::endl;
    std::cout << "Vergi Tutari   : " << vergiTutari << " TL" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    std::cout << "TOPLAM MALİYET : " << toplamFiyat << " TL" << std::endl;
    std::cout << "========================================" << std::endl;
    std::cout << "Durum: Hesaplama Başarılı! 🔥" << std::endl;

    return 0;
}
