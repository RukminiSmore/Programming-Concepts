#include<stdio.h>

struct Demo
{
    int i;
    float f;
    struct Hello
    {
        int no;
        float d;
    }Hobj;
}Dobj;

int main()
{
    Dobj.i=11;
    Dobj.f=90.99;

    Dobj.Hobj.no=21;
     Dobj.Hobj.d=98.89;

     printf("Size of object:%d\n",sizeof(Dobj));

     printf("%d\n",Dobj.i);
     printf("%f\n",Dobj.f);
     printf("%d\n",Dobj.Hobj.no);
     printf("%f\n",Dobj.Hobj.d);

    return 0;

}