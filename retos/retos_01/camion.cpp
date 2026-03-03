#include "camion.h"

Camion::Camion(string marca, string modelo, string placa, double capacidadCarga)
    : Vehiculo(marca, modelo, placa), capacidadCarga(capacidadCarga) {}

void Camion::mostrarInfo() const
{
    cout << "----- CAMION -----" << endl;
    Vehiculo::mostrarInfo();
    cout << "Capacidad de carga: " << capacidadCarga << " toneladas" << endl;
}