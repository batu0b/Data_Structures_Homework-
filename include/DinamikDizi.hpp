#ifndef DINAMIKDIZI_H
#define DINAMIKDIZI_H
#include "Sayi.hpp"
/** 
* @file main.cpp;
* @description uygulamimizda say degerlerini dinamik bir sekilde tutacagimiz listenin basligi
* @course 2C
* @assignment 1
* @date 29.10.2023
* @author Batuhan Bahayetmez - g211210043 / batuhan.bahayetmez@ogr.sakarya.edu.tr
*/

class DinamikDizi
{
private:
    int m_boyut;
    int m_kullanilan;
    Sayi* m_adres;
    void genislet(int ekBoyut);

public:
    DinamikDizi(int boyut);
    ~DinamikDizi();
    void ekle(Sayi& sayi);
    void yazdir();
};

#endif 