//Zadanie 1 z olimpiady: Ile cukierkow dla kazdego ucznia w imieniny jednego z nich
#include <iostream>

using namespace std;

int u = 0; // liczba wszystkich uczniow
int c = 0; // liczba cukierokow
int x = 0; // po ile cukierkow dostanie kazdy obdarowywany
int r = 0; // reszta cukierkow


int main()
{
    cout << "Ilu jest wszystkich uczniow w klasie? " << endl;
    cin >> u;
    //cout << "Potwierdzam liczbe uczniow: " << liczba_uczniow << endl << endl;

    cout << "Ile jest wszystkich cukierkow? " << endl;
    cin >> c;
    //cout << "Potwierdzam, ze wszystkich cukierkow jest " << liczba_cukierkow << endl << endl;

    //Obliczenia; kazdy uczen, poza rozdajacym, powinien dostac tyle samo cukierkow; podac po ile cukierkow to bedzie oraz ile zostanie.

    if (u-1<=0){
        cout << "Nie ma komu rozdac! " << endl;
        cout << "Nieprzydzielonych pozostaje " << c << " cukierkow." << endl;
    }
    else {
        x = c/(u-1); //rozdajacy nie dostaje cukierka
        r = c-x*(u-1);

        cout << endl;
        cout << "Zatem, dla kazdego ucznia przypadnie po " << x << " cukierkow." << endl << endl;
        //cout << "Sprawdzenie: liczba uczniow razy liczba cukierkow na glowe (bez obdarowujacego) wynosi: " << x*(u-1) << endl;
        cout << "Natomiast nieprzydzielonych zostanie " << r << " cukierkow." << endl;
        cout << endl;
    }

    return 0;
}
