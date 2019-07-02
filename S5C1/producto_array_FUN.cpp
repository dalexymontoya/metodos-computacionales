#include <fstream>
#include <iostream>
using namespace std;



void funcion1 (int array1[], int array2[]){
    int sol[5];
    for (int i=0; i=4; i++){
           
                sol[i] = array1[i]*array2[i];
                cout<<sol[i]<<endl;
           
        }
}   

void funcion2 (int array1[], int array2[]){
    int contador = 0;
    for (int i=0; i=4; i++){
           
                contador += array1[i]*array2[i];
                cout<<sol[i]<<endl;
           
        }
}   
  
   
    

int main ()
{
    int a[5] = {10, 20, 30, 40 ,50};
   int b[5] = {1, 2, 3, 4, 5};
  
   funcion1(a, b);
    funcion2(a, b);
   return 0;
   

} 
