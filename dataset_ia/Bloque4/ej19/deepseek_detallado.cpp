#include <cmath>

class Punto2D {
private:
    double x;
    double y;

public:
    Punto2D(double xVal = 0.0, double yVal = 0.0) noexcept
        : x(xVal), y(yVal) {}

    double getX() const noexcept {
        return x;
    }

    double getY() const noexcept {
        return y;
    }

    double calcularDistancia(const Punto2D& otroPunto) const noexcept {
        double dx = x - otroPunto.x;
        double dy = y - otroPunto.y;
        return std::sqrt(dx * dx + dy * dy);
    }
};
