#include<stdio.h>

int Addition(int No1, int No2)
{
    int sum = 0;
    sum= No1 + No2;
    return sum;

}

int Substraction(int No3,int No4)
{
    int sub= 0;
    sub = No3 - No4;
    return sub;
}

int Multiplication(int No5, int No6)
{
    int multi=0;
    multi= No5*No6;
    return multi;

}

int main()
{
   int Variable1 = 20;
   int Variable2= 10;
   int Ans = 0;

   Ans=Addition(Variable1, Variable2);
   printf("addition is :%d\n",Ans);

   Ans=Substraction(Variable1, Variable2);
   printf("substraction is :%d\n",Ans);

   Ans=Multiplication(Variable1, Variable2);
   printf("multiplication is :%d\n",Ans);

    return 0;

}