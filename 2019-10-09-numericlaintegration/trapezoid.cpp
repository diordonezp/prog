#include<iostream>
#include<cmath>

using fptr=double(double);

double f(double x);
double trapecio(double h, double x_0, double x_f, fptr fun);

int main(void)
{
  std::cout
  
  std::cout << trapecio(0.01,0,2*M_PI,f) << std::endl;

  return 0;
}

double f(double x)
{
  return std::sin(x);
}

double trapecio(double h, double x_0, double x_f, fptr fun)
{
  double sum=0.0;
  int n=(x_f-x_0)/h;
  
  for(int i=1; i<n; i++){
    sum+=2*fun(x_0+i*h);
  }
  sum+=fun(x_0)+fun(x_f);
  
  return (h/2)*(sum);
}
