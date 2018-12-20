#define NMAX 50
class produs
{
public:
    int cod;
    float pret,pretTotal,cantitate;
    char nume[30],producator[30],UM[10];
} ;
class articol
{
public:
    produs p[NMAX];
    int nr,ok;
    void citireFis(char *);
    void afisareFis();
    void intrare();
    void iesire();
    void cautareCod();
    void cautareNume();

};
class factura
{
public:
    articol art[NMAX];
    char serie[5],serieiesire[5],data[12],tip[15],s[NMAX];//intrare sau iesire
    long number,nriesire;
    int contor,con;
    float total;
    void salvIntrari();
    void citireIntrari(char*);
    void factIn(char*,long,char*);
    void insert(char*,produs p,float);
    void totalIn(char*);
    void factOut();
    void verificare(char*);
    void salviesiri();
};
void meniu();
void info();
void meniu2();
void repede();
