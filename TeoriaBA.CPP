/*
TA.1 Que diferencia hay entre una variable normal y un puntero?
     Una variable normal asigna un valor a una direccion de memoria,
     mientras que el puntero es una direccion de memoria que se usa para
     asignar a una direccion de memoria una direccion de memoria.

TA.2 ¿Que hace el operador & cuando se aplica a una variable?
     ¿Y el operador * cuando se aplica a un puntero?
    - El operador ampersand "&" se utiliza para conocer direcciones de memoria

    - El operador * tiene dos funciones, el indicar que una variable es un puntero
        y desreferenciar al "&" lo que permite acceder al valor  

TA.3 Cuantos bytes ocupa un puntero a int? ¿Y uno a double?
     ¿Por que son iguales?
     -El puntero de un int ocupa 8 bytes

     -El puntero de un double ocupa 8 bytes

     -Un puntero ocupa lo mismo sin importar el tipo al que apunta. Esto es asi 
     por que  el puntero guarda la direccion de memoria virtual, y en sistemas de 64 bits
     suele ocupar 8 bytes. Nota: en sistemas de 32 bits suele ocupar 4bytes.

TA.4 ¿Que pasa si declaras int* ptr; y luego haces *ptr = 5;
     sin inicializar ptr primero?

     Al declarar int* ptr; sin inicializarlo, ptr queda como un puntero salvaje, es decir, contiene una dirección basura o indeterminada. Al hacer *ptr = 5, el programa intenta escribir el valor 5 en esa dirección desconocida.
     Esto produce comportamiento indefinido. Pueden pasar varias cosas:


     Si se declara un puntero salvaje y luego se le asigna un valor pueden pasar muchas cosas:
        -La direccion de memoria virtual es invalida, lo que hace que no se pueda asignar un valor a dicha direccion.--->Error
        -La direccion del puntero puede apuntar a la direccion de memoria de nuestro programa.--->Error
        -La direccion de memoria es valida y sobreescribe o asigna al valor deseado.--->Problema?
        Resumen: Caos.

        Nota: nullptr apunta a un pedazo de direccion no valida por lo que no puede asignar un valor a esa direccion de memoria. 

*/
