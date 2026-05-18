#include <iostream>
using namespace std;

int main (){
    int contador,x =1,y =0;
    for (contador = 0; contador <= 10; contador= contador + 1 ){
        x = x + y;
        cout << x << endl;
        y = x + y;
        cout << y << endl;


    }
    

return 0;}
