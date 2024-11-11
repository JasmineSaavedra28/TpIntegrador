#include "Item.hpp"

// Constructor
Item::Item(Producto* producto, int cantidad) : producto(producto), cantidad(cantidad) {}

// Método para obtener el producto
Producto* Item::getProducto() const {
    return producto;
}

// Método para obtener la cantidad
int Item::getCantidad() const {
    return cantidad;
}

// Método para calcular el precio total
double Item::getPrecioTotal() const {
    return producto->calcularPrecioTotal(cantidad);
}
