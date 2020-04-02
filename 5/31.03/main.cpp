#include "klasy.h"

int main()
{
    Obiekt *ob;

    Kolo k1;
    Kwadrat kw1;
    Walec w1;
    Szescian s1;

    ob = &k1;
    ob ->Pole();

    ob = &kw1;
    ob ->Pole();

    ob = &w1;
    ob ->Pole();

    ob = &s1;
    ob ->Pole();

}
