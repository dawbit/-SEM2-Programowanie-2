#include "klasy.h"

Kolo::Kolo(int  kx=0, int ky=0, int kr=1):x(kx),y(ky),r(kr)
{
}

Kolo::~Kolo()
{
}

Punkt::Punkt(int x=0, int y=0):wspx(x), wspy(y)
{
}

Punkt::~Punkt()
{
}

void sprawdzian(Kolo kol, Punkt punk)
{
    cout << endl << "Punkt lezy: ";
    int wynik = (punk.wspx - kol.x)*(punk.wspx - kol.x) + ((punk.wspy - kol.y)*(punk.wspy - kol.y));


    if(wynik <= (kol.r*kol.r))
    {
        cout << "na okregu";
    }
    else
       cout << "poza okregiem";
}
