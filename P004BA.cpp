#include <iostream>
using namespace std;

int main (){
    int x=42;
    double y=3.14;
    char z ='A';
    bool t = true;

    int *X= &x;
    double *Y=&y;
    char *Z = &z;
    bool *T = &t;
    cout <<"int: valor="<<x<<"    dir="<<X<<"    *ptr="<<*X<<endl
         <<"int: valor="<<y<<"    dir="<<Y<<"    *ptr="<<*Y<<endl
         <<"int: valor="<<z<<"    dir="<<static_cast<void*>(Z)<<"    *ptr="<<*Z<<endl
         <<"int: valor="<<t<<"    dir="<<T<<"    *ptr="<<*T<<endl;
    
    return 0;
}

/*
Nota: Con el char me dio un error raro=
        char z ='A';
        int: valor=A    dir=AàδQ╕       @J    *ptr=A
      Este error pasa porque Z es un char* y cout no lo imprimero como direccion
      Lo interpreta como una de caracteres, por lo que imprime caracteres hasta encontrar \0,
      pero z es solo un char (no un string que termina en \0) por lo que lee la memoria mas cerca
      resultando esto en basura.

      La solucion encontrarda es usar static_cast<void*>(Z). Pero que es eso? Pues no es una funcion de alguna libreria,
      es un operados de conversion de tipos (cast) de C++. Es parte de C++ nativo, es una de las cuatro palabras clave
      de casting de C++. Este tipo de cast convierte la expresion Z(Que podria ser cualquier tipo de dato) a un puntero
      generico void*.
      
      Un puntero generico es un puntero que no tiene tipo definido(puede apuntar a cuakquier casi en memoria, sin importar
      el tipo de dato). Su sintaxis es=
      int x= 42
      void* p = &x
      cout << *(int*)p;//Imprime 42
      
      Los 4 cast de C++(segun el internet-maniana le pregunto-)=
      static_cast--> Conversiones seguras en tiempo de compilacion
      dynamic_cast--> Conversiones seguras en tiempo de ejecucion
      const_cast--> Quita/agrega const
      reinterpret_cast--> Reinterpretacion de bits (bajo nivel)
*/