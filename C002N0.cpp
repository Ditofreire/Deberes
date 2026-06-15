#include <iostream>
#include <string>
#include <iomanip>

class Persona{
    public:
    std::string nombre="AAA";
    int Edad=0;
    double altura=0.0;
    
    
    bool esMayorDeEdad(){
        if(Edad>=18){
            return true;
        }else {
            return false;
        }
    }
    std::string saludar (){
        return "Hola soy"+ nombre +" y tengo " + std::to_string(Edad);

    }
    void imprimir (){
        std::cout<<std::fixed<<std::setprecision(2);
        std::cout<<"Su nombre es: "<<nombre<<std::endl;
        std::cout<<"Su edad es: "<<Edad<<" anios"<<std::endl;
        std::cout<<"Su altura es: "<<altura<<"[cm]"<<std::endl;
        if(esMayorDeEdad()==true){
            std::cout<<"Mayor de edad: SI"<<std::endl;
            std::cout<<std::endl;
        }else {
            std::cout<<"Mayor de edad: NO"<<std::endl;
            std::cout<<std::endl;
        }
    }
};

int main (){
    Persona p1;
    p1.nombre="Ana";
    p1.Edad=22;
    p1.altura=1.65;
    Persona p2;
    p2.nombre="Aurelio";
    p2.Edad=-5;
    p2.altura=0.30;
    Persona p3;
    p3.nombre="PEPE";
    p3.Edad=16;
    p3.altura=1.95;

    p1.imprimir();
    p2.imprimir();
    p3.imprimir();

    return 0;
}