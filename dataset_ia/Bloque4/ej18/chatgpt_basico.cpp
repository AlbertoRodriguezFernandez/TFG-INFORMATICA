#include <string>
#include <vector>

class Estudiante {
private:
    std::string nombre;
    std::vector<double> notas;

public:
    explicit Estudiante(const std::string& nombreEstudiante)
        : nombre(nombreEstudiante) {}

    void agregarNota(double nota) {
        notas.push_back(nota);
    }

    double calcularMedia() const {
        if (notas.empty()) {
            return 0.0;
        }

        double suma = 0.0;
        for (double nota : notas) {
            suma += nota;
        }

        return suma / notas.size();
    }
};
