#include<stdio.h>
#include<stdlib.h>


int main()
{

    int iSize=0;
    int *ptr=NULL;

    printf("Enter the size of array\n");
    scanf("%d",&iSize);

    ptr=(int*)calloc(iSize,sizeof(int));
    ptr[0]=10;
    ptr[1]=11;
    ptr[2]=12;

    free(ptr);

    return 0;
}