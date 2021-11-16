#include <iostream>
#include <random>

using namespace::std;

int main()
{
    /*
    //zad 1
    int tab[10];
    for (int i = 0; i < 10; i++) {
        tab[i] = (i + 1) * 3;
    }
    //zad 2
    for (int i = 0; i < 10; i += 2) {
        cout << tab[i] << " ";
    }
    */
    //zad 3
    /*
    const int n = 5;
    int a;
    int tab[n];
    cout << "Podaj a: ", cin >> a;
    for (int i = n-1; i >= 0; i--) {
        if (i == n - 1) tab[i] = a;
        else tab[i] = tab[i + 1] - 5;
        
    }
    for (int i = 0; i < n; i++) {
        cout << tab[i] << " ";
    }
    */
    //zad 4
    /*
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(-23, 50);
    const int n = 10;
    int tab[n];
    for (int i = 0; i < n; i++) {
        tab[i] = distr(gen);
    }
    int minimum = tab[0];
    for (int i = 0; i < n; i++) {
        cout << tab[i] << " ";
        if(tab[i] < minimum) {
            minimum = tab[i];
        }
    }
    cout << "\nMinimum: " << minimum;
    */
    //zad 5
    /*
    const int n = 10;
    int tab[n];
    cout << "Podaj pierwszy element: ", cin >> tab[0];
    cout << "Podaj drugi element: ", cin >> tab[1];
    
    for (int i = 2; i < n; i++) {
        tab[i] = tab[i - 1] + tab[i - 2];
    }
    for (int i = 0; i < n; i++) {
        cout << tab[i]<<" ";
    }
    */
    //zad 6
    /*
    int tab[20] = { 1,2,3,4,5,6,7,8,9,10 };
    for (int i = 10; i < 20; i++) {
        tab[i] = tab[i - 10];
    }
    for (int i = 0; i < 20; i++) {
        cout << tab[i] << " ";
    }
    */
    //zad 7
    /*
    int tab2D[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            tab2D[i][j] = i+j;
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << tab2D[i][j] << " ";
        }
        cout << endl;
    }
    int suma = 0;
    for (int i = 0; i < 5; i++) {
        suma += tab2D[i][i];
    }
    cout << suma;
    */
    //zad 8
    /*
    int tab2D1[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            tab2D1[i][j] = i + j;
        }
    }
    cout << "Tablica 1."<<endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << tab2D1[i][j] << " ";
        }
        cout << endl;
    }

    int tab2D2[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            tab2D2[i][j] = i*2 + j+1;
        }
    }
    cout << "Tablica 2." << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << tab2D2[i][j] << " ";
        }
        cout << endl;
    }
    int tab2D3[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            tab2D3[i][j] = tab2D1[i][j] + tab2D2[i][j];
        }
    }

    cout << "Tablica 3." << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << tab2D3[i][j] << " ";
        }
        cout << endl;
    }
    */
}