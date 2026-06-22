#include <iostream>
using namespace std;

int main (){
    int x=10;
    cout<<"Valor var(x): "<<x<<endl;
    int *p= &x;
    *p=50;
    cout <<"Valor dir var(cambiada por *p): "<<x<<endl;
    *p=200;
    cout <<"Valor dir var(cambiada por *p): "<<x<<endl;    
    return 0;
}