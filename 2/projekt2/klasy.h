#include <iostream>

using namespace std;
class Punkt;
class Kolo
{
public:
    Kolo(int,int,int);
    virtual ~Kolo();
private:
    int x;
    int y;
    int r;

    friend void sprawdzian(Kolo, Punkt );
};

class Punkt
{
    int wspx;
    int wspy;

public:
    Punkt(int,int);
    virtual ~Punkt();
    friend void sprawdzian(Kolo, Punkt);
};

void sprawdzian(Kolo, Punkt);
