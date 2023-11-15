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

    return 0;
}