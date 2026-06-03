#include <cmath>

class Punto2D {
private:
    double x;
    double y;

public:
    Punto2D(double x = 0.0, double y = 0.0)
        : x(x), y(y) {}

    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    double calcularDistancia(const Punto2D& otroPunto) const {
        double dx = x - otroPunto.x;
        double dy = y - otroPunto.y;
        return std::sqrt(dx * dx + dy * dy);
    }
};
