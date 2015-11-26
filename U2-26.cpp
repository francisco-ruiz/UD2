// Ejercicio Línea 26. Calcular el factorial de un número n.

#include <iostream>
using namespace std;

int main(){

int numero = 0, factorial = 1;

	cout << "Por favor, introduzca el número del que desea obtener su factorial: ";
	cin >> numero;
	
	for (int contador = 1; (contador <= numero); contador++){
		factorial = factorial * contador;
		cout << "Paso " << contador << ": " << factorial << endl;
	}
	
	cout << "\nEl valor del factorial de " << numero << " es : " << factorial << endl;
}