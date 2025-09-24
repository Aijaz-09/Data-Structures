#include <stdio.h>
int main() {
    int ar[2][2][2] =
    {
        {{2,4},{6,8}},
        {{10,12},{14,16}}
    };

    int idx_X=0, idx_Y=0, idx_Z=0, value=0;

   printf("Give 3 indexes for the position: ");
    scanf("%d %d %d", &idx_X, &idx_Y, &idx_Z);

    printf("What value: ");
    scanf("%d", &value);

    ar[idx_Z][idx_Y][idx_X] = value;

    for(int z=0; z<2; z++) {
        for(int y=0; y<2; y++) {
            for(int x=0; x<2; x++) {
                printf("%d ", ar[z][y][x]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
