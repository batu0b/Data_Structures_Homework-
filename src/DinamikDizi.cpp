#include "../include/DinamikDizi.hpp"
#include <iostream>
using namespace std;

//FIXME Dinamik Liste Sil
/** 
* @file main.cpp;
* @description uygulamimizda say degerlerini dinamik bir sekilde tutacagimiz listenin govdesi
* @course 2C
* @assignment 1
* @date 29.10.2023
* @author Batuhan Bahayetmez - g211210043 / batuhan.bahayetmez@ogr.sakarya.edu.tr
*/
DinamikDizi::DinamikDizi(int boyut=5){
    this->m_boyut = boyut;
    this->m_adres = new Sayi[m_boyut];
    this->m_kullanilan=0;
}

DinamikDizi::~DinamikDizi(){
    delete[] this->m_adres;
}

void DinamikDizi::ekle( Sayi& sayi){
    if (m_kullanilan>=m_boyut)
    {
        genislet(m_boyut);
    }
     m_adres[m_kullanilan] = sayi;
     m_kullanilan++;
}

void DinamikDizi::genislet(int ekBoyut){
    Sayi* yeniSayilar= new Sayi[m_boyut + ekBoyut];
        for (int i = 0; i < m_kullanilan; i++) {
            yeniSayilar[i] = m_adres[i];
        }
        m_adres = nullptr;
        m_adres = yeniSayilar;
        m_boyut += ekBoyut;
}

void DinamikDizi::yazdir(){
    for (int i = 0; i < m_kullanilan; i++)
    {
       m_adres[i].printNumber();
       cout<<endl<<endl;
    }
}

