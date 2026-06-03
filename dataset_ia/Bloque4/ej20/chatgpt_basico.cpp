#include <algorithm>

class Termostato {
private:
    double temperaturaActual;
    double limiteMin;
    double limiteMax;

public:
    Termostato(double inicial, double min, double max)
        : limiteMin(min), limiteMax(max) {
        if (limiteMin > limiteMax) {
            std::swap(limiteMin, limiteMax);
        }

        temperaturaActual = std::clamp(inicial, limiteMin, limiteMax);
    }

    void subirTemperatura(double grados) {
        if (grados > 0) {
            temperaturaActual = std::min(temperaturaActual + grados, limiteMax);
        }
    }

    void bajarTemperatura(double grados) {
        if (grados > 0) {
            temperaturaActual = std::max(temperaturaActual - grados, limiteMin);
        }
    }

    double getTemperaturaActual() const {
        return temperaturaActual;
    }
};
