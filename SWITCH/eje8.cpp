#include<iostream>
using namespace std;

int main(){
int lad1, lad2, lad3,x;
cout << "Ingrese los tres lados de su triangulo" << endl;
cin >> lad1 >> lad2 >> lad3;

if (lad1 == lad2 && lad2 == lad3 && lad1 == lad3){
    x = 1;
}
else if (lad1 != lad2 && lad2 != lad3 && lad1 != lad3){
    x = 2;
}
else {
    x = 3;
}
switch (x){
    case 1: 
        cout << "Su tirangulo es equilatero" << endl;
    break;
    
    case 2:
        cout <<"Su traiangulo es escaleno" << endl;
    break;

    case 3:
        cout <<"Su triangulo es isoceles" << endl;
    break;
}


return 0;}