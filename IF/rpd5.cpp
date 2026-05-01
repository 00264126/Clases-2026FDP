#include <iostream>
using namespace std;

int main() {
    int consumo;
    cout << "Ingrese su consumo de electricidad" << endl;
    cin >> consumo;

    if (consumo < 100){
        cout << "Su consumo es bajo" << endl;

    }
    else if ( consumo >= 100 && consumo <= 200){
        cout << "Su consumo es medio" << endl; 
    }
    else {
        cout << "Su consumo es alto";
    }
return 0;}