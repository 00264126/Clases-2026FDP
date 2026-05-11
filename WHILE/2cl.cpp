#include <iostream>
using namespace std;

int main (){
    int sum = 0 , x ;
    cout << "adivine el valor" << endl;
    cin >> x;
    
    if (x == 0){
        cout << "Felicidades encontro el valor"<< endl;
    }
    else {
        while (x != 0){
            cout << "numero equivocado" << endl;
            sum = sum + x;
            cin >> x;
        
        }
    }
    cout << "la sumatoria de sus valores es: " << sum ;
}