#include <iostream>
using namespace std;

int main ()   {
    int edad;
    cout << "Ingrese su edad " << endl;
    cin >> edad ;

    if(edad < 18) {
        cout << "Usted tiene " << edad << "años, por lo tanto es menor de edad" << endl ;

    }
    else {
        cout << "Usted tiene " << edad << "años, por lo tanto es mayor de edad'";
    }




    return 0;
}

