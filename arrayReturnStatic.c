// Static arrays must have a size that is known at COMPILE-TIME.
#include <stdio.h>

int *createStaticArray() {
    static int array[5];

    for(int i=0; i<5; i++) {
        array[i] = 0;
    }

    return array;
}

int main() {
    int *arr;
    arr = createStaticArray();

    for(int i=0; i<5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
