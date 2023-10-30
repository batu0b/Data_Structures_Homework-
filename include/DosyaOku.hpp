#ifndef DOSYAOKU_H
#define DOSYAOKU_H
#include <string>
#include "./Sayilar.hpp"
using namespace std;
/** 
* @file DosyaOku.hpp;
* @description Verilen dosyayi okumasini saglayan class basligi
* @course 2C
* @assignment 1
* @date 26.10.2023
* @author Batuhan Bahayetmez - g211210043 / batuhan.bahayetmez@ogr.sakarya.edu.tr
*/

class DosyaOku {
public:
    DosyaOku(const string& dosyaAdi);
    void dosyaOku( Sayilar& dizi) const;

private:
   string dosyaAdi;
};

#endif