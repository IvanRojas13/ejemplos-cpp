#include <iostream>

class Calentador
{
private: //Todo lo declarado despues de aqui son variables privadas a menos de que declaremos un "Pubic:"
    int temperatura;
    
public: //Todo lo declarado despues de aqui son variables publicas
    Calentador();
    void calentar();
    void enfriar();
    void imprimeTemperatura();
}; //Punto y coma obligatorio (parte de la sintaxis)

Calentador::Calentador()
{
    temperatura=15;
}

void Calentador::calentar()
{
    temperatura+=5;
}

void Calentador::enfriar()
{
    temperatura-=5;
}

void Calentador::imprimeTemperatura()
{
    std::cout <<"La Temperatura es: "<<temperatura<< std::endl; // el "std::endl" es para hacer un salto de linea, es lo mismo que \n
}

int main()
{
    Calentador c1, c2;
    
    c1.calentar();
    c1.imprimeTemperatura();
    
    c2.enfriar();
    c2.imprimeTemperatura();
}