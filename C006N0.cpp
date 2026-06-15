#include <iostream>
#include <iomanip>
#include <cmath>

class Punto {
public:
    double x = 0.0;
    double y = 0.0;

    double distanciaA(Punto otro) {
        double dx = x - otro.x;
        double dy = y - otro.y;

        return sqrt(dx * dx + dy * dy);
    }

    Punto puntoMedio(Punto otro) {
        Punto medio;

        medio.x = (x + otro.x) / 2;
        medio.y = (y + otro.y) / 2;

        return medio;
    }
    void imprimir() {
        std::cout << "(" << std::fixed << std::setprecision(2)
                  << x << ", " << y << ")";
    }
};

int main() {
    Punto p1 = {3, 4};
    Punto p2 = {7, 1};

    std::cout << "P1: ";
    p1.imprimir();
    std::cout << std::endl;

    std::cout << "P2: ";
    p2.imprimir();
    std::cout << std::endl;

    std::cout << "Distancia: "
              << std::fixed << std::setprecision(2)
              << p1.distanciaA(p2) << std::endl;

    Punto medio = p1.puntoMedio(p2);

    std::cout << "Punto medio: ";
    medio.imprimir();
    std::cout << std::endl;

    return 0;
}
