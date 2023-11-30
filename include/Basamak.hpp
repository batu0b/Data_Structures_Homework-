#ifndef BASAMAK_H
#define BASAMAK_H
/** 
* @file Basamak.cpp;
* @description uygulamamizin Basamaklari belirttigi Node sinfininin  basligi
* @course 2C
* @assignment 1
* @date 28.10.2023
* @author Batuhan Bahayetmez - g211210043 / batuhan.bahayetmez@ogr.sakarya.edu.tr
*/
class Basamak
{
private:
    int data;
    Basamak* next;
public:
    Basamak(int data);
    Basamak* getNext() const;
    int getData() const;
    void setNext(Basamak* node);
};
#endif
