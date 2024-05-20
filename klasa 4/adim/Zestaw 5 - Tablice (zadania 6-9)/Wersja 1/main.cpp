#include <iostream>

using namespace std;
int tab[10] = {4,7,3,8,1,5,0,7,4,2};

void zad1() {
    tab[3] = 10;
    tab[6] = 24;
    for (int i=0;i<=9;i++) {
        cout << tab[i] << ", ";
    }
}

void zad2() {
    int bat[10];
    int j = 0;
    for (int i=9;i>=0; i--) {
        bat[j] = tab[i];
        j++;
    }
    for (int i=0;i<=10;i++) {
        cout << bat[i] << ", ";
    }
}

void zad3() {
    int ile6 = 0;
    for (int i=0; i<10; i++) {
        if (tab[i] == 6) {
            ile6++;
        }
    }
    cout << "6 w tej tabeli jest: " << ile6;
}

void zad4() {
    int low, high, canL, canR;
    string aaa = "jeden";
    for (int i=1; i<9; i++) { // najmnejsza
        canL = tab[i-1];
        canR = tab[i+1];
        if (aaa == "jeden") {
            low = canL;
            aaa = "to tylko 1 raz mialo sie wykonac nie wiem jak to inaczej zrobic";
        }
        if (low > canL) {
            low = canL;
        }
        if (low > canR) {
            low = canR;
        }
    }
    aaa = "jeden";
    for (int i=1; i<9; i++) { // najwieksza
        canL = tab[i-1];
        canR = tab[i+1];
        if (aaa == "jeden") {
            low = canL;
            aaa = "to tylko 1 raz mialo sie wykonac nie wiem jak to inaczej zrobic";
        }
        if (low < canL) {
            high = canL;
        }
        if (low < canR) {
            high = canR;
        }
    }
    cout << "najnizsza: " <<low << endl;
    cout << "najwyzsza: " << high << endl;
}

void zad5() {
    int elo[16];
    int a,b;
    for (int i = 0; i<16; i++) {
        elo[i] = 0;
    }
    for (int i = 0; i<16; i++) {
        cout << "jezeli chcesz zakonczyc program napisz \"69\" kiedy prosza cie o numer komorki" << endl;
        cout << "podaj liczbe komorki: ";
        cin >> a;
        if (a==69) {break;}
        cout << "podaj wartosc komorki " << a <<": ";
        cin >> b;
        elo[a] = b;
    }
    for (int i=0;i<16;i++) {
        cout << elo[i] << ", ";
    }
}

void zad6() {
    string rodzina[4][5] = {
        {"stary", "radzikoski", "60", "ACDC", "Orlen" },
        {"stara", "radzikoska", "55", "Fioletowy", "Pielegniarka"},
        {"Przemek", "radzikoski", "17", "Czerwony", "Nukleon"},
        {"siostra", "radzikoska", "10", "Rozowy", "niewiem"}
    };
}

void zad7() {
    int sum=0;
    int liczby[2][3] = {
        {3,4,5},
        {3,4,5}
    };
    for (int i=0; i<2; i++) {
        for (int j=0; j<3; j++) {
            sum = sum+ liczby[i][j];
        }
    }
    cout << "srednia tych liczb to: " << sum/6;
}

void zad8() {
    int siema[5][5] = {0};
    for (int i=0; i<5; i++) {
            siema[i][i] = 1;
        }
    for (int i=0; i<5; i++) {
        cout << endl;
        for (int j=0; j<5; j++) {
            cout << siema[i][j] << ", ";
        }
    }
}

void zad9() {
    int rowsuma = 0;
    int kolsuma = 0;
    int skossuma = 0;
    bool a = true;
    int kwadrat[3][3] = {
        {2,7,6},
        {9,5,1},
        {4,3,8}
    };
    for (int i=0; i<3; i++) { // row
        for (int j=0; j<3; j++) {
            rowsuma += kwadrat[i][j];
            kolsuma += kwadrat[j][i];
        }
        if (rowsuma == 15) {
            cout << "row " << i <<" jest 15!!!" << endl;
        } else {
            cout << "nie jest to magiczny kwadrat, row: " << i;
            break;
        }
        if (kolsuma == 15) {
            cout << "kol " << i <<" jest 15!!!" << endl;
        } else {
            cout << "nie jest to magiczny kwadrat, kol: " << i;
            break;
        }
        rowsuma = 0;
        kolsuma = 0;
        cout << endl;
    }
    for (int i=0; i<3; i++) { // kol
        skossuma += kwadrat[i][i];
    }
    if (skossuma == 15) {
        cout << "skos jest 15!!!" << endl;
    } else {
        cout << "nie jest to magiczny kwadrat, skos ";
    }
}
int main()
{
    zad9();
    return 0;
}
