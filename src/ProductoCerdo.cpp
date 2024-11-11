#include "ProductoCerdo.hpp"

ProductoCerdo::ProductoCerdo(double precio, double peso) : Producto(precio, peso) {}

std::string ProductoCerdo::getNombre() const {
    return "Producto Cerdo";
}

double ProductoCerdo::calcularPrecioTotal(int cantidad) const {
    return getPrecio() * cantidad;
}

