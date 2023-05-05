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

	misFiguras.push(new Cuadrado(4.56));
	misFiguras.push(new Circulo(8.08));
	misFiguras.push(new Cuadrado(3.22));


	array<float, 3> angulos_ = { 90.0, 45.0, 45.0 };		//hago esto para probar que funcione
	array<float, 3> lados_ = { 3.0,5.0,4.0 };				//hago esto para probar que funcione
	misFiguras.push(new Triangulo(angulos_, lados_));

	// Ejemplo de Polimorfismo y dynamic_cast<>
	while (!(misFiguras.empty())) {
		Figura* aux = misFiguras.top();
		misFiguras.pop();
		if (dynamic_cast<Cuadrado*>(aux) != nullptr) {
			dynamic_cast<Cuadrado*>(aux)->imprimir();
		} else if (dynamic_cast<Circulo*>(aux) != nullptr) {
			dynamic_cast<Circulo*>(aux)->imprimir();
		} else if (dynamic_cast<Triangulo*>(aux) != nullptr) {
			dynamic_cast<Triangulo*>(aux)->imprimir();
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