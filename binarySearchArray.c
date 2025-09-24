#include <stdio.h>
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            return mid; // element found
        }
        else if (arr[mid] > key) {
            high = mid - 1; // search left half
        }
        else {
            low = mid + 1; // search right half
        }
    }
    return -1; // not found
}

int main() {
    int arr[] = {2,3,4,7,9,10,12,20,30,33,51,71,80,92};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter element to search: ");
    scanf("%d", &key);

    int result = binarySearch(arr, n, key);

    if (result == -1)
        printf("Element not found\n");
    else
        printf("Element found at index %d\n", result);

    return 0;
}
