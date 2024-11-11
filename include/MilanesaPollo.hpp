#ifndef MILANESAPOLLO_HPP
#define MILANESAPOLLO_HPP

#include "Producto.hpp"

class MilanesaPollo : public Producto {
public:
    // Constructor de MilanesaPollo
    MilanesaPollo(double precio, double peso);
    
    // Implementación del método getNombre()
    std::string getNombre() const override;
};

#endif // MILANESAPOLLO_HPP
