#ifndef ASADOVACA_HPP
#define ASADOVACA_HPP

#include "Producto.hpp"

class AsadoVaca : public Producto {
public:
    // Constructor de AsadoVaca
    AsadoVaca(double precio, double peso);
    
    // Implementación del método getNombre()
    std::string getNombre() const override;
};

#endif // ASADOVACA_HPP
