#include <iostream>
#include <windows.h>
#include <stdlib.h>

using namespace std;

void gotoxy(int x, int y)
{
    COORD p = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}

int main()
{
    int h;

    cout << "Wprowadz wysokosc choinki: ";
    cin >> h;

    bool czyDrugiPoziom = h >= 6;

    system("cls");

    if (czyDrugiPoziom) {
        int pierwszyPoziom = h / 2;
        int drugiPoziom = h - pierwszyPoziom;

        int dlugosc = drugiPoziom * 2 + 1;
        int start = 0;

        for (int y = h - 1; y >= pierwszyPoziom ; --y) {
            for (int x = start; x < dlugosc; x++) {
                gotoxy(x + 2, y + 2);
                cout << '*';
            }
            dlugosc -= 1;
            start += 1;
        }

        int srodek = dlugosc - 1;

        gotoxy(srodek + 2, h + 2);
        cout << '#';

        dlugosc = 1;
        start = srodek;

        for (int y = 0; y < pierwszyPoziom; y++) {
            for (int x = 0; x < dlugosc; x++) {
                gotoxy(start + 2 + x, y + 2);
                cout << '*';
            }
            start -= 1;
            dlugosc += 2;
        }
    } else {
        int dlugosc = h * 2 - 1;
        int start = 0;

        for (int y = h - 1; y >= 0; --y) {
            for (int x = start; x < dlugosc; x++) {
                gotoxy(x + 2, y + 2);
                cout << '*';

                if (y == 0) {
                    gotoxy(x + 2, h + 2);
                    cout << '#';
                }
            }
            dlugosc -= 1;
            start += 1;
        }
    }

    gotoxy(0, h + 3);

    cout << endl;

    return 0;
}
