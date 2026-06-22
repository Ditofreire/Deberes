#include <iostream>
using namespace std;

int main (){
    int arr[] = {5, 10, 15, 20};
  int* p  = arr;
  int** pp = &p;

  cout << *p      << endl;   // lÃ­nea 1
  cout << **pp    << endl;   // lÃ­nea 2
  p++;
  cout << *p      << endl;   // lÃ­nea 3
  cout << **pp    << endl;   // lÃ­nea 4
  *pp = arr;                 // â† CLAVE: esto modifica p, no pp
                             // porque *pp ES p (pp apunta a p)
  cout << **pp    << endl;   // lÃ­nea 5
  cout << *(p+2)  << endl;   // lÃ­nea 6
    return 0;
}
/*
Antes de responder las lÃ­neas 5 y 6, escribe aquÃ­
  el valor de p despuÃ©s de *pp = arr:
  p despuÃ©s de *pp = arr: p apunta a arr[0] = 5

  LÃ­nea 1: 5  LÃ­nea 2: 5 
  LÃ­nea 3: 10 LÃ­nea 4: 10
  LÃ­nea 5: 5  LÃ­nea 6: 15
*/