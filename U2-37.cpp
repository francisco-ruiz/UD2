//Ejercicio Línea 37: Problema 2.8. Programa para jugar al ajedrez.

#include <iostream>
#include <cmath>
using namespace std;

int main (){
	
int f1 = 0, c1 = 0, f2 = 0, c2 = 0, mov_fila = 0, mov_columna = 0;

		//Captura de los valores de las coordenadas de posición inicial y final. Con la condición Do While se repiten las capturas hasta que el valor introducido para cada coordenada esté comprendido entre 1 y 8 //
		do{
			cout << "Introduzca la fila de la posición inicial: ";
			cin >> f1;
		}while (f1 < 1 || f1 > 8);

		do{
			cout << "Introduzca la columna de la posición inicial: ";
			cin >> c1;
		}while (c1 < 1 || c1 > 8);

		do{
			cout << "Introduzca la fila de la posición final: ";
			cin >> f2;
		}while (f2 < 1 || f2 > 8);
		
		do{
			cout << "Introduzca la columna de la posición final: ";
			cin >> c2;
		}while (c2 < 1 || c2 > 8);
		
		mov_fila = f2 - f1;
		mov_columna = c2 - c1;
		
		cout << "El movimiento de fila es " << mov_fila << " y el de columna " << mov_columna << endl;
	
		// Comprobación de que los movimientos introducidos son válidos para, en primer lugar, la Torre. Se comprueba en primer lugar porque, si es un movimiento válido para la Torre, también lo será para la Reina //
		
		if ((mov_fila == 0) || (mov_columna == 0)) // El movimiento se realiza en vertical u horizontal, es válido para la Torre y la Reina//
			cout << "\nEl movimiento es vertical u horizontal y es válido para la Torre y para la Reina" << endl;
		else{ // El movimiento se hace en las dos componentes, luego no es válido para la Torre. El siguiente If Else comprobará si se hace en diagonal y es válido para la Reina //
			cout << "\nEl movimiento no es válido para la Torre." << endl;
				if (abs(mov_fila / mov_columna) == 1) // El movimiento es válido y diagonal ya que se desplaza lo mismo en vertical que en horizontal o también cumple la condición de movimiento horizontal o vertical de la torre. Por tanto cumple las condiciones de movimiento de la Reina //
					cout << "\nEl movimiento es diagonal y válido para la Reina." << endl;
				else // No cumple las condiciones de la Torre ni de la Reina
					cout << "\nEl movimiento no es válido para la Reina." << endl;
			}
} 