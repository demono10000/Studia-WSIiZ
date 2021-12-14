#include <iostream>

using namespace::std;

//zad 2
bool LiczbaPierwsza(int Liczba) {
    if (Liczba == 0 || Liczba == 1) {
        return false;
    }
    else {
        for (int i = 2; i <= Liczba / 2; ++i) {
            if (Liczba % i == 0) {
                return false;
            }
        }
    }
    return true;
}