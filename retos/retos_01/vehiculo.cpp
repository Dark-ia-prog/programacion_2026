#include "vehiculo.h"

Vehiculo::Vehiculo(string marca, string modelo, string placa)
: marca(marca), modelo(modelo), placa(placa) {}

string Vehiculo::getMarca() const
{
    return marca;
}

string Vehiculo::getModelo() const
{
    return modelo;
}

string Vehiculo::getPlaca() const
{
    return placa;
}

void Vehiculo::setPlaca(string nuevaPlaca)
{
    placa = nuevaPlaca;
}

void Vehiculo::mostrarInfo() const
{
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Placa: " << placa << endl;
}

Vehiculo::~Vehiculo() {}