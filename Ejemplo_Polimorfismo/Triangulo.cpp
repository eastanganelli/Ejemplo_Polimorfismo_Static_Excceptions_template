#include "Triangulo.h"

Triangulo::Triangulo(std::array<float, 3> angulos_, std::array<float, 3> longLados_) : Figura(3) {
    this->angulos = angulos_;
    this->longLados = longLados_;
}

Triangulo::~Triangulo() {
}

float Triangulo::area() {
    // float s = longLados[0] + longLados[1] + longLados[2];
    float s = this-> perimetro();
    float area = sqrt(s*(s-longLados[0]+ s - longLados[1]+ s - longLados[2]));
  
    return area;
}


float Triangulo::perimetro() {

    float perimetro = 0;
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        perimetro = longLados[i]+perimetro;
    }
    return perimetro;
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