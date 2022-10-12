#pragma once
#include <iostream>
using namespace std;


void zad8() {
    //(zmienne) liczby zmiennoprzecinowe które oznaczaj¹: a - pierwsza liczba, b - druga liczba, c - trzecia liczba
    float a, b, c;
    
    //pobranie od u¿ytkownika pierwszej liczby i przypisanie jej do zmiennej (a)
    cout << "Podaj pierwsza liczbe: " << endl;
    cin >> a;
    cout << "Podaj druga liczbe: " << endl;
    cin >> b;
    cout << "Podaj trzecia liczbe: " << endl;
    cin >> c;
    



    /*
        
        je¿eli:
        zmienna a jest wiêksza od zmiennej b,
        zmienna b jest wiêksza od zmiennej c,
        wyœwietl odpowiedni komunikat

    */
    if (a > b && b > c) {
        cout << "Kolejnosc rosnaca: " << c << ", " << b << ", " << a;
    }




    /*
        
        je¿eli:
        zmienna b jest wiêksza od zmiennej a,
        zmienna a jest wiêksza od zmiennej c,
        wyœwietl odpowiedni komunikat
    
    */
    else if (b > a && a > c) {
        cout << "Kolejnosc rosnaca: " << c << ", " << a << ", " << b;
    }




    /*
        je¿eli:
        zmienna c jest wiêksza od zmiennej a,
        zmienna a jest wiêksza od zmiennej b,
        wyœwietl odpowiedni komunikat
    */
    else if (c > a && a > b) {
        cout << "Kolejnosc rosnaca: " << b << ", " << a << ", " << c;
    }




    /*
        je¿eli:
        zmienna a jest wiêksza od zmiennej c,
        zmienna c jest wiêksza od zmiennej b,
        wyœwietl odpowiedni komunikat
    */
    else if (a > c && c > b) {
        cout << "Kolejnosc rosnaca: " << b << ", " << c << ", " << a;
    }




    /*
        je¿eli:
        zmienna b jest wiêksza od zmiennej c,
        zmienna c jest wiêksza od zmiennej a,
        wyœwietl odpowiedni komunikat
    */
    else if (b > c && c > a) {
        cout << "Kolejnosc rosnaca: " << a << ", " << c << ", " << b;
    }
    



    /*
        je¿eli:
        zmienna c jest wiêksza od zmiennej b,
        zmienna b jest wiêksza od zmiennej a,
        wyœwietl odpowiedni komunikat
    */
    else if (c > b && b > a) {
        cout << "Kolejnosc rosnaca: " << a << ", " << b << ", " << c;
    }




    /*
       je¿eli:
       zmienne s¹ równe
       wyœwietl odpowiedni komunikat
    */
    else if (c == b == a) {
        cout << "Liczby sa takie same." << endl;
        cout << "Liczby: " << a << ", " << b << ", " << c;
    }




    /*
        je¿eli:
        zmienna c jest równa zmiennej b
        wyœwietl odpowiedni komunikat i uruchom kolejn¹ instrukcjê warunkow¹
    */
    else if (c == b) {
        cout << "Druga i trzecia liczba sa takie same." << endl;


        /*
             je¿eli:
             zmienna a jest wiêksza od zmiennej b (równie¿ c, b = c),
             wyœwietl odpowiedni komunikat
        */
        if (a > b) {
            cout << "Kolejnosc rosnaca: " << b << ", " << c << ", " << a;
        }


        /*
            w innym wypadku:
            wyœwietl odpowiedni komunikat
        */
        else {
            cout << "Kolejnosc rosnaca: " << a << ", " << b << ", " << c;
        }
    }




    /*
        je¿eli:
        zmienna b jest równa zmiennej a
        wyœwietl odpowiedni komunikat i uruchom kolejn¹ instrukcjê warunkow¹
    */
    else if (b == a) {
        cout << "Pierwsza i druga liczba sa takie same." << endl;
        

        /*
            je¿eli:
            zmienna c jest wiêksza od zmiennej b (równie¿ a, bo b = a)
            wyœwietl odpowiedni komunikat
        */
        if (c > b) {
            cout << "Kolejnosc rosnaca: " << a << ", " << b << ", " << c;
        }



        /*
            w innym wypadku:
            wyœwietl odpowiedni komunikat
        */
        else {
            cout << "Kolejnosc rosnaca: " <<  c << ", " << a << ", " << b;
        }
    }




    /*
        je¿eli:
        zmienna a jest równa zmiennej c
        wyœwietl odpowiedni komunikat i uruchom kolejn¹ instrukcjê warunkow¹
    
    */
    else if (a == c) {
        cout << "Pierwsza i trzecia liczba sa takie same." << endl;
        
        
        /*
            je¿eli:
            zmienna b jest wiêksza od zmiennej a (równie¿ c, bo a = c)
            wyœwietl odpowiedni komunikat
        */
        if (b > a) {
            cout << "Kolejnosc rosnaca: " << a << ", " << c << ", " << b;
        }


        /*
            w innym wypadku:
            wyœwietl odpowiedni komunikat
        */
        else {
            cout << "Kolejnosc rosnaca: " << b << ", " << a << ", " << c;
        }
    }
}
