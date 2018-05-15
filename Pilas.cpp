#include <iostream>

template <typename Tipo>
class Pila
{
    private:
        int tope;
        Tipo *arreglo;
        int max;
    public:
        Pila(int tam); //Constructor
        ~Pila();
        void push(Tipo dato);  //Destructor
        Tipo pop();
};

template <typename Tipo>
Pila<Tipo>::Pila(int tam)
{
    tope =0;
    max=tam;
    arreglo=new Tipo[max];
}

template <typename Tipo>
Pila<Tipo>::~Pila()
{
    delete[] arreglo;
}

template <typename Tipo>
void Pila<Tipo>::push(Tipo dato)
{
    pila = new arreglo<Tipo>(dato, tope);
}

template <typename Tipo>
Tipo Pila<Tipo>::pop()
{
    Tipo aux;
    if(!tope)  
        return 0;
    aux=arreglo[];
    arreglo=tope
    delete arreglo;
    return aux;
}

int main()
{
    Pila<int> miPila{5};
    
    miPila.push(3);
    miPila.push(7);
    int x=miPila.pop();
    std::cout<<x<<"\n";
    
    x=miPila.pop();
    std::cout<<x<<"\n";
    
    x=miPila.pop();
    std::cout<<x<<"\n";
}