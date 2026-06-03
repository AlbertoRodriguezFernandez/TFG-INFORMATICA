#include <string>
#include <vector>
#include <numeric>

class Estudiante {
private:
    std::string nombre;
    std::vector<double> notas;

public:
    explicit Estudiante(const std::string& nombreEstudiante)
        : nombre(nombreEstudiante) {}

    void agregarNota(double nota) {
        if (nota >= 0.0) {
            notas.push_back(nota);
        }
    }

    double calcularMedia() const {
        if (notas.empty()) {
            return 0.0;
        }

        const double suma = std::accumulate(notas.begin(), notas.end(), 0.0);
        return suma / static_cast<double>(notas.size());
    }
};
