#include "ARBOL_BINARIO_COD.h"

Vehiculo::Vehiculo(const string& placa, const string& marca, const string& modelo, int anio)
    : placa(placa), marca(marca), modelo(modelo), anio(anio) {}

ostream& operator<<(ostream& os, const Vehiculo& v) {
    os << "Placa: " << v.placa << ", Marca: " << v.marca << ", Modelo: " << v.modelo << ", Año: " << v.anio;
    return os;
}

Nodo::Nodo(const Vehiculo& vehiculo) : vehiculo(vehiculo) {}

void ArbolVehiculos::Insertar(unique_ptr<Nodo>& nodo, const Vehiculo& vehiculo) {
    if (!nodo) {
        nodo = make_unique<Nodo>(vehiculo);
    }
    else if (vehiculo.placa < nodo->vehiculo.placa) {
        Insertar(nodo->izquierdo, vehiculo);
    }
    else {
        Insertar(nodo->derecho, vehiculo);
    }
}

Nodo* ArbolVehiculos::Buscar(Nodo* nodo, const string& placa) const {
    if (!nodo) {
        return nullptr;
    }
    else if (placa == nodo->vehiculo.placa) {
        return nodo;
    }
    else if (placa < nodo->vehiculo.placa) {
        return Buscar(nodo->izquierdo.get(), placa);
    }
    else {
        return Buscar(nodo->derecho.get(), placa);
    }
}

void ArbolVehiculos::InOrden(Nodo* nodo) const {
    if (!nodo) return;
    InOrden(nodo->izquierdo.get());
    cout << nodo->vehiculo << endl;
    InOrden(nodo->derecho.get());
}

ArbolVehiculos::ArbolVehiculos() {}

void ArbolVehiculos::AgregarVehiculo(const Vehiculo& vehiculo) {
    Insertar(raiz, vehiculo);
}


Vehiculo* ArbolVehiculos::BuscarVehiculo(const string& placa) const {
	Nodo* nodo = Buscar(raiz.get(), placa);
	return nodo ? &nodo->vehiculo : nullptr;
}

void ArbolVehiculos::ListarVehiculos() const {
    InOrden(raiz.get());
}


int main() {
    ArbolVehiculos av;
    av.AgregarVehiculo(Vehiculo("ABC123", "Toyota", "Corolla", 2020));
    av.AgregarVehiculo(Vehiculo("XYZ789", "Honda", "Civic", 2019));
    av.AgregarVehiculo(Vehiculo("DEF456", "Ford", "Mustang", 2021));

    cout << "Listado de Vehículos:" << endl;
    av.ListarVehiculos();

    Vehiculo* v = av.BuscarVehiculo("XYZ789");
    if (v) {
        cout << "Vehículo encontrado: " << *v << endl;
    }
    else {
        cout << "Vehículo no encontrado." << endl;
    }

    return 0;
}