#include <cmath>

class Punto2D {
private:
    double x;
    double y;

public:
    // Constructor con inicialización uniforme y default arguments
    explicit Punto2D(double x_val = 0.0, double y_val = 0.0) noexcept 
        : x{x_val}, y{y_val} {}

    // Getters marcados como const y noexcept para optimización
    [[nodiscard]] double getX() const noexcept { return x; }
    [[nodiscard]] double getY() const noexcept { return y; }

    /**
     * Calcula la distancia euclidiana entre el punto actual y otro punto.
     * La fórmula utilizada es: $d = \sqrt{(x_2 - x_1)^2 + (y_2 - y_1)^2}$
     */
    [[nodiscard]] double calcularDistancia(const Punto2D& otroPunto) const noexcept {
        const double dx = x - otroPunto.x;
        const double dy = y - otroPunto.y;
        return std::hypot(dx, dy);
    }
};
