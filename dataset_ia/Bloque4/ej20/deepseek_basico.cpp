#include <algorithm>

class Termostato {
private:
    double temperaturaActual;
    double limiteMin;
    double limiteMax;

public:
    Termostato(double inicial, double min, double max) 
        : limiteMin(min), limiteMax(max) {
        temperaturaActual = std::max(min, std::min(inicial, max));
    }

    void subirTemperatura(double grados) {
        temperaturaActual = std::min(temperaturaActual + grados, limiteMax);
    }

    void bajarTemperatura(double grados) {
        temperaturaActual = std::max(temperaturaActual - grados, limiteMin);
    }

    double getTemperaturaActual() {
        return temperaturaActual;
    }
};
