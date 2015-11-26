//Ejercicio Línea 16. Bucle Do While Tabla de cualquier número.

#include <iostream>
using namespace std;

int main(){
	
// Declaración e inicialización de las variables para la captura de datos desde teclado:
int tabla = 0, contador = 0;

	cout << "Introduzca el número del que desea ver su tabla de multiplicar: ";
	cin >> tabla;
	cout << "\n";
	
	do{
		contador = contador + 1;
		cout << tabla << " x " << contador << " = " << contador * tabla << endl;
	}while (contador < 10);

}
