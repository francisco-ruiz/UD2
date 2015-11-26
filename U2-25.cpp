// Ejercicio Línea 25: Dado número (y) hallar multiplos (x) con intervalo [a,b]

#include <iostream>
using namespace std;

int main(){
	
int valor = 0, a = 0, b = 0;

	cout << "Por favor, introduzca un valor entero: ";
	cin >> valor;
	
	cout << "Por favor, introduzca el menor valor del intervalo [a,b]: ";
	cin >> a;
	cout << "Por favor, introduzca el mayor valor del intervalo [a,b]: ";
	cin >> b;
	cout << endl;
	
	// El contador se inicializa con a, el menor valor del intervalo y el bucle for recorrerá todos los valores entre a y b.
	for (int contador = a; (contador <= b); contador++){ 
		// Se comprueba que el valor actual del contador es múltiplo del valor introducido. Si es así, se muestra por pantalla; de lo contrario se sale de la comprobación y se vuelve al bucle for para comprobar el siguiente valor del intervalo.
		if (a % valor == 0)
			cout << "El valor " << a << " es múltiplo de " << valor << endl;
		a = a + 1;
	}
	
}