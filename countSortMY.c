#include<stdio.h>

int max(int a[],int size)
{
    int max = a[0];
    for(int i=1;i<size;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    return max;
}

void countSort(int a[], int size)
{
    int maxNum = max(a,size);
    int count[maxNum+1];
    for(int i=0; i<=maxNum; i++)
    {
        count[i]=0;
    }

    for(int i=0;i<size;i++)
    {
        count[a[i]]++;
    }

    int j=0;
    for(int i=0; i<=maxNum; i++)
    {
        while(count[i]>0)
        {
            a[j] = i;
            j++;
            count[i]--;
        }
    }
}

int main()
{
    int ar[8]={3,3,5,3,2,15,11,4};

    countSort(ar,8);

    for(int i=0; i<8; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}