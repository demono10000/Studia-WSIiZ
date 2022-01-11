#include <iostream>
#include <random>

using namespace::std;

void doKwadratu(int* a);
int* potega(int* a, int* b);
void wypisz(int* a, int* b);
int zwrocMniejszaWartosc(int* a, int* b);
int* zwrocMniejsza(int* a, int* b);
void zamienLiczby(int* a, int* b);
int main()
{
    //zad 1
    /*
    int a;
    cout << "Podaj liczbe: ", cin >> a;
    cout << "adres: " << &a << endl;
    cout << "wartosc: " << *&a << endl;
    int b;
    cout << "Podaj druga liczbe: ", cin >> b;
    cout << "Roznica: " << *&a - *&b << endl;
    int c;
    cout << "Podaj trzecia liczbe: ", cin >> c;
    cout << "Srednia: " << (*&a + *&b + *&c) / 3 << endl;
    */
    //zad 2
    /*
    int n, * tab;
    cout << "Podaj rozmiar tablicy: ", cin >> n;
    if (n < 1) {
        cout << "Rozmiar musi byc wiekszy od 0";
        return 0;
    }
    tab = new int[n];
    //for (int i = 0; i < 10; i++) tab[i] = i;
    cout << "Adres pierwszego elementu: " << tab << endl;
    cout << "Adres czwartego elementu: " << tab + 3 << endl;
    random_device rd; 
    mt19937 gen(rd()); 
    int poczatek, koniec;
    cout << "Podaj poczatek przedialu: ", cin >> poczatek;
    cout << "Podaj koniec przedzialu: ", cin >> koniec;
    uniform_int_distribution<> distr(poczatek, koniec);
    for (int i = 0; i < n; i++) tab[i] = distr(gen);
    for (int i = 0; i < n; i++) cout << &tab[i] << endl;
    */
    //zad 3
    /*
    int *tab, n;
    cout << "Podaj rozmiar tablicy: ", cin >> n;
    if (n < 1) {
        cout << "Rozmiar musi byc wiekszy od 0";
        return 0;
    }
    tab = new int[n];
    for (int i = 0; i < n; i++) {
        int a;
        cout << "Podaj liczbe " << i << ": ", cin >> a;
        tab[i] = a;
    }
    int suma = 0;
    for (int i = 0; i < n; i++) suma += tab[i];
    float srednia = suma / n;
    for (int i = 0; i < n; i++) if (tab[i] > srednia) cout << tab[i] << ", ";
    */
    //zad 4
    /*
    int a;
    cout << "Podaj liczbe: ", cin >> a;
    doKwadratu(&a);
    cout << "Kwadrat liczby: " << a;
    */
    //zad 5
    /*
    int a, b;
    cout << "Podaj liczbe: ", cin >> a;
    cout << "Podaj potega: ", cin >> b;
    cout << "Wynik: " << *potega(&a, &b);
    */
    //zad 6
    /*
    int a, b;
    cout << "Podaj liczbe: ", cin >> a;
    cout << "Podaj liczbe razy: ", cin >> b;
    wypisz(&a, &b);
    */
    //zad 7
    /*
    int a, b;
    cout << "Podaj pierwsza liczbe: ", cin >> a;
    cout << "Podaj druga liczbe: ", cin >> b;
    cout << "Mniejsza wartosc: " << zwrocMniejszaWartosc(&a, &b) << endl;
    cout << "Adres mniejszej zmiennej: " << zwrocMniejsza(&a, &b) << endl;
    */
    //zad 8
    /*
    int a, b;
    cout << "Podaj pierwsza liczbe: ", cin >> a;
    cout << "Podaj druga liczbe: ", cin >> b;
    zamienLiczby(&a, &b);
    cout << "Pierwsza liczba: " << a << endl;
    cout << "Druga liczba: " << b;
    */
}
void doKwadratu(int* a) {
    *a *= *a;
}

int* potega(int* a, int* b) {
    int* wynik = new int;
    *wynik = 1;
    for (int i = 0; i < *b; i++) {
        *wynik *= *a;
    }
    return wynik;
}
void wypisz(int* a, int* b) {
    while (*b > 0) {
        cout << *a;
        (*b)--;
    }
}
int zwrocMniejszaWartosc(int* a, int* b) {
    return *a < *b ? *a : *b;
}
int* zwrocMniejsza(int* a, int* b) {
    return *a < *b ? a : b;
}
void zamienLiczby(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}