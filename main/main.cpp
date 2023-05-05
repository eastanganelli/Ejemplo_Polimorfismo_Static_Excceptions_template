#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

// Inclusión de .h de Polimorfismo
#include "../Ejemplo_Polimorfismo/Circulo.h"
#include "../Ejemplo_Polimorfismo/Cuadrado.h"
#include "../Ejemplo_Polimorfismo/Triangulo.h"

// Inlusión de .h de Static Ejemplo
#include "../Ejemplo_Static/Calculadora.h"

// Inlusión de .h de Template
#include "../Ejemplo_Template/foo.h"

using namespace std;

int main() {
	stack<Figura*> misFiguras;
	//crear array de lados  y angulos para pasarselo al metodo
	array <float, 3> lados;
	lados[0] = 4;
	lados[1] = 4;
	lados[2] = 4;
	//falta el array de angulos aca
		misFiguras.push(new Cuadrado(4.56));
	misFiguras.push(new Circulo(8.08));
	misFiguras.push(new Cuadrado(3.22));
	misFiguras.push(new Triangulo(lados,/*angulos*/));


	// Ejemplo de Polimorfismo y dynamic_cast<>
	while (!(misFiguras.empty())) {
		Figura* aux = misFiguras.top();
		misFiguras.pop();
		if (dynamic_cast<Cuadrado*>(aux) != nullptr) {
			dynamic_cast<Cuadrado*>(aux)->imprimir();
		} else if (dynamic_cast<Circulo*>(aux) != nullptr) {
			dynamic_cast<Circulo*>(aux)->imprimir();
		} else if (dynamic_cast<Triangulo<float>*>(aux) != nullptr) {
			dynamic_cast<Triangulo<float>*>(aux)->imprimir();
		}
	}

	// Ahora jugaremos con Static
	// Calculadora miCalculadora("Casio", "MD5682");

	Cuadrado miCuadrado(4.56);
	Circulo miCirculo(8.08);

	stack<float> valoresAsumar;
	valoresAsumar.push(miCuadrado.area());
	valoresAsumar.push(miCirculo.area());

	cout << "Area de Cuadrado + Circulo = " << Calculadora::sumar(valoresAsumar) << endl;

	// Imprimir datos de la calculadora
	// miCalculadora.imprimir();

	// Ejemplo usando una template como propiedad de atributo
	foo Ejemplo("pepe", "31/05/1995");
	Ejemplo.imprimir();

	return 0;
}