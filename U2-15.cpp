//Ejercicio Línea 15. Bucle Do While Tabla del 7.

#include <iostream>
using namespace std;

int main(){
	
// Declaración e inicialización de las variables para la captura de datos desde teclado:
int tabla = 0;

	do{
		tabla = tabla + 1;
		cout << tabla << " x 7 = " << 7 * tabla << endl;
	}while (tabla <= 10);

}
