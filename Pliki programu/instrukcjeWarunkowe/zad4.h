#pragma once
#include <iostream>
using namespace std;


void zad4() {
    //(zmienna) liczba ca³kowita (a), która oznacza liczbê sprawdzan¹ pod wzglêdem parzystoœci
    int a;
    
    //pobranie od u¿ytkownika liczby i przypisanie jej do zmiennej (a)
    cout << "Podaj liczbe: " << endl;
    cin >> a;
    
    //instrukcja warunkowa sprawdzaj¹ca, czy liczba jest parzysta ( przy wykorzystaniu modulo (%) ) i wypisanie odpowiedniego komunikatu
    if ( a%2==0 ) {
        cout << "Liczba jest parzysta." << endl;
    }
    else {
        cout << "Liczba jest nieparzysta.";
    }
}

