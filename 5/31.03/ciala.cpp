#include "klasy.h"


Obiekt::Obiekt()
{
}

Kolo::Kolo()
{
    r=3;
}

Kwadrat::Kwadrat()
{
    a=2;
}

Walec::Walec()
{
    hw=4;
}

Szescian::Szescian()
{
}

void Kolo::Pole()
{
    cout << " Pole kola wynosi: " << 3.14*r*r << endl;
}

void Kwadrat::Pole()
{
    cout << " Pole kwadratu wynosi: " << a*a << endl;
}

void Walec::Pole()
{
    cout << " Pole walca wynosi: " << 3.14*r*r + 2*3.14*hw << endl;
}

void Szescian::Pole()
{
    cout << " Pole szescianu wynosi: " << 6*a*a << endl;
}
