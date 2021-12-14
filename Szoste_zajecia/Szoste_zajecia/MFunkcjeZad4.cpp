#include <iostream>

using namespace::std;

//zad 4
double dwusilnia(double n) {
    if (n == 0) return 1;
    if (n < 2) return n;
    return n * dwusilnia(n - 2);
}