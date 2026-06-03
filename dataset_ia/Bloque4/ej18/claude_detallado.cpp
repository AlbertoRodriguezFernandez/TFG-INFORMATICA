#include <string>
#include <vector>
#include <numeric>
#include <stdexcept>

class Estudiante {
public:
    explicit Estudiante(std::string nombre)
        : nombre_(std::move(nombre)) {}

    void agregarNota(double nota) {
        if (nota < 0.0 || nota > 10.0) {
            throw std::out_of_range("La nota debe estar entre 0.0 y 10.0");
        }
        notas_.push_back(nota);
    }

    [[nodiscard]] double calcularMedia() const noexcept {
        if (notas_.empty()) return 0.0;
        return std::accumulate(notas_.cbegin(), notas_.cend(), 0.0)
               / static_cast<double>(notas_.size());
    }

    [[nodiscard]] const std::string& getNombre() const noexcept {
        return nombre_;
    }

    [[nodiscard]] const std::vector<double>& getNotas() const noexcept {
        return notas_;
    }

private:
    std::string nombre_;
    std::vector<double> notas_;
};
