#include <iostream>
using namespace std;

void triplicar(int *p){
     *p=*p * 3;
}
void elevaralcuadrado(int *p){
     *p=*p * *p;
}
void resetar(int *p){
     *p=0;
}
int main (){
    int x=4;
    int *p=&x;
    cout<<"x inicial: "<<x<<endl;
    triplicar(p);
    cout<<"tras triplicar: "<<x<<endl;
    elevaralcuadrado(p);
    cout<<"tras cuadrado: "<<x<<endl;
    resetar(p);
    cout<<"tras resetear: "<<x<<endl;
    return 0;
}
