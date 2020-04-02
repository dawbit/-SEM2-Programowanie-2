#include <iostream>
#include<string>
#include<cmath>
using namespace std;
double Dzielenie(double, double);
int Modulo(int, int);

int main()
{
    int x,y;
    cout << "Dzielenie" <<endl;
    cout << "Podaj x:" << endl;
    cin >>x;
    cout << "Podaj y:" << endl;
    cin >> y;

    try
    {
    Dzielenie(x,y);
    cout << "Wynik dzielenia: " << Dzielenie(x,y)<<endl;
    }
    catch(string wyjatek_dzielenia)
    {
        cout << "Wyjatek: " <<wyjatek_dzielenia<<endl;
    }
    cin.get();


    cout << "Modulo" <<endl;
    cout << "Podaj x:" << endl;
    cin >>x;
    cout << "Podaj y:" << endl;
    cin >> y;

    try
    {
    Modulo(x,y);
    cout << "Wynik modulo: " << Modulo(x,y) << endl;
    }
    catch(string wyjatek_modulo)
    {
        cout << "Wyjatek: " <<wyjatek_modulo <<endl;
    }
    cin.get();
    return 0;
}

double Dzielenie(double a, double b)
{
    if(b==0)
    {
        string wyjatek = "dzielenie przez zero !";
        throw wyjatek;
    }
    return a/b;
}

int Modulo(int c, int d)
{
    if(c==d || d==0 || c%d==0 || d%c==0)
    {
        string wyjatek = "Wprowadzone dane sa rowne, badz sa swoja wielokrotnoscia albo druga liczba jest rowna zero";
        throw wyjatek;
    }
    return c%d;
}
