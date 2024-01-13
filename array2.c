#include<stdio.h>
int main()
{
    int Arr[4]={11,21,51,101};

    printf("base address of array : %d\n",Arr);
    printf("base address of first element in array : %d\n",&(Arr[0]));
    printf("base address of second element in array : %d\n",&(Arr[1]));
    printf("first element is: %d\n",Arr[0]);
    printf("size of whole array:%d\n",sizeof(Arr));
    printf("size of second element of array:%d\n",sizeof(Arr[1]));


    return 0;
}