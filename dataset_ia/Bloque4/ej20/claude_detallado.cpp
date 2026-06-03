#include <algorithm>
#include <stdexcept>

class Termostato {
public:
    Termostato(double inicial, double min, double max)
        : limiteMin(min), limiteMax(max),
          temperaturaActual(std::clamp(inicial, min, max))
    {
        if (min > max) {
            throw std::invalid_argument(
                "limiteMin no puede ser mayor que limiteMax");
        }
    }

    void subirTemperatura(double grados) {
        if (grados < 0.0) return;
        temperaturaActual = std::min(temperaturaActual + grados, limiteMax);
    }

    void bajarTemperatura(double grados) {
        if (grados < 0.0) return;
        temperaturaActual = std::max(temperaturaActual - grados, limiteMin);
    }

    [[nodiscard]] double getTemperaturaActual() const noexcept {
        return temperaturaActual;
    }

private:
    double limiteMin;
    double limiteMax;
    double temperaturaActual;
};
