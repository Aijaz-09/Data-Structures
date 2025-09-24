#include <stdio.h>

int main() {
    int students[5] = {2,4,6,8,10};

    int max = students[0];
    for(int i=1; i<5; i++) {
        if(max > students[i])
            max = students[i];
    }

    printf("%d", max);
    return 0;
}
