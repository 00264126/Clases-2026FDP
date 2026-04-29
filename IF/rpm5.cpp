#include <iostream>
using namespace std;

int main (){
float peso , billetera =1000,cobro;
cout << "Ingrese el peso de su paquete " << endl ;
cin >> peso;
if (peso <= 5 && peso > 0){
    cout << "Su tarifa de envio es de 5 $ " << endl;
   cobro = billetera -5;
   cout << "Su billetera tiene un fondo restante de " << cobro << " dolares" << endl;
 }

 else if (peso >= 6 && peso <= 10) {
    cout << "Su tarifa a pagar es de 10 dolares " << endl;
   cobro = billetera - 10;
   cout << "Su billetera tiene un fondo restante de " << cobro << " dolares" << endl;
 }
 
 else if (peso >= 15) {
    cout << "Su total a pagar es de 15 dolares" << endl;
    cobro = billetera - 15;
    cout << "Su billetera tiene un fondo restante de " << cobro << " dolares" << endl;

 }
   else{
      cout << " Valor invalido";
   }
    return 0;
}