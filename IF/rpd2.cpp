
#include <iostream>
#include <string>
using namespace std;

int main() {
    int intentos = 3;
    string user= "name";
    int contra =1234;
    cout << "Ingrese su usario y contrasena ";
    cin >> user >> contra;
    if (user == "name" && contra == 1234) {
        cout << "Bienvenido usario " << user << endl;
    }
    else {
        cout << "Vuelve a intentarlo";
        int contador = intentos - 1;
        cout << "Le restan " << contador <<" intentos" << endl;
            
        cout << "Ingrese su usario y contrasena ";
    cin >> user >> contra;
    if (user == "name" && contra == 1234) {
        cout << "Bienvenido usario " << user << endl;
    }
    else {
        cout << "Vuelve a intentarlo ";
        int contador = intentos -2;
        cout << "Le restan " << contador <<" intentos" << endl;
    
        cin >> user >> contra;
    if (user == "name" && contra == 1234) {
        cout << "Bienvenido usario " << user << endl;
    }
    else {
        cout << "Vuelve a intentarlo " << endl;
        int contador = intentos -3;
        cout << "Le restan " << contador <<" intentos" << endl;
        
    }    
    
    }    
}
    return 0;
}