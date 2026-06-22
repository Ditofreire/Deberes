/*
TB.1 Si int* p apunta al elemento 0 de un arreglo de int,
     ¿a que elemento apunta p+3? Â¿CuÃ¡ntos bytes avanzÃ³
     en memoria si sizeof(int) = 4?

     -El puntero p+3 apunta al elemento arr[3], porque el conteo en arr comienza en 0. Es decir:
      arr[0],arr[1], arr[2] , arr[3], arr[n-1]. Donde n es el tamanio
     -Si el sizeof(int)=4 bytes es real, el puntero avanza 4*3 bytes (12)

TB.2 ¿Que es nullptr? Â¿Por que es importante inicializar
     un puntero a nullptr cuando aÃºn no tiene destino?
    -nullptr no apunta a un objeto válido. Su representación interna muchas veces es la dirección virtual 0x0, y esa zona normalmente está marcada como no accesible para el programa.
    Apunta a una pagina bloqueda o no mapeada. Una pagina es una division de la memoria ram determinado por el hardware. Es decir, la memoria ram es un compilado de circuitos independientes
    de 4 kb (generalmente) que forman la totalidad de la ram. En el hardware se llaman frame. 
    -Es importante inicializar a nullptr un puntero en general porque caso contrario es un caos no se sabe donde apunta
    lo que se puede traducir a problemas. Puede sobrescribir algo importante o dar error por que no se le puden asignar valores
    a esa direccion de memoria.

TB.3 ¿Cual es la diferencia entre paso por puntero y paso
     por referencia? ¿Cuando preferirÃ­as usar uno u otro?
    -La diferencia es que en el paso por referencia el parámetro funciona como un alias de la variable original.
     La función se llama pasando la variable directamente y dentro de la función se usa como una variable normal.

     -El pasar por puntero tambien pasa valores directos por direccion de memoria. Lo diferente es que el 
     argumento de la funcion se debe pasar con el operador ampersand y cada vez que se usa una variable de los parametros
     se tiene que desreferenciar.

     -Si tengo que hacer memoria dinamica o nullptr paso por puntero caso contrario por referencia es mucho mas comodo y no es tan propuesto a errores.


TB.4 Si tienes int** pp, ¿cuantas desreferenciaciones
     necesitas para llegar al valor int? ¿Como se escribe?
        Si tengo**pp sobre un puntero p necesito dos desreferencias para llegar a l valor
        si seria algo estilo:
        #include <iostream>
using namespace std;

int main (){
    int m=1;
    int *p=&m;
    int **pp=&p;
    cout<<"Valor de m: "<<m<<endl
        <<"Direccion de m(p): "<<p<<endl
        <<"Valor de m desreferneciado: "<<*p<<endl
        <<"Direccion de p(pp): "<<pp<<endl
        <<"Direccion de m(*pp): "<<*pp<<endl
        <<"Valor de m desde (**pp): "<<**pp;
    return 0;
}
        
*/
