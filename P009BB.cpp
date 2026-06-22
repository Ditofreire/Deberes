#include <iostream>
using namespace std;

void imprimirvalor(int *p);

int main (){
    int x=55;
    int *pv=&x;
    int *pn=nullptr;
    int *ps;//llapa
    imprimirvalor(pv); // esto funciona porque pv es equivalente a &x
    imprimirvalor(pn);
    imprimirvalor(ps);
    return 0;
}
void imprimirvalor(int *p){
    if(p==nullptr){ //comparando direcciones de memoria
        cout<<"Puntero nulo, es decir, puntero <<sin valor>>"<<endl;
    }else{
        cout<<"Valor: "<<*p<<endl;
    }
}