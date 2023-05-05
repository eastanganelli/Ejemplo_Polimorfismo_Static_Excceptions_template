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

template <typename T> class Triangulo : public Figura {
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

