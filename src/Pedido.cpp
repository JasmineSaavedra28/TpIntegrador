#include "Pedido.hpp"

int Pedido::nextId = 1;

Pedido::Pedido(Cliente* cliente, Empleado* empleado) 
    : id(nextId++), cliente(cliente), empleado(empleado) {}

int Pedido::getId() const {
    return id;
}

Cliente* Pedido::getCliente() const {
    return cliente;
}

Empleado* Pedido::getEmpleado() const {
    return empleado;
}

void Pedido::agregarItem(Producto* producto, int cantidad) {
    items.emplace_back(producto, cantidad);
}

const std::vector<Item>& Pedido::getItems() const {
    return items;
}

double Pedido::montoTotal() const {
    double total = 0;
    for (const auto& item : items) {
        total += item.getPrecioTotal();
    }
    return total;
}
