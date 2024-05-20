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

class Licznik {
    static int tick;
    Licznik();
public:
    static void dolicz() {tick++;}
    static void odejmij() {tick--;}
    static int odczytaj() {return tick;}
};
int Licznik::tick = 0;

class Samochod {
private:
    string nazwa;
    string typ_paliwa;
    int stan_baku = 0;
    int pasazerowie = 0;
    string rejestracja;
public:
    Samochod(string naz, string typ_pal, string reje) {
        nazwa = naz;
        typ_paliwa = typ_pal;
        rejestracja = reje;
        Licznik::dolicz();
        cout << "dodano samochod" << endl;
    }
    ~Samochod() {
        Licznik::odejmij();
        cout << "usunieto samochod" << endl;
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

class Kebab {
private:
    string pieczywo;
    string mieso;
    string sos;
    string dodatki;
    int stan = 0;
public:
    Kebab(string p, string m, string s, string d):
        pieczywo(p),
        mieso(m),
        sos(s),
        dodatki(d) {};

    ~Kebab() {
        cout << "usunieto kebsika ;-\(\n";
    }

    void piecz(int ile, int temp) {
        stan = ile * temp;
        if (stan<900) {cout << "surowa\n";
            } else if (stan >= 900 && stan < 1200) {cout << "gotowa :D\n";
            } else {cout << "spalona ;-\(\n";};
    };
};

int main()
{
    cout << "licznik na poczatku: " << Licznik::odczytaj() << endl;
    Samochod golfik("golfik", "Diesel", "WOT6969");
    golfik.zatankuj(100);
    golfik.wsiadz();
    golfik.wsiadz();
    golfik.wsiadz();
    golfik.wsiadz();
    golfik.wypisz_info();
    cout << "licznik w srodku: " << Licznik::odczytaj() << endl;
    Samochod becia("becia", "gaz", "EKU RW03");
    becia.zagazuj(99);
    becia.wypisz_info();
    cout << "licznik na koncu: " << Licznik::odczytaj() << endl;
    cout << "\n\n";
    Kebab elo("grubi", "kuczak", "OSTRY", "fryty");
    elo.piecz(10,100);
    Kebab essa("cinki", "mieszany", "mieszany", "BEZ SURUWY!!!");
    essa.piecz(10,1000);
    cout << "\n\n";

    return 0;
}
