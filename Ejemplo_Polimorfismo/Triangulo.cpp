#include "Triangulo.h"
#include <cmath>
using namespace std;
Triangulo::Triangulo(std::array<float, 3> angulos_, std::array<float, 3> longLados_) : Figura(3) {
    this->angulos = angulos_;
    this->longLados = longLados_;
}

Triangulo::~Triangulo() {
}

float Triangulo::area() {
    float area=0;
    if (this->longLados[0] != this->longLados[1] && this->longLados[1] == this->longLados[2])
    {
        area = (this->longLados[0]) * (sqrt(this->longLados[2] - (this->longLados[0] / 4)));
    }
    else if (this->longLados[0] == this->longLados[1] == this->longLados[2])
    {
        area = this->longLados[0] * ((sqrt(3) * this->longLados[1]) / 2);
    }
    else if (this->longLados[0] != this->longLados[1] != this->longLados[2] != this->longLados[0])
    {
        area = this->longLados[0] * (this->longLados[2]*sin(this->angulos[0]));
    }

    return area;
}


float Triangulo::perimetro() {
    return this->longLados[0]+ this->longLados[2]+ this->longLados[1];
}

std::string Triangulo::to_string() {
    std::stringstream salida;
    salida << "Triangulo de lado con longitud: " << this->longLados[0] << " - " << this->longLados[1] << " " << this->longLados[2]
           << std::endl << "Con angulos: " << this->angulos[0] << " - " << this->angulos[1] << " " << this->angulos[2]
           << std::endl << "Perimetro: " << this->perimetro() << std::endl << "Area: " << this->area() << std::endl;
    return salida.str();
}

void Triangulo::imprimir() {
    std::cout << this->to_string() << std::endl;
}