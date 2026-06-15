#include <iostream>
#include <string>
#include <iomanip>

class Estudiante {
public:
    std::string nombre= "";
    double nota=0.0;

    bool aprobo() {
        return nota >= 60;
    }

     void imprimir() {
        std::cout << nombre << ": "
                  << std::fixed << std::setprecision(2)
                  << nota << std::endl;
    }
};

int main() {
    Estudiante estudiantes[4] = {
        {"Ana", 85},
        {"Luis", 45},
        {"Carla", 92},
        {"Pedro", 58}
    };
    std::cout << "=== Aprobados ===" << std::endl;
    for (int i = 0; i < 4; i++) {
        if (estudiantes[i].aprobo()) {
            estudiantes[i].imprimir();
        }
    }
    std::cout << "=== Reprobados ===" << std::endl;
    for (int i = 0; i < 4; i++) {
        if (!estudiantes[i].aprobo()) {
            estudiantes[i].imprimir();
        }
    }

    return 0;
}