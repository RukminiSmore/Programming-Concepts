#include<stdio.h>

int i;
int j=11;

extern int no;
int main()
{
    printf("Value of i:%d\n",i);
    printf("Value of j:%d\n",j);
    printf("Value of no: %d\n",no);


    return 0;
}
