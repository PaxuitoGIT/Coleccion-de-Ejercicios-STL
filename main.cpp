#include <iostream> 
#include "operaciones.h"

int main() {
    std::cout << "Suma: " << Matematicas::suma(23, 10) << std::endl;
    std::cout << "Resta: " << Matematicas::resta(40, 10) << std::endl;
    std::cout << "Multiplicacion: " << Matematicas::multiplicacion(5, 10) << std::endl;
    std::cout << "Division: " << Matematicas::division(100, 10) << std::endl;
    std::cout << "Potencia: " << Matematicas::potencia(2, 10) << std::endl;
    std::cout << "Logaritmo: " << Matematicas::logaritmo(100, 10) << std::endl;
    std::cout << "Raiz: " << Matematicas::raiz(100, 2) << std::endl;

    return 0;
}