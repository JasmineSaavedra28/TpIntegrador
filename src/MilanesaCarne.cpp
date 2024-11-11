#include "MilanesaCarne.hpp"

// Constructor de MilanesaCarne
MilanesaCarne::MilanesaCarne(double precio, double peso) : Producto(precio, peso) {}

// Implementación de getNombre()
std::string MilanesaCarne::getNombre() const {
    return "Milanesa de Carne";
}
