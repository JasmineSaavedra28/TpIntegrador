#ifndef MATAMBRECERDO_HPP
#define MATAMBRECERDO_HPP

#include "Producto.hpp"

class MatambreCerdo : public Producto {
public:
    // Constructor de MatambreCerdo
    MatambreCerdo(double precio, double peso);
    
    // Implementación del método getNombre()
    std::string getNombre() const override;
};

#endif // MATAMBRECERDO_HPP
