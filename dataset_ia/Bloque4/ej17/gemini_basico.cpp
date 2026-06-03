#include <iostream>

class CuentaBancaria {
private:
    double saldo;

public:
    CuentaBancaria(double saldoInicial) {
        if (saldoInicial < 0) {
            saldo = 0;
        } else {
            saldo = saldoInicial;
        }
    }

    void depositar(double cantidad) {
        if (cantidad > 0) {
            saldo += cantidad;
        }
    }

    bool retirar(double cantidad) {
        if (cantidad > 0 && saldo >= cantidad) {
            saldo -= cantidad;
            return true;
        }
        return false;
    }

    double getSaldo() {
        return saldo;
    }
};
