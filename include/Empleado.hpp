#ifndef EMPLEADO_HPP
#define EMPLEADO_HPP

#include <string>

class Empleado {
private:
    int id;
    std::string nombre;
    std::string puesto;

public:
    Empleado(int id, const std::string& nombre, const std::string& puesto);
    std::string getNombre() const;
    int getId() const;
    std::string getPuesto() const;
};

#endif // EMPLEADO_HPP
