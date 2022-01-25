#include <iostream>
#include <random>

using namespace::std;

int main()
{
    //na 3.0
    //zad 13
    /*
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(-5, 5);
    const int rozmiarTablicy = 10;
    int tab[rozmiarTablicy];
    for (int i = 0; i < rozmiarTablicy; i++) tab[i] = distr(gen);
    for (int i = 0; i < rozmiarTablicy; i++) cout << tab[i] << ", ";
    */
    //na 4.0
    /*
    random_device rd;
    mt19937 gen(rd());
    int minimum, maxiumum;
    cout << "Podaj poczatek przedialu: ", cin >> minimum;
    cout << "Podaj koniec przedzialu: ", cin >> maxiumum;
    uniform_int_distribution<> distr(minimum, maxiumum);
    const int rozmiarTablicy = 10;
    int tab1[rozmiarTablicy];
    int tab2[rozmiarTablicy];
    for (int i = 0; i < rozmiarTablicy; i++) tab1[i] = distr(gen);
    cout << "Pierwsza tablica: ";
    for (int i = 0; i < rozmiarTablicy; i++) cout << tab1[i] << ", ";
    cout << endl;
    int pozycjaDrugiejTab = 0;
    for (int i = 0; i < rozmiarTablicy; i++) {
        if (tab1[i] % 2 == 0) {
            tab2[pozycjaDrugiejTab] = tab1[i];
            pozycjaDrugiejTab++;
        }
    }
    cout << "Druga tablica: ";
    for (int i = 0; i < pozycjaDrugiejTab; i++) cout << tab2[i] << ", ";
    */
    //na 5.0
    /*
    random_device rd;
    mt19937 gen(rd());
    int minimum, maxiumum;
    cout << "Podaj poczatek przedialu: ", cin >> minimum;
    cout << "Podaj koniec przedzialu: ", cin >> maxiumum;
    uniform_int_distribution<> distr(minimum, maxiumum);
    const int rozmiarTablicy = 10;
    double tab2d[2][rozmiarTablicy];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < rozmiarTablicy; j++) tab2d[i][j] = distr(gen);
    }
    cout << "Tablica dwuwymiarowa: " << endl;
    for (int i = 0; i < rozmiarTablicy; i++) {
        for (int j = 0; j < 2; j++) cout << tab2d[j][i] << ", ";
        cout << endl;
    }
    double suma[2];
    suma[0] = 0;
    suma[1] = 0;
    for (int i = 0; i < rozmiarTablicy; i++) {
        suma[0] += tab2d[0][i];
        suma[1] += tab2d[1][i];
    }
    cout << "Suma 1. kolumny: " << suma[0] << ", suma 2. kolumny: " << suma[1];
    */
}
