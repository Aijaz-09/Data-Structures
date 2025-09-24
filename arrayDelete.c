#include <stdio.h>

int delAr(int arr[], int* n, int ele) {
    int index = -1;
    for (int i=0; i<*n; i++) {
            if(arr[i]==ele) {
                index = i;
                break;
            }
    }

    if(index == -1) {
        return 0; // Element not found
    }

    int i = index;
    while(i < (*n) - 1) {
        arr[i] = arr[i+1];
        i++;
    }
    (*n)--;
    return 1; // Success
}

int main() {
    int arr[] = {10,20,30,50,60};
    int n = sizeof(arr)/sizeof(arr[0]);
    int element = 30;
    int result = delAr(arr,&n,element);

    if(!result) {
        printf("Element Not Found!\n");
    }
    else
        printf("Element deleted successfully!\n");

    printf("Array: ");
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);

    return 0;
}




