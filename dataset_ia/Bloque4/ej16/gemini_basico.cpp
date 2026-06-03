#include <iostream>

class Rectangulo {
private:
    double base;
    double altura;

public:
    Rectangulo(double b, double h) : base(b), altura(h) {}

    void setBase(double b) {
        base = b;
    }

    double getBase() const {
        return base;
    }

    void setAltura(double h) {
        altura = h;
    }

    double getAltura() const {
        return altura;
    }

    double calcularArea() const {
        return base * altura;
    }

    double calcularPerimetro() const {
        return 2 * (base + altura);
    }
};
