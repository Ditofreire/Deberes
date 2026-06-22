#include <iostream>
using namespace std;

int main (){
    int x=25;
    int *a= &x;
    cout<<"Valor var(x): "<<x<<endl
        <<"Valor dir var(&x): "<<&x<<endl
        <<"Valor puntero puro(a): "<<a<<endl
        <<"Valor puntero puro(*a): "<<*a<<endl;
    return 0;
}