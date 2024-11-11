#include <iostream>
#include <fstream>
#include <vector>
#include "Cliente.hpp"
#include "Empleado.hpp"
#include "Pedido.hpp"
#include "Producto.hpp"
#include "MilanesaPollo.hpp"
#include "AsadoVaca.hpp"
#include "MilanesaCarne.hpp"
#include "MatambreCerdo.hpp"
#include "Item.hpp"

void guardarPedidoEnArchivo(Pedido* pedido, const std::string& nombreArchivo) {
    std::ofstream archivo(nombreArchivo, std::ios::app);
    if (archivo.is_open()) {
        archivo << "Pedido nro. " << pedido->getId() << " para " 
                << pedido->getCliente()->getNombre() << ":\n";
        
        // Agregar información del empleado
        archivo << "Atendido por: " << pedido->getEmpleado()->getNombre() 
                << " (" << pedido->getEmpleado()->getPuesto() << ")\n";
        
        // Listado de ítems
        for (const auto& item : pedido->getItems()) {
            archivo << "- " << item.getProducto()->getNombre()
                    << " (Cantidad: " << item.getCantidad()
                    << ", Precio Total: $" << item.getPrecioTotal() << ")\n";
        }
        
        archivo << "Monto Total del Pedido: $" << pedido->montoTotal() << "\n";
        archivo.close();
    } else {
        std::cerr << "Error al abrir el archivo.\n";
    }
}



int main() {
    // Crear empleados
    Empleado* empleado1 = new Empleado(101, "Carlos Gomez", "Supervisor");
    Empleado* empleado2 = new Empleado(102, "Maria Lopez", "Vendedor");

    // Crear clientes
    Cliente* cliente1 = new Cliente(201, "Carlos Perez", "carlos@example.com");
    Cliente* cliente2 = new Cliente(202, "Ana Lopez", "ana@example.com");

    // Crear productos
    Producto* milanesaPollo = new MilanesaPollo(2100.0, 1.5);
    Producto* asadoVaca = new AsadoVaca(10000.0, 2.0);
    Producto* matambreCerdo = new MatambreCerdo(7500.0, 1.0);
    Producto* milanesaCarne = new MilanesaCarne(3100.0, 2.0);

    // Crear pedidos
    Pedido* pedido1 = new Pedido(cliente1, empleado1);
    pedido1->agregarItem(milanesaPollo, 2);
    pedido1->agregarItem(asadoVaca, 1);

    Pedido* pedido2 = new Pedido(cliente2, empleado2);
    pedido2->agregarItem(matambreCerdo, 1);
    pedido2->agregarItem(milanesaCarne, 2);

    // Guardar pedidos en archivo
    guardarPedidoEnArchivo(pedido1, "pedidos.txt");
    guardarPedidoEnArchivo(pedido2, "pedidos.txt");

    // Liberar memoria
    delete empleado1;
    delete empleado2;
    delete cliente1;
    delete cliente2;
    delete milanesaPollo;
    delete asadoVaca;
    delete matambreCerdo;
    delete milanesaCarne;
    delete pedido1;
    delete pedido2;

    return 0;
}
