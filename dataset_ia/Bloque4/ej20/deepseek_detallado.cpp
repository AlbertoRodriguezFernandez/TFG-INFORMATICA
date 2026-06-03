#include <algorithm>
#include <stdexcept>

class Termostato {
private:
    double temperaturaActual;
    double limiteMin;
    double limiteMax;

public:
    Termostato(double inicial, double min, double max) 
        : limiteMin(min), limiteMax(max) {
        if (limiteMin > limiteMax) {
            throw std::invalid_argument("El límite mínimo no puede ser mayor que el límite máximo");
        }
        temperaturaActual = std::clamp(inicial, limiteMin, limiteMax);
    }

    void subirTemperatura(double grados) {
        if (grados < 0) {
            throw std::invalid_argument("Los grados a subir no pueden ser negativos");
        }
        temperaturaActual = std::min(temperaturaActual + grados, limiteMax);
    }

    void bajarTemperatura(double grados) {
        if (grados < 0) {
            throw std::invalid_argument("Los grados a bajar no pueden ser negativos");
        }
        temperaturaActual = std::max(temperaturaActual - grados, limiteMin);
    }

    double getTemperaturaActual() const {
        return temperaturaActual;
    }
};
