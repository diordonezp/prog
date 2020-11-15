#include<iostream>
using namespace std;

int sum(int m, int n);//declaración

int main(void)
{
  int x=0;
  int y=0;

  cout << "desde donde quiere su suma:" << endl;
  cin >> x;
  cout << "hasta donde quiere su suma:" << endl;
  cin >> y;
  cout << "su suma es " << sum(x,y) << endl;
  
  return 0;
}

int sum(int m, int n)//implementación:que y como hace
{
  int result=0;

  {
    for(int i=m; i<=n; i++)
      {
	if(i%3==0 || i%5==0 || i%7==0)
	  result+=i;
      }
  }

  return result;
}
