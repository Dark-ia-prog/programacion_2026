#ifndef CAMION_H
#define CAMION_H

#include "vehiculo.h"

class Camion : public Vehiculo
{
private:
    double capacidadCarga;

public:
    Camion(string marca, string modelo, string placa, double capacidadCarga, int anio);

    void mostrarInfo() const override;
};

#endif
