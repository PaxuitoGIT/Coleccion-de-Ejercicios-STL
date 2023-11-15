#include <cmath>

namespace Geometria {
    class Circulo {
        private:
        double radio;
        public:
        Circulo(double r) : radio(r) {}
    double calcularAreaCirculo(double radio) {
        return M_PI * radio * radio;
    }
    double calcularPerimetroCirculo(double radio) {
        return 2 * M_PI * radio;
    }
    };
}