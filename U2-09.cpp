//Ejercicio Línea 09: Ejercicio 2.7: Escribir un programa que lea tres números reales, calcule el máximo y finalmente lo escriba en la salida estándar.

#include <iostream>
using namespace std;

int main(){

double a, b, c; // Declara e inicializa las variables para almacenar los valores leídos desde teclado.
a = 0.0; b = 0.0; c = 0.0;

	cout << "\nIntroduzca el primer valor real: "; // 
	cin >> a;
	cout << "Introduzca el segundo valor real: ";
	cin >> b;
	cout << "Introduzca el tercer valor real: ";
	cin >> c;

	if (a == b && b == c) // Caso: los tres valores son iguales
		cout << "\nLos tres valores introducidos son iguales y no hay máximo." << endl;
	else // Caso: los tres valores no son iguales	
		if (a >= b)  // Caso: a >= b
			if (a != b) // Caso: a > b, el mayor parcial es a y pasa a compararse con c:
				if (a >= c)
					if (a == c) // Caso a = c; ambos son el máximo.
						cout << "\nEl primer y el tercer valor son iguales y son el máximo." << endl;
					else // Caso a > c; a sería el máximo.
						cout << "\nEl primer valor es el máximo." << endl;
				else // Caso: c > a; c es el máximo.
						cout << "\nEl tercer valor es el máximo." << endl;
			else // Caso: a == b
				if (a < c) // Caso: a y b (maximo parcial) < c; c sería el máximo:
					cout << "\nEl tercer valor es el máximo" << endl;
				else // Caso: a y b (máximo parcial)> c; a y serían los máximos:
					cout << "\nEl primer y el segundo valor son iguales y son los máximos." << endl;
		else // Caso b > a; b es el máximo parcial y se compara con c:
				if (b >= c)
					if (b != c) // Caso b > c; b sería el máximo:
						cout << "\nEl segundo valor es el máximo." << endl;
					else // Caso b == c; b y c serían los máximos:
						cout << "\nEl segundo y el tercer valor son iguales y son los máximos." << endl;
				else // Caso: b < c; c sería el máximo:
					cout << "\nEl tercer valor es el máximo." << endl;
					
}

