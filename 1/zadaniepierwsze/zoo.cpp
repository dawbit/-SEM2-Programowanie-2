#include "zoo.h"

//domyslny konstruktor
Zwierze::Zwierze()
{
    gatunek = "brak gatunku";
    wiek = 0;

    cout << "konstruktor domyslny " << gatunek << " " << wiek  << endl;
}
//konstruktor parametryczny
Zwierze::Zwierze(string g, int w)
{
    gatunek = g;
    wiek = w;
    cout << "konstruktor parametryczny " << gatunek << " " << wiek << endl;
}


Zwierze::~Zwierze()
{
    cout << "destruktor " << gatunek << " " << wiek<< endl;
}
