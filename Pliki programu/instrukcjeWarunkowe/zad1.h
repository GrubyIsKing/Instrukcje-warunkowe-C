#pragma once
#include <iostream>
using namespace std;


void zad1(){
    //(zmienne) liczby zmiennoprzecinowe kt�re oznaczaj�: a - pierwsza liczba, b - druga liczba, x - wynik r�wnania
    float a, b, x;
    cout << "Podaj pierwsza liczbe: " << endl;
    
    //pobranie od u�ytkownika pierwszej liczby i przypisanie jej do zmiennej (a)
    cin >> a;
    cout << "Podaj druga liczbe: " << endl;
    cin >> b;
    
    //instrukcja warunkowa sprawdzaj�ca czy mo�na wykona� r�wnanie (nie mo�na dzieli� przez 0)
    if (b == 0) {
        
        //wypisanie komunikatu o b��dzie
        cout << "Nie mozna obliczyc wyniku." << endl << endl << endl;
        //ponowne uruchomienie programu
        zad1();
    }
    else {
        
        //obliczenie r�wnania i przypisanie go do zmiennej x
        x = a / b;

        //wypisanie wyniku na ekran
        cout << "Wynik: " << x << endl;
    }
}

