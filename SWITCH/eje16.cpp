#include <iostream>
using namespace std;

int main(){
int x;
cout << "Ingrese 1 para lunes, 2 para martes, 3 para miercoles, 4 para jueves, 5 para viernes " << endl;
cin >> x;

switch(x){
    case 1:
        cout<< "Usted tiene de 9  Elementos a 11 am y de las 11 a 1 pm Fundamentos" << endl;
    break;

    case 2:
        cout << "Usted tiene clase de 9  Precalculo a 11 am y de las 11 a 1 pm Discreta" << endl;
    break;

     case 3:
        cout<< "Usted tiene clase de 9  Elementos a 11 am y de las 11 a 1 pm Fundamentos" << endl;
    break;

    case 4:
        cout << "Usted tiene  clase de 9  Precalculo a 11 am y de las 11 a 1 pm Discreta" << endl;
    break;

    case 5:
        cout <<"Usted tiene clase de Discreta 8 a 9 am y de 10 a 11 am Precalculo" << endl;
    break;

    default:
    cout << "Invalido" << endl;


    }

return 0;}
