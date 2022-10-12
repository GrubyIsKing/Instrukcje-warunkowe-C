#pragma once
#include <iostream>
using namespace std;


void zad2() {
    /*
    (zmienne) liczby zmiennoprzecinowe które oznaczaj¹: 
    a - pierwsza liczba, 
    b - druga liczba, 
    c - trzecia liczba,
    d - czwarta liczba,
    x - wynik równania
    */
    float a, b, c, d, x;
    
    //pobranie od u¿ytkownika pierwszej liczby i przypisanie jej do zmiennej (a)
    cout << "Podaj pierwsza liczbe: " << endl;
    cin >> a;
    cout << "Podaj druga liczbe: " << endl;
    cin >> b;
    cout << "Podaj trzecia liczbe: " << endl;
    cin >> c;
    cout << "Podaj czwarta liczbe: " << endl;
    cin >> d;

    //instrukcja warunkowa sprawdzaj¹ca czy mo¿na wykonaæ równanie (nie mo¿na dzieliæ przez 0)
    if (b == 0 || d == 0) {
        
        //wypisanie komunikatu o b³êdzie
        cout << "Nie mozna obliczyc wyniku." << endl << endl << endl;
        //ponowne uruchomienie programu
        zad2();
    }
    else {
        
        //obliczenie równania i przypisanie go do zmiennej x
        x = a / b + c / d;

        //wypisanie wyniku na ekran
        cout << "Wynik: " << x << endl;
    }
}

