#include <iostream>
using namespace std;

int main () {
float nota;
cout << "Ingrese su nota ";
cin >> nota;

if (nota < 60){
    cout<< "Has reprobado";
}
else {
    cout << "Has aprobado";
}

    return 0;
}

