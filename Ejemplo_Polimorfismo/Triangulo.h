#pragma once
#define _USE_MATH_DEFINES
#include <array>
#include<list>
#include <cmath>

#include "Figura.h"


/*
* Ayuda para el Triiangulo
* Link: https://www.canva.com/design/DAFh3k11soY/28zLa3AK-Hapiz5IK22_AQ/view?utm_content=DAFh3k11soY&utm_campaign=designshare&utm_medium=link&utm_source=publishsharelink
* Alacraci�n: el tri�ngulo puede ser equilatero, isoceles o escaleno
* Solo se clasifica seg�n sus lados
*/

class Triangulo : public Figura {
    std::array<float, 3> angulos;
    std::array<float, 3> longLados;
public:
    Triangulo(std::array<float, 3> angulos_, std::array<float, 3> longLados_);
    ~Triangulo();
    float area();
    float perimetro();
    std::string to_string();
    void imprimir();
};

