#include <string>
#include <vector>
#include <stdexcept>
#include <numeric>

class Estudiante {
private:
    std::string nombre;
    std::vector<double> notas;

public:
    explicit Estudiante(const std::string& nombre_estudiante) : nombre(nombre_estudiante) {}

    void agregarNota(double nota) {
        if (nota < 0.0 || nota > 10.0) {
            throw std::invalid_argument("La nota debe estar entre 0 y 10");
        }
        notas.push_back(nota);
    }

    double calcularMedia() const {
        if (notas.empty()) {
            return 0.0;
        }
        double suma = std::accumulate(notas.begin(), notas.end(), 0.0);
        return suma / notas.size();
    }
};
