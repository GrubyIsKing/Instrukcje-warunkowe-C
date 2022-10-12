#pragma once
#include <iostream>
using namespace std;


void zad6() {
    //(zmienna) liczba ca³kowita (a), która oznacza liczbê sprawdzan¹ pod wzglêdem swojego rodzaju (czy jest ujemna, dodatnia czy równa 0)
    int a;
    
    //pobranie od u¿ytkownika liczby i przypisanie jej do zmiennej (a)
    cout << "Podaj liczbe: " << endl;
    cin >> a;

    /*
        
        instrukcja warunkowa, która:
        sprawdza, czy zmienna a jest dodatnia (wiêksza od 0),
        wypisuje odpowiedni komunikat

    */
    if (a > 0) {
        cout << "Liczba jest dodatnia.";
    }

    /*

        instrukcja warunkowa, która:
        sprawdza, czy zmienna a jest ujemna (mniejsza od 0),
        wypisuje odpowiedni komunikat

    */
    else if (a < 0) {
        cout << "Liczba jest ujemna.";
    }

    /*

        instrukcja warunkowa, która:
        sprawdza, czy zmienna a jest równa 0,
        wypisuje odpowiedni komunikat

    */
    else {
        cout << "Liczba jest rowna 0.";
    }

}
