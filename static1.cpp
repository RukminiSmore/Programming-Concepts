#include<iostream>
using namespace std;


class Demo
{
     public:
        int i;
        int j;

        Demo(int a=10, int b=20)
        {
            i =a;
            j=b;
        }

    
        void Display()
        {

            cout<<"value of i: "<<i<<"\n";
            cout<<"value of j: "<<j<<"\n";

        }

};
int main()
{
    Demo obj1;
    obj1.Display();

    Demo obj2(11);
    obj2.Display();

    Demo obj3(51,101);
    obj3.Display();




    return 0;
}