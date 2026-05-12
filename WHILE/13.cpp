#include <iostream>
using namespace std;

int main (){
    int fibo = 0,x = 1 ;
    while (x <= 100 || fibo <=100){
        fibo = x + fibo;
        cout << fibo << endl;
        x = fibo + x;
        cout << x << "x" << endl;
    }
return 0;}
// 1 1 2 3 5 8 13 21 34 55
// Revisar si se puede eliminar los ultimos 2 valores