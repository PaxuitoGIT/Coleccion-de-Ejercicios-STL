#include <iostream>
#include "circulo.h"
#include "cuadrado.h"
#include "rectangulo.h"
#include "triangulo.h"

int main() {

    double baseTriangulo = 5.0;
    double alturaTriangulo = 15.0;
    double radioCirculo = 9.0;
    double ladoCuadrado = 6.0;
    double baseRectangulo = 13.0;
    double alturaRectangulo = 7.0;

    std::cout << "Area del triangulo: " << Geometria::calcularAreaTriangulo(baseTriangulo, alturaTriangulo) << std::endl;
    std::cout << "Area del circulo: " << Geometria::calcularAreaCirculo(radioCirculo) << std::endl;
    std::cout << "Area del cuadrado: " << Geometria::calcularAreaCuadrado(ladoCuadrado) << std::endl;
    std::cout << "Area del rectangulo: " << Geometria::calcularAreaRectangulo(baseRectangulo, alturaRectangulo) << std::endl;

    return 0;
}