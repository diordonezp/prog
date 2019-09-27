#include<iostream>
using namespace std;

int max(int n,int m);

int main(void)
{
  cout << max(-3,2) << endl; 
}

int max(int n, int m)
{
  {
    if(n<=m)
      return m;
    else
      return n;
  }
}
