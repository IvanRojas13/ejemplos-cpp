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
    void imprimeTemperaturaFaren() const; 
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
    std::cout <<"La Temperatura es: "<<temperatura<<"°C"<< std::endl; // el "std::endl" es para hacer un salto de linea, es lo mismo que \n
}

void Calentador::imprimeTemperaturaFaren()
{
    std::cout <<"La temperatura en Farenheit es: "<< temperatura*1.8+32<<"°F"<< std::endl;
}

int Calentador::accedeTemperatura() const
{
    return temperatura;
}

int main()
{
    Calentador c1, c2;
    
    c1.calentar();
    c1.imprimeTemperatura();
    
    c2.enfriar();
    c2.imprimeTemperatura();

}