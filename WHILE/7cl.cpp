#include <iostream>
using namespace std;

int main () {
    int conta;
    cout << "Ingrese su numero ";
    cin >> conta;
    while (conta >= 0){
        cout << conta << endl;
        conta = conta -1 ;
    }
cout << "Se acabo su tiempo" << endl;
return 0;}