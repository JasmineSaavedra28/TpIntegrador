#include "MilanesaPollo.hpp"

// Constructor de MilanesaPollo
MilanesaPollo::MilanesaPollo(double precio, double peso) : Producto(precio, peso) {}

// Implementación de getNombre()
std::string MilanesaPollo::getNombre() const {
    return "Milanesa de Pollo";
}
