#pragma once
#include "Figura.h"

template <typename T> class Cuadrado : public Figura <T> {

	T longLado;
public:
	Cuadrado(T radio_);
	~Cuadrado();
	float area();
	float perimetro();
	std::string to_string();
	void imprimir();

};


template <typename T>
inline Cuadrado<T>::Cuadrado(T longLado_) : Figura<T>(4) {
	this->longLado = longLado_;
}

template <typename T>
inline Cuadrado<T>::~Cuadrado() {
}

template <typename T>
inline float Cuadrado<T>::area() {
	return (float)(floor(pow(this->longLado, 2) * 100.0) / 100.0);
}

template <typename T>
inline float Cuadrado<T>::perimetro() {
	return (float)(floor(this->cantLados * this->longLado * 100.0) / 100.0);
}

template <typename T>
inline std::string Cuadrado<T>::to_string() {
	std::stringstream salida;
	salida << "Cuadrado de lado con longitud: " << this->longLado << std::endl << "Perimetro: " << this->perimetro() << std::endl << "Area: " << this->area() << std::endl;
	return salida.str();
}

template <typename T>
inline void Cuadrado<T>::imprimir() {
	std::cout << this->to_string() << std::endl;
}