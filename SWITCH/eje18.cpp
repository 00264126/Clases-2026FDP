#include <iostream>
using namespace std;

int main(){
    int x;
    float con;
    cout << "Presione 1 para convertir cm a pulgadas, presione 2 para metros a pies o presione 3 para km a millas" << endl;
    cin >> x;
    if (x != 1 && x != 2 && x != 3){
        cout << "Digite una posible conversion";
    }
    else{
    cout << "Ingrese la cantidad que desea convertir" << endl;
    cin >> con ;
    switch (x){
        case 1:
        con = con * 0.393701;
        cout << "Su resulado en pulgadas es: " << con << endl;
        break;
        
        case 2:
        con = con * 3.28084;
        cout << "Su resulado en pulgadas es: " << con << endl;
        break;

        case 3:
        con = con *  0.621371;
        cout << "Su resulado en millas es: " << con << endl;
        break;
        
    }
}
    return 0;
}