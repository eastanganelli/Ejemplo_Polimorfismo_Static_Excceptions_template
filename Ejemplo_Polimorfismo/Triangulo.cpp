#include "Triangulo.h"

Triangulo::Triangulo(std::array<float, 3> angulos_, std::array<float, 3> longLados_) : Figura(3) {
    this->angulos = angulos_;
    this->longLados = longLados_;
}

Triangulo::~Triangulo() {
}

float Triangulo::area() {
    float s = Triangulo::perimetro() / 2;
    return (float)sqrt(s * (s - this->longLados[0]) * (s - this->longLados[1]) * (s - this->longLados[2]));
}


float Triangulo::perimetro() {
   float per= this->longLados[0] + this->longLados[1] + this->longLados[2];
    return per;
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