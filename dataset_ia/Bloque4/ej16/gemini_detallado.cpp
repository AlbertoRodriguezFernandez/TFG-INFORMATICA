#include <stdexcept>
#include <iostream>

/**
 * @class Rectangulo
 * @brief Representa un rectángulo con validación de dimensiones para garantizar
 *        un estado interno consistente y seguro.
 */
class Rectangulo {
private:
    double base;
    double altura;

    /**
     * @brief Valida que la dimensión sea un número positivo y finito.
     */
    static void validarDimension(double valor, const char* nombreAtributo) {
        if (valor <= 0.0) {
            throw std::invalid_argument(std::string(nombreAtributo) + " debe ser mayor que cero.");
        }
    }

public:
    /**
     * @brief Constructor parametrizado.
     * @throws std::invalid_argument si base o altura son <= 0.
     */
    Rectangulo(double base, double altura) {
        setBase(base);
        setAltura(altura);
    }

    // Getters con calificador const para garantizar inmutabilidad en la lectura
    double getBase() const noexcept { return base; }
    double getAltura() const noexcept { return altura; }

    /**
     * @brief Actualiza la base con validación previa.
     */
    void setBase(double nuevaBase) {
        validarDimension(nuevaBase, "La base");
        base = nuevaBase;
    }

    /**
     * @brief Actualiza la altura con validación previa.
     */
    void setAltura(double nuevaAltura) {
        validarDimension(nuevaAltura, "La altura");
        altura = nuevaAltura;
    }

    /**
     * @brief Calcula el área del rectángulo.
     * @return El producto de base por altura.
     */
    double calcularArea() const noexcept {
        return base * altura;
    }

    /**
     * @brief Calcula el perímetro del rectángulo.
     * @return La suma de todos sus lados.
     */
    double calcularPerimetro() const noexcept {
        return 2.0 * (base + altura);
    }
};
