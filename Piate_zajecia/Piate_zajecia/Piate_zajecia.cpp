#include <iostream>

using namespace::std;

int main()
{
    //zad 1
    //nie roznia sie
    //zad 2
    //nie jest poprawny, bo pierwsza tablica nie jest typu char
    //zad 3
    /*
    char tab[] = "wiosna";
    cout << size(tab);
    */
    //zad 4
    /*
    cout << "Podaj cos: ";
    string cos;
    cin >> cos;
    string cos2 = cos;
    cout << cos << endl;
    cout << cos2 << endl;
    string cos3 = cos + cos2;
    cout << cos3<<endl;
    cout << size(cos3);
    */
    /*
    char tab[100];
    char tab2[100];
    cout << "Podaj cos: ";
    cin.getline(tab, 100);
    strcpy_s(tab2, tab);
    cout << tab << endl;
    cout << tab2 << endl;
    strcat_s(tab, tab2);
    cout << tab << endl;
    cout << size(tab);
    */
    //zad 5
    /*
    char adres[100];
    char nrDomu[100];
    int umiejetnosci;
    int staz;
    cout << "Podaj nazwe ulicy na ktorej mieszkasz: ";
    cin.getline(adres, 100);
    cout << "Podaj nr domu: ";
    cin.getline(nrDomu, 100);
    cout << "Na ile oceniasz swoje umiejetnosci programowania w skali [2-5]: ";
    cin >> umiejetnosci;
    cout << "Twoj staz programistyczny: ";
    cin >> staz;
    umiejetnosci--;
    if (umiejetnosci < 2) umiejetnosci = 2;
    if (umiejetnosci > 5) umiejetnosci = 5;
    cout << "Adres: " << adres << " " << nrDomu << endl;
    cout << "Ocena: " << umiejetnosci << endl;
    cout << "Staz: " << staz << " dni";
    */
    //zad 6
    
    char samogloski[] = { 'a', 'e', 'i', 'o', 'u', 'y' };
    char tekst[100];
    cout << "Podaj tekst: ";
    cin.getline(tekst, 100);
    int ileSamoglosek = 0;
    int ileSpolglosek = 0;
    for (int i = 0; i < strlen(tekst); i++) {
        if (!isalpha(tekst[i])) continue;
        if (tekst[i] == ' ') continue;
        if (find(begin(samogloski), end(samogloski), char(tolower(tekst[i]))) != end(samogloski)) ileSamoglosek++;
        else ileSpolglosek++;
    }
    cout << "Samogloski: " << ileSamoglosek << ", spolgloski: " << ileSpolglosek;
    
}