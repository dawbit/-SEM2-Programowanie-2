#include <iostream>
using namespace std;

class Obiekt
{
public:
    Obiekt();
    virtual void Pole() = 0;

};

class Kolo:public Obiekt
{
public:
int r;
Kolo();
virtual void Pole();
};

class Kwadrat:public Obiekt
{
public:
int a;
Kwadrat();
virtual void Pole();
};

class Walec:public Kolo
{
    public:
int hw;
Walec();
virtual void Pole();
};

class Szescian:public Kwadrat
{
public:
Szescian();
virtual void Pole();
};
