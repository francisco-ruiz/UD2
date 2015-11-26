// Ejercicio Línea 19. While: Ejemplo satélite

#include <iostream>
using namespace std;

int main(){
	
int recepcion = 0.0;

	while (recepcion >= 0){
		cout << "Introduzca un valor desde teclado: ";
		cin >> recepcion;
	}
	
	cout << "\nFin de la transmisión." << endl;
}
