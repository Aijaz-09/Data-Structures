#include<stdio.h>

void revArray(int arr[], int n) {
    int l=0, r=n-1;

    while(l<r) {
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
    }
}
int main() {
    int ar[] = {1,2,3};

    revArray(ar, 3);

    //Printing the array for seeing if it reversed
    for (int i=0; i<3; i++) {
        printf("%d", ar[i]);
    }

    return 0;
}
