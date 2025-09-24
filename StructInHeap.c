#include <stdio.h>
#include <stdlib.h>
struct Rectangle {
    int length;
    int breadth;
};
//This function is returning a POINTER TO A STRUCTURE
struct Rectangle *fun() {
    struct Rectangle *p1;
    p1=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    p1->length=15;
    p1->breadth=7;
    return p1;
};

int main()
{
    struct Rectangle *p;
    p=fun();

    printf("%d\n", p->length);
    printf("%d\n", p->breadth);

    return 0;
}
