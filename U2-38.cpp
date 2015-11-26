//Ejercicio Línea 38: Problema 2.8. Programa para jugar al ajedrez.

#include <iostream>
#include <cmath>
using namespace std;

int main (){

long double e = 0.0, sumatoria = 0.0;
int decimales = 0, factorial = 1, n = 0, i = 0;

	cout << "Introduzca el número de sumandos para obtener una aproximación al valor del número e: ";
	cin >> decimales;

	for (int i=0; i < decimales; i++){
		factorial = 1;
		for (int n=1; n <= i; n++){
						factorial = factorial * n;
		}
		cout << "\nEl factorial de " << i << " es " << factorial << endl;
		sumatoria += 1.0/factorial;
		cout << "En el paso " << i << " el valor de e es: " << sumatoria << endl;
	}			
	
}
