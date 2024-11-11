#ifndef MILANESACARNE_HPP
#define MILANESACARNE_HPP

#include "Producto.hpp"

class MilanesaCarne : public Producto {
public:
    // Constructor de MilanesaCarne
    MilanesaCarne(double precio, double peso);
    
    // Implementación del método getNombre()
    std::string getNombre() const override;
};

#endif // MILANESACARNE_HPP
