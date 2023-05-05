#pragma once
#define uint unsigned int

#include <cmath>
#include <string>
#include <sstream>
#include <iostream>

template <typename T> class Figura {
protected:
	const unsigned int cantLados;
public:
	template <typename T>
	Figura(uint cantLados_);
	~Figura();
	virtual T area() = 0;
	virtual T perimetro() = 0;
	virtual std::string to_string() = 0;
	virtual void imprimir() = 0;
};