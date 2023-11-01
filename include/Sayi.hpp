#ifndef SAYI_H
#define SAYI_H
#include "./Basamak.hpp"
/** 
* @file Basamak.cpp;
* @description uygulamamizin Basamaklari bir ara tutan Sayilar classina ait LinkedList govdesi
* @course 2C
* @assignment 1
* @date 28.10.2023
* @author Batuhan Bahayetmez - g211210043 / batuhan.bahayetmez@ogr.sakarya.edu.tr
*/
class Sayi
{
private:
    Basamak* first;
    int length;
    Sayi* next;
public:
    Sayi();
     ~Sayi();
    void add(int number);
    void removeLastNode();
    void printNumber();
    int calculateNumber();
    void setNext(Sayi* sayi);
    Sayi* getNext() const;
    void tekleriBasaAl();
    void basamaklariTersle();
    void enBuyukYazdr();
};
#endif 