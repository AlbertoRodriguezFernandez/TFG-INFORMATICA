#include <algorithm>
#include <stdexcept>

class Termostato {
private:
    double temperaturaActual;
    double limiteMin;
    double limiteMax;

    static double ajustarRango(double valor, double min, double max) {
        return std::clamp(valor, min, max);
    }

public:
    Termostato(double inicial, double min, double max)
        : limiteMin(min), limiteMax(max) {
        
        if (limiteMin > limiteMax) {
            throw std::invalid_argument("El límite mínimo no puede ser mayor que el máximo.");
        }

        temperaturaActual = ajustarRango(inicial, limiteMin, limiteMax);
    }

    void subirTemperatura(double grados) {
        if (grados < 0.0) {
            throw std::invalid_argument("Los grados no pueden ser negativos.");
        }

        temperaturaActual = ajustarRango(
            temperaturaActual + grados,
            limiteMin,
            limiteMax
        );
    }

    void bajarTemperatura(double grados) {
        if (grados < 0.0) {
            throw std::invalid_argument("Los grados no pueden ser negativos.");
        }

        temperaturaActual = ajustarRango(
            temperaturaActual - grados,
            limiteMin,
            limiteMax
        );
    }

    double getTemperaturaActual() const {
        return temperaturaActual;
    }
};
