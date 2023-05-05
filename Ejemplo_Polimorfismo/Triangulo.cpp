#include "Triangulo.h"
template <typename T>
Triangulo<T>::Triangulo (std::array<T, 3> angulos_, std::array<T, 3> longLados_) : Figura(3) {
    this->angulos = angulos_;
    this->longLados = longLados_;
}

template <typename T>
Triangulo<T>::~Triangulo() {
}

template <typename T>
T Triangulo<T>::perimetro() {
    return (T)(floor((this->cantLados) * ((this->longLados[0]) + (this->longLados[1]) + (this->longLados[2])) * 100.0) / 100.0);
}

template <typename T>
T Triangulo<T>::area() {
    float s = (this->perimetro()) / 2;
    return (float)(sqrt(s * (s - longLados[0]) * (s - longLados[1]) * (s - longLados[2])));
}

template <typename T>
std::string Triangulo<T>::to_string() {
    std::stringstream salida;
    salida << "Triangulo de lado con longitud: " << this->longLados[0] << " - " << this->longLados[1] << " " << this->longLados[2]
           << std::endl << "Con angulos: " << this->angulos[0] << " - " << this->angulos[1] << " " << this->angulos[2]
           << std::endl << "Perimetro: " << this->perimetro() << std::endl << "Area: " << this->area() << std::endl;
    return salida.str();
}

template <typename T>
void Triangulo<T>::imprimir() {
    std::cout << this->to_string() << std::endl;
}