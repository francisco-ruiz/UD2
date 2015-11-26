//Ejercicio Línea 12: Ejercicio 2-10. Escribir las expresiones booleanas que corresponden a las siguientes condiciones:

#include <iostream>
using namespace std;

int main(){
	
// 1. A >= 1 && <= 6
// 2. A <= -5 || >= 5
// 3. A < -5 || >= 3
// 4. A >= 1 && <= 3 || >= 10 && < 20
// 5. A % 2 == 0 || (A % 2 != 0 && >=0 && <= 10)
// 6. A >= 0 && <= 10 || >= 20 && <= 30
// 7. A <0 && > 10 || <= 20 && >= 30

// Comprobación de las expresiones:

int entero; entero = 0;
double real; real = 0.0;

// Expresión 1:
	cout << "\nIntroduzca un número entero para comprobar si cumple la condición 1: ";
	cin >> entero;
	
	if (entero >=1 && entero <=6)
		cout << "\nEl número introducido SÍ cumple la condición 1." << endl;
	else
		cout << "\nEl número introducido NO cumple la condicion 1." << endl;

// Expresión 2:
	cout << "\nIntroduzca un número real para comprobar si cumple la condición 2: ";
	cin >> real;
	
	if (real <= -5 || real >=5)
		cout << "\nEl número introducido SÍ cumple la condición 2." << endl;
	else
		cout << "\nEl número introducido NO cumple la condicion 2." << endl;
	
// Expresión 3:
	cout << "\nIntroduzca un número real para comprobar si cumple la condición 3: ";
	cin >> real;
	
	if (real < -5 || real >= 3)
		cout << "\nEl número introducido SÍ cumple la condición 3." << endl;
	else
		cout << "\nEl número introducido NO cumple la condicion 3." << endl;
	
// Expresión 4:
	cout << "\nIntroduzca un número real para comprobar si cumple la condición 4: ";
	cin >> real;
	
	if (real >= 1 && real <= 3 || real >= 10 && real < 20)
		cout << "\nEl número introducido SÍ cumple la condición 4." << endl;
	else
		cout << "\nEl número introducido NO cumple la condicion 4." << endl;
	
// Expresión 5:
	cout << "\nIntroduzca un número entero para comprobar si cumple la condición 5: ";
	cin >> entero;
	
	if (entero % 2 == 0 || (entero % 2 != 0 && entero >=0 && entero <= 10))
		cout << "\nEl número introducido SÍ cumple la condición 5." << endl;
	else
		cout << "\nEl número introducido NO cumple la condicion 5." << endl;
	
// Expresión 6:
	cout << "\nIntroduzca un número real para comprobar si cumple la condición 6: ";
	cin >> real;
	
	if (real >= 0 && real <= 10 || real >= 20 && real <= 30)
		cout << "\nEl número introducido SÍ cumple la condición 6." << endl;
	else
		cout << "\nEl número introducido NO cumple la condicion 6." << endl;
	
// Expresión 7:
	cout << "\nIntroduzca un número real para comprobar si cumple la condición 7: ";
	cin >> real;
	
	if (real <0 && real > 10 || real <= 20 && real >= 30)
		cout << "\nEl número introducido SÍ cumple la condición 7." << endl;
	else
		cout << "\nEl número introducido NO cumple la condicion 7." << endl;

}