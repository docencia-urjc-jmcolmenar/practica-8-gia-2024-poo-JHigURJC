//
// Created by jhigu on 07/05/2024.
//

#include "Recurso.h"

const std::string &Recurso::getTitulo() const {
    return titulo;
}

int Recurso::getAño() const {
    return año;
}

const std::string &Recurso::getId() const {
    return id;
}

void Recurso::setTitulo(const std::string &titulo) {
    Recurso::titulo = titulo;
}

void Recurso::setAño(int año) {
    Recurso::año = año;
}

void Recurso::setId(const std::string &id) {
    Recurso::id = id;
}

Recurso::Recurso(const std::string &titulo, int año, const std::string &id) : titulo(titulo), año(año), id(id) {}
