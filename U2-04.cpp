﻿//Ejercicio Línea 04: Problema 2.1. Obtener las dos soluciones de una ecuación de segundo grado .

#include <iostream>
#include <cmath>
using namespace std;

main(){
	
double a, b, c; // Declara tres variables reales para capturar los valores de a, b y c.
a = 0.0; b = 0.0; c = 0.0; // Inicialización de las tres variables.

double solucion_1, solucion_2; // Declara dos variables para almacenar los valores de las dos soluciones de la ecuación.
double discriminante, comprobacion; // Declara una variable intermedia para el cálculo de la raíz cuadrada.
solucion_1 = 0.0; solucion_2 = 0.0; discriminante = 0.0; comprobacion = 0.0;

	cout << "Resolución de ecuaciones de segundo grado del tipo ax^2 + bx + c = 0" << endl;
	cout << "\nIntroduzca el valor de 'a' en la ecuación: ";
	cin >> a; // Almacena en la variable a el valor introducido por el usuario a través del teclado.
	
	cout << "Introduzca el valor de 'b' en la ecuación: ";
	cin >> b; // Almacena en la variable b el valor introducido por el usuario a través del teclado.
	
	cout << "Introduzca el valor de 'c' en la ecuación: ";
	cin >> c; // Almacena en la variable c el valor introducido por el usuario a través del teclado.
	
	discriminante = (b*b) - ((4)*(a)*(c));

	if (a == 0){
		cout << "\nLa ecuación no tiene término de segundo grado y no tiene soluciones reales." << endl;
	}
	else {
		if (discriminante >=0){

			cout << "\nEl contenido del discriminante del polinomio es: " << discriminante << endl;
		
			solucion_1 = (-b + sqrt(discriminante))/(2.0*a);
			solucion_2 = (-b - sqrt(discriminante))/(2.0*a);
		
			cout << "\nLa solucion x1 es: " << solucion_1 << endl;
			cout << "La solucion x2 es: " << solucion_2 << endl;
		}
		else {
		cout << "\nEl contenido del discriminante del polinomio es: " << discriminante << endl;		
		cout << "El discriminante tiene un valor negativo; no existen soluciones para la ecuación." << endl;
		}
	}
		
// La posibilidad de que se produzcan errores en tiempo de ejecución se da si el determinante b^2 - 4ac ofrece un resultado negativo.

}
