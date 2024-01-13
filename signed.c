#include<stdio.h>

int main()
{
    /**int i=10;
    signed int j =10;
    signed int k=-30;
    unsigned int s=40;**/

    int X=10;  //4 bytes
    short int R=20;  //2bytes
    long int S=30; //8 bytes
   // printf("%d\n",i);
    printf("%d\n",X);
    printf("%d\n",R);
    printf("%d\n",S);

    printf("size of x is :%d\n",sizeof(X));
    printf("size of x is :%d\n",sizeof(R));

    printf("size of x is :%d\n",sizeof(S));







    return 0;
}