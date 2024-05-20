#include <iostream>

using namespace std;

void wyswietl(string tab[][2], int wielkosc, string firma="997") {
    if (firma != "997") {
        for (int i=0; i<wielkosc; i++) {
            if (tab[i][0] == firma) {
                cout << tab[i][0] << ": " << tab[i][1] << endl;
            }
        }
    } else {
        for (int i=0; i<wielkosc; i++) {
            cout << tab[i][0] << ": " << tab[i][1] << endl;
        }
    }
}
string* znajdz_maks(string tab[][2], int wielkosc) {
    int maks_s = 0;
    int maks_i = 0;
    for (int i=0; i<wielkosc; i++) {
        if (maks_s < tab[i][1].length()) {
            maks_i = i;
            maks_s = tab[i][1].length();
        }
    }
    return &tab[maks_i][1];
}

int main()
{
    int ile = 0;
    cout << "ile reklam?: ";
    cin >> ile;
    string reklamy[ile+2][2];

    for (int i = 0; i < ile; i++) {
        string re, opis;
        cout << "podaj reklamodawce: ";
        cin >> re;
        cout << "podaj zawartosc reklamy: ";
        cin >> opis;
        reklamy[i][0] = re;
        reklamy[i][1] = opis;
    }
    reklamy[ile][0] = "orange";
    reklamy[ile][1] = "swiateczna";
    reklamy[ile+1][0] = "kino";
    reklamy[ile+1][1] = "reklama filmu";

    cout << znajdz_maks(reklamy, ile+2) << endl;
    wyswietl(reklamy, ile+2);
    return 0;
}
