#include <string>
#include <vector>
#include <numeric>
#include <utility>

class Estudiante {
private:
    std::string nombre;
    std::vector<double> notas;

public:
    explicit Estudiante(std::string t_nombre) 
        : nombre(std::move(t_nombre)) {}

    void agregarNota(double nota) {
        notas.push_back(nota);
    }

    [[nodiscard]] double calcularMedia() const noexcept {
        if (notas.empty()) {
            return 0.0;
        }

        double suma = std::accumulate(notas.begin(), notas.end(), 0.0);
        return suma / static_cast<double>(notas.size());
    }
};
