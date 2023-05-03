#include "Triangulo.h"

// Se asume que el triangulo creado es posible

Triangulo::Triangulo(std::array<float, 3> angulos_, std::array<float, 3> longLados_) : Figura(3) {
    this->angulos = angulos_;
    this->longLados = longLados_;
}

Triangulo::~Triangulo() {
}

float Triangulo::area() {
    int i = 0;
    float area = 0.0;
    float semiPer = 0.0;

    for (i = 0;i<longLados.size(); i++) {
        semiPer += longLados[i];
    }
    semiPer /= 2;
    area = sqrt( semiPer*(semiPer-longLados[0])*(semiPer-longLados[1])*(semiPer-longLados[2]) );

    return (float)(area);
}

// Asumo que nada de longLados esta en NULL y que ninguno es negativo
float Triangulo::perimetro() {
    float per = 0.0;
    for (int i = 0; i<longLados.size(); i++) {
        per += longLados[i];
    }
    return (float)(per);
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