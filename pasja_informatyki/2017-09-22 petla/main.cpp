//Program pyta się o imię oraz o liczbę całkowitą, a następnie wyświetla tyle razy dane imię na ekranie.
#include <iostream>

using namespace std;

string imie;
int n;

int main()
{
    cout << "Prosze podac imie: " << endl;
    cin >> imie;
    cout << "Ile razy wyswietlic imie? Podaj liczbe calkowita: " << endl;
    cin >> n;

    // Sprawdzenie
    cout << "Imie: " << imie << endl;
    cout << "Liczba: " << n << endl;

    if (n>=1)
        {
            cout << "Wykonje!" << endl;

            for (int i=1; i<=n; ++i) //wykonuje tak dlugo, jak spelniony (prawdziwy) jest warunek i<=n
            cout << i << ". " << imie << endl;

        }

    else
        cout << "Podano zle dane. Koniec programu." << endl;

    return 0;
}
