#include <stdexcept>
#include <string>

class Rectangulo {
public:
    explicit Rectangulo(double base, double altura) {
        setBase(base);
        setAltura(altura);
    }

    [[nodiscard]] double getBase() const noexcept { return m_base; }
    [[nodiscard]] double getAltura() const noexcept { return m_altura; }

    void setBase(double base) {
        if (base <= 0.0) {
            throw std::invalid_argument("La base debe ser un valor positivo. Valor recibido: " + std::to_string(base));
        }
        m_base = base;
    }

    void setAltura(double altura) {
        if (altura <= 0.0) {
            throw std::invalid_argument("La altura debe ser un valor positivo. Valor recibido: " + std::to_string(altura));
        }
        m_altura = altura;
    }

    [[nodiscard]] double calcularArea() const noexcept {
        return m_base * m_altura;
    }

    [[nodiscard]] double calcularPerimetro() const noexcept {
        return 2.0 * (m_base + m_altura);
    }

private:
    double m_base{};
    double m_altura{};
};
