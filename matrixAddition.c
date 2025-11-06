#include <stdio.h>
void matrixAdd(int m, int n, int A[m][n], int B[m][n], int C[m][n])
{
  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++)
      C[i][j] = A[i][j] + B[i][j];
    }
}
int main() {
  int m, n;
  printf("Enter the Order of the Matrices you want to add: ");
  scanf("%d %d", &m, &n);

  int A[m][n];
  int B[m][n];

  printf("Enter Matrix A: \n");
  for(int i=0; i<m; i++)
  {
    for(int j=0; j<n; j++)
      scanf("%d", &A[i][j]);
  }

  printf("Enter Matrix B: \n");
  for(int i=0; i<m; i++)
  {
    for(int j=0; j<n; j++)
      scanf("%d", &B[i][j]);
  }

  int C[m][n];

  matrixAdd(m,n,A,B,C);

  printf("\n\nA+B:\n");
  for(int i=0; i<m; i++)
    {
      for(int j=0; j<n; j++)
        printf("%d ", C[i][j]);
    printf("\n");
  }

  return 0;
}
