#pragma once
#include <iostream>
using namespace std;


void zad1(){
    //(zmienne) liczby zmiennoprzecinowe które oznaczaj¹: a - pierwsza liczba, b - druga liczba, x - wynik równania
    float a, b, x;
    cout << "Podaj pierwsza liczbe: " << endl;
    
    //pobranie od u¿ytkownika pierwszej liczby i przypisanie jej do zmiennej (a)
    cin >> a;
    cout << "Podaj druga liczbe: " << endl;
    cin >> b;
    
    //instrukcja warunkowa sprawdzaj¹ca czy mo¿na wykonaæ równanie (nie mo¿na dzieliæ przez 0)
    if (b == 0) {
        
        //wypisanie komunikatu o b³êdzie
        cout << "Nie mozna obliczyc wyniku." << endl << endl << endl;
        //ponowne uruchomienie programu
        zad1();
    }
    else {
        
        //obliczenie równania i przypisanie go do zmiennej x
        x = a / b;

        //wypisanie wyniku na ekran
        cout << "Wynik: " << x << endl;
    }
}

