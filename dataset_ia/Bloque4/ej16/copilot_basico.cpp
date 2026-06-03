#include <iostream>

class Rectangulo {
private:
    double base;
    double altura;

public:
    Rectangulo(double base, double altura) : base(base), altura(altura) {}

    double getBase() const { return base; }
    double getAltura() const { return altura; }

    void setBase(double base) { this->base = base; }
    void setAltura(double altura) { this->altura = altura; }

    double calcularArea() const {
        return base * altura;
    }

    double calcularPerimetro() const {
        return 2 * (base + altura);
    }
};

