#include <iostream>

class Polinomio
{
  private:
  int entax, entbx, entc;
  
  public:
  Polinomio(int ax, int bx, int c);
  int operator ()(int x);
};

Polinomio::Polinomio(int ax, int bx, int c)
{
  this->entax=ax;
  this->entbx=bx;
  this->entc=c;
}

int Polinomio::operator ()(int x)
{
  Polinomio pr;
  pr.entax=this->entax*(x**2);
  pr.entbx=this->entbx*x;
  pr.entc=this->entc;
  return pr;
}

int main()
{
  Polinomio p{3,2,1};
  
};