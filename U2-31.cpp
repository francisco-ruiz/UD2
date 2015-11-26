//Ejercicio Línea 31: Problema 3.2. Cuadrados perfectos.

#include <iostream>
#include <cmath>
using namespace std;

int main (){
	
int numero = 0, cuadrado = 0, contador = 0;

	cout << "Introduzca un número entero para comprobar si es un cuadrado perfecto: ";
	cin >> numero;
	
	//En cada iteración se incrementará un contador y se almacenará su valor en la variable cuadrado. El bucle while se repetirá hasta que el número generado al elevar contador al cuadrado sea mayor o igual que el número.
		while (cuadrado < numero){
		contador = contador + 1;
		cuadrado = pow (contador, 2);
		cout << "Paso " << contador << ": " << cuadrado << "." << endl;
	}
	
	cout << endl;
	
	
/*	Evaluación alternativa con un bucle For:

	for (contador = 1; cuadrado < numero; contador++){
		cuadrado = pow (contador, 2);
		cout << "Valor " << contador << ": " << cuadrado << endl;
	}*/
	
	//Si el valor de cuadrado es igual al número, habremos obtenido el contenido almacenado en la variable número como el cuadrado de un valor generado por el incremento de la variable contador. Por tanto el número introducido por el ususario es un cuadrado perfecto. De lo contrario, el valor de cuadrado no se ha podido obtener como el cuadrado de ningún valor, así que el valor almacenado en la variable número no se puede considerar como un cuadrado perfecto.
	if (cuadrado == numero)
		cout << "\nEl número " << numero << " ES un cuadrado perfecto." << endl;
	else	
		cout << "\nEl número " << numero << " NO es un cuadrado perfecto." << endl;
}