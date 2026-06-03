#include <string>
#include <vector>
#include <numeric>

class Estudiante {
private:
    std::string nombre;
    std::vector<double> notas;

public:
    Estudiante(const std::string& nombre) : nombre(nombre) {}

    void agregarNota(double nota) {
        notas.push_back(nota);
    }

    double calcularMedia() {
        if (notas.empty()) return 0.0;
        return std::accumulate(notas.begin(), notas.end(), 0.0) / notas.size();
    }
};
