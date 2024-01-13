#include<stdio.h>


struct Demo
{
    int no;
    int Arr[3]; //struction can hold array 
    float f;
};
int main()
{
    struct Demo obj;
    obj.no=16;
    obj.Arr[0]=12;
    obj.Arr[1]=14;
    obj.Arr[2]=18;
    obj.f=12.45;
    

    return 0;
}