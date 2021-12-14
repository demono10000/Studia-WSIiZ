#include <iostream>
#include <string>

using namespace::std;

//zad 3
void decToBin(int liczba) {
    string binarny = "";
    while (liczba != 0) {
        binarny += to_string(liczba % 2);
        liczba /= 2;
    }
    for (int i = 0; i < binarny.length(); i++) {
        cout << binarny[binarny.length() - i - 1];
    }
}