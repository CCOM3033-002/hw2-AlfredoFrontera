/*
Asignación 2: Suma de dos fracciones
Nombre: Alfredo F. Frontera Del Valle
Núm. Est: 801-21-1568
no colaboraciones.
*/

#include <iostream>
using namespace std;

int main() {
    cout << "Este programa suma dos fracciones." << endl;

    int numerador1, denominador1, numerador2, denominador2;
    
    cout << "Entre el numerador de la 1ra fracción: ";
    cin >> numerador1;
    cout << "Entre el denominador de la 1ra fracción: ";
    cin >> denominador1;
    cout << "Entre el numerador de la 2da fracción: ";
    cin >> numerador2;
    cout << "Entre el denominador de la 2da fracción: ";
    cin >> denominador2;
    int sumaNumerador = numerador1 * denominador2 + numerador2 * denominador1;
    int sumaDenominador = denominador1 * denominador2;
    
    cout << "La suma es " << sumaNumerador << "/" << sumaDenominador << "." << endl;
    
    return 0;
}
