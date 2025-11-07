#include<stdio.h>
#include<stdlib.h>
struct Array
{
  int A[20];
  int size;
  int length;
};

void display(struct Array arr)
{
  int i;
  printf("\nElements are:\n");
  for(i=0;i<arr.length;i++)
    printf("%d ", arr.A[i]);
}

void append(struct Array *arr, int x)
{
  if(arr->length < arr->size)
    arr->A[arr->length++] = x;
  else
    printf("Array is Full\n");
}

void insert(struct Array *arr,int index, int x)
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


int main()
{
  struct Array arr = {{23,3,14,25,6}, 20, 5};

  printf("%f", Avg(arr));
  display(arr);

  return 0;
}
