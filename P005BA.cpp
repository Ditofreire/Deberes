#include <iostream>
using namespace std;

int main (){
    int x=5, y=10, z=15;
    int *p= &x;
    *p=99;
    p=&y;
    *p=88;
    p=&z;
    *p=77;
    cout <<"*p apunta a x=5 y modifica a: "<<x<<endl
         <<"*p apunta a y=10 y modifica a: "<<y<<endl
         <<"*p apunta a z=15 y modifica a: "<<z<<endl;
    return 0;
}