//
// Created by jhigu on 07/05/2024.
//

#ifndef CLASESABSTRACTAS_RECURSO_H
#define CLASESABSTRACTAS_RECURSO_H


#include <string>

class Recurso {

protected:
    std::string titulo;
    int año;
    std::string id;

public:
    virtual double calcularPrestamo() = 0;

    const std::string &getTitulo() const;

    Recurso(const std::string &titulo, int año, const std::string &id);

    int getAño() const;

    const std::string &getId() const;

    void setTitulo(const std::string &titulo);

    void setAño(int año);

    void setId(const std::string &id);
};


#endif //CLASESABSTRACTAS_RECURSO_H
