//Ejercicio Línea 30: Ejemplo 3.2.2. Cálculo del MCD.

#include <iostream>
using namespace std;

int main (){

int a = 0.0, b = 0.0, resto = 0.0;
	
	cout << "Introduzca el primer valor a: ";
	cin >> a;
	cout << "Introduzca el primer valor b: ";
	cin >> b;
	
	resto = a % b;
	while (resto != 0){
		a = b;
		b = resto;
		resto = a % b;
	}
	
	cout << "El MCD es: " << b << ". ¡Gracias Euclides, contigo empezó todo!" << endl;
}