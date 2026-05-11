#include <iostream>
using namespace std;

int main (){
    int sum = 0 , x;
    cout << "Ingrese un valor" << endl;
    cin >> x;
    if(x % 2 == 0){
        while (x >= 0){
            sum = x + sum;
            x = x - 2 ;
        }
    
    }
    else {
        x = x-1;
        while (x >= 0){
            sum = x + sum;
            x = x - 2 ;
        }
    
    }
    cout << "Su sumatoria de numeros pares es de " << sum ;
return 0;}