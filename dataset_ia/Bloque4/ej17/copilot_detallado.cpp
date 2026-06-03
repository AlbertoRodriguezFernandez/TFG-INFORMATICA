#include <mutex>

class CuentaBancaria {
public:
    explicit CuentaBancaria(double saldoInicial) noexcept
        : saldo_(saldoInicial >= 0.0 ? saldoInicial : 0.0) {}

    void depositar(double cantidad) noexcept {
        if (cantidad > 0.0) {
            std::scoped_lock lock(mutex_);
            saldo_ += cantidad;
        }
    }

    bool retirar(double cantidad) noexcept {
        if (cantidad <= 0.0) return false;

        std::scoped_lock lock(mutex_);
        if (saldo_ >= cantidad) {
            saldo_ -= cantidad;
            return true;
        }
        return false;
    }

    double getSaldo() const noexcept {
        std::scoped_lock lock(mutex_);
        return saldo_;
    }

private:
    double saldo_{0.0};
    mutable std::mutex mutex_;
};

