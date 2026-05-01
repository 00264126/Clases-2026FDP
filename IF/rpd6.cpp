#include <iostream>
using namespace std;

int main (){
    int edad,acc,xp, contador=0;
    cout << "Cuanto mayor sea su cantidad de puntos peor sera su resultado " << endl;
    cout << "Ingrese su edad " << endl;
    cin >> edad ;

    if (edad <= 20){
        contador = contador + 5;
    }
    else if (edad <= 60 && edad > 20) {
        contador = contador + 0;
    }
      else if (edad > 60) {
        contador = contador + 5;
    }
    cout << "Usted tiene " << contador << " puntos" << endl << "Ingrese el numero de accidentes que ha tenido" << endl;   
    cin >> acc;
    if (acc == 0){
        contador = contador + 0;

    }
    if (acc <=3 && acc >= 1){
        contador = contador + 3;
        
    }
    else if (acc > 3){
        contador = contador + 5;
        
    }
    cout << "Usted tiene " << contador << " puntos" << endl << "Ingrese sus anos de experiencia al volante" << endl; 
    cin >> xp;

    if(xp <= 5){
        contador = contador + 5;

    }
    else if (xp > 5 && xp <= 15 ){
        contador = contador + 3;

    }
    else if (xp > 15  ){
        contador = contador + 0;
        
    }
    cout << "Usted tiene un resultado final de " << contador << " puntos" << endl << "Por lo tanto,"; 
    if(contador <=3){
    cout << " su estado es sobresaliente";

    } 
    else if ( contador >3 && contador <=8){
        cout <<" su estado es normal";
    }
     else if ( contador >8 && contador <=15){
        cout <<" su estado esta bajo observacion";
    }

return 0;}