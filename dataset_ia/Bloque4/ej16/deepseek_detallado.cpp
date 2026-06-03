#include <stdexcept>

class Rectangulo {
private:
    double base;
    double altura;

public:
    Rectangulo(double b, double a) : base(b), altura(a) {
        if (b <= 0 || a <= 0) {
            throw std::invalid_argument("Base y altura deben ser mayores que cero");
        }
    }

    double getBase() const {
        return base;
    }

    void setBase(double b) {
        if (b <= 0) {
            throw std::invalid_argument("La base debe ser mayor que cero");
        }
        base = b;
    }

    double getAltura() const {
        return altura;
    }

    void setAltura(double a) {
        if (a <= 0) {
            throw std::invalid_argument("La altura debe ser mayor que cero");
        }
        altura = a;
    }

    double calcularArea() const {
        return base * altura;
    }

    double calcularPerimetro() const {
        return 2 * (base + altura);
    }
};
