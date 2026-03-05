#ifndef AUTOBUS_H
#define AUTOBUS_H

#include "vehiculo.h"

class Autobus : public Vehiculo
{
private:
    int numeroPasajeros;

public:
    Autobus(string marca, string modelo, string placa, int numeroPasajeros, int anio);

    void mostrarInfo() const override;
};

#endif
