#include "../include/Basamak.hpp"
#include <iostream>
using namespace std;
/** 
* @file Basamak.cpp;
* @description uygulamamizin Basamaklari belirttigi Node sinfinin metodlarini yazdigimiz govde
* @course 2C
* @assignment 1
* @date 28.10.2023
* @author Batuhan Bahayetmez - g211210043 / batuhan.bahayetmez@ogr.sakarya.edu.tr
*/

Basamak::Basamak(int data){
    this->data = data;
    this->next = nullptr;
}

int Basamak::getData() const{
    return this->data;
}

Basamak* Basamak::getNext() const {
    return this->next;
}

void Basamak::setNext(Basamak* node) {
    this->next = node;
}