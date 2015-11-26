//Ejercicio Línea 10: Ejercicio 2-9. Leer un número real correspondiente a una nota y evaluar si es Suspenso, Aprobado, Notable o Sobresaliente.

#include <iostream>
using namespace std;

int main(){

double nota; nota = 0.0; // Declaración e inicialización de la variable que capturará el valor de una nota desde teclado.

	// Captura el valor de la nota desde el teclado y lo almacena en la variable nota.
	cout << "\nIntroduzca el valor de la nota, entre 0 y 10 que desea evaluar: ";
	cin >> nota;

	// Evaluación de la nota y salida por pantalla del resultado.
	// Comprobar que el valor introducido es un número y está comprendido dentro del intervalo deseado.
	if (nota >=0.0 && nota <=10.0) // El valor introducido es correcto.
			if (nota < 5) // Caso: Suspenso.
				cout << "\nLo sentimos, usted ha suspendido el examen." << endl;
			else // Caso: El examen está aprobado, se evaluará con qué calificación.
				if (nota < 7) // Caso: está aprobado pero no llega a Notable.
					cout << "\nEnhorabuena, su calificación es de Aprobado" << endl;
				else // Caso: la nota excederá el aprobado y puede ser Notable o Sobresaliente:
					if (nota < 9) // Caso: la nota no llega a Sobresaliente, es un Notable:
						cout << "\nEnhorabuena, su calificación es de Notable" << endl;
					else // Caso: la nota excede el notable, luego es Sobresaliente
						cout << "\nEnhorabuena, su calificación es de Sobresaliente" << endl;
	else // Valor introducido no válido.
		cout << "\nEl valor introducido no es válido." << endl;

}