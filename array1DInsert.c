// REVIEW AGAIN
#include <stdio.h>

void insEle(int arr[], int* n, int ele, int index) {

    int i = *n;
    while(i >= index) {
        arr[i] = arr[i-1];
        i--;
    }
    arr[index] = ele;
    (*n)++;
}

int main() {
    int arr[5] = {10,20,30};
    int n = 3;
    insEle(arr,&n,15,1);

    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);

    return 0;
}



