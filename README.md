# TFG: Evaluación de Modelos de Lenguaje en la Generación de Código C++

Bienvenido al repositorio oficial del Trabajo Fin de Grado (TFG) en Ingeniería Informática de **Alberto Rodríguez Fernández** (Universidad de Granada - UGR).

## 📌 Descripción del Proyecto

Este repositorio contiene todo el conjunto de datos, pruebas automatizadas y resultados brutos utilizados en la investigación sobre la capacidad, rendimiento y seguridad de Grandes Modelos de Lenguaje (LLMs) programando en C++.

El estudio evalúa empíricamente cinco de las inteligencias artificiales generativas líderes en la industria:
- **ChatGPT** (OpenAI)
- **Claude** (Anthropic)
- **Copilot** (Microsoft/GitHub)
- **DeepSeek** (DeepSeek AI)
- **Gemini** (Google DeepMind)

Se han analizado **210 muestras de código** generadas bajo dos estrategias de *prompting* distintas (Básico vs. Detallado), sometiéndolas a un riguroso marco de auditoría de software que abarca desde la algoritmia pura hasta la gestión crítica de la memoria dinámica.

## 📂 Estructura del Repositorio

Para garantizar la total transparencia y reproducibilidad del experimento, los recursos técnicos están organizados en los siguientes directorios:

- 📁 **`/dataset_ia`**: Contiene los 210 archivos fuente (`.cpp`) literales generados por los modelos. Están estructurados por bloque temático (Algoritmia, Estructuras de Datos, Punteros/Memoria Dinámica y Programación Orientada a Objetos) y por el nivel de instrucción recibido.
- 📁 **`/tests_gtest`**: Incluye los 21 archivos de pruebas unitarias (`test_ejx.cpp`) programados con el *framework* Google Test, diseñados para validar la corrección lógica y atrapar posibles casos límite (*Edge Cases*).
- 📁 **`/resultados`**: Contiene el archivo de hoja de cálculo original (`.xlsx`) con el volcado bruto de las métricas obtenidas tras aplicar todas las herramientas de evaluación.

## 🛠️ Stack de Evaluación (Métricas)

Todo el código generado por IA ha sido evaluado bajo un entorno Ubuntu/Linux utilizando herramientas estándar de la industria:
1. **Google Test (GTest):** Corrección funcional y paso de pruebas lógicas.
2. **Cppcheck:** Análisis estático para la detección temprana de redundancias lógicas.
3. **Clang-Tidy:** Auditoría estricta de estándares y convenciones de C++17.
4. **Valgrind:** Análisis dinámico exhaustivo para la detección de fugas de memoria (*Memory Leaks*) y accesos inválidos (*Segmentation Faults*).

## 🚀 Reproducibilidad

Si deseas reproducir las pruebas de un ejercicio específico, puedes compilar el código fuente de la IA junto a su archivo de *testing* correspondiente mediante los siguientes comandos de terminal:

```bash
# Compilación del archivo de prueba junto a la resolución de la IA
g++ dataset_ia/ruta_al_archivo_ia.cpp tests_gtest/test_ejx.cpp -lgtest -pthread -o test_ejecutable

# Ejecución de las pruebas unitarias
./test_ejecutable

# Auditoría de memoria
valgrind ./test_ejecutable
