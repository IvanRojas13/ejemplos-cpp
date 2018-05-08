#include <iostream>

class Calentador
{
private: //Todo lo declarado despues de aqui son variables privadas a menos de que declaremos un "Pubic:"
    int temperatura;
    int incremento;
    
public: //Todo lo declarado despues de aqui son variables publicas
    Calentador(int max, int min, int temperatura=0);
    void calentar();
    void enfriar();
    void imprimeTemperatura() const;
    void imprimeTemperaturaFaren() const; 
    int accedeTemperatura() const; // el const es para decirle a la funcion que se va acceder a ella pero NO modifica nada 
    bool operator==(Calentador otro);
}; //Punto y coma obligatorio (parte de la sintaxis)

Calentador::Calentador(int max, int min, int temperatura)
{
    if(min>max)//Eso no debe pasr, hay que mostrar error al usuario
    {
        std::cout<<"Error en el rango min-max"<<std::endl;
        std::exit(EXIT_FAILURE);
        //throw "ERROR EN EL RANGO MIN-MAX"; //mostrar un error en consola
    }
    if(temperatura>=min && temperatura<=max)
    {
        this->temperatura=temperatura;
    }else{
        this->temperatura=min;
    }
    temperatura=15;
    incremento=3;
    this->min;
    this->max;
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
    if(temperatura-incremento>=this->min)
    {
        temperatura-=incremento;
    }
}

void Calentador::imprimeTemperatura(this.max)
{
    std::cout <<"La Temperatura es: "<<temperatura<<"°C"<< std::endl; // el "std::endl" es para hacer un salto de linea, es lo mismo que \n
}

void Calentador::imprimeTemperaturaFaren()
{
    float farenheit = temperatura*1.8 +32;
    std::cout <<"La temperatura en Farenheit es: "<<farenheit<<"°F"<< std::endl;
}

int Calentador::accedeTemperatura() const
{
    return temperatura;
}

bool Calentador::operator==(Calentador otro)
{
    if(this->temperatura == otro.temperatura){
        return true;
    }else{
        return false;
    }
}

bool Calentador::operator ==(Calentador otro)
{
    if(this->temperatura==otro.temperatura){
        return true;
    }else{
        return false;
    }
}

int main()
{
    //try
    {
        Calentador c1{-10,10}, c2{0,30, 10};
        
        //c1==c2 es equivalente a c1.operator==(c2)
        if(c1==c2){
            std::cout<<"Iguales\n";
        }else{
            std::cout<<"Diferentes\n";
        }
    
        //++c1 es equivalente a c1.operator++()
        ++c1;
        c1.imprimeTemperatura();
        c1.imprimeTemperaturaFaren();
    
        //++c2 es equivalente a c2.operator--()
        c2.enfriar();
        c2.imprimeTemperatura();
        c2.imprimeTemperaturaFaren();
    //}
    //catch(const std::runtime_error e)
}

class Calentador