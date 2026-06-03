#include <cmath>
#include <stdexcept>

class Punto2D {
public:
    explicit Punto2D(double x = 0.0, double y = 0.0)
        : x_(x), y_(y)
    {
        if (!std::isfinite(x) || !std::isfinite(y)) {
            throw std::invalid_argument("Las coordenadas deben ser valores finitos.");
        }
    }

    [[nodiscard]] double getX() const noexcept { return x_; }
    [[nodiscard]] double getY() const noexcept { return y_; }

    [[nodiscard]] double calcularDistancia(const Punto2D& otroPunto) const noexcept {
        const double dx = x_ - otroPunto.x_;
        const double dy = y_ - otroPunto.y_;
        return std::hypot(dx, dy);
    }

private:
    double x_;
    double y_;
};
