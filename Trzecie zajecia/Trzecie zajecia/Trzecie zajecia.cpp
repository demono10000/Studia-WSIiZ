#include <iostream>
#include <random>

using namespace::std;

int main()
{
    /*
    //zad 1
    int x;
    cout << "Podaj liczbe: ", cin >> x;
    cout << "for\n";
    for (int i = 0; i < x; i++) {
        cout << i << endl;
    }
    cout << "do while\n";
    int liczba = 0;
    do {
        cout << liczba++ << endl;
    } while (liczba < x);
    cout << "while\n";
    liczba = 0;
    while (liczba < x) {
        cout << liczba++ << endl;
    }
    */
    //zad 2
    /*
    int x;
    do {
        cout << "Podaj liczbe mniejsza od 0: ", cin >> x;
    } while (x >= 0);
    */
    //zad 3
    /*
    int ujemne = 0;
    int dodatnie = 0;
    int sumaujemne = 0;
    int sumadodatnie = 0;
    for (int i = 0; i < 10; i++) {
        int x;
        cout << "Podaj " << i+1 << ". liczbe: ", cin >> x;
        if (x >= 0) {
            dodatnie++;
            sumadodatnie += x;
        }
        else {
            ujemne++;
            sumaujemne += x;
        }
    }
    cout << "Liczba ujemnych: " << ujemne << endl;
    cout << "Suma ujemnych: " << sumaujemne << endl;
    cout << "Liczba dodatnich: " << dodatnie << endl;
    cout << "Suma dodatnich: " << sumadodatnie << endl;
    */
    //zad 4
    /*
    int n;
    int suma = 0;
    int iloczyn = 1;
    cout << "Ile liczb chcesz podac: ", cin >> n;
    if(n>0){
        for (int i = 0; i < n; i++) {
            int x;
            cout << "Podaj liczbe: ", cin >> x;
            if (x % 2 == 0) {
                suma += x;
                iloczyn *= x;
            }
        }
        cout << "Suma liczb parzystych: " << suma << endl;
        cout << "Iloczyn liczb parzystych: " << iloczyn << endl;
    }else{
        cout << "n nie moze byc ujemne";
    }
    */
    
    //zad 5
    /*
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(-10, 45);
    int n;
    int suma = 0;
    int iloczyn = 1;
    cout << "Ile liczb chcesz wylosowac: ", cin >> n;
    cout << "Generuje liczby: " << endl;
    for (int i = 0; i < n; i++) {
        int x = distr(gen);
        cout << x << endl;
        if (x % 2 == 0) {
            suma += x;
            iloczyn *= x;
        }
    }
    cout << "Suma liczb parzystych: " << suma << endl;;
    cout << "Iloczyn liczb parzystych: " << iloczyn << endl;
    */
    //zadania petle 1.1
    //zad 1
    /*
    int n;
    cout << "Podaj liczbe studentow: ", cin >> n;
    int i = 0;
    int suma = 0;
    while (i < n) {
        int x;
        cout << "Podaj licbe punktow studenta " << i + 1 << ".: ", cin >> x;
        suma += x;
        i += 1;
    }
    cout << "Srednia: " << suma / n;
    */
    //zad 2
    /*
    int n;
    cout << "Podaj liczbe studentow: ", cin >> n;
    int i = 0;
    float suma = 0;
    while (i < n) {
        int x;
        do {
            cout << "Podaj licbe punktow studenta " << i + 1 << ".: ", cin >> x;
        } while( x < 0 || x>100);
        
        suma += x;
        i += 1;
    }
    cout << "Srednia: " << suma / n;
    */
    //zad 3
    /*
    int n;
    cout << "Podaj liczbe studentow: ", cin >> n;
    int i = 0;
    float suma = 0;
    while (i < n) {
        int x;
        cout << "Podaj licbe punktow studenta " << i + 1 << ".: ", cin >> x;
        if (x < 0 || x>100) continue;
        suma += x;
        i += 1;
    }
    cout << "Srednia: " << suma / n;
    */
    //zad 4
    /*
    int n;
    cout << "Podaj liczbe studentow: ", cin >> n;
    int i = 0;
    float suma = 0;
    do{
        int x;
        cout << "Podaj licbe punktow studenta " << i + 1 << ".: ", cin >> x;
        if (x < 0 || x>100) continue;
        suma += x;
        i += 1;
    } while (i < n);
    cout << "Srednia: " << suma / n;
    */
    //zad 5
    /*
    for (int i = 0; i <= 100; i++) {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 100; i >=0 ; i--) {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 7; i <= 77; i+=7) {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 20; i >= 0; i-=2) {
        cout << i << " ";
    }
    */
}
