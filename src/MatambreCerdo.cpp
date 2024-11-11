#include "MatambreCerdo.hpp"

// Constructor de MatambreCerdo
MatambreCerdo::MatambreCerdo(double precio, double peso) : Producto(precio, peso) {}

// Implementación de getNombre()
std::string MatambreCerdo::getNombre() const {
    return "Matambre de Cerdo";
}
