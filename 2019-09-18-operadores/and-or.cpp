#include<iostream>
using namespace std;

int main(void)
{
  int a=0;
  int b=5;

  a=(b=3,b+2);
  cout << a << endl;

  return 0;
}

