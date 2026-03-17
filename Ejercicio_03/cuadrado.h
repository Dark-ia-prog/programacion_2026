#ifndef CUADRADO_H
#define CUADRADO_H

#include "Figura.h"

class Cuadrado : public Figura {

public:
    void getArea() override;
    void describir() override;
    void hacerimagen() override;
};

#endif
