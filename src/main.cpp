#include <iostream>
#include "../include/DosyaOku.hpp"
using namespace std;

/** 
* @file main.cpp;
* @description uygulamamizin calistigi ana dosya
* @course 2C
* @assignment 1
* @date 26.10.2023
* @author Batuhan Bahayetmez - g211210043 / batuhan.bahayetmez@ogr.sakarya.edu.tr
*/
int main();

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

void menuGoster(SayilarListesi& dizi){
    dizi.printList();
    cout<<endl<<endl;
    cout<<"1) TEK BASAMAKLARI BASA AL \n2) BASAMAKLARI TERSLE  \n3) EN BUYUK CIKAR \n4) LISTEYI SIFIRLA \n\nTERCIHINIZ: ";
    int secenek;
    cin>>secenek;
    switch (secenek)
    {
    case 1:
        clear();
        dizi.hepsiIcinTekBasamaklariAyarla();
        cout<<"Secenek 1 SECILDI "<<endl;
        return menuGoster(dizi);
        break;
    case 2:
        clear();
        dizi.hepsiIcinBasamaklariTersle();
        cout<<"Secenek 2 SECILDI "<<endl;
         return menuGoster(dizi);
        break;
    case 3:
        clear();
        dizi.enBuyukSayiCikar();
        cout<<"Secenek 4 SECILDI "<<endl;
        return menuGoster(dizi);
        break;

    case 4:
        clear();
        delete &dizi;
        main();
        break;

    default:
        clear();
        return menuGoster(dizi);
        break;
    }

}

int main()
{
    SayilarListesi* sayilar = new SayilarListesi();
    DosyaOku dosya("../sayilar.txt");
    dosya.dosyaOku(*sayilar);
    menuGoster(*sayilar);
    int deger;
    cin>>deger;
    return 0;
}
