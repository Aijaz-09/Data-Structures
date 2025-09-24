#include<stdio.h>

int main() {
    int mat[2][3] = {{1,3,5},{7,9,11}};
    int value, idxR, idxC;

    printf("Give the idx1 and idx2: ");
    scanf("%d %d", &idxR, &idxC);

    printf("What value: ");
    scanf("%d", &value);

    mat[idxR][idxC] = value;

    for(int m=0; m<2; m++) {
        for(int n=0; n<3; n++) {
            printf("%d ", mat[m][n]);
        }
        printf("\n");
    }
    return 0;
}

