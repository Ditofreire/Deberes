#include <iostream>
#include <string>
#include <iomanip>

class Cuenta {
public:
    std::string titular;
    double saldo;

    void depositar(double monto) {
        saldo += monto;

        std::cout << "Deposito: $" << std::fixed << std::setprecision(2)<< monto  << " | Nuevo saldo: $" << saldo << std::endl;
    }

    void retirar(double monto) {
        if (tieneSaldo(monto)) {
            saldo -= monto;

            std::cout << "Retiro: $" << std::fixed << std::setprecision(2)<< monto << " | Nuevo saldo: $" << saldo << std::endl;
        } else {
            std::cout << "Saldo insuficiente." << std::endl;
        }
    }


    bool tieneSaldo(double monto) {
        return saldo >= monto;
    }

    void imprimir() {
        std::cout << "Titular: " << titular<< " | Saldo: $"<< std::fixed << std::setprecision(2)<< saldo << std::endl;
    }

};

int main() {
    Cuenta cuenta;

    cuenta.titular = "Ana Torres";
    cuenta.saldo = 500.00;

    cuenta.imprimir();

    cuenta.depositar(200.00);

    cuenta.retirar(100.00);

    cuenta.retirar(1000.00);

    cuenta.imprimir();

    return 0;
}