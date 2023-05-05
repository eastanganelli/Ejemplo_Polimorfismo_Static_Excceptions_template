#pragma once
#include "Figura.h"
#define PI 3.14

template <typename T> class Circulo : public Figura<T> {
    const T radio;
public:
    Circulo(T radio_);
    ~Circulo();
    T area();
    T perimetro();
    std::string to_string();
    void imprimir();
};

template <typename T>
inline Circulo<T>::Circulo(T radio_) : Figura<T>(1), radio(radio_) {
}

template <typename T>
inline Circulo<T>::~Circulo() {
}

template <typename T>
inline T Circulo<T>::area() {
    return (T)(floor(PI * pow(this->radio, 2) * 100.0) / 100.0);
}

template <typename T>
inline T Circulo<T>::perimetro() {
    return (T)(floor(2 * PI * this->radio * 100.0) / 100.0);
}

template <typename T>
inline std::string Circulo<T>::to_string() {
    std::stringstream salida;
    salida << "Circulo de Radio: " << this->radio << std::endl << "Perimetro: " << this->perimetro() << std::endl << "Area: " << this->area() << std::endl;
    return salida.str();
}

template <typename T>
inline void Circulo<T>::imprimir() {
    std::cout << this->to_string() << std::endl;
}
