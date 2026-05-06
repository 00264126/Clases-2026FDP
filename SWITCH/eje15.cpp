#include<iostream>
using namespace std;

int main(){
int por ;
float sal;
    cout << "Ingrese su salario" << endl;
    cin >> sal;

    if (sal >= 2038.15 ){
         por = 1;
    }
    else if (sal < 2038.15 && sal >= 895.05  ){
        por = 2;
    }
    else if (sal < 895.05 && sal >= 550.00  ){
        por = 3;
    }
    else {
        por = 4;
    } 
        
    
    
    switch (por){
        case 1: 
            sal = sal - ( sal * 0.0725) - (sal * 0.30) - (sal * 0.03);
            cout << "Su salario final es de: "<< sal << endl;
        break;
    
        case 2:
             sal = sal - ( sal * 0.0725) - (sal * 0.20) - (sal * 0.03);
            cout << "Su salario final es de: "<< sal << endl;
        break;

        case 3:
             sal = sal - ( sal * 0.725) - (sal * 0.10) - (sal * 0.3);
            cout << "Su salario final es de: "<< sal << endl;
        break;
        default:
             sal = sal - ( sal * 0.725)  - (sal * 0.3);
            cout << "Su salario final es de: "<< sal << endl;
}


return 0;}