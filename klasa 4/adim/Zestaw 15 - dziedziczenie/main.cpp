#include <iostream>

using namespace std;

class SprzetKomputerowy {
protected:
    string model;
    string procesor;
    int pamiec_ram;
    double pobor_energii;
public:
    SprzetKomputerowy(string m, string cpu, int ram, double tdp): model(m), procesor(cpu), pamiec_ram(ram),  pobor_energii(tdp) {}

    void info() {
        cout << endl;
        cout << "* Nazwa: " << model << endl;
        cout << "* Procesor: " << procesor << endl;
        cout << "* Pamiec RAM [MB]: " << pamiec_ram << endl;
        cout << "* Pobor energii [W]: " << pobor_energii << endl;
    }
};

class KakuterDesktop : public SprzetKomputerowy {
protected:
    string kartaGraficzna;
public:
    KakuterDesktop(string m, string cpu, int ram, double tdp, string gpu) : SprzetKomputerowy(m, cpu, ram, tdp) {
        kartaGraficzna = gpu;
    }
    void info() {
        SprzetKomputerowy::info();
        cout << "* Karta graficzna: " << kartaGraficzna << endl;
    }
};

class laptop: public SprzetKomputerowy {
protected:
    double przekatna;
    string typ_matrycy;
    int rozdzielczoscH;
    string proporcje_ekranu;
public:
    laptop(string m, string cpu, int ram, double tdp, double prze, string typ_ma, int roz, string prop): SprzetKomputerowy(m, cpu, ram, tdp) {
        przekatna = prze;
        rozdzielczoscH = roz;
        typ_matrycy = typ_ma;
        proporcje_ekranu = prop;
    };
    void info() {
        SprzetKomputerowy::info();
        cout << "* Matryca: " << typ_matrycy << endl;
        cout << "* Rozdzielczosc pionowa: " << rozdzielczoscH << endl;
        cout << "* Proporcje ekranu: " << proporcje_ekranu<< endl;
        cout << "* Przekatna: " << przekatna << endl;
    }
};

class smartfon: public SprzetKomputerowy {
protected:
    double przekatna_ekranu;
    int pojemnosc_baterii;
public:
    smartfon(string m, string cpu, int ram, double tdp, double prze_e, int poj):SprzetKomputerowy(m, cpu, ram, tdp) {
        przekatna_ekranu = prze_e;
        pojemnosc_baterii = poj;
    }
    void info() {
        SprzetKomputerowy::info();
        cout << "* Przekatna ekranu: " << przekatna_ekranu << endl;
        cout << "* Pojemnosc baterii: " << pojemnosc_baterii << endl;
    }
};

class Osoba {
protected:
    string imie;
    int wiek;
public:
    Osoba(string i, int w): imie(i), wiek(w) {};

    void przywitaj_sie() {
        cout << "czesc jestem " << imie;
        cout << endl;
    }
    void podaj_wiek() {
        cout << "mam " << wiek << " lat";
        cout << endl;
    }
};

class Student: public Osoba {
private:
    double gramy_ziola;
    double rok_studiow;
    int kasa;
public:
    Student(string i, int w, double g_z, double rok, int k): Osoba(i,w), gramy_ziola(g_z), rok_studiow(rok), kasa(k) {};

    void spal_blanta() {
        if (--gramy_ziola >= 0) {
            cout << "ale oro :DDD";
        } else { cout << "nie mam tyle ziola \;\(\(\(";};
        cout << endl;
    }
};

class Wykladowca: public Osoba {
private:
    bool kredyt_hipoteczny;
    int IQ;
public:
    Wykladowca(string i, int w, bool kredyt, int iq): Osoba(i,w), kredyt_hipoteczny(kredyt), IQ(iq) {};

    void czy_mam_kredyt() {
        if (kredyt_hipoteczny) {
            cout << "tak";
        } else {
            cout << "nie";
        };
        cout << endl;
    }
};
int main() {
    SprzetKomputerowy s1("test model", "arm cpu", 4096, 10);
    s1.info();

    KakuterDesktop s2("BESTIA", "intel.pl", 32768, 300, "giteiks 1050 tiaj");
    s2.info();

    laptop s3("GRAM", "AMD", 8192, 50, 15.6, "IPS", 1080, "16:9");
    s3.info();

    smartfon s4("XIAOMI", "snapdragon", 6144, 7, 5.5, 4000);
    s4.info();

    Student Rafal("Rafal", 21, 4.20, 3, -1);
    Rafal.przywitaj_sie();
    Rafal.spal_blanta();
    Wykladowca Daniel("Daniel", 56, true, 195);
    Daniel.przywitaj_sie();
    Daniel.czy_mam_kredyt();
    return 0;
}
