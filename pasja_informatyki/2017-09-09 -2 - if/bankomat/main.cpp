#include <iostream>

using namespace std;

string PIN; // nie INT, bo gdyby bylo zero na poczatku, to computer pominie je, np. PIN 0123 zostanie zapisane w pamieci jako 123!

int main()
{
    cout << "Witaj w naszym banku!" << endl;
    cout << "Podaj PIN: ";
    cin >> PIN;

    if (PIN=="1729") //zadziala gdy zwraca wartosc TRUE
    {
        cout << "Poprawny PIN" << endl;
    }
    else
    {
        cout << "Niepoprawny PIN!" << endl;
    }

    return 0;
}
