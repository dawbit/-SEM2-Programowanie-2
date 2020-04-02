#include "klasy.h"


int main()
{
    int x,y,r;
    cout <<" Podaj wspolrzedna srodka kola x" << endl;
    cin >> x;
    cout << " Podaj wspolrzedna srodka kola y" << endl;
    cin >> y;

    do
    {
        cout << "promiec musi byc wiekszy od 0" << endl;
        cout << "podaj dlugosc promienia" << endl;
        cin >> r;
    }
    while(r<=0);

    Kolo kol1(x,y,r);

    int px,py;
    cout << "podaj punkt x" << endl;
    cin >> px;

    cout << "podaj punkt y" << endl;
    cin >> py;

    Punkt pun1(px,py);

    sprawdzian(kol1, pun1);
    return 0;
}
