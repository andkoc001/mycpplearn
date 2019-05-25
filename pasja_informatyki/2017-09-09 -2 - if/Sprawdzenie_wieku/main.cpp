//Program sprawdza czy podany wiek jest w przedzialach: 0-18, 19-34, 35+
#include <iostream>

using namespace std;

int wiek;

int main()
{
    cout << "Ile masz lat :" << endl;
    cin >> wiek;

    if (wiek<18)
    {
        cout << "Nie jestes pelnoletni i nie mozesz zostac prezydentem." << endl;
    }
    else if ((wiek>=18) && (wiek<34)) // samo IF moze dac zly wynik - w serii IF-ow kazdy warunek jest sprawdzany, a dla ELSE IF - tylko do pierwszej wartosci TRUE, a wiec ELSE IF jest szybszy
    {
        cout << "Jestes pelnoletni, ale nie mozesz zostac prezydentem." << endl;
    }
    else
    {
        cout << "Jestes pelnoletni i mozesz zostac prezydentem." << endl;
    }

    return 0;
}
