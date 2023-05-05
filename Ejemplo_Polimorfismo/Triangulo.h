#pragma once
#include <array>
#include "Figura.h"
#include <cmath>
#define _USE_MATH_DEFINES
#define pi = 3.14159265358979323846
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
    //T convertRad(T angulo);
};

template<typename T>
inline Triangulo<T>::Triangulo(std::array<T, 3> angulos_, std::array<T, 3> longLados_) : Figura(3) {
    this->angulos = angulos_;
    this->longLados = longLados_;

}
template<typename T>
inline Triangulo<T>::~Triangulo() {
}

template<typename T>
inline T Triangulo <T>::area() {
    T s = this->perimetro() / 2;
    T area = 1;
    for (int i = 0; i < 3; i++) {
        area = area * (s - this->longLados[i]);
    }
    area = sqrt(area * s);
    return area;
}

template<typename T>
inline T Triangulo<T>::perimetro() {
    float perim = 0.0;
    for (int i = 0; i < 3; i++) {
        perim = perim + this->longLados[i];
    }
    return perim;
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

/*template<typename T>
T Triangulo<T>::convertRad(T angulo) {
    angulo = (angulo * pi) / 180;
    return angulo;
}

*/
