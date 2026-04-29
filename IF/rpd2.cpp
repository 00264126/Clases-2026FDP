
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
        int contador = intentos -1;
        
    }    
    
    return 0;
}