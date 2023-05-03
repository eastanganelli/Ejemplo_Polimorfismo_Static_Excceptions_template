#include "Triangulo.h"

Triangulo::Triangulo(std::array<float, 3> angulos_, std::array<float, 3> longLados_) : Figura(3) {
    this->angulos = angulos_;
    this->longLados = longLados_;
}

Triangulo::~Triangulo() {
}

float Triangulo::area() {

    longLados::iterator Laditos;

    float acum = 0;
    int i = 0;
    float semi_perimetro = 0;

    for (Laditos = longLados.begin(); Laditos != longLados.end(); Laditos++, i++)
    {
        acum += Laditos[i];
    }
    semi_perimetro = acum / 2;

    return (float)(floor(sqrt(semi_perimetro * (semi_perimetro - longLados[0]) * (semi_perimetro - longLados[1]) * (semi_perimetro - longLados[2]))));
}


float Triangulo::perimetro() {

    longLados::iterator Laditos;

    float acum = 0;
    int i = 0;

    for (Laditos = longLados.begin(); Laditos != longLados.end(); Laditos++, i++) 
    {
            acum += Laditos[i];
    }
    return (floor(acum));
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