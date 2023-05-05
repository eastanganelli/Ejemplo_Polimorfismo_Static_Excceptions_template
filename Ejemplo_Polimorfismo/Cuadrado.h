#pragma once
#include "Figura.h"

template<typename T > class Cuadrado : public Figura<T> {

	T longLado;
public:
	Cuadrado(T longLado_);
	~Cuadrado();
	T area();
	T perimetro();
	std::string to_string();
	void imprimir();
};
template<typename T>
inline Cuadrado<T>::Cuadrado(T longLado_) : Figura<T>(4) {
	this->longLado = longLado_;
}
template<typename T>
inline Cuadrado<T>::~Cuadrado() {
}
template<typename T>
inline T Cuadrado<T>::area() {
	return (T)(floor(pow(this->longLado, 2) * 100.0) / 100.0);
}
template<typename T>
inline T Cuadrado<T>::perimetro() {
	return (T)(floor(this->cantLados * this->longLado * 100.0) / 100.0);
}
template<typename T>
inline std::string Cuadrado<T>::to_string() {
	std::stringstream salida;
	salida << "Cuadrado de lado con longitud: " << this->longLado << std::endl << "Perimetro: " << this->perimetro() << std::endl << "Area: " << this->area() << std::endl;
	return salida.str();
}
template<typename T>
inline void Cuadrado<T>::imprimir() {
	std::cout << this->to_string() << std::endl;
}