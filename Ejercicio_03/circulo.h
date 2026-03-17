#ifndef CIRCULO_H
#define CIRCULO_H

#include "Figura.h"

class Circulo : public Figura {

public:
    void getArea() override;
    void describir() override;
    void hacerimagen() override;
};

#endif
