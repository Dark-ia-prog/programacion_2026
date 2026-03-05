#ifndef VEHICULO_H
#define VEHICULO_H
#include <iostream>
#include <string>
using namespace std;

class Vehiculo
{
protected:
    string marca;
    string modelo;
    string placa;
    int anio;

public:
    // Constructores
    Vehiculo();
    Vehiculo(string marca, string modelo, string placa, int anio);

    // Métodos
    void setPlaca(string nuevaplaca);
    virtual void mostrarInfo() const;
    virtual ~Vehiculo();
};

#endif
