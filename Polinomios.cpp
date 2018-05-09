#include <iostream>

class Polinomio
{
  private:
  int entax, entbx, entc;
  
  public:
  Polinomio(int ax, int bx, int c);
  Polinomio operator ()(const Polinomio& p);
};

Polinomio::Polinomio(int ax, int bx, int c)
{
  this->entax=ax;
  this->entbx=bx;
  this->entc=c;
}

Polinomio Polinomio::operator ()(const Polinomio& p)
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
  int x=2;
  int r=p(x);
  std::cout<<"resultado= "<<r;
};