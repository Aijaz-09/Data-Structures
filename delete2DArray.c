#include<stdio.h>
int main() {
    int mat[2][3] = {{1,3,5},{7,9,11}};
    int idxR, idxC;

    printf("Which index's element do you want to delete(idx1,idx2): ");
    scanf("%d %d", &idxR, &idxC);

    mat[idxR][idxC] = 0;

    for(int m=0; m<2; m++) {
        for(int n=0; n<3; n++) {
            printf("%d ", mat[m][n]);
        }
        printf("\n");
    }


    return 0;
}
