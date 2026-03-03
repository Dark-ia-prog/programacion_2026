#ifndef AUTOBUS_H
#define AUTOBUS_H

#include "vehiculo.h"

class Autobus : public Vehiculo
{
private:
    int numeroPasajeros;

public:
    Autobus(string marca, string modelo, string placa, int numeroPasajeros);

    void mostrarInfo() const override;
};

#endif
