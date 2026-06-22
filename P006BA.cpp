#include <iostream>
using namespace std;

int main (){
     // Fragmento A:
  //int* p;
  //cout << *p;
    // Fragmento B:
  //int x = 5;
  //int* p = &x;
  //cout << *p;
    // Fragmento C:
  //int x = 5;
  //int* p = &x;
  //p = 100;
  // Compila con WARNING (conversiÃ³n implÃ­cita de int a puntero)
  // pero NO es error de compilaciÃ³n en todos los compiladores.
  // Si luego desreferencias p con *p, falla en EJECUCIÃ“N.

  // Fragmento D:
  int x = 5;
  int* p = &x;
  *p = 100;
  cout << x;
  
  
/*
  Fragmento A: Fragmento A es un caos, es un puntero salvaje que va imprimir algo random(si siquiera imprime y no da error).
  Fragmento B: Va a imprimir 5.
  Fragmento C: error porque el puntero solo puede guardas direccion dememoria e int no es eso.
  Fragmento D: Imprime 100
  */  
  return 0;
}
