#include "ProductoPollo.hpp"

ProductoPollo::ProductoPollo(double precio, double peso) : Producto(precio, peso) {}

std::string ProductoPollo::getNombre() const {
    return "Milanesa de Pollo";
}

double ProductoPollo::calcularPrecioTotal(int cantidad) const {
    return getPrecio() * cantidad;
}

