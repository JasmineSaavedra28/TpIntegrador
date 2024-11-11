#ifndef PRODUCTO_POLLO_HPP
#define PRODUCTO_POLLO_HPP

#include "Producto.hpp"

class ProductoPollo : public Producto {
public:
    ProductoPollo(double precio, double peso);
    std::string getNombre() const override;
    double calcularPrecioTotal(int cantidad) const override;
};

#endif // PRODUCTO_POLLO_HPP
