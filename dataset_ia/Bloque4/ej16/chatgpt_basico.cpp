#include <iostream>

class Rectangulo {
private:
    double base;
    double altura;

public:
    Rectangulo(double b, double a) : base(b), altura(a) {}

    double getBase() const {
        return base;
    }

    double getAltura() const {
        return altura;
    }

    void setBase(double b) {
        base = b;
    }

    void setAltura(double a) {
        altura = a;
    }

    double calcularArea() const {
        return base * altura;
    }

    double calcularPerimetro() const {
        return 2 * (base + altura);
    }
};
