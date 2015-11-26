//Ejercicio Línea 06: Problema 2.3: Determinar si un número entero introducido desde el teclado es par o impar.
#include <iostream>
using namespace std;

int main(){

int numero; // Declaración e inicialización de una variable para almacenar un número real capturado desde teclado.
numero = 0;	
	
	cout << "\nIntroduzca número para comprobar si es par o impar: ";
	cin >> numero;
	
	if ((numero % 2) == 0) // Si el resto de la división entre 2 es cero; es decir, el módulo es cero, el número será par.
	
		cout << "\nEl número introducido es par" << endl;
		
	else // De lo contrario, el número será impar.
		
		cout << "\nEl número introducido es impar" << endl;
		
}
