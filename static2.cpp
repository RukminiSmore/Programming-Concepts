#include<iostream>
using namespace std;


class Demo
{
     public:
        int i;
        int j;
        static int k;

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
int Demo:: k=101;
int main()
{
    cout<<"value of k is : "<<Demo::k<<"\n";
    Demo obj1(11,21);
    Demo obj2(51,101);
    Demo obj3(121,151);

    cout<<"size of object is: "<<sizeof(obj1)<<"\n";
    obj1.Display();
    obj2.Display();
    obj3.Display();


    return 0;
}