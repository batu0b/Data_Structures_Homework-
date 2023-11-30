#include <iostream>
#include "../include/SayilarListesi.hpp"
using namespace std;

/** 
* @file main.cpp;
* @description uygulamimizda sayi degerlerini tutacagimiz linkedlist govdesi
* @course 2C
* @assignment 1
* @date 29.10.2023
* @author Batuhan Bahayetmez - g211210043 / batuhan.bahayetmez@ogr.sakarya.edu.tr
*/

SayilarListesi::SayilarListesi(){
    this->first=nullptr;
    this->lenght=0;
}

SayilarListesi::~SayilarListesi(){
    Sayi* tempNode = this->first;
    while (tempNode != 0)
		{
			Sayi* deleteNode = tempNode;
			tempNode = tempNode->getNext();
			delete deleteNode;
		}
}

void SayilarListesi::add(Sayi* sayi){
    if (first == 0)
		{
			first = sayi;
			return;
		}
        Sayi* tempNode = first;
		while (tempNode->getNext() != 0)
		{
			tempNode = tempNode->getNext();
		}
		tempNode->setNext(sayi);
		this->lenght+=1;
}

void SayilarListesi::printList(){
    Sayi* tempNode = first;
    while (tempNode != 0)
    {
        tempNode->printNumber();
        tempNode = tempNode->getNext();
        cout<<endl<<endl;
    }
    
}

void SayilarListesi::hepsiIcinTekBasamaklariAyarla(){
	Sayi* tempNode = first;
	while (tempNode != 0)
	{
		tempNode->tekleriBasaAl();
		tempNode = tempNode->getNext();
	}
	
}

void SayilarListesi::hepsiIcinBasamaklariTersle(){
	Sayi* tempNode = first;
	while (tempNode != 0)
	{
		tempNode->basamaklariTersle();
		tempNode = tempNode->getNext();
	}
	
}

void SayilarListesi::enBuyukSayiCikar(){
	if (first == nullptr) {
        return;
    }
    Sayi* current = first;
    Sayi* en_buyuk_sayi = first;
    while (current != nullptr) {
        if (current->calculateNumber() > en_buyuk_sayi->calculateNumber()) {
            en_buyuk_sayi = current;
        }
        current = current->getNext();
    }
    if (en_buyuk_sayi == first) {
        first = first->getNext();
    } else {
        current = first;
        while (current->getNext() != en_buyuk_sayi) {
            current = current->getNext();
        }
        current->setNext(en_buyuk_sayi->getNext());
    }
    delete en_buyuk_sayi;
}