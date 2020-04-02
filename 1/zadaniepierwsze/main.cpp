#include "zoo.h"

using namespace std;

Zwierze z1 ("pies" , 3);

int main()
{
    cout << endl << "ROZPOCZECIE MAINA" << endl << endl;

    Zwierze z2 = Zwierze(); //wywoalnei konstruktora domyslnego
    Zwierze z4 ("panda" , 12);

    cout << endl;
    {
        Zwierze z10("mysz" , 2);
        Zwierze z11("lis" , 2);
    }
    cout << endl;

    Zwierze z8("slon" , 5);
    // kiedy piszemy new to destrukot trzeba
    Zwierze* w1= new Zwierze();//domyslny
    Zwierze* w2= new Zwierze("kot", 3);//parametryczny
    delete w1;

    cout << endl << "ZAKONCZENIE MAINA" << endl << endl;
    return 0;
}

Zwierze z3("osiol" , 4);
