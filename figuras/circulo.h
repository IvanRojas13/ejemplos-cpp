#ifndef CIRCUILO_DEFINIDO
#define CIRCUILO_DEFINIDO

#include "figura.h"

class Circulo : public Figura
{
    private:
        float radio;
    public:
        Circulo(float r);
        void calcularArea();
};
#endif

