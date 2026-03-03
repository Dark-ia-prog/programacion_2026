#include "moto.h"

Moto::Moto(string marca, string modelo, string placa, int cilindrada)
    : Vehiculo(marca, modelo, placa), cilindrada(cilindrada) {}

void Moto::mostrarInfo() const
{
    cout << "----- MOTO -----" << endl;
    Vehiculo::mostrarInfo();
    cout << "Cilindrada: " << cilindrada << " cc" << endl;
}