/*
P003 | TRAZA  predecir valores
RESUELVE A MANO primero. Dibuja el diagrama de memoria
en cada paso y escribe quÃ© imprime cada lÃ­nea.

  int a = 1;
  int b = 2;
  int* p = &a;

  cout << *p << endl;    // lÃ­nea 1
  *p = 10;
  cout << a  << endl;    // lÃ­nea 2
  p = &b;
  cout << *p << endl;    // lÃ­nea 3
  *p = *p + 5;
  cout << b  << endl;    // lÃ­nea 4
  cout << a  << endl;    // lÃ­nea 5

  LÃ­nea 1: 1  LÃ­nea 2: 10   LÃ­nea 3: 2
  LÃ­nea 4: 7  LÃ­nea 5: 10

  Dibuja el estado de memoria despuÃ©s de cada lÃ­nea.
*/
