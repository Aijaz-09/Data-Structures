#include<stdio.h>
#include<stdlib.h>
struct Array
{
  int A[20];
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



int main()
{
  struct Array arr = {{2,3,4,5,6}, 20, 5};
  int status=0, choice=-1, element, index;
  printf("Initial Array: ");
  Display(arr);
  do
  {
    printf("\n****************************************************");
    printf("\nWhat do you want to do: ");
    printf("\nDisplay array: 1");
    printf("\nAppend element: 2");
    printf("\nInsert element: 3");
    printf("\nDelete at an index: 4");
    printf("\nGet element: 5");
    printf("\nSet element: 6");
    printf("\nGet Max Element:  7");
    printf("\nGet Min Element: 8");
    printf("\nGet Sum: 9");
    printf("\nGet Average: 10");
    printf("\nExit: 11");
    printf("\n****************************************************");
    printf("\nEnter Choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
      case 1:
        Display(arr);
        break;
      case 2:
        printf("\nEnter the element you want to append: ");
        scanf("%d", &element);
        Append(&arr, element);
        Display(arr);
        break;
      case 3:
        printf("\nEnter the element, and the index for insertion: ");
        scanf("%d %d", &element, &index);
        Insert(&arr, index, element);
        Display(arr);
        break;
      case 4:
        printf("\nEnter the index of the element you want to delete");
        scanf("%d", &index);
        printf("\nDeleted: %d at index %d", Delete(&arr, index), index);
        Display(arr);
        break;
      case 5:
        printf("\nWhich index's element do you want: ");
        scanf("%d", &index);
        printf("\nElement at index %d is %d", index, Get(arr, index));
        Display(arr);
        break;
      case 6:
        printf("\nEnter the element and the index for Setting: ");
        scanf("%d %d", &element, &index);
        Set(&arr, index, element);
        Display(arr);
        break;
      case 7:
        printf("\nMaximum element: %d", Max(arr));
        break;
      case 8:
        printf("Minumun Element: %d", Min(arr));
        break;
      case 9:
        printf("Sum of elements of array = %d", Sum(arr));
        break;
      case 10:
        printf("Average of elements of array = %f", Avg(arr));
      case 11:
        status = 29;
        break;
      default:
        printf("Invalid Choice!\n");
        Display(arr);
      }
  }while(status != 29);


  printf("\nFinal Array = ");
  Display(arr);


  return 0;
}
