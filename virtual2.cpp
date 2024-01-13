#include<iostream>
using namespace std;

class Base
{
    public:
    int i,j,k;
    void Fun()
    {
       cout<<"Inside base fun\n"; 
    }


};

class Derived : public Base
{
    public:
    int a,b;
    void Gun()
    {
        cout<<"Inside derived gun\n";
    }


};

int main()
{
    Base *bp= new Base;
    Derived *dp=new Derived;
    Base *bp2=new Derived;
    Derived *dp=new Base;

    return 0;
}