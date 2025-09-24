#include <stdio.h>

int findLargest(int arr[], int n) {
    int max;
    max = arr[0];

    for(int i=0; i<n; i++) {
        if(max < arr[i])
            max = arr[i];
    }
    return max;
}


int main() {
    int arr[] = {1,5,6,20,521};
    int length = sizeof(arr)/sizeof(arr[0]);
    int ans = findLargest(arr,length);
    printf("%d", ans);
    return 0;
}
