#include <stdio.h>
int main() {
    int ar[2][2][2] =
    {
        {{2,4},{6,8}},
        {{10,12},{14,16}}
    };

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
