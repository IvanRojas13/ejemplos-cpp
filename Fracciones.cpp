#include <iostream>

class Fraccion
{
    private:
    int numerador, denominador;
    
    public:
    Fraccion(int n, int d);
    Fraccion operator +(const Fraccion& f2);
    //friend void operator<<(std::ostream &Fraccion);
};

Fraccion::Fraccion(int num, int den)
{
    this->numerador=num;
    this->denominador=den;
}

Fraccion Fraccion::operator +(const Fraccion& f2)
{
    Fraccion fr;
    fr.denominador = this -> denominador * f2.denominador;
    fr.numerador = this -> numerador * f2.denominador + f2.numerador * this -> denominador;
    return fr;
}

int main()
{
    Fraccion a{1,2}; // fracción 1/2
    Fraccion b{1,3}; // fracción 1/3
    // Las siguientes dos sentencias son equivalentes
    Fraccion c = a + b; //c tendrá la fracción 5/6
    //Fraccion c = a.operator+(b); //también se puede usar la notación funcional
};