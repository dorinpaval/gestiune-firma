#include <iostream>
#include <fstream>
#include <cstdio>
#include <string.h>
#include <cstdlib>
#include <conio.h>
#include <cstring>
#include "fisier.h"
#include <windows.h>
using namespace std;


void meniu()
{

    system("color b1");
    system("cls");
}
void info()
{
    cout<<endl<<endl<<"Program realizat de:"<<endl<<endl<<"Paval Stelica-Dorinel "<<endl<<"Grupa 3143A";
    getch();
    system("cls");
}

void meniu2()

{
    articol a;
    factura fact;
    system("color b1");
    system("cls");

    bool decid1=false, decid2 = false, decid3 = false, decid4=false, decid5=false, decid6=false, decid7=false, decid8=false;
    int cont = 0;
    char c;
    int main();
    cout << "\n\n\n\t\t";
    do
    {
    system("cls");
     cout << "\t\t\t---Gestiune Firme In/Out---\t\t\n\n\n\n";
	if(cont == 0)
		{
		decid2 = false;
        decid3 = false;
        decid4 = false;
        decid5 = false;
        decid6 = false;
        decid7 = false;
        decid8 = false;
		cout << "\t\t       "<<(char)26<<"|";
		if(decid1)
		{
            a.nr=0;
            a.citireFis("Magazie.dat");
            a.afisareFis();
		}
		decid1 = false;
		}
	else
	cout <<"\t\t       ";
        cout<<"Vizualizare produse magazie"<<endl;

	if(cont == 1)
		{
		decid1 = false;
        decid3 = false;
        decid4 = false;
        decid5 = false;
        decid6 = false;
        decid7 = false;
        decid8 = false;
		cout << "\t\t       "<<(char)26<<"|";
		if(decid2)
        {
            a.nr=0;
            a.citireFis("Intrari.dat");
            a.afisareFis();
        }
		decid2 = false;
		}
	else cout <<"\t\t       ";
	cout << "Vizualizare intrari" << endl;
	if(cont == 2)
		{
		decid1 = false;
        decid2 = false;
        decid4 = false;
        decid5 = false;
        decid6 = false;
        decid7 = false;
        decid8 = false;
		cout << "\t\t       "<<(char)26<<"|";
		if(decid3)
           {
               a.nr=0;
                    a.citireFis("Iesiri.dat");
                    a.afisareFis();
           }
		decid3 = false;
		}
	else cout <<"\t\t       ";
        cout<<"Vizualizare iesiri"<<endl;
    	if(cont == 3)
		{
		decid1 = false;
        decid2 = false;
        decid3 = false;
        decid5 = false;
        decid6 = false;
        decid7 = false;
        decid8 = false;
		cout << "\t\t       "<<(char)26<<"|";
		if(decid4)
           {
               a.nr=0;
                    a.citireFis("Magazie.dat");
                    a.cautareCod();
           }
		decid4 = false;
		}
	else cout <<"\t\t       ";
        cout<<"Cautare dupa cod"<<endl;
    if(cont == 4)
		{
		decid1 = false;
        decid2 = false;
        decid3 = false;
        decid4 = false;
        decid6 = false;
        decid7 = false;
        decid8 = false;
		cout << "\t\t       "<<(char)26<<"|";
		if(decid5)
           {
                a.nr=0;
                    a.citireFis("Magazie.dat");
                    a.cautareNume();
           }
		decid5 = false;
		}
	else cout <<"\t\t       ";
       cout<<"Cautare dupa nume"<<endl;



       if(cont == 5)
		{
		decid1 = false;
        decid2 = false;
        decid3 = false;
        decid4 = false;
        decid5 = false;
        decid7 = false;
        decid8 = false;
		cout << "\t\t       "<<(char)26<<"|";
		if(decid6)
           {
                    fact.contor=1;
                    a.nr=0;
                    a.iesire();
           }
		decid6 = false;
		}
	else cout <<"\t\t       ";
    cout<<"Cumparare produse"<<endl;


     if(cont == 6)
		{
		decid1 = false;
        decid2 = false;
        decid3 = false;
        decid4 = false;
        decid5 = false;
        decid6 = false;
        decid8 = false;
		cout << "\t\t       "<<(char)26<<"|";
		if(decid7)
           {

                    a.nr=0;
                    fact.contor=1;
                    a.intrare();
           }
		decid7 = false;
		}
	else cout <<"\t\t       ";
    cout<<"Inregistrarea facturilor\n";

    if(cont == 7)
		{
		decid1 = false;
        decid2 = false;
        decid3 = false;
        decid4 = false;
        decid5 = false;
        decid6 = false;
        decid7 = false;
		cout << "\t\t       "<<(char)26<<"|";
		if(decid8)
           {
                 system("cls");
                 cout<<main();
           }
		decid8 = false;

		}
	else cout <<"\t\t      ";
    cout<<" Revenire meniu anterior ";
    c = getch();
    switch(c)
        {

            case 72: cont--;
                    if(cont < 0)
                        cont = 7;
                    break;
            case 80: cont++;
                    if(cont > 7)
                        cont = 0;
                    break;
            case 13: decid1 = true;
                     decid2 = true;
                     decid3 = true;
                     decid4 = true;
                     decid5 = true;
                     decid6 = true;
                     decid7 = true;
                     decid8 = true;

                      break ;

        }

    }
    while(c != 27);
    //getch();
}

void articol::cautareCod()//Cautarea produsului dupa codul deja introdus in baza de date, iar daca acesta nu este gasit va aparea mesajul"Codul introdus nu se gaseste in baza de date!"
{
    int x,y=0,t=0;
    system("cls");
    cout<<"\nIntroduceti codul produsului:   ";
    cin>>x;
    for(int i=0; i<nr; i++)
        if(x==p[i].cod)
        {
            y=1;
            t=i;
        }
    if(y)
        cout<<p[t].cod<<"   "<<p[t].nume<<"   "<<p[t].producator<<"   "<<p[t].cantitate<<"   "<<p[t].UM<<"   "<<p[t].pret;
    else
        cout<<"Codul introdus nu se gaseste in baza de date!\n\n";

    getch();

}
void articol::cautareNume()//Permite cautarea produsului dupa nume.
{
    char s21[NMAX];
    int l=0,y=0;

    system("cls");
    cout<<"\nIntroduceti numele produsului:   ";
    cin>>s21;
    l=strlen(s21);
    for(int i=0; i<nr; i++)

        if(!strncmp(p[i].nume,s21,l))
        {
            cout<<p[i].cod<<"  "<<p[i].nume<<"   "<<p[i].producator<<"    "<<p[i].cantitate<<"    "<<p[i].pret<<"  lei/UM"<<endl;
            y=1;
        }


    if(!y)
        cout<<"\nAcest produs nu exista!";

    getch();

}
void articol::citireFis(char *sir)//Daca produsul exista in baza de date el va fi afisat, altfel va aparea mesajul " Fisier innexistent".
{
    ifstream f;
    f.open(sir,ios::binary);
    if(f.is_open())
    {
        ok=1;
        while(f.good())
        {
            f>>p[nr].cod>>p[nr].nume>>p[nr].producator>>p[nr].UM>>p[nr].cantitate>>p[nr].pret>>p[nr].pretTotal;
            nr++;
        }
        f.close();
    }
    else
    {
        cout<<endl<<"Fisier inexistent";
        ok=0;
    }

}
void articol::afisareFis()//Afiseaza o lista cu toate produsele existente.

{
    int j=0,t=1;
    if(ok==1)
    {

        cout<<endl<<"  cod  "<<"     nume   "<<"   producator    "<<"  U.M.  "<<" cantitate   "<<"pret/U.M.   "<<"Pret Total"<<endl<<endl;
        for(int i=0; i<nr; i++)
        {
            cout.width(4);
            cout<<p[i].cod;
            cout.width(12);
            cout<<p[i].nume;
            cout.width(17);
            cout<<p[i].producator;
            cout.width(7);
            cout<<p[i].UM;
            cout.width(10);
            cout<<p[i].cantitate;
            cout.width(12);
            cout<<p[i].pret;
            cout.width(13);
            cout<<p[i].pretTotal<<endl;
            j++;
            if(j%10==0)
            {
                cout<<endl<<endl<<"pagina "<<t;
                t++;
                getch();
                system("cls");
            }


        }
    }
    getch();
}
void articol::intrare()// Permite inregistrarea unor noi produse intr-un fisier "Intrari.dat". Acestea vor fi memorate dupa cod, nume, cantitate,
// unitate de masura, pret, pe baza facturii primite urmarind introducerea unor elemente speficice unei facturi.
// De asemenea pe langa datele facturii se vor cere si datele cu privire la pret ( ramane acelasi sau pretul va fi schimbat?) acesta fiind memorat atat in fisierul "Magazie.dat" cat si in "Intrari.dat".
{
    int x,val=0,elem=0,bine,nou,check=1;
    float kg,pr;
    produs v[NMAX];
    factura fact;
    fact.total=0;
    char seria[5],s[30],sir[30],data[12];
    long nrs;
    ofstream h("Intrari.dat",ios::binary | ios::app);
    citireFis("Magazie.dat");
    fact.citireIntrari("Facturi-In.txt");
    cout<<"\nIntroduceti data facturii:  \n(ex.  |zz.ll.aaaa| )\n";
    cin>>data;
    cout<<"\nIntroduceti seria facturii:";
    cin>>seria;
    cout<<"\nIntroduceti numarul facturii:";
    cin>>nrs;
    strcpy(fact.data,data);
    strcpy(fact.serie,seria);
    fact.number=nrs;
    fact.contor=1;

    fact.salvIntrari();
    fact.factIn(seria,nrs,data);
    cout<<"\nCate produse doriti sa introduceti? ";
    cin>>x;
    for(int j=0; j<x; j++)
    {
        cout<<"\nIntroduceti numele produsului:  ";
        cin>>s;
        cout<<"\nIntroduceti numele producatorului:  ";
        cin>>sir;
        cout<<"\nIntroduceti cantitatea:";
        cin>>kg;
        nou=0;

        for(int i=0; i<nr; i++)
        {
            if(!(strcmp(p[i].nume,s))&&!(strcmp(p[i].producator,sir)))
            {
                val++;
                cout<<"valoare";
                bine=i;
            }
        }
        if(val)
        {
            p[bine].cantitate+=kg;

            cout<<"\nPastrati acelasi pret?\n(1-DA   0-NU)";
            int z;
            cin>>z;
            if(!z)
            {
                cout<<"\nNoul pret:";
                cin>>pr;
                p[bine].pret=pr;
                p[bine].pretTotal=p[bine].cantitate*pr;
            }
            else
                p[bine].pretTotal=p[bine].cantitate*p[bine].pret;

        }
        else
        {
            do
            {
                cout<<"\nCodul produsului: ";
                cin>>v[elem].cod;
                for(int i=0; i<nr; i++)
                    if(p[i].cod==v[elem].cod)
                    {
                        check=0;
                        break;
                    }
                    else
                    {
                        check=1;
                        break;
                    }

            }
            while(!check);
            strcpy(v[elem].nume,s);
            strcpy(v[elem].producator,sir);
            cout<<"\nUnitatea de masura: ";
            cin>>v[elem].UM;
            cout<<"\nPretul: ";
            cin>>v[elem].pret;
            v[elem].cantitate=kg;

            v[elem].pretTotal=v[elem].pret*kg;
            elem++;
            nou=1;
        }
        if(nou)
        {

            fact.insert(data,v[elem-1],kg);
            h<<endl<<v[elem-1].cod<<' '<<v[elem-1].nume<<' '<<v[elem-1].producator<<' '<<v[elem-1].UM<<' '<<kg<<' '<<v[elem-1].pret<<' '<<v[elem-1].pret*kg;
        }
        else
        {
            fact.insert(data,p[bine],kg);
            h<<endl<<p[bine].cod<<' '<<p[bine].nume<<' '<<p[bine].producator<<' '<<p[bine].UM<<' '<<kg<<' '<<p[bine].pret<<' '<<p[bine].pret*kg;

        }
    }
    h.close();
    fact.totalIn(data);
    ofstream f("Magazie.dat",ios::in | ios::binary | ios::trunc);

    for(int i=0; i<nr; i++)
    {
        f<<endl<<p[i].cod<<' '<<p[i].nume<<' '<<p[i].producator<<' '<<p[i].UM<<' '<<p[i].cantitate<<' '<<p[i].pret<<' '<<p[i].pretTotal;
    }
    f.close();


    if(elem)
    {
        ofstream f("Magazie.dat",ios::in | ios::binary | ios::app);
        for(int b=0; b<elem; b++)
            f<<endl<<v[b].cod<<' '<<v[b].nume<<' '<<v[b].producator<<' '<<v[b].UM<<' '<<v[b].cantitate<<' '<<v[b].pret<<' '<<v[b].pretTotal;

        f.close();

    }

    cout<<"\nOK!";
    getch();

}
void factura::citireIntrari(char *sir)//toate intrarile se vor face cu ajutorul unei facturi. Toate datele caracteristice acesteia vor fi memorate.
{
    ifstream f;
    f.open(sir,ios::in);
    con=0;
    if(f.is_open())
        while(f.good())
            f>>con>>data>>tip>>serie>>number;

    f.close();

}
void factura::salvIntrari()//Intrarile sunt salvate automat intr-un fisier Intrari.dat.
{
    ofstream g;
    g.open("Facturi-In.txt",ios::out | ios::app);

    con++;
    g<<endl<<con<<' '<<data<<' '<<"intrare"<<' '<<serie<<' '<<number;
    g.close();
}
void factura::salviesiri()//Iesirile sunt salvate si ele intr-un fisier text, dar si sub forma unei facturi.
{
    ofstream g;
    g.open("Facturi-Out.txt",ios::out | ios::app);

    con++;
    g<<endl<<con<<' '<<data<<' '<<"iesire"<<' '<<serieiesire<<' '<<nriesire;
    g.close();

}
void factura::factIn(char* serie,long nrs,char* data)//Functia scrie in fisier formatul facturii cu toate elementele specifice acesteia.
{
    ofstream f;
    char conv[15];
    ltoa(nrs,conv,10);
    strcpy(s,data);
    strcat(s,"-");
    strcat(s,serie);
    strcat(s,"-");
    strcat(s,conv);

    f.open(s,ios::out);
    f<<"                     Factura Serie  "<<serie<<"          Nr.    "<<nrs<<endl;
    f<<"                     Data:    "<<data<<endl<<endl;
    f<<"Producator:xxxxxxxxx                                     s.c.G.G.M.srl"<<endl;
    f<<"Adresa: xxxxxxxxxxxxx                                    Adresa: str.Mihai Viteazu,nr.50,Suceava"<<endl;
    f<<"CIF:  xxxxxxxxxxxxxxx                                    CIF/CNP: xxxxxxxxxxxxxxxxxxxxxx"<<endl;
    f<<"Cont: IBAN xxxxxxxxxxxxxx                                Cont:"<<endl;
    f<<"Banca:xxxxxxxxxxxxxxxx                                   Banca:"<<endl;
    f<<endl<<endl<<"_____________________________________________________________________________________________________________"<<endl;
    f<<"Nr.crt    Produse     Producator    Cantitatea   UM    Pret/UM fara TVA    Pret fara TVA     Cota TVA        TVA"<<endl;
    f.close();
}
void factura::insert(char* data,produs p,float kg)//Toate datele transmise de la tastatura vor fi inscriese in factura.
{
    ofstream f;
    float a,t;

    t=p.pret*kg;
    a=9*t/100;
    f.open(s,ios::out | ios::app);
    f<<endl;
    f.width(5);
    f<<contor;
    f.width(10);
    f<<p.nume;
    f.width(14);
    f<<p.producator;
    f.width(8);
    f<<kg;
    f.width(7);
    f<<p.UM;
    f.width(15);
    f<<p.pret;
    f.width(15);
    f<<t;
    f<<"         9%         "<<a;
    contor++;
    total+=(t+a);
    f.close();

}
void factura::totalIn(char* data)// Odata ce am terminat de introduse produsele, pentru a fi completa factura va trebui sa contina si datele delegatului care vor aparea pe aceasta.
{
    ofstream f;
    f.open(s,ios::app);
    char nume[20],prenume[20],buletin[3];
    long n;
    cout<<"Introduecti numele delegatului: ";
    cin>>nume;
    cout<<"Introduecti prenumele delegatului: ";
    cin>>prenume;
    cout<<"Introduceti seria buletinului/cartii de identitate: ";
    cin>>buletin;
    cout<<"Introduceti numarul buletinului/cartii de identitate: ";
    cin>>n;
    f<<endl<<"_____________________________________________________________________________________________________________";
    f<<endl<<endl<<"Semnatura                    | Date privind expeditia    |  Total       |"<<total;
    f<<endl<<"si stampila                  | Numele delegatului........|              |";
    f<<endl<<"furnizorului                 |";
    f.width(15);
    f<<nume<<' ';
    f.width(10);
    f<<prenume;
    f<<" |              |";
    f<<endl<<"                             |Buletin/carte de identitate|_________|_______|";
    f<<endl<<"                             |seria "<<buletin<<"  nr. ";
    f.width(13);
    f<<n;
    f<<"|     Semnatura";
    f<<endl<<"                             |Mijloc de transport........|              de primire";
    f<<endl<<"                             |nr.........................|";
    f<<endl<<"                             |Expedierea s-a efectuat la |";
    f<<endl<<"                             |data de ";
    f.width(17);
    f<<data<<"  | ";
    f<<endl<<"                             |Semnaturile................|";
    f<<endl<<"_____________________________________________________________________________________________________________";
    f.close();
}
void factura::verificare(char* fis)// Se face o verificare a datelor de pe factura.
{
    ifstream f;
    f.open(fis);
    char s1[15],s2[8],s3[6];
    long t;
    int p;
    if(f.is_open())
    {
        while(f.good())
        {
            f>>p>>s1>>s2>>s3>>t;
        }
        nriesire=t+1;

    }
    else
        nriesire=1000003;
    f.close();
    strcpy(serieiesire,"PSD");
}
void factura::factOut()//La fel ca la intrare si iesirile sunt insotite de o factura care memoreaza tot ceea ce iese din firma.
{
    ofstream f;
    char conv[15];
    cout<<"\nIntroduceti data facturii:  \n(ex.  |zz.ll.aaaa| )\n";
    cin>>data;
    ltoa(nriesire,conv,10);
    strcpy(s,data);
    strcat(s,"-");
    strcat(s,serieiesire);
    strcat(s,"-");
    strcat(s,conv);
    f.open(s,ios::out);
    f<<"                     Factura Serie  "<<serieiesire<<"          Nr.    "<<nriesire<<endl;
    f<<"                     Data:    "<<data<<endl<<endl;
    f<<"s.c.G.MIHAI.srl                                         Producator:xxxxxxxxxxx"<<endl;
    f<<"Adresa: str.Calea Nationala,nr.8,Botosani         Adresa: xxxxxxxxxxxxxx"<<endl;
    f<<"CIF:  xxxxxxxxxxxxxxx                                    CIF/CNP: xxxxxxxxxxxxx"<<endl;
    f<<"Cont: IBAN xxxxxxxxxxxxxx                                Cont:xxxxxxxxxxxxxxxxx"<<endl;
    f<<"Banca:xxxxxxxxxxxxxxxx                                   Banca:xxxxxxxxxxxxxxxx"<<endl;
    f<<endl<<endl<<"_____________________________________________________________________________________________________________"<<endl;
    f<<"Nr.crt  Produse   producator Cantitatea   UM  pret/UM fara TVA   pret fara TVA    Cota TVA       TVA"<<endl;
    f.close();

}
void articol::iesire()
{
    factura fact;
    fact.verificare("Facturi-Out.txt");

    fact.contor=1;
    fact.total=0;
    fact.citireIntrari("Facturi-Out.txt");
    fact.factOut();
    fact.salviesiri();
    citireFis("Magazie.dat");

    float kg,ct;
    int c,l,q=0,val,verif,x1=0;
    char numele[NMAX];
    do
    {
        cout<<"\nIntroduceti numele produsului: ";
        cin>>numele;
        l=strlen(numele);
        for(int i=0; i<nr; i++)
        {
            if(!strncmp(p[i].nume,numele,l))
            {
                cout<<p[i].cod<<"  "<<p[i].nume<<"   "<<p[i].producator<<"    "<<p[i].cantitate<<"    "<<p[i].pret<<"  lei/UM"<<endl;
                q=1;
            }

        }
        if(q)
        {
            cout<<"\nIntroduceti codul produsului pe care doriti sa il achizitionati:";
            cin>>c;
            cout<<"\nIntroduceti cantitatea: ";
            cin>>kg;
            for(int i=0; i<nr; i++)
            {
                if(c==p[i].cod && kg<=p[i].cantitate)
                {
                    val=i;
                    x1=1;
                }


            }
            if(x1)
            {
                p[val].cantitate-=kg;
                p[val].pretTotal=p[val].cantitate*p[val].pret;
                ofstream f("Magazie.dat",ios::in | ios::binary | ios::trunc);
                for(int b=0; b<nr; b++)
                    f<<endl<<p[b].cod<<' '<<p[b].nume<<' '<<p[b].producator<<' '<<p[b].UM<<' '<<p[b].cantitate<<' '<<p[b].pret<<' '<<p[b].pretTotal;

                f.close();
                ct=p[val].pret*kg;
                ofstream h("Iesiri.dat",ios::binary | ios::app);
                h<<endl<<p[val].cod<<' '<<p[val].nume<<' '<<p[val].producator<<' '<<p[val].UM<<' '<<kg<<' '<<p[val].pret<<' '<<ct;
                h.close();

                fact.insert(numele,p[val],kg);
                x1=0;
            }
            else
                cout<<"\nAti introdus un cod gresit sau cantitatea este insuficienta!\n\n";
        }
        else
            cout<<"\nAcest produs nu exista!\n\n";
        cout<<"\nDoriti sa cumparati un alt produs?   \n||1-DA    0-NU|| \n\n";
        cin>>verif;
        q=0;
    }
    while(verif);
    fact.totalIn(fact.data);

}
