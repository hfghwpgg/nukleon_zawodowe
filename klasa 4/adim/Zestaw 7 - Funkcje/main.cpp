#include <iostream>

using namespace std;

void powtorz(int n, string text) {
    for (int i=0; i<n; i++) {
        cout << text << " ";
    }
}

double bmi(double wzrost, double masa) { // wzrost w M !!
    return masa/(wzrost*wzrost);
}

int delta(int a,int b,int c) {
    int delta = b*b - (4 * a * c);
    cout << delta << endl;
    int wynik = 0;
    if (delta == 0) {
        wynik = 1;
    } else if (delta > 0) {
        wynik = 2;
    }
    return wynik;
}

double kalkulator(double a, double b, char dzialanie='+') {
    switch (dzialanie) {
        case '-':
            return a-b;
        case '*':
            return a*b;
        case '/':
            return a/b;
        default:
            return a+b;
    }
}

string rot_x(int x, string txt) {
    string rot = "";
    for (char znak: txt) {
        if (znak <91 && znak > 64) {
            if (znak < 78) {
                rot += znak+x;
            } else {
                rot += znak-x;
            }
        }
        if (znak <123 && znak > 96) {
            if (znak < 110) {
                rot += znak+x;
            } else {
                rot += znak-x;
            }
        }
        if (znak == 32) {
            rot += znak;
        }
    }
    return rot;
}

int main()
{
    //cout << int(' ');
    cout << rot_x(13,"ten hejnal urwany gra");
    return 0;
}
