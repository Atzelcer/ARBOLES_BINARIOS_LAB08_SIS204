 //Vehiculo.h

#ifndef VEHICULO_H
#define VEHICULO_H

#include <iostream>
#include <memory>
#include <string>

using namespace std;

// Clase Vehículo
class Vehiculo {
public:
    string placa;
    string marca;
    string modelo;
    int anio;

    Vehiculo(const string& placa, const string& marca, const string& modelo, int anio);

    friend ostream& operator<<(ostream& os, const Vehiculo& v);
};

// Nodo del árbol binario de búsqueda
class Nodo {
public:
    Vehiculo vehiculo;
    unique_ptr<Nodo> izquierdo;
    unique_ptr<Nodo> derecho;

    Nodo(const Vehiculo& vehiculo);
};

// Árbol binario de búsqueda
class ArbolVehiculos {
private:
    unique_ptr<Nodo> raiz;

    void Insertar(unique_ptr<Nodo>& nodo, const Vehiculo& vehiculo);
    Nodo* Buscar(Nodo* nodo, const string& placa) const;
    void InOrden(Nodo* nodo) const;

public:
    ArbolVehiculos();
    void AgregarVehiculo(const Vehiculo& vehiculo);
    Vehiculo* BuscarVehiculo(const string& placa) const;
    void ListarVehiculos() const;
};

#endif // VEHICULO_H
