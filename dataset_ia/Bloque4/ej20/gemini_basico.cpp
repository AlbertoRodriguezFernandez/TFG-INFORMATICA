#include <iostream>
#include <algorithm>

class Termostato {
private:
    double temperaturaActual;
    double limiteMin;
    double limiteMax;

public:
    Termostato(double inicial, double min, double max) : limiteMin(min), limiteMax(max) {
        if (inicial < limiteMin) {
            temperaturaActual = limiteMin;
        } else if (inicial > limiteMax) {
            temperaturaActual = limiteMax;
        } else {
            temperaturaActual = inicial;
        }
    }

    void subirTemperatura(double grados) {
        temperaturaActual += grados;
        if (temperaturaActual > limiteMax) {
            temperaturaActual = limiteMax;
        }
    }

    void bajarTemperatura(double grados) {
        temperaturaActual -= grados;
        if (temperaturaActual < limiteMin) {
            temperaturaActual = limiteMin;
        }
    }

    double getTemperaturaActual() {
        return temperaturaActual;
    }
};
