#include <iostream>
using namespace::std;

int funcZad7(int a, int b , int c);
float funcNa4(int *tab, int a, int b);
int funcNa5(string *a, string *b);
int main()
{
    //na 3.0
    //zad 7
    /*
    cout << "Sprawdzenie funkcji\nDla a=5, b=4, c=3 powinno wyjsc 1" << endl;
    cout << funcZad7(5, 4, 3) << endl;
    cout << "Dla a=2, b=2, c=2 powinno wyjsc 0" << endl;
    cout << funcZad7(2, 2, 2);
    */
    //na 4.0
    /*
    int tab[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    cout << funcNa4(tab, 1, 8);
    */
    //na 5.0
    /*
    string napis1 = "Ala ma ";
    string napis2 = "rudego kota";
    cout << napis1 << endl << funcNa5(&napis1, &napis2);
    */
}
int funcZad7(int a, int b, int c) {
    if (c * c + b * b == a * a) return 1;
    else return 0;
}
float funcNa4(int* tab, int a, int b) {
    float suma = 0;
    for (int i = a; i <= b; i++) {
        suma += tab[i];
    }
    return suma/(b-a+1);
}
int funcNa5(string *a, string *b) {
    *a += *b;
    return (*a).length();
}