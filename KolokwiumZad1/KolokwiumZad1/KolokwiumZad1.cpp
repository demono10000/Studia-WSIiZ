#include <iostream>
using namespace::std;

int main()
{
    //na 5.0
    int zadanie = -1;
    do {
        cout << "Menu:\n1. Zadanie na ocene 3\n2.Zadanie na ocene 4\n3.Koniec\n\nTwoj wybor: ", cin >> zadanie;
        if (zadanie == 1) {
            //na 3.0
            //zad 6
            int x, y;
            cout << "Podaj x: ", cin >> x;
            cout << "Podaj y: ", cin >> y;
            int ile = 0;
            for (int i = x; i <= y; i++) if (i % 5 == 0) ile++;
            cout << "Liczb podzielnych przez 5 od: " << x << " do: " << y << " jest: " << ile << endl;
        }
        else if (zadanie == 2) {
            //na 4.0
            int a, b, N;
            cout << "Podaj a: ", cin >> a;
            cout << "Podaj b: ", cin >> b;
            cout << "Podaj N: ", cin >> N;
            int ile = 0;
            for (int i = 0; i < N; i++) {
                int x;
                cout << "Podaj liczbe " << i + 1 << ". : ", cin >> x;
                if (x >= a && x <= b) {
                    if (x % 6 == 0) ile++;
                }
            }
            cout << "Liczb podzielnych przez 6 od: " << a << " do: " << b << " jest: " << ile << endl;
        }
        else if (zadanie != 3) cout << "Nie ma takiego zadania!";
    } while (zadanie != 3);
}
