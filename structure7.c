#include<stdio.h>

struct Hello
    {
        int no;
        float d;
    }hobj;
struct Demo
{
    int i;
    float f;
    struct Hello hobj;
}dobj;

int main()
{
    struct Demo dobj;
    printf("size of object:%d\n",sizeof(dobj));
    return 0;
}