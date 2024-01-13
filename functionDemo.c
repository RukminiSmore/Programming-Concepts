#include<stdio.h>


int Addition(int No1, int No2)
{
    int sum = 0;
    sum= No1 + No2;
    return sum;

}

int main()
{
    int value1= 0, value2=0;
    int Ret=0;

    printf("Enter the first number\n", value1);
    scanf("%d",&value1);

    printf("Enter the second number\n", value2);
    scanf("%d",&value2);

    Ret=Addition(value1,value2);
    printf("Addition is: %d\n",Ret);

    return 0;
}