#include <algorithm>

class CuentaBancaria {
private:
    double saldo;

public:
    explicit CuentaBancaria(double saldoInicial)
        : saldo(saldoInicial >= 0.0 ? saldoInicial : 0.0) {}

    void depositar(double cantidad) {
        if (cantidad > 0.0) {
            saldo += cantidad;
        }
    }

    bool retirar(double cantidad) {
        if (cantidad > 0.0 && cantidad <= saldo) {
            saldo -= cantidad;
            return true;
        }
        return false;
    }

    double getSaldo() const {
        return saldo;
    }
};
