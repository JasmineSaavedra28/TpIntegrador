#ifndef PRODUCTO_VACUNO_HPP
#define PRODUCTO_VACUNO_HPP

#include "Producto.hpp"

class ProductoVacuno : public Producto {
public:
    ProductoVacuno(double precio, double peso);
    std::string getNombre() const override;
    double calcularPrecioTotal(int cantidad) const override;
};

#endif // PRODUCTO_VACUNO_HPP
