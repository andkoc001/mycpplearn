//Program sprawdza po ilu cyklach (godzinach) namnarzania się bakterii ich liczba przekroczy 1 milion.
//W każdym cyklu liczba bakterii podwaja się.
#include <iostream>

using namespace std;

int b=1; // liczba bakterii
int g=1000000; // liczba graniczna (docelowa) bakterii
int h=0; // liczba godzin

int main()
{
    cout << "Podaj poczatakowa liczba bakterii: " << endl;
    cin >> b;
    cout << "Obliczenia dla " << g << " liczby granicznej (docelowej) bakterii. " << endl;

    while (b<=g) // najpierw sprawdzany jest warunek - moze sie okazac, ze petla wcale sie nie wykona! (inaczej jest w DO WHILE)
        {
            b=b*2;
            ++h;
            cout << "Po " << h << " godzin jest " << b << " bakterii. " << endl;
        };

    return 0;
}
