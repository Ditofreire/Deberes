#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

class Triangulo{
    public:
    double lado1=0.0, lado2=0.0, lado3=0.0;
    
    double CalcularPerimetro(){
        return (lado1+lado2+lado3);
    }
    double CalcularArea (){
        double s=CalcularPerimetro()/2;
        return sqrt(s*(s-lado1)*(s-lado2)*(s-lado3));
    }
    bool esEquilatero(){
        if(lado1==lado2==lado3){
            return true;
        }else {
            return false;
        }
    }
    bool esRectangulo(){
        if((lado1*lado1)+(lado2*lado2)==(lado3*lado3)){
            return true;
        }else {
            return false;
        }
    }
    
    void imprimir (){
        std::cout<<std::fixed<<std::setprecision(2);
        std::cout<<"Lados: "<<lado1<<", "<<lado2<<", "<<lado3<<std::endl;
        std::cout<<"Perimetro: "<<CalcularPerimetro()<<std::endl;
        std::cout<<"Area: "<<CalcularArea()<<std::endl;
        if(esEquilatero()==true){
            std::cout<<"Equilatero: Si"<<std::endl;
        }else {
            std::cout<<"Equilatero: NO"<<std::endl;
        }
        if(esRectangulo()==true){
            std::cout<<"Rectangulo: Si"<<std::endl;
        }else {
            std::cout<<"Rectangulo: NO"<<std::endl;
        }
    }
};

int main (){
    Triangulo t1;
    t1.lado1=3.0;
    t1.lado2=4.0;
    t1.lado3=5.0;

    t1.imprimir();
    return 0;
}