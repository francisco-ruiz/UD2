// Ejercicio Línea 24: For: Ejemplo Tabla de multiplicar

#include <iostream>
using namespace std;

int main(){
	
int valor = 0;

		cout << "Introduzca el número del que desea obtener su tabla de multiplicar: ";
		cin >> valor;
		for (int contador = 1; contador <= 10; contador++){
			cout << contador << " x " << valor << " = " << contador * valor << endl;
		}
}
