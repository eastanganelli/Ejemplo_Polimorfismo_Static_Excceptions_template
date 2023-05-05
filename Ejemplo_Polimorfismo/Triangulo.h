#pragma once
#include <array>

#include "Figura.h"
#include <cmath>

/*
* Ayuda para el Triiangulo
* Link: https://www.canva.com/design/DAFh3k11soY/28zLa3AK-Hapiz5IK22_AQ/view?utm_content=DAFh3k11soY&utm_campaign=designshare&utm_medium=link&utm_source=publishsharelink
* Alacración: el triángulo puede ser equilatero, isoceles o escaleno
* Solo se clasifica según sus lados
*/

template <typename T> class Triangulo : public Figura <T> {
    std::array<T, 3> angulos;
    std::array<T, 3> longLados;
public:
    Triangulo(std::array<T, 3> angulos_, std::array<T, 3> longLados_);
    ~Triangulo();
    float area();
    float perimetro();
    std::string to_string();
    void imprimir();
};

template <typename T>
inline Triangulo<T>::Triangulo(std::array<T, 3> angulos_, std::array<T, 3> longLados_) : Figura<T>(3) {
    this->angulos = angulos_;
    this->longLados = longLados_;
}

template <typename T>
inline Triangulo<T>::~Triangulo() {
}

template <typename T>
inline float Triangulo<T>::area() {               // area = 0.5 * l1 * l2 * sen (B)
    float are = 0.0;
    are = (float)(0.5 * longLados[0] * longLados[2] * sin(angulos[0]));
    return are;
}

template <typename T>
inline float Triangulo<T>::perimetro() {
    float perim = 0.0;
    for (int i = 0; i < 3; i++) {
        perim += (float)longLados[i];
    }
    return perim;
}

template <typename T>
inline std::string Triangulo<T>::to_string() {
    std::stringstream salida;
    salida << "Triangulo de lado con longitud: " << this->longLados[0] << " - " << this->longLados[1] << " - " << this->longLados[2]
        << std::endl << "Con angulos: " << this->angulos[0] << " - " << this->angulos[1] << " - " << this->angulos[2]
        << std::endl << "Perimetro: " << this->perimetro() << std::endl << "Area: " << this->area() << std::endl;
    return salida.str();
}

template <typename T>
inline void Triangulo<T>::imprimir() {
    std::cout << this->to_string() << std::endl;
}