#include <iostream>
using namespace std;

int main (){
float peso;
cout << "Ingrese el peso de su paquete " << endl ;
cin >> peso;

if (peso <= 5){
    cout << "Su tarifa de envio es de 5 $";

}
 else if (peso >= 6 && peso <= 10) {
    cout << "Su tarifa a pagar es de 10 dolares" ;

 }
 else {
    cout << "Su total a pagar es de 15 dolares";
 }

    return 0;
}