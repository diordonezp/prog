#include<iostream>

const int M=3, N=3;

void print(int M[][N] ,int m, int n);

int main(void)
{
  //declarar matriz
  int A[M][N]={{0}};
  int AT[N][M]={{0}};
  int ii,jj;
 
  for(ii=0; ii<M; ii++){
    for(jj=0; jj<N;jj++){
      A[ii][jj]=ii*N+jj;
    }
  }
  
  std::cout<< "#original matrix: " <<"\n";
  print(A, M, N);
  
  //procesarla
  for(ii=0; ii<M; ii++){
    for(jj=0; jj<N;jj++){
      AT[ii][jj]=A[jj][ii];
    }
  }
  
  //imprimirla
  std::cout<< "#trans matrix: " <<"\n";
  print(AT, M, N);
  
  return 0;
}

void print(int M[][N] ,int m, int n)
{
  std::cout<< "#trans matrix: " <<"\n";
  for(int ii=0; ii<m; ii++){
    for(int jj=0; jj<n; jj++){
      std::cout<< M[ii][jj] << " ";
    }
    std::cout<< "\n";
  }
}
