#pragma once
#include <iostream>
using namespace std;


void zad6() {
    //(zmienna) liczba ca�kowita (a), kt�ra oznacza liczb� sprawdzan� pod wzgl�dem swojego rodzaju (czy jest ujemna, dodatnia czy r�wna 0)
    int a;
    
    //pobranie od u�ytkownika liczby i przypisanie jej do zmiennej (a)
    cout << "Podaj liczbe: " << endl;
    cin >> a;

    /*
        
        instrukcja warunkowa, kt�ra:
        sprawdza, czy zmienna a jest dodatnia (wi�ksza od 0),
        wypisuje odpowiedni komunikat

    */
    if (a > 0) {
        cout << "Liczba jest dodatnia.";
    }

    /*

        instrukcja warunkowa, kt�ra:
        sprawdza, czy zmienna a jest ujemna (mniejsza od 0),
        wypisuje odpowiedni komunikat

    */
    else if (a < 0) {
        cout << "Liczba jest ujemna.";
    }

    /*

        instrukcja warunkowa, kt�ra:
        sprawdza, czy zmienna a jest r�wna 0,
        wypisuje odpowiedni komunikat

    */
    else {
        cout << "Liczba jest rowna 0.";
    }

}
