
#include <iostream>
#include <string>
using namespace std;

int main() {
    string user;
    int contra;

    cin >> user >> contra;

    if (user == "nombre" && contra == 1234) {
        cout << "Acceso concedido\n";
    } else {
        cout << "Acceso denegado\n";
    }

    return 0;
}