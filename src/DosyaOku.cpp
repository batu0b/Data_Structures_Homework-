#include "../include/DosyaOku.hpp"
#include <iostream>
#include <fstream>
#include "../include/Sayilar.hpp"
#include "../include/Sayi.hpp"
using namespace std;

/** 
* @file DosyaOku.cpp;
* @description Verilen dosyayi okumasini saglayan class govdesi
* @course 2C
* @assignment 1
* @date 26.10.2023
* @author Batuhan Bahayetmez - g211210043 / batuhan.bahayetmez@ogr.sakarya.edu.tr
*/

DosyaOku::DosyaOku(const string& dosyaAdi) : dosyaAdi(dosyaAdi) {}

void DosyaOku::dosyaOku(Sayilar& dizi) const {
    ifstream file(dosyaAdi);
    if (file.is_open()) {
        int number;
        while (file >> number) {
            Sayi* sayi= new Sayi();
            string numberStr = to_string(number);
                for (char c : numberStr) {
                    if (isdigit(c)) {
                        int num = atoi(&c);
                        sayi->add(num);
                    }
                }
                
                dizi.add(sayi);
        }
        file.close();
    } else {
       cout << "Dosya açılamadı: " << dosyaAdi << endl;
    }
}