//
// Created by jhigu on 07/05/2024.
//

#ifndef CLASESABSTRACTAS_LIBRO_H
#define CLASESABSTRACTAS_LIBRO_H


#include "Recurso.h"

class Libro : public Recurso {

private:
    int NumPaginas;

public:
    explicit Libro(std::string titulo, int año, std::string id, int numPaginas);

    double calcularPrestamo() override;
};


#endif //CLASESABSTRACTAS_LIBRO_H
