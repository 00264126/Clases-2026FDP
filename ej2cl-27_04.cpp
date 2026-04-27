#include <iostream>
#include <cmath>
using namespace std;

int main () {
    float pi = 3.14 , r;
    int area;
    cout << "Ingrese su radio" << endl ;
    cin >> r ;   
    area = pi*(pow(r,2));
    
    if(area % 2 == 0) {
        cout << "El valor es:" << area << "por lo tanto es par";
    }     
    else {
        cout << " El area es: " << area << " por lo tanto es impar";
    }
    return 0;}