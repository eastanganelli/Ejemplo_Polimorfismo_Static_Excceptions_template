#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <array>

// Inclusi�n de .h de Polimorfismo
#include "../Ejemplo_Polimorfismo/Circulo.h"
#include "../Ejemplo_Polimorfismo/Cuadrado.h"
#include "../Ejemplo_Polimorfismo/Triangulo.h"

// Inlusi�n de .h de Static Ejemplo
#include "../Ejemplo_Static/Calculadora.h"

// Inlusi�n de .h de Template
#include "../Ejemplo_Template/foo.h"

using namespace std;

int main() {
	stack<Figura*> misFiguras;

	misFiguras.push(new Cuadrado(4.56));
	misFiguras.push(new Circulo(8.08));
	misFiguras.push(new Cuadrado(3.22));

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
	Calculadora miCalduladora("Casio", "MD5682");

	Cuadrado miCuadrado(4.56);
	Circulo miCirculo(8.08);

	stack<float> valoresAsumar;
	valoresAsumar.push(miCuadrado.area());
	valoresAsumar.push(miCirculo.area());

	cout << "Area de Cuadrado + Circulo = " << Calculadora::sumar(valoresAsumar) << endl;

	// Imprimir datos de la calculadora
	miCalduladora.imprimir();

	// Ejemplo usando una template como propiedad de atributo
	foo Ejemplo("pepe", "31/05/1995");
	Ejemplo.imprimir();

	// Prueba de perimtro y area de triangulo

	std::array<float, 3> ListaLados = {10, 10, 10};

	std::array<float, 3> ListaAngulos = { 60, 60, 60 };

	Triangulo miTriangulo(ListaAngulos, ListaLados);

	miTriangulo.imprimir();

	return 0;
}