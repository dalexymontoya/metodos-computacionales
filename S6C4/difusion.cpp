#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    int lado =1;
    double v= 0.001;
    float dx=0.01;
    float dy=0.01;      
    float dt= (0.25*(dx*dx))+v;
    int N=lado/dx;
    
    float presente[N][N];
    float futuro[N][N];
    
    
    //condiciones iniciales
    int i;
    for (int i=0; i<N; i++){
            for (int j=0; j<N; j++){  
                if(i<=20 || i>=40){
                    if(j<=40 || j>=60){                          
                         futuro[i][j]=50;
                    }
                }
                else {
                    futuro[i][j]=100;
                }
                cout<<futuro[i][j]<<endl;
            }
    }
                    
                     
                     
                     
                     
return 0;                     
}
