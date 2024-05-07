//
// Created by jhigu on 07/05/2024.
//

#ifndef CLASESABSTRACTAS_PELICULA_H
#define CLASESABSTRACTAS_PELICULA_H


#include "Recurso.h"

class Pelicula : public Recurso{

private:
    int DuracionPeli;

public:
    explicit Pelicula(std::string titulo, int año, std::string id,int duracionPeli);

    double calcularPrestamo() override;
};


#endif //CLASESABSTRACTAS_PELICULA_H
