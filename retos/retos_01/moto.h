#ifndef MOTO_H
#define MOTO_H

#include "vehiculo.h"

class Moto : public Vehiculo
{
private:
    int cilindrada;

public:
    Moto(string marca, string modelo, string placa, int cilindrada, int anio);

    void mostrarInfo() const override;
};

#endif
