#include <iostream>

using namespace std;

int main()
{
    /*
     //zad 1
     float a, b;
     cout << "Podaj a: ", cin >> a;
     cout << "Podaj b: ", cin >> b;
     if (a == 0) {
         if (b == 0) {
             cout << "Rownanie rozsamowsciowe\n";
         }
         else {
             cout << "Rownanie sprzeczne\n";
         }
     }
     else {
         cout << "x = " << -b / a;
     }
     */
     /*
     //zad 2 i 3
     float a, b, c;
     cout << "Podaj a: ", cin >> a;
     cout << "Podaj b: ", cin >> b;
     cout << "Podaj c: ", cin >> c;
     if (a != 0) {
         float delta = (b * b) - (4 * a * c);
         if (delta == 0) {
             cout << "1=jedno rozwiazanie, x1 = " << (-b) / (2 * a);
         }
         else if (delta > 0) {
             cout << "Dwa rozwiazanie: \n";
             cout << "x1 = " << (-b - sqrt(delta)) / (2 * a) << endl;
             cout << "x2 = " << (-b + sqrt(delta)) / (2 * a) << endl;

         }
         else {
             cout << "Brak rozwiazan\n";
         }

     }
     else {
         //zad 1
         if (b == 0) {
             if (c == 0) {
                 cout << "Rownanie rozsamowsciowe\n";
             }
             else {
                 cout << "Rownanie sprzeczne\n";
             }
         }
         else {
             cout << "x = " << -c / b;
         }
     }
     */
     /*
      //zad 4
     float x, a, b, c;
     cout << "Podaj x: ", cin >> x;

     if (x > 0) a = 2 * x;
     else if (x == 0) a = 0;
     else if (x < 0) a = -3 * x;

     if (x >= 1) b = x * x;
     else if (x < 1) b = x;

     if (x > 2) c = 2 + x;
     else if (x == 2) c = 2;
     else if (x < 2) c = x - 4;

     cout << "a = " << a << ", b = " << b << ", c = " << c;
     */
     //zad 5
     /*
     float x, y, z, temp;
     cout << "Podaj x: ", cin >> x;
     cout << "Podaj y: ", cin >> y;
     cout << "Podaj z: ", cin >> z;
     if (x > y) {
         temp = x;
         x = y;
         y = temp;
     }
     if (y > z) {
         temp = y;
         y = z;
         z = temp;
     }
     if (x > y) {
         temp = x;
         x = y;
         y = temp;
     }
     cout << x << " <= " << y << " <= " << z;
     */
     //zad 6
    /*
    bool padaDeszcz, jestAutobus;

    cout << "Czy pada deszcz?: ", cin >> padaDeszcz;
    cout << "Czy jest autobus?: ", cin >> jestAutobus;

    if (padaDeszcz && jestAutobus) {\
        cout << "Warunek 1. zostal spelniony\n";
        cout << "Wez parasol" << endl;
        cout << "Dostaniesz sie na uczelnie"<<endl;
    }
    if (padaDeszcz && !jestAutobus) {
        cout << "Warunek 2. zostal spelniony\n";
        cout << "Nie dostaniesz sie na uczelnie"<<endl;
    }
    if (!padaDeszcz && jestAutobus) {
        cout << "Warunek 3. zostal spelniony\n";
        cout << "Dostaniesz sie na uczelnie" << endl;
        cout << "Milego dnia i pieknej pogody"<<endl;
    }
    */
    /*
    //zad 7
    bool jestZnizkaNaSamochod, otrzymalesPremie;

    cout << "Czy masz znizke na samochod?: ", cin >> jestZnizkaNaSamochod;
    cout << "Czy otrzymales premie?: ", cin >> otrzymalesPremie;

    if (!jestZnizkaNaSamochod || otrzymalesPremie) {
        cout << "Warunek 1. zostal spelniony\n";
        cout << "Mozesz kupic samochod!" << endl;
        cout << "Znizki na samochod nie ma :(" << endl;
    }
    if (!jestZnizkaNaSamochod || !otrzymalesPremie) {
        cout << "Warunek 2. zostal spelniony\n";
        cout << "Zakup samochodu trzeba odlozyc na pozniej..."<<endl;
        cout << "Znizki na samochod nie ma"<<endl;
    }
    if (jestZnizkaNaSamochod || otrzymalesPremie) {
        cout << "Warunek 3. zostal spelniony\n";
        cout << "Mozesz kupic samochod!" << endl;
    }
    */
}