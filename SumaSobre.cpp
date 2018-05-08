#include <iostream>

// Definición de la clase Fraccion
class Fraccion{
private:
  int numerador;
  int denominador;
public:
  Fraccion(int num=1, int den=1);
  Fraccion operator +(const Fraccion& f2);  //prototipo de la función-operador miembro
};

// Implementación de los métodos
// Constructor
Fraccion::Fraccion(int num, int den){ 
  this -> numerador = num;
  this -> den = den;
}
// Sobrecarga del operador "+" para hacer suma de fracciones
Fraccion Fraccion::operator +(const Fraccion& f2){
  Fraccion fr;
  fr.denominador = this -> denominador * f2.denominador;
  fr.numerador = this -> numerador * f2.denominador + f2.numerador * this -> denominador;
  return fr;
}