// Ejercicio Línea 22. For: Ejemplo Satélite

#include <iostream>
using namespace std;

int main (){

double recepcion = 0; double total = 0.0; int repeticiones = 0;

	for (int repeticiones = 1; (recepcion >= 0 && repeticiones <= 20); repeticiones++){
		cout << "Esperando recepción de datos: ";
		cin >> recepcion;
		total = total + recepcion;
		cout << "Dato recibido número " << repeticiones << ": " << recepcion << endl;
		cout << "El valor de medio de los datos recibidos es: " << total/repeticiones << endl;
	}

	cout << "Fin de la transmisión" << endl;
 
}
