#include<iostream>
#include<cmath>

int prime(int m);
int n_prime(int m);
double lagrange(int m);

int main(void)
{
  for(int i=3; i<=10000; i++)
    {
      std::cout << i
		<<"  "<< n_prime(i)
		<<"  "<< lagrange(i) << std::endl;
    }
  
  return 0;
}

int prime(int m)
{
  int flag=1;
  
  if(m==0 || m==1)
    {
      return 0;
    }
  for(int n=2; n<m; n++)
    {
      if(m%n==0)
	{
	  flag=0;
	  break;
	}
    }
  return flag;
}

int n_prime(int m)
{
  int sum=0;
  
  for(int i=0; i<=m; i++)
    {
      if(prime(i)==1)
	{
	  sum+=1;
	}
    }
  return sum;
}

double lagrange(int m)
{
  double result=0;
  
  result=m/(std::log(m)-1.08366);
  
  return result;
}
