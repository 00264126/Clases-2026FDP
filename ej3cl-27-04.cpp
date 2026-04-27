#include <iostream>
#include <cmath>
using namespace std;

int main (){
    float c;
cout << "Ingrese la tempreatura del agua en Celsius";
cin >> c;
if (c == 29) {
    cout << "El agua esta templada";

}
else if (c > 29)
{ 
    cout << "El agua esta caliente";

}
else {
    cout << "EL agua esta fria";
}
return 0;
}