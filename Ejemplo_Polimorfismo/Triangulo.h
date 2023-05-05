#pragma once
#include <array>
#include <cmath>
#include "Figura.h"

/*
* Ayuda para el Triiangulo
* Link: https://www.canva.com/design/DAFh3k11soY/28zLa3AK-Hapiz5IK22_AQ/view?utm_content=DAFh3k11soY&utm_campaign=designshare&utm_medium=link&utm_source=publishsharelink
* Alacración: el triángulo puede ser equilatero, isoceles o escaleno
* Solo se clasifica según sus lados
*/

template <typename T> class Triangulo : public Figura<T> {
    std::array<T, 3> angulos;
    std::array<T, 3> longLados;

public:
    Triangulo(std::array<T, 3> angulos_, std::array<T, 3> longLados_);
    ~Triangulo();
    T area();
    T perimetro();
    std::string to_string();
    void imprimir();
};

template<typename T>
inline Triangulo<T>::Triangulo(std::array<T, 3> angulos_, std::array<T, 3> longLados_) : Figura<T>(3) {
    this->angulos = angulos_;
    this->longLados = longLados_;
}
template<typename T>
inline Triangulo<T>::~Triangulo() {
}

template<typename T>
inline T Triangulo<T>::area() {
    T area = 0.0;
    T s = 0.0;

    s = (longLados[0] + longLados[1] + longLados[2]) / 2;

    area = sqrt(s * (s - longLados[0]) * (s - longLados[1]) * (s - longLados[2]));

    return (T)(area);
}

template<typename T>
inline T Triangulo<T>::perimetro() {

    T perimetro;

    perimetro = longLados[0] + longLados[1] + longLados[2];

    return (T)(perimetro);
}

template<typename T>
inline std::string Triangulo<T>::to_string() {
    std::stringstream salida;
    salida << "Triangulo de lado con longitud: " << this->longLados[0] << " - " << this->longLados[1] << " " << this->longLados[2]
        << std::endl << "Con angulos: " << this->angulos[0] << " - " << this->angulos[1] << " " << this->angulos[2]
        << std::endl << "Perimetro: " << this->perimetro() << std::endl << "Area: " << this->area() << std::endl;
    return salida.str();
}

template<typename T>
inline void Triangulo<T>::imprimir() {
    std::cout << this->to_string() << std::endl;
}