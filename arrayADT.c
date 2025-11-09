#include<stdio.h>
#include<stdlib.h>
struct Array
{
  int A[50];
  int size;
  int length;
};

void Swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void Display(struct Array arr)
{
  int i;
  printf("\nA = ");
  for(i=0;i<arr.length;i++)
    printf("%d ", arr.A[i]);
}

void Append(struct Array *arr, int x)
{
  if(arr->length < arr->size)
    arr->A[arr->length++] = x;
  else
    printf("Array is Full\n");
}

void Insert(struct Array *arr,int index, int x)
{
  if(index>=0 && index<=arr->length)
  {
    for(int i = arr->length; i>index; i--)
    {
      arr->A[i] = arr->A[i-1];
    }
    arr->A[index] = x;
    arr->length++;
  }
}

int Delete(struct Array *arr, int index)
{
  int x=0;
  if(index>=0 && index<=arr->length)
  {
    x = arr->A[index];
    for(int i=index; i<arr->length-1; i++)
      arr->A[i] = arr->A[i+1];
    arr->length--;
    return x;
  }
}

int Get(struct Array arr, int index)
{
  if (index >= 0 && index < arr.length)
    return arr.A[index];
  return -1;
}

void Set(struct Array *arr, int index, int x)
{
  if (index >= 0 && index < arr->length)
    arr->A[index] = x;
}

int Max(struct Array arr)
{
  int max = arr.A[0];
  for (int i = 1; i < arr.length; i++)
  {
    if (arr.A[i] > max)
      max = arr.A[i];
  }
  return max;
}

int Min(struct Array arr)
{
  int min = arr.A[0];
  for (int i = 1; i < arr.length; i++)
  {
    if (arr.A[i] < min)
      min = arr.A[i];
  }
  return min;
}

int Sum(struct Array arr)
{
  int s = 0;
  for (int i = 0; i < arr.length; i++)
    s = s + arr.A[i];
  return s;
}

float Avg(struct Array arr)
{
  return (float)Sum(arr) / arr.length;
}

void Reverse(struct Array *arr)
{
  int *B;
  int i,j;
    B =(int *)malloc(arr->length*sizeof(int));
    for (i=arr->length-1, j=0; i >= 0; i--,j++)
    {
      B[j] = arr->A[i];
    }
    for(i=0;i<arr->length;i++)
    {
      arr->A[i] = B[i];
    }
}

void Reverse2(struct Array *arr)
{
  int i, j;
  for(i=0,j=arr->length-1; i<j; i++,j--)
  {
    Swap(&arr->A[i], &arr->A[j]);
  }
}

void LeftShift(struct Array *arr)
{
  for(int i=1; i<arr->length; i++)
  {
    arr->A[i-1] = arr->A[i];
  }
  arr->A[arr->length-1] = 0;
}

void RightShift(struct Array *arr)

{
  for (int i = arr->length-1; i > 0; i--)
  {
    arr->A[i] = arr->A[i-1];
  }
  arr->A[0] = 0;
}

void InsertSort(struct Array *arr, int x)
{
  int i=arr->length-1;
  if(arr->length == arr->size)
    return;
  while(i>=0 && arr->A[i]>x)
  {
    arr->A[i+1] = arr->A[i];
    i--;
  }
  arr->A[i+1] = x;
  arr->length++;
}

int isSorted(struct Array arr)
{
  int i;
  for(i=0; i<arr.length-1; i++)
  {
    if(arr.A[i] > arr.A[i+1])
      return 0;
  }
  return 1;
}

void RearrageNegPos(struct Array *arr)
{
  int i,j;
  i=0;
  j=arr->length-1;

  while(i<j)
  {
    while(arr->A[i]<0)i++;
    while(arr->A[j]>=0)j--;
    if(i<j)Swap(&arr->A[i], &arr->A[j]);
  }
}

//I have implemented Merging in another way in Merging file
struct Array* Merge(struct Array *arr1, struct Array *arr2)
{
  int i,j,k;
  i=j=k=0;
  struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
  
  while(i<arr1->length && j<arr2->length)
  {
    if(arr1->A[i] < arr2->A[j])
    {
      arr3->A[k++] = arr1->A[i++];
    }
    else
    {
      arr3->A[k++] = arr2->A[j++];
    }
  }
  for(;i<arr1->length;i++)
    arr3->A[k++] = arr1->A[i];  // i is being incremented in the for loop's increment statement
  for(;j<arr2->length;j++)
    arr3->A[k++] = arr2->A[j]; // j is being incremented in the for loop's increment statement
  arr3->length = arr1->length + arr2->length;
  // Should set the size of array 3 as well like done below
  arr3->size = arr1->length + arr2->length;

  return arr3;
}

int main()
{
  struct Array arr1={{2,6,10,15,25,30,40}, 10, 7};
  struct Array arr2={{3,4,7,18,20}, 10, 5};
  struct Array *arr3;

  arr3 = Merge(&arr1,&arr2);

  Display(*arr3);

  return 0;
}
