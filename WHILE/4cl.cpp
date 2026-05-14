#include <iostream>
using namespace std;

int main () {
    int x;
    cout << "Bienvenido, este es el menu de nuestra pagina web" << endl;
    
    do {
        cout << "Presione 1 para mas informacion ,2 para ver como contactarnos o 3 para ver nuestros servicios" << endl;
        cout << "Si gustase salirse del menu presione 4" << endl;
        cin >> x;
        if (x==1){
            cout <<"TechNova Solutions es una empresa dedicada a brindar soluciones tecnologicas para estudiantes, negocios y profesionales. Ayudamos con soporte tecnico, desarrollo de paginas web y asesoria digital." << endl;
        }
        else if (x==2){
            cout << "Telefono: 555-123-4567" << endl << "Correo electronico: contacto@technova.com" << "Direccion: 120 Innovation Ave, Orlando, FL" << endl << "Horario: Lunes a viernes, 8:00 a.m. a 5:00 p.m." << endl;
        }
        else if (x == 3) {
            cout << "1. Creacion de paginas web" << endl << "2. Soporte tecnico para computadoras" << "3. Instalacion de software" << endl << "4 Asesoria tecnologica para pequenos negocios" << endl;

            
        }
    }
    while (x !=4 );
    if (x== 4){
        return 1;
    }
        

return 0;}