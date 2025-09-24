#include <stdio.h>
#include <stdlib.h>
//Array inside heap
int main() {

    int *p;
    p= (int *)malloc(5*sizeof(int));

    p[0]=10, p[1]=14, p[2]=23, p[3]=32, p[4]=34;
    for(int i=0;i<5;i++) {
        printf("%d\n", p[i]);
    }

    return 0;
}
