// Ejercicio Línea 27: Calcular la sumatoria de un número n.

#include <iostream>
using namespace std;

int main(){

int numero = 0, sumatoria = 0;

	cout << "Por favor, introduzca el número del que desea obtener su sumatoria: ";
	cin >> numero;
	
	for (int contador = 1; (contador <= numero); contador++){
		sumatoria = sumatoria + contador;
		cout << "Paso " << contador << ": " << sumatoria << endl;
	}
	
	cout << "\nEl valor de la sumatoria de " << numero << " es : " << sumatoria << endl;
}
