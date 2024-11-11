#ifndef PRODUCTO_CERDO_HPP
#define PRODUCTO_CERDO_HPP

#include "Producto.hpp"

class ProductoCerdo : public Producto {
public:
    ProductoCerdo(double precio, double peso);
    std::string getNombre() const override;
    double calcularPrecioTotal(int cantidad) const override;
};

#endif // PRODUCTO_CERDO_HPP




