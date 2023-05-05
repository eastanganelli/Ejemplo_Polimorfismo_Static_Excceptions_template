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
template <typename T>
int main() {
	stack<Figura<float>*> misFiguras;

	misFiguras.push(new Cuadrado<float>(4.56));
	misFiguras.push(new Circulo<float>(8.08));
	misFiguras.push(new Cuadrado<float>(3.22));

	// Ejemplo de Polimorfismo y dynamic_cast<>
	while (!(misFiguras.empty())) {
		Figura<float>* aux = misFiguras.top();
		misFiguras.pop();
		if (dynamic_cast<Cuadrado<float>*>(aux) != nullptr) {
			dynamic_cast<Cuadrado<float>*>(aux)->imprimir();
		} else if (dynamic_cast<Circulo<float>*>(aux) != nullptr) {
			dynamic_cast<Circulo<float>*>(aux)->imprimir();
		} else if (dynamic_cast<Triangulo<float>*>(aux) != nullptr) {
			dynamic_cast<Triangulo<float>*>(aux)->imprimir();
		}
	}

	// Ahora jugaremos con Static
	// Calculadora miCalculadora("Casio", "MD5682");

	Cuadrado<float> miCuadrado(4.56);
	Circulo<float> miCirculo(8.08);

	stack<float> valoresAsumar;
	valoresAsumar.push(miCuadrado.area());
	valoresAsumar.push(miCirculo.area());

	cout << "Area de Cuadrado + Circulo = " << Calculadora::sumar(valoresAsumar) << endl;
	bool aux = false;
	do{
	float val1, val2;
		cin >> val1;
		cin >> val2;
		try {
			float result = Calculadora::dividir(val1, val2);
		}
		catch (exception&e) {
	
			cout << "No es posible la división por 0";
			aux = true;
		}
	} while (aux);
		
	

	// Imprimir datos de la calculadora
	// miCalculadora.imprimir();

	// Ejemplo usando una template como propiedad de atributo
	foo Ejemplo("pepe", "31/05/1995");
	Ejemplo.imprimir();

	return 0;
}