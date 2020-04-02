#include <iostream>

using namespace std;

class Przeciazenie
{
    public:
    int a;
    Przeciazenie();

    Przeciazenie(int a1)
    {
        a=a1;
    }

    void wyswietl()
    {
    cout<<"a = " << a << endl;
    }

    int operator--()
    {
        return a - 55;
    }

    int operator/(Przeciazenie &x)
    {
    return a*x.a;
    }
};
Przeciazenie::Przeciazenie()
{
    a=2;

}

int operator*(const Przeciazenie &x2, const Przeciazenie &x3)
{
return x2.a*x3.a;
}

int operator++(const Przeciazenie &x)
{
    return x.a + 55;
}

int main()
{
    int y=100;
    Przeciazenie p1(3);
    Przeciazenie p2(8);
    p1.wyswietl();
    p2.wyswietl();
    cout << endl;

    cout<<"p1 * p2 = "<<p1*p2<<endl;
    cout<<"p1 - 55 = "<<--p1<<endl;
    cout<<"p1 * p2 = "<<p1/p2<<endl;
    cout<<"p1 + 55 = "<<++p1<<endl;



    return 0;
}
