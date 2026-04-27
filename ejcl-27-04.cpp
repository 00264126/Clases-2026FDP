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

    // Determinar si es par o impar
    if (x % 2 ==0){
        cout << "El numero es: " << x << "es par" << endl;
    }
    else {
        cout << "El numero " << x << "es impar" << endl;

    }




return 0;}