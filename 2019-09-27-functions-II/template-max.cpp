#include<iostream>

template<typename T, typename S>
T max(T n, S m)
{
  T result=0;
  {
    if(n<=m)
      result=m;
    else
      result=n;
  }
  return result;
}

int main(void)
{
  std::cout << max(7,5) << std::endl;
  std::cout << max(3.2,-3.5) << std::endl;
  std::cout << max (-4,7.3) << std::endl;
  std::cout << max (7.3,-4) << std:: endl;

  return 0;
}
