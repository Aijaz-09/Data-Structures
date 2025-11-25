#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void SelectionSort(int a[], int n)
{
    int i, j, min;
    for(i = 0; i < n - 1; i++)
    {
        min = i;
        for(j = i + 1; j < n; j++)
        {
            if(a[j] < a[min])
                min = j;
        }
        // Only swap if a smaller element was found(i.e., if min changes)
        if(min != i)
            swap(&a[i], &a[min]);
    }
}

int main() {
    int A[5] = {2, 1, 5, 4, 10};

    SelectionSort(A, 5);

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}
