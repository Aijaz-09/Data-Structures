#include <stdio.h>
int sumArray(int arr[], int n) {
    int sum=0;
    for(int i=0; i<n; i++) {
        sum = sum + arr[i];
    }
    return sum;
}
int main() {
    int marks[] = {2,4,8};
    int length, sum=0;
    length = sizeof(marks)/sizeof(marks[0]);
    sum = sumArray(marks, length);

    printf("Sum: %d", sum);

    return 0;
}
