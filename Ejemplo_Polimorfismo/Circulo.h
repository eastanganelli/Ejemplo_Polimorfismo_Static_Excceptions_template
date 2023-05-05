#pragma once
#include "Figura.h"
#define PI 3.14

template <typename T> class Circulo : public Figura {
    const T radio;
public:
    Circulo(T radio_);
    ~Circulo();
    T area();
    T perimetro();
    std::string to_string();
    void imprimir();
};