#include <iostream>

class CuentaBancaria {
private:
    double saldo;

public:
    CuentaBancaria(double saldoInicial) {
        saldo = (saldoInicial < 0) ? 0 : saldoInicial;
    }

    void depositar(double cantidad) {
        if (cantidad > 0) {
            saldo += cantidad;
        }
    }

    bool retirar(double cantidad) {
        if (cantidad > 0 && cantidad <= saldo) {
            saldo -= cantidad;
            return true;
        }
        return false;
    }

    double getSaldo() {
        return saldo;
    }
};

