#include <iostream>
using namespace std;

int main (){
    int arr[5]={10, 20, 30, 40, 50};
    int *p= arr; // funciona por que arr normalmente se convierte a la direccion de su primer elemento(arr==arr[0])
                 // int *p=arr es equivalente a tener int *p=&arr[0]
    cout<<"arr[0] :"<<*(p)<<endl
        <<"arr[1] :"<<*(p+1)<<endl
        <<"arr[2] :"<<*(p+2)<<endl
        <<"arr[3] :"<<*(p+3)<<endl
        <<"arr[4] :"<<*(p+4)<<endl;
        cout<<endl;
        //SOL1
        /* 
        int i=0;
        int n= size(arr);
    while(i<size(arr)){
        cout<<"arr["<<i+1<<"] :"<<*(p)<<endl;
        p++;
        i++;
         
    }
    */
   //sol2 mas elegante 🧐
   int *final= p + size(arr);
   int i=0;
   while(p<final){
    cout<<"arr["<<i<<"] :"<<*(p)<<endl;
    i++;    
    p++;

   }
    return 0;
}