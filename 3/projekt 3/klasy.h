#include <iostream>
using namespace std;

class KlasaBazowa
{
public:
int miesiac;

private:
int wiek;

protected:
int rok;
};

class KlasaPochodna:private KlasaBazowa
{
public:
int pmiesiac;

private:
int pwiek;

protected:
int prok;
};

class KlasaDrugaPochodna:public KlasaPochodna
{
public:
void metoda();
int ppmiesiac;

private:
int ppwiek;

protected:
int pprok;
};
