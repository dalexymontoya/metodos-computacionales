#include <fstream>
#include <iostream>
using namespace std;

float h = 0.01;
float i = 0.0;
float f = 8.0;
int N = (f - i)/h ;
int x [N];
int y[N];

float * xx
xx = new int [N];

float * yy;
yy = new int [N];




void funcion1 (int x, int y)
{
    cout<<-y<<endl;
}

float euler (float x, float y,.float h)
{
    xx[0] = i;
    yy[0]= 1.0;
    
    for (int i=1, i=N, i++)
    {
        xx[i] = xx[i-1] + h;
        yy[i] = yy[i-1] + h) *funcion1(xx[i-1] , yy[i-1])
           
        cout<<yy[i]<<endl;
  
    }
}

int main()
{
    return 0;
}
