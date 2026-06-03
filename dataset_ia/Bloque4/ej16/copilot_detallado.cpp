#include <stdexcept>

class Rectangulo {
private:
    double base_;
    double altura_;

public:
    Rectangulo(double base, double altura) {
        if (base <= 0.0 || altura <= 0.0) {
            throw std::invalid_argument("La base y la altura deben ser mayores que cero.");
        }
        base_ = base;
        altura_ = altura;
    }

    double getBase() const noexcept {
        return base_;
    }

    double getAltura() const noexcept {
        return altura_;
    }

    void setBase(double base) {
        if (base <= 0.0) {
            throw std::invalid_argument("La base debe ser mayor que cero.");
        }
        base_ = base;
    }

    void setAltura(double altura) {
        if (altura <= 0.0) {
            throw std::invalid_argument("La altura debe ser mayor que cero.");
        }
        altura_ = altura;
    }

    double calcularArea() const noexcept {
        return base_ * altura_;
    }

    double calcularPerimetro() const noexcept {
        return 2.0 * (base_ + altura_);
    }
};

