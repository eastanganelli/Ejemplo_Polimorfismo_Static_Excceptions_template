#pragma once


#include <cmath>
#include <string>
#include <sstream>
#include <iostream>

class Figura {
protected:
	const unsigned int cantLados;
public:
	Figura(uint cantLados_);
	~Figura();
	virtual float area() = 0;
	virtual float perimetro() = 0;
	virtual std::string to_string() = 0;
	virtual void imprimir() = 0;
};
