#pragma once
#include "Figura.h"
template <typename T>
class Cuadrado : public Figura {

	T longLado;
public:
	Cuadrado(T longLado_);
	~Cuadrado();
	T area();
	T perimetro();
	std::string to_string();
	void imprimir();
};