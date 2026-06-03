#include <algorithm>

class CuentaBancaria {
private:
    double saldo;

public:
    explicit CuentaBancaria(double saldoInicial) noexcept
        : saldo(std::max(0.0, saldoInicial)) {}

    void depositar(double cantidad) noexcept {
        if (cantidad > 0.0) {
            saldo += cantidad;
        }
    }

    [[nodiscard]] bool retirar(double cantidad) noexcept {
        if (cantidad > 0.0 && saldo >= cantidad) {
            saldo -= cantidad;
            return true;
        }
        return false;
    }

    [[nodiscard]] double getSaldo() const noexcept {
        return saldo;
    }
};
