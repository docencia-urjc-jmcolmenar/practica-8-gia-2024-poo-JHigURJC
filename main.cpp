#include <iostream>
#include "Recurso.h"
#include "Libro.h"
#include "Pelicula.h"

int const MAX_RECURSOS = 100;

int main() {
    // Declaración de array polimórfico de recursos:
    Recurso *recursos[MAX_RECURSOS];

    // Inclusión de elementos:
    int numRecursos = 0;

    Recurso *a = new Libro("El señor de los anillos", 1854, "ISBN1234", 1000);
    std::cout << a->getAño()<< std::endl;

    recursos[numRecursos++] = new Libro("El señor de los anillos", 1954, "ISBN1234", 1000);
    recursos[numRecursos++] = new Pelicula("Inception", 2010, "IMDB5678", 148);

    // Cálculo de coste de préstamos:
    for (int i = 0; i < numRecursos; i++) {
        std::cout << "Coste de préstamo de \"" << recursos[i]->getTitulo() << "\": " << recursos[i]->calcularPrestamo() << std::endl;
    }

    return 0;
}