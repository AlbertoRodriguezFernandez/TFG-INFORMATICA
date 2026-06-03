#include <algorithm>

class Termostato {
private:
    double temperaturaActual;
    double limiteMin;
    double limiteMax;

public:
    /**
     * @brief Constructor que inicializa el termostato asegurando integridad de rangos.
     * Utiliza std::clamp (C++17) para garantizar que el valor inicial esté acotado.
     */
    Termostato(double inicial, double min, double max)
        : limiteMin(min), limiteMax(max) {
        // Aseguramos que el rango sea lógico (min <= max)
        if (limiteMin > limiteMax) {
            std::swap(limiteMin, limiteMax);
        }
        temperaturaActual = std::clamp(inicial, limiteMin, limiteMax);
    }

    /**
     * @brief Incrementa la temperatura actual respetando el límite máximo.
     */
    void subirTemperatura(double grados) {
        if (grados > 0) {
            temperaturaActual = std::min(temperaturaActual + grados, limiteMax);
        }
    }

    /**
     * @brief Decrementa la temperatura actual respetando el límite mínimo.
     */
    void bajarTemperatura(double grados) {
        if (grados > 0) {
            temperaturaActual = std::max(temperaturaActual - grados, limiteMin);
        }
    }

    /**
     * @brief Retorna la temperatura actual marcada por el sensor.
     * Marcado como const para garantizar que no modifica el estado del objeto.
     */
    double getTemperaturaActual() const {
        return temperaturaActual;
    }
};
