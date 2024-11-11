#include "Producto.hpp"

// Constructor de Producto
Producto::Producto(double precio, double peso) : precio(precio), peso(peso) {}

// Método para obtener el precio
double Producto::getPrecio() const {
    return precio;
}

// Método para obtener el peso
double Producto::getPeso() const {
    return peso;
}

// Método para calcular el precio total de un producto según la cantidad
double Producto::calcularPrecioTotal(int cantidad) const {
    return precio * cantidad;
}
