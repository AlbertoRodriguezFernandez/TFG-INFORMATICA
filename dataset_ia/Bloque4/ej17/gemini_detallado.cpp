#include <algorithm>

class CuentaBancaria {
private:
    double saldo;

public:
    /**
     * @brief Constructor que inicializa el saldo. 
     * Si el valor es negativo, se asegura de inicializarlo a 0.
     */
    explicit CuentaBancaria(double saldoInicial) noexcept 
        : saldo(std::max(0.0, saldoInicial)) {}

    /**
     * @brief Incrementa el saldo si la cantidad es positiva.
     */
    void depositar(double cantidad) noexcept {
        if (cantidad > 0.0) {
            saldo += cantidad;
        }
    }

    /**
     * @brief Retira fondos si la cantidad es positiva y existe saldo suficiente.
     * @return true si la operación fue exitosa, false en caso contrario.
     */
    bool retirar(double cantidad) noexcept {
        if (cantidad > 0.0 && saldo >= cantidad) {
            saldo -= cantidad;
            return true;
        }
        return false;
    }

    /**
     * @brief Retorna el saldo actual. Marcado como const para asegurar 
     * la inmutabilidad del objeto al consultar.
     */
    double getSaldo() const noexcept {
        return saldo;
    }
};
