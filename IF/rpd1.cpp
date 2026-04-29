#include <iostream>
using namespace std;

main (){
int v;
cout << "Ingrese su velocidad" << endl;
cin >> v;
if (v > 60  &&  v <= 80 ) {
    cout << "Usted recibira una multa de 100 $ ";

}
else if(v > 80){
    cout << "Usted recibira una multa de 150 $ ";
}
else {
    cout << "Usted esta dentro del limite de velocidad permitido";
}

    return 0;
}