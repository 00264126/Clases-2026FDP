#include<iostream>
using namespace std;

int main () {
    int star;
    cout << "Introduzca su cantidad de estrellas" << endl;
    cin >> star;

    switch (star){
        case 1: 
            cout << "Usted tiene un puntaje muy bajo" << endl;
        break;

        case 2: 
            cout << "Usted tiene un puntaje bajo" << endl ;
        break;

        case 3: 
            cout << "Usted tiene un puntaje regular" << endl;
        break;

        case 4: 
            cout << "Usted tiene un puntaje alto"<< endl;
        break;

        case 5: 
            cout << "Usted tiene un puntaje muy alto" << endl;

        default:
            cout << "Cantidad invalida";

        
    }
return 0;}