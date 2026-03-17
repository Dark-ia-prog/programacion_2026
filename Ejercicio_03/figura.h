#ifndef FIGURA_H
#define FIGURA_H

#include <iostream>
#include <string>

using namespace std;

class Figura {

public:
    virtual void getArea() = 0;
    virtual void describir() = 0;
    virtual void hacerimagen() = 0;

    virtual ~Figura() {}
};

#endif
