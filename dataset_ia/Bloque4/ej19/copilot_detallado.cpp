#include <cmath>

class Punto2D {
private:
    double x_;
    double y_;

public:
    constexpr Punto2D(double x = 0.0, double y = 0.0) noexcept
        : x_(x), y_(y) {}

    [[nodiscard]] constexpr double getX() const noexcept { return x_; }
    [[nodiscard]] constexpr double getY() const noexcept { return y_; }

    [[nodiscard]] double calcularDistancia(const Punto2D& otroPunto) const noexcept {
        const double dx = x_ - otroPunto.x_;
        const double dy = y_ - otroPunto.y_;
        return std::sqrt(dx * dx + dy * dy);
    }
};

