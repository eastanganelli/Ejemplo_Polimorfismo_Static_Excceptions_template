#include "Triangulo.h"
using namespace std;

Triangulo::Triangulo(std::array<float, 3> angulos_, std::array<float, 3> longLados_) : Figura(3) {
    this->angulos = angulos_;
    this->longLados = longLados_;
}

Triangulo::~Triangulo() {
}

float Triangulo::area() {
    int i;
    float Area = 0;
    float S=0;
    for(i=0; i< 3; i++){ //recorro el array
        S = S+longLados[i];
    }
    S=S/2;
    Area= sqrt(S*(S-longLados[0])*(S-longLados[1])*(S-longLados[2]));
    return Area;
}


float Triangulo::perimetro() {
    float Perimetro = 0;
    int i = 0;
    for(i=0; i< 3; i++){ //recorro el array
        Perimetro = Perimetro + longLados[i];
    }


    return Perimetro;
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
