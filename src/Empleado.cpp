#include "Empleado.hpp"
#include <string>

Empleado::Empleado(int id, const std::string& nombre, const std::string& puesto)
    : id(id), nombre(nombre), puesto(puesto) {}

std::string Empleado::getNombre() const {
    return nombre;
}

int Empleado::getId() const {
    return id;
}

std::string Empleado::getPuesto() const {
    return puesto;
}
