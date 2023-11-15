#include <iostream>
#include "ciencia.h"

int main() {
    double masa = 1.0;
    double energia = Ciencia::Fisica::calcularEnergia(masa);

    std::cout << "Energía resultante para una masa de " << masa << " kg: " << energia << " joules" << std::endl;

    int numeroFactorial = 5;
    int resultadoFactorial = Ciencia::Matematicas::factorial(numeroFactorial);
    std::cout << "Factorial de " << numeroFactorial << ": " << resultadoFactorial << std::endl;

    Ciencia::Quimica::reaccionQuimica();

    return 0;
}