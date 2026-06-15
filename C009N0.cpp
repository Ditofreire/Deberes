/*
    TEORÍA PREVIA — ¿Qué es un método estático?

    Un método estático pertenece a la CLASE, no a una instancia.

    Eso significa que no necesitas crear un objeto para usarlo.
    Se puede llamar directamente con el nombre de la clase:

        Matematica::maximo(8, 3);

    Un método estático NO recibe el puntero this.
    Por eso no puede acceder directamente a atributos normales
    de un objeto, porque no sabe de qué objeto hablar.

    Ejemplo:

        class MiClase {
        public:
            int atributo;             // pertenece a cada objeto
            static int contador;      // pertenece a la clase

            void metodoNormal() {
                atributo++;           // OK, tiene this
            }

            static void metodoEstatico() {
                // atributo++;        // ERROR, no tiene this
                contador++;           // OK, contador es static
            }
        };
*/
#include <iostream>
#include <iomanip>

class Matematica {
public:
    static int maximo(int a, int b) {
        if (a > b) {
            return a;
        } else {
            return b;
        }
    }

    static int minimo(int a, int b) {
        if (a < b) {
            return a;
        } else {
            return b;
        }
    }

    static bool esPrimo(int n) {
        if (n <= 1) {
            return false;
        }

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return false;
            }
        }

        return true;
    }

    static double potencia(double base, int exp) {
        double resultado = 1.0;

        for (int i = 0; i < exp; i++) {
            resultado *= base;
        }

        return resultado;
    }
};

int main() {
    std::cout << "Maximo(8, 3): "<< Matematica::maximo(8, 3) << std::endl;

    std::cout << "Minimo(8, 3): "<< Matematica::minimo(8, 3) << std::endl;

    std::cout << "Es primo 7: "<< (Matematica::esPrimo(7) ? "SI" : "NO") << std::endl;

    std::cout << "Es primo 9: "<< (Matematica::esPrimo(9) ? "SI" : "NO") << std::endl;

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "2 elevado a 10: "<< Matematica::potencia(2, 10) << std::endl;

    return 0;
}