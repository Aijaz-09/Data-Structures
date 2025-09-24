#include<stdio.h>

struct Rectangle {
    int length;
    int breadth;
};

void fun(struct Rectangle *r1) {
    r1->length=100;
}

int main() {
    struct Rectangle r={10,5};
    fun(&r);
    printf("%d %d", r.length, r.breadth);
    return 0;
}
