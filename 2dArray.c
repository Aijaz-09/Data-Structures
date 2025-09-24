#include<stdio.h>

int main() {
    int array[2][3] ={ {2,4,6},{3,5,7} };

    for(int i=0; i<2; i++) {
        for(int j=0; j<3; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
