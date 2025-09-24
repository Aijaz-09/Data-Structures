#include <stdio.h>

int getSum(int array[], int length) {
    if(length % 2 == 0)
        return 0;

    int sum = 0;
    for(int i=0; i<length; i++) {
        sum = sum+array[i];
    }
    return sum;   //Also: n is Odd
}
int main() {
    int arr[] = {23,25,24,28, 53};
    int length = sizeof(arr)/sizeof(arr[0]);
    printf("%d", getSum(arr, length));

    return 0;
}
