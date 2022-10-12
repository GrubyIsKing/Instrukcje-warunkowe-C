#pragma once
#include <iostream>
using namespace std;


void zad8() {
    //(zmienne) liczby zmiennoprzecinowe kt�re oznaczaj�: a - pierwsza liczba, b - druga liczba, c - trzecia liczba
    float a, b, c;
    
    //pobranie od u�ytkownika pierwszej liczby i przypisanie jej do zmiennej (a)
    cout << "Podaj pierwsza liczbe: " << endl;
    cin >> a;
    cout << "Podaj druga liczbe: " << endl;
    cin >> b;
    cout << "Podaj trzecia liczbe: " << endl;
    cin >> c;
    



    /*
        
        je�eli:
        zmienna a jest wi�ksza od zmiennej b,
        zmienna b jest wi�ksza od zmiennej c,
        wy�wietl odpowiedni komunikat

    */
    if (a > b && b > c) {
        cout << "Kolejnosc rosnaca: " << c << ", " << b << ", " << a;
    }




    /*
        
        je�eli:
        zmienna b jest wi�ksza od zmiennej a,
        zmienna a jest wi�ksza od zmiennej c,
        wy�wietl odpowiedni komunikat
    
    */
    else if (b > a && a > c) {
        cout << "Kolejnosc rosnaca: " << c << ", " << a << ", " << b;
    }




    /*
        je�eli:
        zmienna c jest wi�ksza od zmiennej a,
        zmienna a jest wi�ksza od zmiennej b,
        wy�wietl odpowiedni komunikat
    */
    else if (c > a && a > b) {
        cout << "Kolejnosc rosnaca: " << b << ", " << a << ", " << c;
    }




    /*
        je�eli:
        zmienna a jest wi�ksza od zmiennej c,
        zmienna c jest wi�ksza od zmiennej b,
        wy�wietl odpowiedni komunikat
    */
    else if (a > c && c > b) {
        cout << "Kolejnosc rosnaca: " << b << ", " << c << ", " << a;
    }




    /*
        je�eli:
        zmienna b jest wi�ksza od zmiennej c,
        zmienna c jest wi�ksza od zmiennej a,
        wy�wietl odpowiedni komunikat
    */
    else if (b > c && c > a) {
        cout << "Kolejnosc rosnaca: " << a << ", " << c << ", " << b;
    }
    



    /*
        je�eli:
        zmienna c jest wi�ksza od zmiennej b,
        zmienna b jest wi�ksza od zmiennej a,
        wy�wietl odpowiedni komunikat
    */
    else if (c > b && b > a) {
        cout << "Kolejnosc rosnaca: " << a << ", " << b << ", " << c;
    }




    /*
       je�eli:
       zmienne s� r�wne
       wy�wietl odpowiedni komunikat
    */
    else if (c == b == a) {
        cout << "Liczby sa takie same." << endl;
        cout << "Liczby: " << a << ", " << b << ", " << c;
    }




    /*
        je�eli:
        zmienna c jest r�wna zmiennej b
        wy�wietl odpowiedni komunikat i uruchom kolejn� instrukcj� warunkow�
    */
    else if (c == b) {
        cout << "Druga i trzecia liczba sa takie same." << endl;


        /*
             je�eli:
             zmienna a jest wi�ksza od zmiennej b (r�wnie� c, b = c),
             wy�wietl odpowiedni komunikat
        */
        if (a > b) {
            cout << "Kolejnosc rosnaca: " << b << ", " << c << ", " << a;
        }


        /*
            w innym wypadku:
            wy�wietl odpowiedni komunikat
        */
        else {
            cout << "Kolejnosc rosnaca: " << a << ", " << b << ", " << c;
        }
    }




    /*
        je�eli:
        zmienna b jest r�wna zmiennej a
        wy�wietl odpowiedni komunikat i uruchom kolejn� instrukcj� warunkow�
    */
    else if (b == a) {
        cout << "Pierwsza i druga liczba sa takie same." << endl;
        

        /*
            je�eli:
            zmienna c jest wi�ksza od zmiennej b (r�wnie� a, bo b = a)
            wy�wietl odpowiedni komunikat
        */
        if (c > b) {
            cout << "Kolejnosc rosnaca: " << a << ", " << b << ", " << c;
        }



        /*
            w innym wypadku:
            wy�wietl odpowiedni komunikat
        */
        else {
            cout << "Kolejnosc rosnaca: " <<  c << ", " << a << ", " << b;
        }
    }




    /*
        je�eli:
        zmienna a jest r�wna zmiennej c
        wy�wietl odpowiedni komunikat i uruchom kolejn� instrukcj� warunkow�
    
    */
    else if (a == c) {
        cout << "Pierwsza i trzecia liczba sa takie same." << endl;
        
        
        /*
            je�eli:
            zmienna b jest wi�ksza od zmiennej a (r�wnie� c, bo a = c)
            wy�wietl odpowiedni komunikat
        */
        if (b > a) {
            cout << "Kolejnosc rosnaca: " << a << ", " << c << ", " << b;
        }


        /*
            w innym wypadku:
            wy�wietl odpowiedni komunikat
        */
        else {
            cout << "Kolejnosc rosnaca: " << b << ", " << a << ", " << c;
        }
    }
}
