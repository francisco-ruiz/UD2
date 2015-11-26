//Ejercicio 29. Problema 2.9. Leer la posición de dos circunferencias y escribir la información sobre su relación.

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
// Declaración e inicialización de las variables en las que se almacenarán las características de las dos circunferencias que definirá el usuario; x e y determinan el centro de la circunferencia y r el radio, respectivamente de cada una de las dos.

double x1 = 0.0, x2 = 0.0, y1 = 0.0, y2 = 0.0, r1 = 0.0, r2 = 0.0, distancia = 0.0;

	cout << "Introduzca la coordenada X del centro de la primera circunferencia: ";
	cin >> x1;
	cout << "Introduzca la coordenada Y del centro de la primera circunferencia: ";
	cin >> y1;
	cout << "Introduzca el radio de la primera circunferencia: ";
	cin >> r1;
	cout << "Introduzca la coordenada X del centro de la segunda circunferencia: ";
	cin >> x2;
	cout << "Introduzca la coordenada Y del centro de la segunda circunferencia: ";
	cin >> y2;
	cout << "Introduzca el radio de la segunda circunferencia: ";
	cin >> r2;
	
	/* Las posibles relaciones entre dos circunferencias que no sean iguales o estén una dentro de la otra, se reducen a tres casos:
	1. Si la distancia entre los dos centros es igual a la suma de sus dos radios, tendrán un punto en común.
	2. Si la distancia entre los dos centros es menor a la suma de sus dos radios, tendrán dos puntos en común.
	3. Si la distancia entre los dos centros es mayor a la suma de sus dos radios, no tienen puntos en común.
	
	Para calcular la distancia entre los dos centros, nos ayudaremos de la fórmula que calcula el módulo del vector que se puede definir entre ambos puntos a partir de sus coordenadas. La fórmula del módulo es √(x2-x1)^2+(y2-y1)^2 y se puede comparar con la suma del radio de ambas circunferencias.*/
	
	distancia = sqrt((pow((x2-x1),2)) + (pow((y2-y1),2)));
			
	// Primera comprobación: Las dos circunferencias son exáctamente iguales:
	if (x1 == x2 && y1 == y2 && r1 == r2)
		cout << "\nLas dos circunferencias son iguales. Tienen todos los puntos en común." << endl;
	
	// Segunda comprobación: Una circunferencia está dentro de la otra. El radio del círculo mayor es más grande que la suma de la distancia entre el radio círculo menor y la distancia entre centros.
		//Opción 2.1. r1 > r2:
		if ((r1 > r2) && (r1 > (distancia+r2)))
			cout << "\nLa primera circunferencia contiene a la segunda circunferencia" << endl;
		//Opción 2.2. r1 < r2:
		if ((r1 < r2) && (r2 > (distancia+r1)))
			cout << "\nLa segunda circunferencia contiene a la primera circunferencia" << endl;
	
	// Tercera comprobación: Las circunferencias se tocan:
		//Opción 3.1. La distancia entre los dos centros es igual a la suma de sus dos radios y tendrán un punto en común:
		if ((distancia == (r1+r2)) && (distancia !=0))
			cout << "\nLas dos circunferencias tienen un punto en común." << endl;
		//Opción 3.2. La distancia entre los dos centros es menor a la suma de sus dos radios y tendrán dos puntos en común:
		if ((distancia < (r1+r2)) && (distancia !=0))
			cout << "\nLas dos circunferencias tienen dos puntos en común." << endl;
		
	// Cuarta comprobación: Las circunferencias no tienen puntos en común:
	if ((distancia > (r1+r2)) && (distancia !=0))
		cout << "\nLas circunferencias no tienen puntos en común." << endl;
	
	cout << "Distancia entre los centros: " << distancia << " / Suma de los dos radios: " << r1+r2 << endl;
}