#ifndef ROMBO_H
#define ROMBO_H

#include "Figura.h"

class Rombo : public Figura {

public:
    void getArea() override;
    void describir() override;
    void hacerimagen() override;
};

#endif
