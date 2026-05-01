#include <iostream>
using namespace std;

int main() {
    int contra1 = 1;
    cout << "Ingrese su contrasena 2 veces para verificacion" << endl;
    cin >> contra1 >> contra1 ;

    if (contra1 == 1 ){
        cout << "Verificacion completada" << endl ;

    }
    else {
        cout << "Vuelva a intentarlo " << endl ;    }
return 0;}