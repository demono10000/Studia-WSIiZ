#include <iostream>
#include "MFunkcjeZad1.h"
#include "MFunkcjeZad2.h"
#include "MFunkcjeZad3.h"
#include "MFunkcjeZad4.h"
using namespace::std;

int main()
{
    float a, b;
    //zad 1
    cout << "zad 1" << endl;
    cout << "Podaj promien kola: ", cin >> a;
    if (a < 0) cout << "Promien nie moze byc ujemy" << endl;
    else cout << "Pole kola: " << poleKola(a) << endl;
    cout << "Podaj pierwszy bok prostokata: ", cin >> a;
    cout << "Podaj drugi bok prostokata: ", cin >> b;
    if (a < 0 || b < 0) cout << "Bok nie moze byc mniejszy od 0" << endl;
    else cout << "Pole prostokata: " << poleProstokata(a,b) << endl;
    cout << "Podaj podstawe trojkata: ", cin >> a;
    cout << "Podaj wysokosc trojkata: ", cin >> b;
    if (a < 0 || b < 0) cout << "Wartosc nie moze byc mniejsza od 0" << endl;
    else cout << "Pole trojkata: " << poleTrojkata(a, b) << endl;
    cout << "Podaj bok szescianu: ", cin >> a;
    if (a < 0) cout << "Bok nie moze byc ujemy" << endl;
    else cout << "Pole szescianu: " << poleSzescianu(a) << endl;
    cout << "Podaj promien podstawy walca: ", cin >> a;
    cout << "Podaj wysokosc walca: ", cin >> b;
    if (a < 0 || b < 0) cout << "Wartosc nie moze byc mniejsza od 0" << endl;
    else cout << "Pole walca: " << poleWalca(a, b) << endl;
    //zad 2
    cout << "zad 2" << endl;
    cout << "Podaj liczbe ktora chcesz sprawdzic czy jest pierwsza: ", cin >> a;
    if (a < 0) cout << "Wartosc nie moze byc mniejszy od 0";
    else cout << (LiczbaPierwsza(a) ? "Podana liczba jest pierwsza" : "Podana liczba nie jest pierwsza");
    cout << endl;
    //zad 3
    cout << "zad 3" << endl;
    cout << "Podaj liczbe dziesietna ktora chcesz zamienic na binarna: ", cin >> a;
    if (a < 0) cout << "Wartosc nie moze byc mniejszy od 0";
    else decToBin(a);
    cout << endl;
    //zad 4
    cout << "zad 4" << endl;
    cout << "Podaj liczbe <0-30> ktorej chcesz otrzymac dwusilnie: ", cin >> a;
    if (a < 0 || a > 30) cout << "Wartosc jest poza dopuszczony zakresem";
    else cout << dwusilnia(a);
}
