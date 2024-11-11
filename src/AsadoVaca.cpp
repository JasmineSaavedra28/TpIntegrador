#include "AsadoVaca.hpp"

// Constructor de AsadoVaca
AsadoVaca::AsadoVaca(double precio, double peso) : Producto(precio, peso) {}

// Implementación de getNombre()
std::string AsadoVaca::getNombre() const {
    return "Asado de Vaca";
}
