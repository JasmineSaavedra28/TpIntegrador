#pragma once
#include <vector>
#include "Cliente.hpp"
#include "Empleado.hpp"
#include "Item.hpp"

class Pedido {
private:
    int id;
    Cliente* cliente;
    Empleado* empleado;
    std::vector<Item> items;
    static int nextId;

public:
    Pedido(Cliente* cliente, Empleado* empleado);
    int getId() const;
    Cliente* getCliente() const;
    Empleado* getEmpleado() const;
    void agregarItem(Producto* producto, int cantidad);
    const std::vector<Item>& getItems() const;
    double montoTotal() const;
};
