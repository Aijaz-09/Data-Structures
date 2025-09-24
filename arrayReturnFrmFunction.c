#include<stdio.h>
#include<stdlib.h>
int* createArray(int size) {
    int *array = (int*) malloc(sizeof(int) * size);

    // Checking if memory allocation was successful
    if(array == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    // Initializing the array
    for(int i=0; i<size; i++) {
        array[i] = 0;
    }

    // Returning pointer to the allocated array
    return array;
}

int main() {
    int size = 10;
    int* myArray = createArray(size);
    for(int i=0; i<size; i++) {
        printf("%d ", myArray[i]);
    }
    return 0;
}
