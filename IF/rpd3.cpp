#include <iostream>
using namespace std;

int main (){
    int edad;
    cout << "Que edad tiene el nino?"<< endl;
    cin >> edad;
    
    if (edad < 5){
        cout << "La entrada es gratis";

    }
    else if (edad >= 5 && edad <= 12){
        cout <<"La entrada tiene un costo de 5$ ";
    }
    else {
        cout << "Su entrada tiene un costo de 10 $ ";
    }
    return 0;
}