#pragma once
#include <stack>
#include <string>
#include <sstream>
#include <iostream>

class Calculadora
{
	const std::string nombre;
	const std::string modelo;
public:
	Calculadora(std::string nombre_, std::string modelo_);
	~Calculadora();
	std::string to_string();
	void imprimir();
	static float sumar(std::stack<float> valores);
	static float restar(float valor1, float valor2);
	static float multiplicar(float valor1, float valor2);
	static float dividir(float valor1, float valor2);
};

