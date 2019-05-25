#include <iostream>

using namespace std;

string login, haslo;

int main()
{
    cout << "Podaj login: ";
    cin >> login;
    cout << "Podaj haslo: ";
    cin >> haslo;

    //cout << login + " " + haslo; //sprawdzenie

    if ((login=="admin") && (haslo=="szarlotka")) // zwraca wartosc TRUE (a wiec wykonuje polecenia ), gdy oba warunki sa spelnione
    {
        cout << "Login i haslo poprawne - udalo sie zalogowac." << endl;
    }
    else
    {
        cout << "Wprowadzono niepoprawne dane - nie udalo sie zalogowac!" << endl;
    }

    return 0;
}
