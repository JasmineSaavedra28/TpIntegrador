#include "ProductoVacuno.hpp"

ProductoVacuno::ProductoVacuno(double precio, double peso) : Producto(precio, peso) {}

std::string ProductoVacuno::getNombre() const {
    return "Producto Vacuno";
}

double ProductoVacuno::calcularPrecioTotal(int cantidad) const {
    return getPrecio() * cantidad;
}
