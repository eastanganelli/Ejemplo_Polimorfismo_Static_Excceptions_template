#pragma once
#define uint unsigned int

#include <cmath>
#include <string>
#include <sstream>
#include <iostream>

// Porfa para la porxima poner una c adelante del nombre de cada clase
// cFigura
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