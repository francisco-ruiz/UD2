//Ejercicio Línea 17: Ejercicio de los dos números necesariamente distintos de 0.

#include <iostream>
using namespace std;

int main(){

// Declaración de las variables que contendrán los valores distintos de cero introducidos por el usuario desde teclado.	
int numero1 = 0.0, numero2 = 0.0, valido1 = 0.0, valido2 = 0.0;
	
// Lectura desde teclado evaluando si los valores introducidos cumplen la condición de ser distintos de cero.

	do{
		cout << "Introduzca un primer valor distinto de cero.";
		cin >> numero1;
	}
	while (numero1 == 0);
		
	valido1 = numero1;
	
	do{
		cout << "Introduzca un segundo valor distinto de cero.";
		cin >> numero2;
	}
	while (numero2 == 0);
	
	valido2 = numero2;
	
	//Muestra en pantalla los dos valores válidos introducidos.
	cout << "\nGracias, los dos valores válidos han sido: " << valido1 << " y " << valido2 << "." << endl;
}
