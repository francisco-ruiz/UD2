//Ejercicio Línea 35: Problema 2.10. Pro Evolution Soccer.

#include <iostream>
using namespace std;

int main (){
	
double x1 = 0, x2 = 0, y1 = 0, y2 = 0, a = 0, b = 0;
	
	cout << "Introduzca los parámetros de la portería: \n" << endl;
	do{
		cout << "Coordenada x de la Cruceta izquierda): ";
		cin >> x1;
	}while (x1 < 0);
	
	do{
		cout << "Coordenada y de la Cruceta izquierda): ";
		cin >> y1;
	}while (y1 < 0);
	
	do{
		cout << "La coordenada x de la base del poste derecho ha de ser mayor que la coordenada x de la cruceta izquierda: ";
		cin >> x2;
	}while (x1 >= x2);
	
	cout << endl;
	
	cout << "(La coordenada y de la base del poste derecho ha de coincidir con la coordenada x de la cruceta izquierda, así que este valor no es seleccionable, se inicializa de forma automática)." << endl;
		y2 = x1;
	
	cout << "\nIntroduzca las coordenadas x del disparo a puerta: ";
	cin >> a;
	cout << "Introduzca las coordenadas y del disparo a puerta: ";
	cin >> b;
	
	// En primer lugar se comprueba si el disparo entra dentro de la portería	
	if ((a > x1 && a < x2) && (b < y1 && b > y2))
		cout << "\n¡¡¡Iniestazo!!! ¡¡¡Don Andrés ha vuelto a hacerlo!!!." << endl;
		
	//Disparo a la cruceta (el valor del disparo coincide con la cruceta izquierda: x1, y1 o el de la derecha: x2, y1):
	if ((a == x1) && (b == y1))
		cout << "\n¡Disparo a la cruceta izquierda! ¡CR7 posa con estudiada cara de mosqueo!" << endl;
	if ((a == x2) && (b == y1))
		cout << "\n¡Disparo a la cruceta derecha! ¡CR7, manos en jarras, mira al infinito!" << endl;
				
	//Disparo a los postes (el valor de a es igual al valor del tramo de x1 o x2 perteneciente al entorno de la portería, aunquen no iguales a los valores de la cruceta que ya han sido evaluados en el supuesto anterior.):
	if ((a == x1) && ((b < y1) || (b < y2)))
		cout << "\n¡Disparo al poste izquierdo! ¡CR7 patalea mientras mira al cielo!" << endl;
	if ((a == x2) && ((b < y1) || (b < y2)))
		cout << "\n¡Disparo al poste derecho! ¡CR7 teatralmente se deja caer de rodillas y palmea el cesped con furia!" << endl;
		
	//Disparo al larguero (el valor de b coincide con el del tramo de y1 perteneciente al entorno de la portería. Al cumplir la condición de la línea 26, nos aseguramos de que el disparo estará comprendido entre los valores de la portería, por lo que no habría que comprobar valores a izquierda o derecha de la meta. Se excluye la posibilidad de que sea igual a los valores de la cruceta porque esa condición ya ha sido contemplada en un supuesto anterior.
	if ((a > x1 && a < x2) && (b == y1))
		cout << "\n¡Disparo al larguero! ¡CR7 busca a la cámara y sonríe irónico mientras disiente con la cabeza!" << endl;	
	
	if (((a < x1) && (a > x2)) && ((b > y1) && (b < y2)))
		cout << "\n¡¡¡Fuera!!! El Bernabéu silba a CR7 y Jorge Mendes busca en su agenda al jeque del PSG." << endl;
	
		
}