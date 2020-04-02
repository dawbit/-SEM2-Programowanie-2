#include "klasy.h"

using namespace std;

int main()
{
    KlasaBazowa b;
    KlasaPochodna p;
    KlasaDrugaPochodna pp;
    int x;

    //baza
    x=b.miesiac;
    x=b.wiek;
    x=b.rok;

    //pochodna
    x=p.pmiesiac;
    x=p.pwiek;
    x=p.prok;
    //dziedziczenie z basy
    //x=p.miesiac;
    //x=p.wiek;
    //x=p.rok;

    //druga pochodna
    x=pp.ppmiesiac;
    x=pp.ppwiek;
    x=pp.pprok;
    //dziedziczenie z basy
    //x=pp.miesiac;
    //x=pp.wiek;
    //x=pp.rok;
}
