#include <iostream>

class Calentador
{
private: //Todo lo declarado despues de aqui son variables privadas a menos de que declaremos un "Pubic:"
    int temperatura;
    int incremento;
    
public: //Todo lo declarado despues de aqui son variables publicas
    Calentador();
    void calentar();
    void enfriar();
    void imprimeTemperatura();
    int accedeTemperatura() const; // el const es para decirle a la funcion que se va acceder a ella pero NO modifica nada 
}; //Punto y coma obligatorio (parte de la sintaxis)

Calentador::Calentador()
{
    temperatura=15;
    incremento=3;
}

void Calentador::calentar()
{
    if(temperatura+incremento<=30)
    {
        temperatura+=incremento;
    }
}

void Calentador::enfriar()
{
    if(temperatura-incremento>=-10)
    {
        temperatura-=incremento;
    }
}

void Calentador::imprimeTemperatura()
{
    std::cout <<"La Temperatura es: "<<temperatura<< std::endl; // el "std::endl" es para hacer un salto de linea, es lo mismo que \n
}

int Calentador::accedeTemperatura() const
{
    return temperatura;
}

int main()
{
    Calentador c1, c2;
    
    for(int i=0;i<10;i++){
        c1.calentar();
        c1.imprimeTemperatura();
    }
    
    for(int i=0;i<10;i++)
    {
        c2.enfriar();
        c2.imprimeTemperatura();
    }
}