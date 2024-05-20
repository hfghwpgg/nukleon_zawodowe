#include <iostream>

using namespace std;

void odwroc_1(double *x) {
    *x = 1/(*x);
}

void odwroc_2(double &f) {
    f = 1/f;
}

double odwroc_3(double c) {
    c = 1/c;
    return c;
}

void invoke_odwroc(double x) {
    double a = x;
    double f = x;
    double c = x;

    odwroc_1(&a);
    cout << a << endl;

    odwroc_2(f);
    cout << f << endl;

    cout << odwroc_3(c) << endl;
}

void kapitaliki(string &txt) {
    for (int i=0; i<txt.length(); i++) {
        txt[i] = toupper(txt[i]);
    }
}

void wypisz(int *tab, int dl) {
    for (int i=0; i<dl; i++) {
        cout << *(tab + i) << "; ";
    }
}

void suma(int *tab, int dl) {
    int suma = 0;
    for (int i=0; i<dl; i++) {
        suma += *(tab+i);
    }
    cout << suma;
}

void podsumowanie(double paragony[][2], int ilosc, double sprzedaz[]) {
    
    for (int j=0; j < ilosc; j++) {
        int index = paragony[j][0];
        sprzedaz[index] += paragony[j][1];
    }
}

int main()
{
    invoke_odwroc(-5);

    string aaa = "aAssDD";
    kapitaliki(aaa);
    cout << aaa << endl;

    int tab[5] = {1,2,3,4,5};
    wypisz(tab, 5);
    cout << endl;
    suma(tab,5);
    cout << endl;
    cout << endl;

    double sprzedaz[4] = {0}; // calkowita sprzedaz
    double paragony[100][2] = {
        {2, 46.59},
        {2, 26.02},
        {0, 45.92},
        {3, 39.65},
        {0, 37.7},
        {0, 24.49},
        {2, 31.61},
        {2, 32.77},
        {0, 41.5},
        {0, 33.04},
        {1, 24.07},
        {1, 28.73},
        {1, 47.54},
        {1, 20.54},
        {3, 22.22},
        {2, 42.83},
        {3, 23.06},
        {1, 42.34},
        {3, 45.48},
        {1, 37.63},
        {3, 34.93},
        {1, 36.98},
        {1, 36.14},
        {0, 30.52},
        {0, 28.71},
        {1, 22.22},
        {3, 40.07},
        {2, 46.11},
        {3, 29.18},
        {1, 27.78},
        {1, 44.13},
        {2, 23.83},
        {2, 36.04},
        {1, 44.64},
        {3, 21.68},
        {0, 37.67},
        {3, 20.49},
        {1, 39.83},
        {2, 44.37},
        {1, 34.34},
        {0, 25.5},
        {0, 35.13},
        {3, 36.58},
        {3, 21.47},
        {0, 23.63},
        {2, 47.8},
        {0, 31.88},
        {1, 23.02},
        {3, 29.21},
        {1, 24.97},
        {3, 30.38},
        {3, 41.26},
        {1, 32.16},
        {3, 26.79},
        {1, 32.68},
        {3, 22.18},
        {2, 35.86},
        {1, 49.64},
        {3, 25.66},
        {3, 20.05},
        {2, 45.86},
        {3, 40.73},
        {3, 41.89},
        {0, 41.74},
        {3, 35.77},
        {3, 31.1},
        {2, 20.91},
        {0, 47.87},
        {2, 48.1},
        {0, 32.44},
        {3, 43.45},
        {1, 28.55},
        {1, 27.0},
        {2, 38.18},
        {3, 47.59},
        {0, 20.14},
        {2, 32.05},
        {1, 28.18},
        {3, 47.82},
        {0, 36.54},
        {1, 24.41},
        {2, 44.05},
        {3, 40.68},
        {3, 44.71},
        {2, 26.61},
        {1, 21.38},
        {3, 23.44},
        {1, 23.72},
        {1, 31.21},
        {3, 20.94},
        {1, 38.86},
        {2, 23.59},
        {1, 45.79},
        {3, 32.3},
        {2, 24.94},
        {0, 47.87},
        {2, 44.6},
        {2, 42.64},
        {0, 45.21},
        {2, 44.64}
        }; //rodzaj paliwa, ilosc
    podsumowanie(paragony, 100, sprzedaz);
    for (int i=0; i<4; i++) {
        cout << i << ": "<< sprzedaz[i] << endl;
    }
    return 0;
}
