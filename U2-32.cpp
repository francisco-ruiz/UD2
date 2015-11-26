//Ejercicio Línea 32: Problema 3.3. Max min.

#include <iostream>
using namespace std;

int main (){
	
int valor = 0, maximo = 0, minimo = 0, repeticiones = 0;

	cout << "Introduzca el número de valores que desee introducir: ";
	cin >> repeticiones;
	
	for (int contador = 1; contador <= repeticiones; contador++){
		cout << "\nIntroduzca un número entero: ";
		cin >> valor;
		if (contador == 1){
			maximo = valor;
			minimo = valor;
		}
		if (valor >= maximo)
			maximo = valor;
		if (valor <= minimo)
			minimo = valor;
		cout << "En el paso " << contador << " el máximo es: " << maximo << " y el mínimo es: " << minimo << endl;
	}
}