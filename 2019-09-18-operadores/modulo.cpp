#include<iostream>
using namespace std;

int main(void)
{
  int x=0;
  int sum=0;

  cout << "escriba hasta donde quiere la suma:" << endl;
  cin >> x;
  {
    for(int n=0; n<x; n++)
      {
	if(n%3==0 || n%5==0)
	  sum+=n;
      }
  }
  cout << "la suma de multiplos de 3 y 5 menores que " << x << " es " << sum << endl;

  return 0;
}
