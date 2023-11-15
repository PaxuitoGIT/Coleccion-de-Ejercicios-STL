#include <iostream>

namespace Ciencia {
    namespace Fisica {
        const double c = 299792458;
        double calcularEnergia(double masa) {
            return masa * c * c;
        }
    }
    namespace Quimica {
        void reaccionQuimica() {
            std::cout << "Reaccion quimica" << std::endl;
        }
    }
    namespace Matematicas {
         int factorial(int n) {
            if (n == 0 || n == 1) {
                return 1;
            } else {
                return n * factorial(n - 1);
            }
        }
    }
}