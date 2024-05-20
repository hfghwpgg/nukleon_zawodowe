#include <iostream>

using namespace std;

void zad1() {
    int i = 1;
    while (i<=10) {
        cout << i << '\n';
        i++;
    }
}

void zad2() {
    int n,x;
    cout << "podaj liczbe n: ";
    cin >> n;
    cout << "podaj liczbe x: ";
    cin >> x;
    for (int i=1; i<=n; i++) {
        cout << x*i << endl;
    }
}

void zad2while() {
    int n,x;
    int i=1;
    cout << "podaj liczbe n: ";
    cin >> n;
    cout << "podaj liczbe x: ";
    cin >> x;
    while (i<=n) {
        cout << x*i << endl;
        i++;
    }
}

void zad3() {
    long long int x =1;
    int n;
    cout << "podaj liczbe n: ";
    cin >> n;
    for (int i=1; i<=n; i++) {
        x = x*i;
    }
    cout << x;
}

void zad3while() {
    long long int x =1;
    int i = 1;
    int n;
    cout << "podaj liczbe n: ";
    cin >> n;
    while (i<=n) {
        x = x*i;
        i++;
    }
    cout << x;
}

void zad4() {
    int in, sum;
    while (true) {
        cout << "podaj liczbe: ";
        cin >> in;
        sum = sum + in;
        if (in==0) {break;}
    }
    cout << "suma to: " << sum;
}

void zad5() {
    int n;
    cout << "podaj liczbe: ";
    cin >> n;
    for (int i=0; i<=20; i++) {
        cout << n+i << endl;
    }
}

void zad6() {
    int in;
    cout << "podaj liczbe: ";
    cin >> in;
    for (int i=2; i<=in*2; i=i+2) {
        cout << i << endl;
    }
}

void zad7() {
    int suma = 0;
    for (int i = 8; i>=1; i--) {
        suma = suma + (i*i);
    }
    cout << suma;
}

void zad8() { // Mucha mi pomagal.
    for (int i=1; i<=10; i++) {
        for (int j=1; j<= 10; j++) {
            cout << i*j << " ";
        }
        cout << endl;
    }
}

int main()
{
    zad8();
    return 0;
}
