#include <stdexcept>

class Rectangulo {
private:
    double base;
    double altura;

public:
    Rectangulo(double base, double altura) {
        setBase(base);
        setAltura(altura);
    }

    double getBase() const {
        return base;
    }

    double getAltura() const {
        return altura;
    }

    void setBase(double nuevaBase) {
        if (nuevaBase < 0.0) {
            throw std::invalid_argument("La base no puede ser negativa.");
        }
        base = nuevaBase;
    }

    void setAltura(double nuevaAltura) {
        if (nuevaAltura < 0.0) {
            throw std::invalid_argument("La altura no puede ser negativa.");
        }
        altura = nuevaAltura;
    }

    double calcularArea() const {
        return base * altura;
    }

    double calcularPerimetro() const {
        return 2.0 * (base + altura);
    }
};
