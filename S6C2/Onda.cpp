#include <iostream>
#include <cmath>
using namespace std;

double valor (double x);

int main()                              //variables
{
    int longi = 1;
    float dx = 0.005;
    int c = 300;
    int N = (longi/dx)+1;
    //cout<<N<<endl;
    float tiempof = 0.1;
    float a = 0.01;
    
    
    int pasado[N];
    float presente[N];
    int futuro[N];
    
    int i;
    
    for (int i=0; i<=N; i++){
        if(i<=N/2){
            presente[i] = (a/(longi/2.0))*(i*dx);
        }
        else{ 
            presente[i] = -((a/(longi/2.0))*(i*dx))+(2*a);
        }
    }
        for (int i=0; i<=N; i++){            
        cout<<presente[i]<<endl;
        }
    
    for (int i=0; i>= tiempof; i++){
        for (int j=0; j<=N; j++)
         
            
    return 0;
        
}    
    
 
