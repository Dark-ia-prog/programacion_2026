#include "autobus.h"

Autobus::Autobus(string marca, string modelo, string placa, int numeroPasajeros)
    : Vehiculo(marca, modelo, placa), numeroPasajeros(numeroPasajeros) {}

void Autobus::mostrarInfo() const
{
    cout << "----- AUTOBUS -----" << endl;
    Vehiculo::mostrarInfo();
    cout << "Numero de pasajeros: " << numeroPasajeros << endl;
}