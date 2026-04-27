#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int x,y;
    // Solicitud de info
    cout << "Introduzca un valor" << endl;
    cin >> y;

    // Proceso de x + y^y
    x = pow (y,y);
    cout << "el valor es << x ";

    // Determinar si es par o impar
    if (x % 2 ==0){
        cout << "El numero: " << endl << x << "es par" << endl;
    }
    else {
        cout << "El numero: " << endl << x << "es impar" << endl;

    }
    if (y < 0) {
        cout << "El numero: " << y << " es negativo";
    }
    else if (y>0){
    cout << "El numero: " << y << " es positivo" ;
    }

return 0;}