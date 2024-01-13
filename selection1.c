#include<stdio.h>

int main()
{
    int No=0;
    int Ans = 0;

    printf("Enter Number :\n");
    scanf("%d",&No);

    Ans = No % 2;

    if(Ans == 0) // jar
    {
        printf("Number is even\n");
    }
    else // naselltrr
    {
        printf("Number is Odd\n");
    }

    return 0;
}