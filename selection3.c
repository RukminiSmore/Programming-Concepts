//switch case

#include<stdio.h>

int main()
{
    int Standard =0;

    printf("Welcome to Primary school portal...\n");
    printf("Enter your divion\n");
    scanf("%d",&Standard);
    
    switch(Standard)
    {
        case 1:
        printf("Your exam is at 1PM\n");
        break;

        case 2:
        printf("Your exam is at 2PM\n");
        break;

        case 3:
        printf("Your exam is at 3PM\n");
        break;

        case 4:
        printf("Your exam is at 4PM\n");
        break;

        default:
        printf("Invalid number\n");
        break;
    }
    return 0;
}