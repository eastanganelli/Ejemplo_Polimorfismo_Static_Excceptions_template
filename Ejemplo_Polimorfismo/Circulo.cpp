#include "Circulo.h"
template <typename T>
Circulo<T>::Circulo(T radio_) : Figura(1), radio(radio_) {
}

template <typename T>
Circulo<T>::~Circulo() {
}

template <typename T>
T Circulo<T>::area() {
    return (T)(floor(PI * pow(this->radio, 2) * 100.0) / 100.0);
}

template <typename T>
T Circulo<T>::perimetro() {
    return (T)(floor(2 * PI * this->radio * 100.0) / 100.0);
}

template <typename T>
std::string Circulo<T>::to_string() {
    std::stringstream salida;
    salida << "Circulo de Radio: " << this->radio << std::endl << "Perimetro: " << this->perimetro() << std::endl << "Area: " << this->area() << std::endl;
    return salida.str();
}

template <typename T>
void Circulo<T>::imprimir() {
    std::cout << this->to_string() << std::endl;
}
