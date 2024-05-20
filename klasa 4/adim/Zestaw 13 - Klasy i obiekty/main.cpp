#include <iostream>

using namespace std;

class Pudelko {
public:
    int wysokosc;
    int bok_podstawy;

    void oblicz_powierzchnie() {
        cout << 2 * bok_podstawy * bok_podstawy + 4 * wysokosc * bok_podstawy << endl;
    };
    void oblicz_pojemnosc() {
        cout << wysokosc * bok_podstawy * bok_podstawy << endl;
    };
};

class Samochod {
private:
    string nazwa;
    string typ_paliwa;
    int stan_baku = 0;
    int pasazerowie = 0;
    string rejestracja;
public:
    void setter(string naz, string typ_pal, string reje) {
        nazwa = naz;
        typ_paliwa = typ_pal;
        rejestracja = reje;
    }
    void wypisz_info() {
        cout << "nazwa: " << nazwa << endl;
        cout << "typ paliwa: " << typ_paliwa << endl;
        cout << "stan baku: " << stan_baku  << "%"<< endl;
        cout << "pasazerowie: " << pasazerowie << endl;
        cout << "rejestracja: " << rejestracja << endl;
    }
    void zagazuj(int ile) {
        if (typ_paliwa != "LPG" && typ_paliwa != "gaz") {
            cout << "nie mozesz wlac gazu do tego auta!!!" << endl;
            return;
        };
        if (stan_baku+ile > 100) {
            cout << "za duzo tankujesz!! stan baku: " << stan_baku << endl;
            return;
        }
        stan_baku += ile;
    }
    void zatankuj(int ile) {
        if (typ_paliwa != "Diesel") {
            cout << "nie mozesz wlac diesela do tego auta!!!" << endl;
            return;
        };
        if (stan_baku+ile > 100) {
            cout << "za duzo tankujesz!! stan baku: " << stan_baku << endl;
            return;
        }
        stan_baku += ile;

    }
    void wsiadz() {
        if (pasazerowie < 4) {pasazerowie++; return;};
        cout << "pojazd jest pelen!!!" << endl;
    }
    void wysiadz() {
        if (pasazerowie > 0) {pasazerowie--; return;};
        cout << "pojazd jest pusty!!!" << endl;
    }
    void przerejestruj(string r) {
        rejestracja = r;
    }
};

int main()
{
    /*Samochod golfik;
    golfik.setter("golfik", "Diesel", "WOT6969");
    golfik.zatankuj(100);
    golfik.wsiadz();
    golfik.wsiadz();
    golfik.wsiadz();
    golfik.wsiadz();
    golfik.wypisz_info();*/

    Samochod becia;
    becia.setter("becia", "gaz", "EKU RW03");
    becia.zagazuj(99);
    becia.wypisz_info();

    return 0;
}
