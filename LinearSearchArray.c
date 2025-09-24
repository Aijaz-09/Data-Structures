#include<stdio.h>

int findElement(int arr[], int length, int key) {
    for(int i = 0; i<length; i++) {
        if(arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int a[] = {20, 30, 35, 40};
    int n = sizeof(a) / sizeof(a[0]);
    int toFind = 20;
    int ans = findElement(a, n, toFind);

    if(ans == -1)
        printf("Eement not found");
    else
        printf("Element found at index %d", ans+1);

    return 0;
}
