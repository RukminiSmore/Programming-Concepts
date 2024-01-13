#include<stdio.h>

int Addition(int No1, int No2)
{
    int sum = 0;
    sum = No1+No2;
    return sum;

}
int Multiplication(int No3, int No4)
{
    int sum = 0;
    sum = No3*No4;
    return sum;

}
int Substraction(int No5, int No6)
{
    int sum = 0;
    sum = No5-No6;
    return sum;

}
int Division(int No7, int No8)
{
    int sum = 0;
    sum = No7/No8;
    return sum;

}

int main()
{
    int value1=400;
    int value2=500;
    int Ans=0;

    Ans=Addition(value1,value2);
    printf("Addition is: %d\n",Ans);

    Ans=Multiplication(value1,value2);
    printf("Multiplication is: %d\n",Ans);

    Ans=Substraction(value1,value2);
    printf("substraction is: %d\n",Ans);

    Ans=Division(value1,value2);
    printf("Division is: %d\n",Ans);

    return 0;
}