#include <iostream>
#include "../include/DosyaOku.hpp"
#include "../include/Sayi.hpp"
#include "../include/DinamikDizi.hpp"
#include "../include/Sayilar.hpp"
using namespace std;

/** 
* @file main.cpp;
* @description uygulamamizin calistigi ana dosya
* @course 2C
* @assignment 1
* @date 26.10.2023
* @author Batuhan Bahayetmez - g211210043 / batuhan.bahayetmez@ogr.sakarya.edu.tr
*/

void clear()
{
#if defined _WIN32
    system("cls");
#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
    system("clear");
#elif defined (__APPLE__)
    system("clear");
#endif
}

void menuGoster(Sayilar& dizi){
    dizi.printList();
    cout<<endl<<endl;
    cout<<"1) TEK BASAMAKLARI BASA AL \n2) BASAMAKLARI TERSLE \n3) EN BUYUK CIKAR \n\nTERCIHINIZ: ";
    int secenek;
    cin>>secenek;
    switch (secenek)
    {
    case 1:
        clear();
        cout<<"Secenek 1"<<endl;
        return menuGoster(dizi);
        break;
    case 2:
        clear();
        cout<<"Secenek 2"<<endl;
         return menuGoster(dizi);
        break;
    case 3:
        clear();
        cout<<"Secenek 3"<<endl;
         return menuGoster(dizi);
        break;
    
    default:
        clear();
        return menuGoster(dizi);
        break;
    }

}


int main()
{
    Sayilar* sayilar = new Sayilar();
    DosyaOku dosya("../sayilar.txt");
    dosya.dosyaOku(*sayilar);
    menuGoster(*sayilar);
    int deger;
    cin>>deger;
    return 0;
}
