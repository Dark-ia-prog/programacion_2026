#ifndef PENTAGONO_H
#define PENTAGONO_H

#include "Figura.h"

class Pentagono : public Figura {

public:
    void getArea() override;
    void describir() override;
    void hacerimagen() override;
};

#endif
