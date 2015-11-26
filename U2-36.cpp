//Ejercicio Línea 36: Ejemplo 3.5.2. Expresión que se aproxima al valor de pi.

#include <iostream>
#include <cmath>
using namespace std;

int main (){
	
double pi = 0.0, sumatoria = 0.0;
double n = 0, paso = 0;
	
	cout << "Introduzca el número de sumandos con el que quiere aproximarse al valor de pi: ";
	cin >> paso;
	
	for (n=0; n <= paso; n++){
		sumatoria += pow(-1.0, n)/pow(((2.0*n)+1.0),3);
		cout << "En el paso " << n << " el valor de la sumatoria es: " << sumatoria << endl;
	}
	
	cout << "\nEl valor aproximado de pi es: " << cbrt(sumatoria*32) << endl;
	
}