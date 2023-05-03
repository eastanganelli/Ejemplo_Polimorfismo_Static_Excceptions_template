#include "Triangulo.h"


Triangulo::Triangulo(std::array<float, 3> angulos_, std::array<float, 3> longLados_) : Figura(3) {
    this->angulos = angulos_;
    this->longLados = longLados_;
}

Triangulo::~Triangulo() {
}
/** 
* ec:(Base*altura)/2
* rec: (C^2*C^2)/2
* is: 1/2*longlado^2*sen()
*/
float Triangulo::area() {
    int i;
    float Area = 0;
    float sumaLados = (this->longLados[0] + this->longLados[1] + this->longLados[2]) / 2;
    Area = sqrt(sumaLados * (sumaLados - this->longLados[0]) * (sumaLados - this->longLados[1]) * (sumaLados - this->longLados[2]));
    return Area;


}


float Triangulo::perimetro() {
    float perimetro=0;
    int i = 0;
    for ( i = 0; i < 3; i++)
    {
       perimetro += this->longLados[i];
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