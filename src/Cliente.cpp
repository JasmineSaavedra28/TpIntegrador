#include "Cliente.hpp"

Cliente::Cliente(int id, const std::string& nombre, const std::string& email)
    : id(id), nombre(nombre), email(email) {}

std::string Cliente::getNombre() const {
    return nombre;
}

int Cliente::getId() const {
    return id;
}
