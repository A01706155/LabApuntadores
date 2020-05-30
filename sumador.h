#ifndef Sumador_h
#define Sumador_h

#include <string>

using namespace std;

// Clase padre Sumador:
class Sumador {  
  protected:
   string numero1,numero2;


public:
  Sumador();
  Sumador(string numerote1, string numerote2);
  string getSuma();
  string elnum1, elnum2;

};

Sumador::Sumador(string nu1, string nu2) {
  elnum1 = nu1;
  elnum2 = nu2;
}

string Sumador::getSuma() {
  return elnum1;
}

#endif
