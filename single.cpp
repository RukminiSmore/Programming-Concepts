#include<iostream>
using namespace std;

class Demo
{
    public:
    int x,y;

    Demo()
    {
        cout<<"inside demo constructor\n";
        x=10;
        y=20;
    }
    ~Demo()
    {
        cout<<"inside demo destructor\n";
    }

    void Fun()
    {
        cout<<"Inside the fun of demo\n";
    }


};
// class hello extends Demo-java syntax
class Hello : public Demo
{
    public:
    int a,b,c;
    Hello()
    {
         cout<<"inside Hello constructor\n";
         a=30;
         b=40;
         c=60;
    }

    ~Hello()
    {
         cout<<"inside Hello destructor\n";
    }

    void gun()
    {
        cout<<"Inside gun of hello\n";
    }
};
int main()
{
     Hello hobj;
     cout<<sizeof(hobj)<<"\n";

        cout<<hobj.x<<"\n";
        cout<<hobj.y<<"\n";
        cout<<hobj.a<<"\n";
        cout<<hobj.b<<"\n";
        cout<<hobj.c<<"\n";

        hobj.Fun();
        hobj.gun();

    return 0;
}