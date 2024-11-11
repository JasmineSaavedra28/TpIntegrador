#ifndef PRODUCTO_HPP
#define PRODUCTO_HPP

#include <string>

class Producto {
protected:
    double precio;  // Precio del producto
    double peso;    // Peso del producto

public:
    // Constructor con parámetros para inicializar el precio y peso
    Producto(double precio, double peso);
    
    // Destructor virtual para permitir la correcta destrucción de las clases derivadas
    virtual ~Producto() = default;

    // Método virtual puro para obtener el nombre del producto
    virtual std::string getNombre() const = 0;

    // Métodos para obtener el precio y el peso
    double getPrecio() const;
    double getPeso() const;

    // Método para calcular el precio total según la cantidad
    virtual double calcularPrecioTotal(int cantidad) const;
};

#endif // PRODUCTO_HPP
