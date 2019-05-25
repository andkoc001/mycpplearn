//Program wypisuje liczby od 1 do 10
#include <iostream>
#include <unistd.h> // m.in. funkcja sleep
#include <cstdlib>

using namespace std;

int main()
{
    for (int i=1; i<=10; ++i) // petla wykonuje sie tak dlugo jak warunek i<=10 jest TRUE
// pierwszy czlon w nawiasie powyzej MUSI byc typu INT, bo okrela liczbe powtorzen
    cout << i << " " << endl;
    cout << endl;


// dalsze przyklady i cwiczenia
    for (int i=4; i>=-1; --i)
    cout << i << " " << endl;
    cout << endl;

// kolejny przyklad - odliczanie do zera
    for (int i=5; i>=0; --i)
    {
        sleep(1); // Sleep z malej (???) litery, biblioteka unistd.h (w Linuxsie, natomiast w Windowsie - windows.h)
        system("clear");
        cout << i << endl;
    }
    system("clear");
    cout << "KABUM" << endl;
    getwchar();

    return 0;
}
