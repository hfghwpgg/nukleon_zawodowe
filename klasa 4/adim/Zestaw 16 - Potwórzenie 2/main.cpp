#include <iostream>

using namespace std;

class Napoj {
protected:
    string nazwa;
    string producent;
    string typ_opakowania;
    double cena;
    double pojemnosc;
public:
    Napoj(string n, string p, string t, double c, double poj)
    : nazwa(n), producent(p), typ_opakowania(t), cena(c), pojemnosc(poj) {};
    void info() {
        cout << endl;
        cout << "nazwa: " << nazwa << endl;
        cout << "producent: " << producent << endl;
        cout << "typ opakowania: " << typ_opakowania << endl;
        cout << "cena: " << cena << "zl" << endl;
        cout << "pojemnosc: " << pojemnosc << "L"<< endl;
    }
    string get_nazwa() {return nazwa;};
    double get_cena() {return cena;};
};
class Bezalkoholowe: public Napoj {
private:
    string smak;
    bool gesty;
public:
    Bezalkoholowe(string n, string p, string t, double c, double poj, string sm, bool g)
    : Napoj(n, p, t, c, poj) { smak = sm; gesty = g;};
    void info() {
        Napoj::info();
        cout << "smak: " << smak << endl;
        const string czy_gesty = gesty ? "tak" : "nie";
        cout << "gesty?: " << czy_gesty << endl;
    }
};
class Alkohol: public Napoj {
private:
    string rodzaj;
    double volty;
public:
    Alkohol(string n, string p, string t, double c, double poj, string r, double v)
    : Napoj(n, p, t, c, poj) { rodzaj = r; volty = v;};
    void info() {
        Napoj::info();
        cout << "rodzaj: " << rodzaj << endl;
        cout << "procety: " << volty << "%" << endl;
    }
};
class Paragon {
private:
    int index;
    double naleznosc;
    string lista[10];
public:
    Paragon(): index(0), naleznosc(0) {}
    void nabijZwykle(Bezalkoholowe soczek, int sztuki) {
        if (index>=10) {cout << "pelen paragon!! \n"; return;}
        lista[index] = soczek.get_nazwa();
        index++;
        naleznosc += soczek.get_cena() * sztuki;
    }
    void nabijAlkohol(Alkohol ambrozja, int sztuki) {
        if (index>=10) {cout << "pelen paragon!! \n"; return;}
        lista[index] = ambrozja.get_nazwa();
        index++;
        naleznosc += ambrozja.get_cena() * sztuki;
    }
    void pozycje() {
        cout << "PARAGON:" << endl;
        for (string item: lista) {
            cout << item << endl;
        }
        cout << "naleznosc: " << naleznosc << "zl";
    }
};

int main()
{
    Bezalkoholowe tymbark("tymbark","tymbark", "plastik", 4.99, 1.5, "jablko mieta", false);
    tymbark.info();
    Alkohol romper("romper", "romper", "pucha", 2.99, .5, "PIWO", 12.0);
    romper.info();

    Paragon p1;
    p1.nabijZwykle(tymbark, 2);
    p1.nabijAlkohol(romper, 2);
    p1.pozycje();
    return 0;
}
