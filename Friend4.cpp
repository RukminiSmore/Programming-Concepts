#include<iostream>
using namespace std;

class Hello
{
    public:
        void fun();
        void gun();
};
class Demo
{
    public:  int i;
    private: int j;
    protected: int k;
    public:
    Demo()
    {
        i=10;j=20;k=30;
    }
    friend class Hello;
};
//return value class_name::Function_name()

void Hello::fun()
{
    Demo obj;
    cout<<"values of i: "<<obj.i<<"\n";
     cout<<"values of j: "<<obj.j<<"\n";
      cout<<"values of k: "<<obj.k<<"\n";
}
void Hello::gun()
{
    Demo obj;
    cout<<"values of i: "<<obj.i<<"\n";
     cout<<"values of j: "<<obj.j<<"\n";
      cout<<"values of k: "<<obj.k<<"\n";
}
int main()
{
    Hello hobj;
    hobj.fun();
    hobj.gun();
    return 0;
}