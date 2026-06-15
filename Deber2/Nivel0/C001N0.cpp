#include <iostream>
#include <iomanip>
const double PI=3.14159;
class Circulo{
    public:
    double radio=0.0;
    double calcularArea (){
        return PI*radio*radio; 
    }
    double CalcularPerimetro (){
        return 2*PI*radio;
    }
    void imprimir (){
        std::cout<<std::fixed<<std::setprecision(2);
        std::cout<<"El radio es: "<<radio<<std::endl;
        std::cout<<"El Area es: "<<calcularArea()<<std::endl;
        std::cout<<"El radio es: "<<CalcularPerimetro()<<std::endl;
    }
};

int main (){
    Circulo c1;
    c1.radio=5.00;
    Circulo c2;
    c2.radio=3.00;
    c1.imprimir();
    c2.imprimir();
    return 0;
}