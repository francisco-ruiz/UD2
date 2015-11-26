//Ejercicio Línea 07. Problema 2.3: Comprobar el efecto de eliminar las dos llaves de la sentencia if de un programa.

#include <iostream>
using namespace std;

int main(){
	
int dato;

		cout << "Introduzca un valor entero distinto de cero: ";
		cin >> dato;
		
		if (dato != 0) // Al eliminar las llaves que delimitan las dos sentencias de la condición el flujo del programa salta la primera al no cumplir la condiciópero continua después de la segunda sentencia.
			cout << "Ha escrito " << dato << " que es distinto de cero" << endl;
			cout << "Es un alumno muy obediente" << endl;
		
		
		if (dato == 0)
			cout << "Ups! qué desobediente..." << endl;
}
