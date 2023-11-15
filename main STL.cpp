#include <iostream>
#include <vector>
#include <map>
#include <set>

int main() {
    std::vector<int> numeros {1, 2, 3, 4, 5};
    numeros.push_back(6);

    std::map<std::string, int> edad;
    edad["Juan"] = 25;
    edad.erase("Juan");

    std::set<int> conjunto {1, 2, 3, 4, 5};
    conjunto.insert(6);
    conjunto.erase(1);

    std::cout << "Vector: ";
    for (const auto& num : numeros) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Mapa: ";
    for (const auto& edad : edad) {
        std::cout << "(" << edad.first << ", " << edad.second << ") ";
    }
    std::cout << std::endl;

    std::cout << "Conjunto: ";
    for (const auto& elem : conjunto) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}