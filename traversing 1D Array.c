//Traversing 1D array
#include<stdio.h>
int traverse1D(int arr[], int size) {
    //Traversing the 1D array
    for(int i=0;i<size;i++) {
        printf("%d ", arr[i]);
    }

}
int main() {
    int n;
    printf("enter size of array: ");
    scanf("%d", &n);
    int arr[n];

    //Populating the array
    for(int i=0;i<n;i++) {
        arr[i] = 2*i;
    }

    traverse1D(arr,n);

    return 0;
}
