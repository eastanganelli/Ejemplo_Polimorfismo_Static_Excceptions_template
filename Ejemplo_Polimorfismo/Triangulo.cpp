#include "Triangulo.h"
template<typename T>
 Triangulo<T>::Triangulo(std::array<T, 3> angulos_, std::array<T, 3> longLados_) : Figura(3) {
    this->angulos = angulos_;
    this->longLados = longLados_;
    
}
 template<typename T>
Triangulo<T>::~Triangulo() {
}

template<typename T>
T Triangulo <T>::area() {
  T s=this->perimetro()/2;
  T area = 1;
  for (int i = 0; i < 3; i++){
      area = area * (s - this->longLados[i]);
  }
  area = sqrt(area * s);
  return area;
}

template<typename T>
T Triangulo<T>::perimetro() {
    float perim = 0.0; 
    for (int i = 0; i < 3; i++) {
        perim = perim + this->longLados[i];
    } 
    return perim;
}

template<typename T>
std::string Triangulo<T>::to_string() {
    std::stringstream salida;
    salida << "Triangulo de lado con longitud: " << this->longLados[0] << " - " << this->longLados[1] << " " << this->longLados[2]
           << std::endl << "Con angulos: " << this->angulos[0] << " - " << this->angulos[1] << " " << this->angulos[2]
           << std::endl << "Perimetro: " << this->perimetro() << std::endl << "Area: " << this->area() << std::endl;
    return salida.str();
}

template<typename T>
void Triangulo<T>::imprimir() {
    std::cout << this->to_string() << std::endl;
}

/*template<typename T>
T Triangulo<T>::convertRad(T angulo) {
    angulo = (angulo * pi) / 180;
    return angulo;
}

*/
