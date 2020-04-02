#include <iostream>

using namespace std;

template<typename T>
T maxxx(const T &a, const T &b, const T &c)
{
if(a>b && a>c) cout << "wartosc max: "<<a;
if(b>a && b>c) cout << "wartosc max: "<<b;
if(c>a && c>b) cout << "wartosc max: "<<c;
}

class Walec
{
public:
template <typename T>
void Pole(const T &r, const T &h);
};

template <typename T>
void Walec::Pole(const T &r, const T &h)
{
    cout << "Pole calkowite walca: " << 3.14*r*r*2+2*3.14*r*h << endl;
}


int main()
{
    Walec w1;
    w1.Pole(3,3);
    maxxx(5,10,15);
    return 0;
}
