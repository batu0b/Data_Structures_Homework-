#ifndef SAYILARLISTESI_H
#define SAYILARLISTESI_H
#include "./Sayi.hpp"
/** 
* @file main.cpp;
* @description uygulamimizda sayi degerlerini tutacagimiz linkedlist basligi
* @course 2C
* @assignment 1
* @date 29.10.2023
* @author Batuhan Bahayetmez - g211210043 / batuhan.bahayetmez@ogr.sakarya.edu.tr
*/

class SayilarListesi
{
private:
   Sayi* first;
   int lenght;
public:
    SayilarListesi();
    ~SayilarListesi();
    void add(Sayi* sayi);
    void printList();
    void hepsiIcinTekBasamaklariAyarla();
    void hepsiIcinBasamaklariTersle();
    void enBuyukSayiCikar();
};


#endif