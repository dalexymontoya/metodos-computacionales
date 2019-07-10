#include <iostream>
#include <cmath>
using namespace std;


int main()                              //variables
{
    int longi = 1;
    float dx = 0.005;
    int c = 300;
    int N = (longi/dx)+1;
    //cout<<N<<endl;
    float tiempof = 0.1;
    float a = 0.01;
    float dt = 0.5*dx/c;  
    
    float pasado[N];
    float presente[N];
    float futuro[N];
    float k = (c*c*(dx*dx))/(dt*dt);
    
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
    
   
    
    // para el siguiente tiempo
    int t=0;
    
   
        for (int t=1; t<100; t++){
            int contador=0;
            for (int i=1; i<=N-1; i++){
                
                if(t==1){
                    futuro[i]= (k/2)*(presente[i+1]- 2*presente[i]+presente[i-1]) +presente[i];
                }
                else{
                    futuro[i] = k*(presente[i+1]- 2*presente[i]+presente[i-1]) - pasado[i] + 2*presente[i];
                }
                
            }
            
       
           for (int i=1; i<=N-1; i++){
               pasado[i]= presente[i];
               presente[i]=futuro[i];

        }
            contador++;
            
        if(contador==100){
        cout<<presente[i]<<endl;
        }
            
        }           
                
            
            
            
        
    
    
    return 0;
        
}    
    
 
