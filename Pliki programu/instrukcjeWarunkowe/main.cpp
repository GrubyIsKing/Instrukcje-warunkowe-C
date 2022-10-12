#include <iostream>
/*
    Autor: Jakub Zaborowski
    Temat: Instrukcje warunkowe
    Data: 12.10.2022
*/


//Pobranie plików nagłówkowych 
#include "zad1.h";
#include "zad2.h";
#include "zad3.h";
#include "zad4.h";
#include "zad5.h";
#include "zad6.h";
#include "zad7.h";
#include "zad8.h";
#include <Windows.h>
using namespace std;


int main()
{
    cout << "Zadanie 1" << endl << endl;
    //funckja wykonująca zadanie 1 z pliku zad1.h
    zad1();

    //Zatrzymanie działań na 2s
    Sleep(2000);
    
    //Wyczyszczenie konsoli
    system("cls");
    
    cout << "Zadanie 2" << endl << endl;
    zad2();

    Sleep(2000);
    system("cls");

    cout << "Zadanie 3" << endl << endl;
    zad3();

    Sleep(2000);
    system("cls");

    cout << "Zadanie 4" << endl << endl;
    zad4();

    Sleep(2000);
    system("cls");

    cout << "Zadanie 5" << endl << endl;
    zad5();

    Sleep(2000);
    system("cls");

    cout << "Zadanie 6" << endl << endl;
    zad6();

    Sleep(2000);
    system("cls");

    cout << "Zadanie 7" << endl << endl;
    zad7();

    Sleep(2000);
    system("cls");

    cout << "Zadanie 8" << endl << endl;
    zad8();

    Sleep(2000);
}

