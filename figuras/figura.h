#ifndef FIGURA_INCLUIDA
#define FIGURA_INCLUIDA

class Figura
{
    protected:
        float area;
    public:
        Figura();
        virtual void calcularArea()=0; //Con esto estamos diciendo que este metodo NO tiene codigo 
        void imprimirArea();
};

#endif

/*Banderas (Centinelas)
se encargan de definir si se incluye o no 
un archivo*/

/*Ejemplo, en "principal.cpp", se hace un include
de figura.h y circulo.h, pero en circulo.h, se declaro otro
define de figura, entonces se esta declarando 2 veces
el "figura.h", con la bandera esto no va pasar
ya que si ya se incluyo, no lo incluye
o si no lo incluyo si lo incluye*/