#include "Triangulo.h"
template <typename T>
Triangulo<T>::Triangulo(std::array<T, 3> angulos_, std::array<T, 3> longLados_) : Figura(3) {
    this->angulos = angulos_;
    this->longLados = longLados_;
}
template <typename T>
Triangulo<T>::~Triangulo() {
}

template <typename T>
float Triangulo<T>::area() {

    float semip,area;

   semip = (longLados[0] + longLados[1] + longLados[2]) / 2;
   area = sqrt(semip * (semip - longLados[0]) * (semip - longLados[1]) * (semip - longLados[2]));
      
    return (T)(area);
}

template <typename T>
float Triangulo<T>::perimetro() {

    return (T)(longLados[0]+longLados[1]+longLados[2]);
}
template <typename T>
std::string Triangulo<T>::to_string() {
    std::stringstream salida;
    salida << "Triangulo de lado con longitud: " << this->longLados[0] << " - " << this->longLados[1] << " " << this->longLados[2]
           << std::endl << "Con angulos: " << this->angulos[0] << " - " << this->angulos[1] << " " << this->angulos[2]
           << std::endl << "Perimetro: " << this->perimetro() << std::endl << "Area: " << this->area() << std::endl;
    return salida.str();
}
template <typename T>
void Triangulo<T>::imprimir() {
    std::cout << this->to_string() << std::endl;
}