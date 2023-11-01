#ifndef SAYILAR_H
#define SAYILAR_H
#include "./Sayi.hpp"
using namespace std;
/** 
* @file main.cpp;
* @description uygulamimizda sayi degerlerini tutacagimiz linkedlist basligi
* @course 2C
* @assignment 1
* @date 29.10.2023
* @author Batuhan Bahayetmez - g211210043 / batuhan.bahayetmez@ogr.sakarya.edu.tr
*/

class Sayilar
{
private:
   Sayi* first;
   int lenght;
public:
    Sayilar();
    ~Sayilar();
    void add(Sayi* sayi);
    void printList();
    void hepsiIcinTekBasamaklariAyarla();
    void hepsiIcinBasamaklariTersle();
    void enBuyukYazdir();
    void enBuyukSayiCikar();
};


#endif