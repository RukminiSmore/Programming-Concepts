#include<iostream>

void Display(int i , const int j)
{
    int a=10;
    const int b=20;

    i++;
   // j++;
    a++;
    //b++;

}

int main()
{
    Display(11,21);
    return 0;
}

