#include <iostream>
using namespace std;

int main (){
    int x=42;
    int *p= &x; 
    int ** pp= &p;
    cout<<"x:"<<x<<endl
        <<"*p:"<<*p<<endl
        <<"**p:"<<**pp<<endl
        <<"dir x via &x: "<<&x<<endl
        <<"dir x via p: "<<p<<endl
        <<"dir x via *pp: "<<*pp<<endl
        <<"dir p via &p: "<<&p<<endl
        <<"dir p via pp: "<<pp<<endl;
    **pp=99;
        cout<<"x despues de **pp=99: "<<x<<endl;
   
    return 0;
}