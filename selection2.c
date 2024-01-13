#include<stdio.h>

int main()
{
    int Standard =0;

    printf("Welcome to Primary school portal...\n");

    printf("Enter your divion\n");
    scanf("%d",&Standard);
    
    //if else if ladder
    if(Standard ==1)
    {
        printf("Your exam is at 1PM\n");
    }
    else if(Standard==2)
    {
        printf("Your exam is at 2Pm\n");
    }
    else if(Standard==3)
    {
        printf("Your exam is at 3Pm\n");
    }
    else if(Standard==4)
    {
        printf("Your exam is at 4Pm\n");
    }
    else
    {
        printf("Invalid input:..\n");

    }
    return 0;
}