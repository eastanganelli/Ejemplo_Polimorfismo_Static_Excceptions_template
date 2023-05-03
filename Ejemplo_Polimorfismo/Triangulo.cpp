#include "Triangulo.h"

Triangulo::Triangulo(std::array<float, 3> angulos_, std::array<float, 3> longLados_) : Figura(3) {
    this->angulos = angulos_;
    this->longLados = longLados_;
}

Triangulo::~Triangulo() {
}

float Triangulo::area() {

    float area = 0.0;
    float altura = 0.0;

    std::array<float, 3>::iterator itL = this->longLados.end(); //Tomo el ultimo lado de la lista, que es uno de los laterales

    std::array<float, 3>::iterator itA = this->angulos.begin();  //Tomo el angulo que hace con la base
    float angulo = *itA;
    angulo = (angulo * 2 * M_PI) / 360;
    float seno = sin(angulo);
    float largo = this->longLados[2];
    altura = largo * seno;  //Multiplico este lado por el seno del angulo que genera con la base para obtener la altura

    std::array<float, 3>::iterator itB = begin(this->longLados);  //Tomo la base

    area = (*itB * altura) / 2;  //Multiplico la base por altura sobre 2 y obtengo el area



    return area;
}


float Triangulo::perimetro() {

    float perimetro = 0.0;

    for (std::array<float, 3>::iterator it = begin(this->longLados); it != end(this->longLados); it++) //Recorro la lista de de lados y los sumo
    {
        perimetro = perimetro + *it;
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