#include<iostream>
using namespace std;

int main(){
int edad , peggi;
    cout << "Ingrese su edad" << endl;
    cin >> edad;

    if (edad >= 17 ){
        peggi = 1;
    }
    else if (edad < 17 && edad >= 13  ){
        peggi = 2;
    }
    else if (edad < 12){
        peggi = 3;
        
    }
    
    switch (peggi){
        case 1: 
            cout << "Se le recomiendan peliculas G, PG, PG-13 y R" << endl;
        break;
    
        case 2:
            cout <<"Se le recomiendan peliculas G, PG y PG-13 " << endl;
        break;

        case 3:
            cout <<"Se le recomiendan peliculas G y PG " << endl;
        break;
}


return 0;}