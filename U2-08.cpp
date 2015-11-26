//Ejercicio Línea 08. Ejercicio 2.4: Capturar por teclado un número real que será el radio de un círculo y mostrar por pantalla el radio introducido, el área del círculo y la longitud de su perímetro. Comprobar si el radio es negativo e informar por pantalla sobre ello.

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
double radio, area, perimetro; // Declaración e inicializacion de la variable real que capturará desde teclado el valor de un radio y las demás variables en las que se almacenarán los valores calculados de area, longitud y perímetro.
radio = 0.0; area = 0.0; perimetro = 0.0;

	cout << "Introduzca el valor del radio: ";
	cin >> radio;
	
	if (radio >= 0) {
		area = 3.14159*pow(radio,2); // Cálculo del área de un círculo (pi*radio^2)
		cout << "\nEl área correspondiente a un círculo de radio " << radio << " es: " << area << endl;
		
		perimetro = (2*3.14159*radio); // Cálculo de la longitud de un círculo. Se obtiene por la fórmula (2*pi*radio).
		cout << "El perímetro correspondiente a un círculo de radio " << radio << " es: " << perimetro << endl;
	}
	else // En caso de que el radio introducido sea un valor negativo, informa del hecho por pantalla.
		cout << "\nHa introducido un radio de valor negativo." << endl;
}
