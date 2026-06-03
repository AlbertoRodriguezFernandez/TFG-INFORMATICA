#include <algorithm>
#include <stdexcept>

class Termostato {
private:
    double temperaturaActual{};
    double limiteMin{};
    double limiteMax{};

public:
    Termostato(double inicial, double min, double max)
        : limiteMin(min), limiteMax(max) 
    {
        if (min > max) {
            throw std::invalid_argument("El límite mínimo no puede ser mayor que el máximo.");
        }
        temperaturaActual = std::clamp(inicial, limiteMin, limiteMax);
    }

    void subirTemperatura(double grados) {
        if (grados < 0.0) {
            throw std::invalid_argument("Los grados a subir deben ser positivos.");
        }
        temperaturaActual = std::clamp(temperaturaActual + grados, limiteMin, limiteMax);
    }

    void bajarTemperatura(double grados) {
        if (grados < 0.0) {
            throw std::invalid_argument("Los grados a bajar deben ser positivos.");
        }
        temperaturaActual = std::clamp(temperaturaActual - grados, limiteMin, limiteMax);
    }

    double getTemperaturaActual() const noexcept {
        return temperaturaActual;
    }
};

