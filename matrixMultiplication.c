#include <stdio.h>

int main()
{
  int aRows, aColumns, bRows, bColumns;
  printf("Enter the order of Matrix A: ");
  scanf("%d %d", &aRows, &aColumns);
  printf("Enter the order of Matrix B: ");
  scanf("%d %d", &bRows, &bColumns);

  if(aColumns != bRows)
  {
    printf("Multiplication IMPOSSIBLE as nColumns(A) != nRows(B).\n");
    return 0;
  }
  int A[aRows][aColumns], B[bRows][bColumns], product[aRows][bColumns];

  printf("Enter Matrix A:\n");
  for(int i=0; i<aRows; i++)
  {
    for(int j=0; j<aColumns; j++)
    {
      scanf("%d", &A[i][j]);
    }
  }

  printf("Enter Matrix B:\n");
  for(int i=0; i<bRows; i++)
  {
    for(int j=0; j<bColumns; j++)
    {
      scanf("%d", &B[i][j]);
    }
  }

  int sum = 0;

  for(int i=0; i<aRows; i++)
  {
    for(int j=0; j<bColumns; j++)
    {
      for(int k=0; k<aColumns; k++)
      {
        sum = sum + (A[i][k] * B[k][j]);
      }
      product[i][j] = sum;
      sum = 0;
    }
  }

  for(int i=0; i<aRows; i++)
  {
    for(int j=0; j<bColumns; j++)
    {
      printf("%d ", product[i][j]);
    }
    printf("\n");
  }

  return 0;
}
