#include<iostream>
#include<cmath>

void average(const double stack[], int N);

int main(void)
{
  int N=10;
  double stack[N]={1,2,3,6,4,5,7,8,9,10};

  average(stack, N);

  return 0;
}

void average(const double stack[], int N)
{
  double media=0.0;
  double devs=0.0;
  
  for(int i=0; i<N; i++){
    media+=stack[i];
  }
  media/=N;
  std::cout << "media: " << media << "\n";
  for(int i=0; i<N; i++){
    devs+=std::pow((stack[i]-media),2);
  }
  devs=std::sqrt(devs/N);
  std::cout << "desviacion estandar: " << devs << "\n";
}
