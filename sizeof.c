#include<stdio.h>
int main()
{
    char R = 'R';
    float M= 10.10f;
    double A= 10.5;
    int S=100;

    printf("size of character is : %d bytes\n",sizeof(R));
    printf("size of float is : %d bytes\n",sizeof(M));
    printf("size of double is : %d bytes\n",sizeof(A));
    printf("size of integer  is : %d bytes\n",sizeof(S));

    printf("base address of character is: %d\n",&R);
    printf("base address of float is: %d\n",&M);
    printf("base address of double is: %d\n",&A);
    printf("base address of integer is: %d\n",&S);
    return 0;

}