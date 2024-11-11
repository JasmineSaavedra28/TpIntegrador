#ifndef ITEM_HPP
#define ITEM_HPP

#include "Producto.hpp"

class Item {
private:
    Producto* producto;
    int cantidad;

public:
    Item(Producto* producto, int cantidad);
    Producto* getProducto() const;
    int getCantidad() const;
    double getPrecioTotal() const;
};

#endif // ITEM_HPP

