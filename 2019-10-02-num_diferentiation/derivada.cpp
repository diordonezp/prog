#include<iostream>
#include<cmath>

double sen(double n);
double fwrd(double x, double h);
double cntd(double x, double h);
double rich_d(double x, double h);
double rich_c(double x, double h);

int main(void)
{
  double x=M_PI/3.0;
  double h=0.1;

  for(x=0.0; x<=M_PI; x+=0.1)
    {
      
      std::cout << x << "\t"
		<< h << "\t"
		<< std::cos(x) << "\t"
		<< fwrd(x,h) << "\t"
		<< cntd(x,h) << "\t"
		<< rich_d(x,h) << "\t"
		<< rich_c(x,h) << std::endl;
    }     
  return 0;
}

//función seno
double sen(double n)
{
  return std::sin(n);
}

//función derivada por delante
double fwrd(double x, double h)
{
  return (sen(x+h)-sen(x))/h;
}

//función derivada central
double cntd(double x,double h)
{
  return (sen(x+h/2)-sen(x-h/2))/h;
}

//extrapolación de richardson derecha
double rich_d(double x, double h)
{
  double D2=fwrd(x,h/2);
  double D1=fwrd(x,h);

  return (4*D2-D1)/3;
}

//extrapolación de richardson central
double rich_c(double x, double h)
{
  double D2=cntd(x,h/2);
  double D1=cntd(x,h);

  return (4*D2-D1)/3;
}
