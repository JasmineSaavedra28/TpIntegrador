#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>

class Cliente {
private:
    int id;
    std::string nombre;
    std::string email;

public:
    Cliente(int id, const std::string& nombre, const std::string& email);
    std::string getNombre() const;
    int getId() const;
};

#endif // CLIENTE_HPP
