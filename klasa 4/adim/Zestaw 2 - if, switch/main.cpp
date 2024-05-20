#include <iostream>
#include <math.h>

using namespace std;

void zad1(int liczba) {
    if (liczba%2 == 0) {
        cout << "parzysta";
    } else {
        cout << "nieparzysta";
    }
}

void zad2(int c) {
    if (c>0) {
        cout << "dodatnia";
    } else if (c==0) {
        cout << "jest zerem";
    } else {
        cout << "ujemna";
    }
}

void zad3(int a,int b,int c) {
    if (a>b) {
        if (a>c) {
            cout << "najwieksza to: " << a;
        }
    } else if (b>c) {
        cout << "najwieksza to: " << b;
    } else {
        cout << "najwieksza to: " << c;
    }
}

void zad4(int x, int y) {
    const int r = 10;
    int x2 = x*x;
    int y2 = y*y;
    double magia = sqrt(x2+y2);

    if (magia <= r) {
        cout << "jest na okregu";
    } else if ( magia == r){
        cout << "jest dokladnie na okregu yoo";
    } else {
        cout << "nie jest :\(";
    }
}

void zad5() {
    char a;
    cout << "podaj literke k/m: ";
    cin >> a;
    switch (a) {
        case 'm': cout << "mezczyzna :OOO"; break;
        case 'M': cout << "mezczyzna :OOO"; break;
        case 'k': cout << "kobieta ;'\("; break;
        case 'K': cout << "kobieta ;'\("; break;
        default: cout << "a kysz tranwestyto odmiencu kimkolwiek ty jestes!!!1"; break;
    }
}

void zad6(int dzien) {
    switch (dzien) {
        case 1: cout << "poniedzialek"; break;
        case 2: cout << "wtorek"; break;
        case 3: cout << "sroda"; break;
        case 4: cout << "czwartek"; break;
        case 5: cout << "piatek"; break;
        case 6: cout << "sobota"; break;
        case 7: cout << "niedziela"; break;
        default: cout << "oczeniwanie na weekend";
    }
}

int main() {
    zad6(50);
    return 0;
}
