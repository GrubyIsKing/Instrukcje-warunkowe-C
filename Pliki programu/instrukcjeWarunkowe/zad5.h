#pragma once
#include <iostream>
using namespace std;


void zad5() {
    //(zmienne) liczby ca�kowite, kt�re oznaczaj�: a - pierwsza liczba, b - druga liczba
    int a, b;
    
    //pobranie od u�ytkownika pierwszej liczby i przypisanie jej do zmiennej (a)
    cout << "Podaj pierwsza liczbe: " << endl;
    cin >> a;
    cout << "Podaj druga liczbe: " << endl;
    cin >> b;
    
    //instrukcja warunkowa sprawdzaj�ca, czy pierwsza liczba jest podzielna przez drug� i wypisanie odpowiedniego komunikatu
    if (a % b == 0) {
        cout << "Pierwsza liczba jest podzielna przez druga";
    }
    else {
        cout << "Pierwsza liczba nie jest podzielna przez druga";
    }

}

