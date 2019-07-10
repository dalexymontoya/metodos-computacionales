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
    float dt = 0.09; //este no esssssssssssss
    
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
    
    for (int i=0; i>= tiempof; i++){
        for (int j=0; j<=N; j++)         
    }   
    
    // para el siguiente tiempo
    while(t<tiempof){
        for (int t=1; t<tiempof; t++){
            for (int i=1; i<=N-1; i++){
                if(i==1){
                    presente[i]= (k/2)*(futuro[i+1]- 2*futuro[i]+futuro[i-1]) +futuro[i];
                }
                else{
                    presente[i] = k*(futuro[i+1]- 2*futuro[i]+futuro[i-1]) - pasado[i] + 2*futuro[i];
                }
            }
            
        
    
    
    return 0;
        
}    
    
 
