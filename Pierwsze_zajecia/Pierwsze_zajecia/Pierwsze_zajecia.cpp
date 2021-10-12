#include <iostream>

using namespace std;

int main()
{
	int numerZadania;
	cout << "1. Wypisz numer albumu studenta" << endl;
	cout << "2. Sprawdz czy liczba jest parzysta czy nieparzysta" << endl;
	cout << "3. Sprawdz ktora liczba jest wieksza" << endl;
	cout << "4. Wypisz srednia 4 liczb" << endl;
	cout << "5. Prosty kalkulator" << endl;
	while (true) {
		cout << "Podaj numer zadania: ";
		if (!(cin >> numerZadania)) {
			cout << "Podany tekst nie jest liczba!" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
		switch (numerZadania) {
			case 1:
			{
				string numerAlbumu = "w65569";
				cout << "Numer albumu studenta: " << numerAlbumu << endl;
				break;
			}
			case 2:
				{
					float x;
					cout << "Podaj liczbe calkowita: ";
					if (!(cin >> x)) {
						cout << "Podany tekst nie jest liczba!" << endl;
						cin.clear();
						cin.ignore(10000, '\n');
						break;
					}
					int xCalkowite = floorf(x);
					if (xCalkowite != x) {
						cout << "Podania liczba nie byla calkowita i zostala zamieniona na " << xCalkowite << endl;
					}
					if (xCalkowite % 2 == 0) {
						cout << "Liczba jest parzysta" << endl;
					}
					else{
						cout << "Liczba jest nieparzysta" << endl;
					}
					break;
				}
			case 3:
				{
					float a, b;
					cout << "Podaj pierwsza liczbe: ";
					if (!(cin >> a)) {
						cout << "Podany tekst nie jest liczba!" << endl;
						cin.clear();
						cin.ignore(10000, '\n');
						break;
					}
					cout << "Podaj druga liczbe: ";
					if (!(cin >> b)) {
						cout << "Podany tekst nie jest liczba!" << endl;
						cin.clear();
						cin.ignore(10000, '\n');
						break;
					}
					if (a > b) {
						cout << "Pierwsza liczba jest wieksza" << endl;
					}
					else if (a < b) {
						cout << "Druga liczba jest wieksza" << endl;
					}
					else {
						cout << "Liczby sa rowne" << endl;
					}
					break;
				}
			case 4:
				{
					float a, b, c, d;
					cout << "Podaj a: ";
					if (!(cin >> a)) {
						cout << "Podany tekst nie jest liczba!" << endl;
						cin.clear();
						cin.ignore(10000, '\n');
						break;
					}
					cout << "Podaj b: ";
					if (!(cin >> b)) {
						cout << "Podany tekst nie jest liczba!" << endl;
						cin.clear();
						cin.ignore(10000, '\n');
						break;
					}
					cout << "Podaj c: ";
					if (!(cin >> c)) {
						cout << "Podany tekst nie jest liczba!" << endl;
						cin.clear();
						cin.ignore(10000, '\n');
						break;
					}
					cout << "Podaj d: ";
					if (!(cin >> d)) {
						cout << "Podany tekst nie jest liczba!" << endl;
						cin.clear();
						cin.ignore(10000, '\n');
						break;
					}
					float srednia = (a + b + c + d) / 4;
					cout << "Srednia: " << srednia << endl;
					break;
				}
			case 5:
				{
					char znak;
					float a, b, c, d;
					cout << "Podaj dzialanie jakie chcesz wykonac:\n'+' (suma) \n'-' (roznica) \n'*' (iloczyn) \n'/' (iloraz) \n's' (srednia)\nDzialanie: ", cin >> znak;
					cout << "Podaj a: ";
					if (!(cin >> a)) {
						cout << "Podany tekst nie jest liczba!" << endl;
						cin.clear();
						cin.ignore(10000, '\n');
						break;
					}
					cout << "Podaj b: ";
					if (!(cin >> b)) {
						cout << "Podany tekst nie jest liczba!" << endl;
						cin.clear();
						cin.ignore(10000, '\n');
						break;
					}
					if (znak == 's') {
						cout << "Podaj c: ";
						if (!(cin >> c)) {
							cout << "Podany tekst nie jest liczba!" << endl;
							cin.clear();
							cin.ignore(10000, '\n');
							break;
						}
						cout << "Podaj d: ";
						if (!(cin >> d)) {
							cout << "Podany tekst nie jest liczba!" << endl;
							cin.clear();
							cin.ignore(10000, '\n');
							break;
						}
					}
					switch (znak) {
						case '+':
							cout << "Suma: " << a + b << endl;
							break;
						case '-':
							cout << "roznica: " << a - b << endl;
							break;
						case '*':
							cout << "Iloczyn: " << a * b << endl;
							break;
						case '/':
							if (b == 0) {
								cout << "Nie dziel przez 0!" << endl;
								break;
							}
							cout << "Iloraz: " << a / b << endl;
							break;
						case 's':
						{
							float srednia = (a + b + c + d) / 4;
							cout << "Srednia: " << srednia << endl;
							break;
						}
						default:
							cout << "Nie ma dostepnej takiej operacji w tej wersji programu" << endl;
							cin.clear();
							cin.ignore(10000, '\n');
							break;
					}
					break;
				}
			default:
				cout << "Jeszcze nie dodalem takiego programu :(\nProsze uzyj programu od 1 do 5" << endl;
				cin.clear();
				cin.ignore(10000, '\n');
		}
	}
}