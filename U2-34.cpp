//Ejercicio Línea 34: Problema 3.11. Dominó.

#include <iostream>
using namespace std;

int main (){
	
int numero = 0;

	for (int i = 0; i <= 6; i++){
		for (int j = i; j <= 6; j++){
			cout << "Ficha " << i << " / " << j << endl;
		}
		cout << endl;
	}
}