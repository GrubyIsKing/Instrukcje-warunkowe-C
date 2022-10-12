#pragma once
#include <iostream>
using namespace std;


void zad7() {
    
    /*
    (zmienne) liczby zmiennoprzecinkowe, które oznaczaj¹: 
    a - pierwsza liczba, 
    b - druga liczba, 
    c - trzecia liczba, 
    x - zmienna pomocnicza, która przechowuje najwiêksz¹ liczbê
    */
    float a, b, c, x;
    cout << "Podaj pierwsza liczbe: " << endl;
    cin >> a;
    cout << "Podaj druga liczbe: " << endl;
    cin >> b;
    cout << "Podaj trzecia liczbe: " << endl;
    cin >> c;


    /*
        
        instrukcja warunkowa, która:
        sprawdza, czy zmienna a jest najwiêksz¹ liczb¹ z 3 pobranych, 
        przypisuje jej wartoœæ do zmiennej x, 
        wypisuje odpowiedni komunikat
    
    */
    if (a > b && a > c) {
        x = a;
        cout << "Najwieksza liczba: " << x << " (pierwsza liczba)" << endl;
    }

    /*
       
       instrukcja warunkowa, która:
       sprawdza, czy zmienna b jest najwiêksz¹ liczb¹ z 3 pobranych,
       przypisuje jej wartoœæ do zmiennej x,
       wypisuje odpowiedni komunikat

    */
    else if (b > a && b > c) {
        x = b;
        cout << "Najwieksza liczba: " << x << " (druga liczba)" << endl;
    }

    /*

       instrukcja warunkowa, która:
       sprawdza, czy zmienna b jest najwiêksz¹ liczb¹ z 3 pobranych,
       przypisuje jej wartoœæ do zmiennej x,
       wypisuje odpowiedni komunikat

    */
    else if (c > a && c > b) {
        x = c;
        cout << "Najwieksza liczba: " << x << " (trzecia liczba)" << endl;
    }

}
