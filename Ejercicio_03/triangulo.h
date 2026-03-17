#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "Figura.h"

class Triangulo : public Figura {

public:
    void getArea() override;
    void describir() override;
    void hacerimagen() override;
};

#endif
