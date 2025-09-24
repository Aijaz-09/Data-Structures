#include<stdio.h>
void selectionSort(int a[], int n) {
    int temp;
    for(int j = 0; j < n; j++) {
        int min = a[j], idx = j;
        for(int i = j+1; i < n; i++) {
            if(a[i] < min) {
                min = a[i];
                idx = i;
            }
        }
        temp = min;
        a[idx] = a[j];
        a[j] = temp;
    }
}
int main() {
    int ar[] = {100,5000,200,250,21,50};
    int size = sizeof(ar)/sizeof(ar[0]);

    selectionSort(ar,size);

    for(int i=0;i<size;i++) {
        printf("%d ", ar[i]);
    }
    return 0;
}
