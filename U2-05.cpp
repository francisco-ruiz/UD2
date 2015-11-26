//Ejercicio Línea 05: Problema 2.1: Programa que lea dos números reales y escriba en pantalla cuál es el mayor de los dos.

#include <iostream>
using namespace std;

int main(){

double real_1, real_2; // Declaración e inicialización de variables reales para almacenar los datos a comparar.
real_1 = 0.0; real_2 = 0.0;

	cout << "\nEscriba el primer número real: ";
	cin >> real_1;
	cout << "Escriba el segundo número real: ";
	cin >> real_2;

	if (real_1 == real_2)
		
		cout << "\nEl primer número es igual que el segundo." << endl;

	else {	

		if (real_1 > real_2)

			cout << "\nEl primer número es mayor que el segundo." << endl;

		else

			cout << "\nEl segundo número es mayor que el primero." << endl;
	}
}
