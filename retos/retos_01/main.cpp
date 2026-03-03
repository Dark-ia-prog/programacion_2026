#include <iostream>
#include "moto.h"
#include "camion.h"
#include "autobus.h"

using namespace std;

int main()
{

     // Crear objetos
     Moto moto1("Yamaha", "R3", "ABC123", 300);
     Camion camion1("Volvo", "FH16", "XYZ789", 20.5);
     Autobus autobus1("Mercedes", "Sprinter", "LMN456", 25);

     cout << "\nINFORMACION INICIAL\n"
          << endl;
     moto1.mostrarInfo();
     cout << endl;
     camion1.mostrarInfo();
     cout << endl;
     autobus1.mostrarInfo();
     cout << endl;

     // Cambiar placas
     moto1.setPlaca("NUEVA111");
     camion1.setPlaca("NUEVA222");

     cout << "\nINFORMACION DESPUES DE CAMBIAR PLACAS\n"
          << endl;
     moto1.mostrarInfo();
     cout << endl;
     camion1.mostrarInfo();
     cout << endl;
     autobus1.mostrarInfo();
     cout << endl;

     return 0;
}