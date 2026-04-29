#include <iostream>
#include <string>


using namespace std;

int main () {
int user = 5678, contra = 1234; // Se salta el proceso si se ingrese una letra para el user

cout << "Ingrese su usuario" << endl ;
cin >> user;

cout << "Ingrese su contrasena " << endl ;
cin >> contra;
if (contra == 1234 && user == 5678) {
    cout << "Bienvenido usuario" << user << endl;

}
else {
    cout << " usuario o contrasena equivocada, vuelva a intentar";

}



return 0;}