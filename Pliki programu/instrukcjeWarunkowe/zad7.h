#pragma once
#include <iostream>
using namespace std;


void zad7() {
    
    /*
    (zmienne) liczby zmiennoprzecinkowe, kt�re oznaczaj�: 
    a - pierwsza liczba, 
    b - druga liczba, 
    c - trzecia liczba, 
    x - zmienna pomocnicza, kt�ra przechowuje najwi�ksz� liczb�
    */
    float a, b, c, x;
    cout << "Podaj pierwsza liczbe: " << endl;
    cin >> a;
    cout << "Podaj druga liczbe: " << endl;
    cin >> b;
    cout << "Podaj trzecia liczbe: " << endl;
    cin >> c;


    /*
        
        instrukcja warunkowa, kt�ra:
        sprawdza, czy zmienna a jest najwi�ksz� liczb� z 3 pobranych, 
        przypisuje jej warto�� do zmiennej x, 
        wypisuje odpowiedni komunikat
    
    */
    if (a > b && a > c) {
        x = a;
        cout << "Najwieksza liczba: " << x << " (pierwsza liczba)" << endl;
    }

    /*
       
       instrukcja warunkowa, kt�ra:
       sprawdza, czy zmienna b jest najwi�ksz� liczb� z 3 pobranych,
       przypisuje jej warto�� do zmiennej x,
       wypisuje odpowiedni komunikat

    */
    else if (b > a && b > c) {
        x = b;
        cout << "Najwieksza liczba: " << x << " (druga liczba)" << endl;
    }

    /*

       instrukcja warunkowa, kt�ra:
       sprawdza, czy zmienna b jest najwi�ksz� liczb� z 3 pobranych,
       przypisuje jej warto�� do zmiennej x,
       wypisuje odpowiedni komunikat

    */
    else if (c > a && c > b) {
        x = c;
        cout << "Najwieksza liczba: " << x << " (trzecia liczba)" << endl;
    }

}
