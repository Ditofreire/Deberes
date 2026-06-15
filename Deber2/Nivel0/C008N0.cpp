#include <iostream>
  // VersiÃ³n A: con funciones libres
  double areaCirculo(double r) { return 3.14159 * r * r; }
  double periCirculo(double r) { return 2 * 3.14159 * r;  }

  // VersiÃ³n B: con clase
  class Circulo {
  public:
      double radio;
      double area()       { return 3.14159 * radio * radio; }
      double perimetro()  { return 2 * 3.14159 * radio;     }
  };
/*
  a) Â¿CuÃ¡l es la diferencia entre llamar areaCirculo(5.0)
     y crear un Circulo con radio=5 y llamar c.area()?
  b) Si tienes 100 cÃ­rculos distintos, Â¿cuÃ¡l versiÃ³n
     es mÃ¡s fÃ¡cil de manejar? Â¿Por quÃ©?
  c) Â¿QuÃ© pasa en la versiÃ³n A si necesitas pasar el radio
     a 10 funciones distintas?

  Tu respuesta:
     a) La diferencia es que areaCirculo(5.0) usa una función libre,
     por lo que el radio se manda directamente como parámetro.

     En cambio, al crear un objeto Circulo con radio=5, el radio queda
     guardado dentro del objeto. Luego, al llamar c.area(), el método usa
     el atributo radio del propio objeto.

  b) Si tengo 100 círculos distintos, la versión con clase es más fácil
     de manejar, porque cada círculo guarda su propio radio y sus propios
     métodos relacionados.

     Por ejemplo, puedo tener:
        Circulo c1, c2, c3;

     y cada uno puede tener un radio diferente. Esto mantiene los datos
     y las operaciones juntas, lo cual hace el código más ordenado.

  c) En la versión A, si necesito usar el radio en 10 funciones distintas,
     tendría que pasar el radio como parámetro en cada función.

     Ejemplo:
        areaCirculo(r);
        periCirculo(r);
        diametroCirculo(r);
        ...

     Esto puede volverse repetitivo y menos organizado. En cambio, con
     una clase, el radio ya está guardado dentro del objeto y los métodos
     pueden usarlo directamente.
  */