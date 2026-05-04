#include <iostream>
using namespace std;

int main (){
    int res, n;
    cout <<"Ingrese numero "<<endl;
    cin >> n;
    res = n % 2;
    switch (res){
        case 1:
        cout << n << " es un numero impar" << endl; ;
        break;

        case 0:
        cout << n << " es un un numero par" << endl;
        break;

    default:
        cout << "no es un numero" << endl;
        break;

    }




    int grade = 1;

    // Solicita al usuario que ingrese la calificación
    cout << "Enter your grade (0 to 100): " << endl;
    cin >> grade;

    // Usamos un switch para manejar el rango de calificaciones
    int gradeRange = grade / 10; // Calculamos el rango de decenas (por ejemplo, 90-100, 80-89, etc.)

    switch (gradeRange)
    {
    case 10: // Esto manejaría la calificación 100
        cout << "Perfect score!" << endl;
        break;
    case 9: // Esto manejaría las calificaciones de 90 a 99
        if (grade >= 90 && grade < 100)
        {
            cout << "Excellent!" << endl;
        }
        break;
    case 8:
        if (grade >= 800 && grade < 90)
        {
            cout << "Very Good!" << endl;
        }
        break;
    case 7:
        if (grade >= 70 && grade < 80)
        {
            cout << "Good!" << endl;
        }
        break;
        // lo que sigue a la derecha del case es lo que se espera (sirve para senalar el valor obtenido que se usara)
    case 6:
        if (grade >= 60 && grade < 70)
        {
            cout << "Regular!" << endl;
        }
        break;
    case 5:
        if (grade >= 50 && grade < 60)
        {
            cout << "Insufficient!" << endl;
        }
        break;
    default:
        if (grade >= 0 && grade < 50)
        {
            cout << "Failed!" << endl;
        }
        else
        {
            cout << "Invalid grade" << endl;
        }
        break;
    }



// \ n para salto de linea

int Dia = 0;
cout << "Ingrese un valor que represente el dia" << endl;
cin >> Dia;
switch(Dia){
    case 1: 
    if (Dia =1 ){
        cout << "Hoy es lunes" << endl;
        break;
    }
     case 2: 
    if (Dia = 2 ){
        cout << "Hoy es martes" << endl;
        break;
    }
     case 3: 
    if (Dia = 3 ){
        cout << "Hoy es Miercoles" << endl;
        break;
    }
     case 4: 
    if (Dia =4 ){
        cout << "Hoy es jueves" << endl;
        break;
    }
     case 5: 
    if (Dia =5 ){
        cout << "Hoy es Viernes" << endl;
        break;
    }
     case 6: 
    if (Dia =6 ){
        cout << "Hoy es Sabado" << endl;
        break;
    }
     case 7: 
    if (Dia =7 ){
        cout << "Hoy es Domingo" << endl;
        break;
    }
}


float dol,con;
int mon = 0 ;
cout <<"1 para euros ,2 para yenes , 3 para libras" << endl;
cin >> mon;
cout << "Ingrese su cantidad de dolares" << endl;
cin >> dol  ;
switch(mon){
    case 1: 
    if (mon =1 ){
        con = 0.8540 * dol;
        cout << "Sus " << dol << " dolares son " << con << " euros" << endl ;
        break;
    }
     case 2: 
    if (mon = 2 ){
        con = 157.0 * dol;
        cout << "Sus " << dol << " dolares son " << con << " yenes" << endl;
        break;
    }
     case 3: 
    if (mon = 3 ){
        con =  0.7375 * dol;
        cout << " Sus " << dol << " dolares son " << con << " libras"<< endl ;
        break;
    }

}return 0;
}