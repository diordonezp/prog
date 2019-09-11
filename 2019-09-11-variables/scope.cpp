#include<iostream>
using namespace std;

const double X = 5.6;

int main(void)
{
  double x=7.4;
  cout << &x << endl;
  {
    cout <<&x << endl;
    double x=7.4;
    cout << &x << endl;
  }
  cout << &x << endl;
  
  return 0;
}
