#include "../include/Sayi.hpp"
#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;
/** 
* @file Basamak.cpp;
* @description uygulamamizin Basamaklari bir ara tutan Sayilar classina ait LinkedList govdesi
* @course 2C
* @assignment 1
* @date 28.10.2023
* @author Batuhan Bahayetmez - g211210043 / batuhan.bahayetmez@ogr.sakarya.edu.tr
*/

Sayi::Sayi(){
    this->first = nullptr;
	this->length=0;
	this->next = nullptr;
}

Sayi::~Sayi(){

    Basamak* tempNode = this->first;
    while (tempNode != 0)
		{
			Basamak* deleteNode = tempNode;
			tempNode = tempNode->getNext();
			delete deleteNode;
		}
   
	
}

void Sayi::add(int number){
        Basamak* newNode = new Basamak(number);
		if (first == 0)
		{
			first = newNode;
			return;
		}
		Basamak* tempNode = first;
		while (tempNode->getNext() != 0)
		{
			tempNode = tempNode->getNext();
		}
		tempNode->setNext(newNode);
		this->length+=1;
}

int Sayi::calculateNumber(){
	Basamak* tempNode = this->first;
	int total= 0;
	for (int i = length; i >= 0; i--)
	{
		total+=(pow(10,i)*(tempNode->getData()));
		tempNode = tempNode->getNext();
	}
	return total;	
} 

void Sayi::removeLastNode(){
    if (first==0)
		{
			return;
		}
		if (first->getNext()==0)
		{
			delete first;
			first = 0;
			return;
		}
		Basamak* tempNode = first;
		while (tempNode->getNext()->getNext()!=0)
		{
			tempNode = tempNode->getNext();
		}
		delete tempNode->getNext();
		tempNode->setNext(0);
		this->length--;
}

void Sayi::printNumber(){
	int lineWidth = 20;
	string line = "----------";
	string hash = "##########";
	string star = "**********";
	int total = calculateNumber();
    Basamak* tempNode = this->first;

	cout<<hash<<setw(lineWidth);
	for (int i = 0; i <= this->length; i++)
	{
		cout<<setw(lineWidth)<<star;
	}
	cout<<endl;
	cout<<"#"<<setw(9)<<this<<"#";
	
 	while (tempNode != 0)
    {
		stringstream ss;
    	ss << tempNode;
    	string tempNodeStr = ss.str();

        cout<<setw(lineWidth-line.length())<<"*"<<setw(9)<<tempNodeStr.substr(tempNodeStr.length() - 3)<<"*";
        tempNode = tempNode->getNext();
    }
	tempNode = this->first;
	cout<<endl;
	cout<<line;
	for (int i = 0; i <= this->length; i++)
	{
		cout<<setw(lineWidth)<<line;
	}
	cout<<endl;
	cout<<"#"<<setw(9)<<total<<"#";
	

	
 	while (tempNode != 0)
    {
        cout<<setw(lineWidth-line.length())<<"*"<<setw(9)<<tempNode->getData()<<"*";
        tempNode = tempNode->getNext();
    }
	
	cout<<endl;
	
	cout<<hash<<setw(lineWidth);
	for (int i = 0; i <= this->length; i++)
	{
		cout<<setw(lineWidth)<<star;
	}
	cout<<endl;

}

void Sayi::setNext(Sayi* sayi){
	this->next = sayi;
}

Sayi* Sayi::getNext() const {
	return this->next;
}






