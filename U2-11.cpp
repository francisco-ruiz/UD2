//Ejercicio Línea 11: Ejercicio 2-12. Capturar desde teclado dos números permite elegir entre suma, resta, producto y división y mostrar el resultado por pantalla.

#include <iostream>
using namespace std;

int main(){
	
double a, b; a = 0.0; b = 0.0;
int seleccion; seleccion = 0;// Declaración e inicialización de las variables que almacenarán los valores introducidos por el usuario.

	// Captura de los valores con los que operar:
	cout << "Introduzca el primer valor para realizar cálculos: ";
	cin >> a;
	cout << "Introduzca el segundo valor para realizar cálculos: ";
	cin >> b;
	
	// Selección de las operaciones a realizar con los valores introducidos:
	cout << "\nSeleccione la operación que desee realizar con los valores introducidos: " << endl;
	cout << "Introduzca 1 si desea realizar la suma\n2 Si desea restar\n3 Si desea multiplicar\n4 Si desea dividir" << endl;
	cin >> seleccion;
	
	// Comprobar que el usuario ha seleccionado la operación correcta y mostrar por pantalla el resultado:
	switch (seleccion){
		case 1:
			cout << "\nEl resultado de la suma es: " << a + b << endl;
			break;
		case 2:
			cout << "\nEl resultado de la resta es: " << a - b << endl;
			break;
		case 3:
			cout << "\nEl resultado del producto es: " << a * b << endl;
			break;
		case 4: 
			// Se hace una comprobación de que el segundo número introducido es distinto de 0 para mostrar la división. De lo contrario se muestra un mensaje.
			if (b !=0) 	
				cout << "\nEl resultado de la división es: " << a / b << endl;
			else
				cout << "\nLo sentimos, no se puede dividir un número entre 0." << endl;
			break;
		default:
			cout << "No ha seleccionado una operación disponible, por favor, repita el proceso." << endl;
	}
}
