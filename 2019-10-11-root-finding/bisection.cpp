#include<iostream>
#include<cmath>
using fptr=double(double);

double bisection(double xl, double xu, double eps, fptr f);
double fun(double x);

int main(void)
{
  const double eps=1.0e-6;
  double root=bisection(100,200,eps,fun);
  std::cout << root << "\n";

  return 0;
}

double fun(double x)
{
  return x+10-x*std::cosh(50.0/x);
}

double bisection(double xl, double xu, double eps, fptr f)
{
  double xr=xu;

  while(1){
    xr=(xl+xu)/2;
    if(std::fabs(f(xr))<eps){
      break;
    }
    else if(f(xr)*f(xl)<0){
      xu=xr;
    }
    else{
      xl=xr;
    }
  }

  return xr;
}
