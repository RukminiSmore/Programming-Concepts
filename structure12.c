#include<stdio.h>


union Demo{
    int i;
    char ch;
    float f;
    double d;
    //int no;

};
int main()
{
    union Demo obj;
    printf("size of object is:%d\n",sizeof(obj));
    obj.f=90.98;
    printf("%f\n",obj.f);
    obj.i=16;
     printf("%d\n",obj.i);
    return 0;
}

