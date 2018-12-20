#include <iostream>
#include <fstream>
#include <cstdio>
#include <conio.h>
#include <cstdlib>
#include <cstring>
#include <windows.h>
#include "fisier.h"


using namespace std;

int main ()
{
    articol a;
    factura fact;
    int k=0;
    a.nr=0;

    fstream f1("Magazie.dat",ios::in | ios::out | ios::binary);
    fstream f2("Iesiri.dat",ios::in | ios::out| ios ::binary);
    fstream f3("Intrari.dat",ios::in | ios::out | ios::binary);
    a.nr=0;
    strcpy(fact.serieiesire,"GGM");

    bool decid1=false, decid2 = false, decid3 = false;
    int cont = 0, i;
    char c;
    cout << "\n\n\n\t\t";
    do
    {
        system("color b1");
        system("cls");
        cout << "\t\t---Gestiune Firme In/Out---\t\t\n\n\n\n";

        if(cont == 0)
        {

            decid2 = false;
            decid3 = false;
            cout << "\t"<<(char)26<<"|";
            if(decid1)
              meniu2();
            decid1 = false;

        }

         cout <<"Executie program\n";

        if(cont == 1)
        {

            decid1 = false;
            decid3 = false;
            cout << "\t"<<(char)26<<"|";
            if(decid2)
                    info();
            decid2 = false;
        }
        cout <<"Info autor\n";


        if(cont == 2)
        {

            decid1 = false;
            decid2 = false;
            cout << "\t"<<(char)26<<"|";
            if(decid3)
            exit(0);

            decid3 = false;
        }
        cout <<"Terminare program\n";
        c=toupper(getch());
        cout << c;
        switch(c)
        {

        case 72:
            cont--;
            if(cont < 0)
                cont = 2;
            break;
        case 80:
            cont++;
            if(cont > 2)
                cont = 0;
            break;
        case 13:
            decid1 = true;
            decid2 = true;
            decid3 = true;
            break;
        }
    }
    while(c != 27);
    return 0;
}
