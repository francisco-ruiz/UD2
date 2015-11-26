//Ejercicio Línea 13: Ejercicio 2-13. Bucle Do While Satélite.

#include <iostream>
using namespace std;

int main(){
	
// Declaración e inicialización de las variables para la captura de datos desde teclado:
int dato = 0;

	do{
		cin >> dato;
		cout << "Recibido: " << dato << endl;
	} while (dato >= 0);

	cout << "Fin transmisión." << endl;	
}