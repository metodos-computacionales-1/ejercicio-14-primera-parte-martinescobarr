#include <iostream>
#include <fstream>
using namespace std;

double fun_1(double t, double v, double x);
double fun_2(double t, double v, double x);
void euler();

const double K = 100;
const double M = 2;
const double DeltaT = 0.01;

int main(void)
{
    euler();
    return 0;
}

double fun_1(double t, double v, double x)
{
  return v;
}

double fun_2(double t, double v, double x)
{
  return -(K*x)/M;
}

void euler()
{
    int punt = 200/DeltaT;
    float d[punt], v[punt], t[punt]
    d[0]=1;
    v[0]=0;
    
    for (int i =1; i<punt; i++)
    {
        d[i] = d[i-1]*DeltaT*fun_1(t[i-1],v[i-1],x[i-1]);
        v[i] = v[i-1]*DeltaT*fun_2(t[i-1],v[i-1],x[i-1]);
    }
    
    for (int i =1; i<punt; i++){
        cout <<d[i]<<","<<v[i]<<endl;
    }
    
        
}
