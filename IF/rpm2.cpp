#include <iostream>
using namespace std;

int main (){
    float a,b;
    cout << "Ingrese el primer valor "<< endl;
    cin >> a;

    cout << "Ingrese el segundo valor" << endl;
    cin >> b;
    
    if (a==b) {
        cout << "Ambos valores son iguales";

    }
    else if (a<b){
        cout << "El valor " << a << " es menor que " << b << endl;
    }
    else {
        cout << "El valor "  << a << " es mayor que " << b <<endl;
    }
return 0;}
