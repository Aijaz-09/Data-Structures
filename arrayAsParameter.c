#include<stdio.h>

void fun(int *p, int n) {
    int i;
    for (i=0;i<n;i++)
        printf("%d", p[i]);
}

int main() {

    int A[5] = {2,4,6,8,10};
    fun(A,5);
    return 0;
}
