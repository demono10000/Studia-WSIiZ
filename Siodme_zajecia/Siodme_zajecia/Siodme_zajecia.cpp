#include <iostream>

using namespace::std;

int decToBin(int a);
int NWD(int a, int b);
int fib(int a);
int silnia(int a);
float ciag(int a);
int main()
{
    //zad 1
    int a;
    cout << "Zamiana liczby dziesietnej na binarna" << endl;
    cout << "Podaj liczbe: ", cin >> a;
    cout << decToBin(a);
    //zad 2
    cout << endl;
    int b;
    cout << "Znajdywanie NWD" << endl;
    cout << "Podaj liczbe: ", cin >> a;
    cout << "Podaj liczbe: ", cin >> b;
    cout << NWD(a, b);
    //zad 3
    cout << endl;
    cout << "Obliczanie ciągu Fibanaccego" << endl;
    cout << "Podaj liczbe: ", cin >> a;
    cout << fib(a);
    //zad 4
    cout << endl;
    cout << "Obliczanie silni" << endl;
    cout << "Podaj liczbe: ", cin >> a;
    cout << silnia(a);
    //zad 5
    cout << endl;
    cout << "Obliczanie n-tego wyrazu ciagu" << endl;
    cout << "Podaj liczbe: ", cin >> a;
    cout << ciag(a);
}
int decToBin(int a) {
    if (a == 0) return 0;
    else return  a % 2 + 10 * (decToBin(a / 2));
}
int NWD(int a, int b) {
    if (a != b)
        return NWD(a > b ? a - b : a, b > a ? b - a : b);
    return a;
}
int fib(int a) {
    if (a == 0) return 0;
    if (a == 1) return 1;
    return fib(a - 2) + fib(a - 1);
}
int silnia(int a) {
    return a == 0 ? 1 : (a * silnia(a - 1));
}
float ciag(int a) {
    if (a == 1) return 0;
    if (a == 2) return 0.5;
    if (a > 2) return -ciag(a - 1) * ciag(a - 2);
}