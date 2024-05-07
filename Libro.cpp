//
// Created by jhigu on 07/05/2024.
//

#include "Libro.h"


Libro::Libro(std::string titulo, int año, std::string id, int numPaginas)
        : Recurso(titulo, año, id), NumPaginas(numPaginas) {}

double Libro::calcularPrestamo() {

    return (this->NumPaginas * 0.05);
}





