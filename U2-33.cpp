//Ejercicio Línea 33: Problema 3.10. Tablas to pro.

#include <iostream>
using namespace std;

int main (){
	
int numero = 0;

	for (int i = 1; i <= 10; i++){
		cout << "Tabla del " << i << ": " << endl;
		for (int j = 1; j <= 10; j++){
			cout << i << " x " << j << " = " << i*j << endl;
		}
		cout << endl;
	}
	
	
}