#include <iostream>
#include <string>

using namespace std;

enum typy_polis {
    osobowy = 1,
    dostawczy = 2
};

class Ubezpieczenie {
private:
    int numer_polisy;
    typy_polis typ_polisy; // 1 - osobowe, 2 - dostawcze
    double wielkosc_skladki;
    string data_rozpoczecia;
    string data_zakonczenia;
public:
    Ubezpieczenie(int n, typy_polis t, double w, string data_r, string data_z)
    : numer_polisy(n), typ_polisy(t), wielkosc_skladki(w), data_rozpoczecia(data_r), data_zakonczenia(data_z) {};
};

class Pojazd {
protected:
    string kolor;
    double przebieg;
    bool kola;
    Ubezpieczenie* ubez;
public:
    Pojazd(string k, double p, bool ko): kolor(k),przebieg(p),kola(ko) {};

     void set_ubezpieczenie(Ubezpieczenie* ub) {
        ubez = ub;
    }
};
   

class Osobowy: public Pojazd {
private:
    int ilosc_drzwi;
public:
    Osobowy(string k, double p, bool ko, int i): Pojazd(k, p, ko) {
        ilosc_drzwi = i;
    }
};

class Dostawczy: public Pojazd {
private:
    double udzwig;
public:
    Dostawczy(string k, double p, bool ko, double u): Pojazd(k, p, ko) {
        udzwig = u;
    }
};
void przypiszUbezpieczenie(Pojazd& samochod, Ubezpieczenie* ub) {
    samochod.set_ubezpieczenie(ub);
}

int main() {
    Pojazd pp("czerwony", 121.5, true);
    Osobowy oo("niebieski", 12312.44, false, 5);
    Dostawczy dd("bialy", 0.0, true, 12.5);
    Ubezpieczenie uu(1, osobowy, 4124, "01.01.2001", "02.02.2002");
    przypiszUbezpieczenie(oo, &uu);
    
    return 0;
}

