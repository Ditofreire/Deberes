/*
T0.1 ¿Cual es la diferencia entre una clase y un objeto?

Una clase es el un molde dondse detallan/declaran los metodos y atributos
que caracterizan a los objetos. (Los atributos son las variables declaradas
y los metodos son las funciones de las clases que hacen algo.)

Un Objeto es la caracteizacion de las clases, es decir, se le asignan los valores
a las variables.

T0.2 ¿Puede existir un objeto de tipo perro su la clase perro no ha sido definido? y ¿Por que?

Como se dijo un objeto es la caracterización de un clase, POR LO QUE permitame preguntar algo:
¿Como llenas un espacio que no existe?

T0.3 ¿Cual es la diferencia entre metodo y una funcion libre?

Un metodo es una función declarada dentro de una clase, lo que le permite manejar
las variables de la clasey por extencion a los objetos. 

Una funcion libre no pertenence a ninguna clase. Puede recibir parametros y devolver valores casi
sin restricción. El unico problema sería con el private y el protected. 

T0.4 Que significa instanciar una clase?

Intanciar una clase se refiere a crear un objeto, lo cual puede definirse como
darle valores a las variables de la clase.

T0.5 
    0.5.1 En donde vive un objeto declarado como Perro p1?
    0.5.2 Si declaro un Perro p2* = new perro Perro() donde vive?
    0.5.3 Cual de los dos necesita ser liberada manualmente?


    T0.5.1 Las variables declaradas de esa manera viven en el Stack.
    T0.5.2 Esta tipo de variable vive en el Heap.
    T0.5.3 Las variables declaradas como en la pregunta "0.5.2" necesitan
            ser liberadas manualmente como "delete var", si es un arr es "delete [] arr"

*/