//
// Created by jhigu on 07/05/2024.
//

#include <string>
#include "Pelicula.h"

Pelicula::Pelicula(std::string titulo, int año, std::string id,int duracionPeli) : Recurso(titulo,año,id), DuracionPeli(duracionPeli) {}

double Pelicula::calcularPrestamo() {

    return (this->DuracionPeli * 0.1);
}