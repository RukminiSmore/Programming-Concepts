#include<stdio.h>

//#pragma pack(1)
struct Demo
{
    int no;
    float f;
    int x;
    float d;
};
int main()
{
    struct Demo obj1;
    struct Demo obj2;

    obj1.no=11;
    obj1.f=12.45;
    obj1.x=16;
    obj1.d=3.45;

    obj2.no=16;
    obj2.f=16.45;
    obj2.x=11;
    obj2.d=13.45;

    
    printf("size of structure is: %d\n",sizeof(obj1));
    return 0;
}