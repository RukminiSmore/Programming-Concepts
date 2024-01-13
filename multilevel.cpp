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
         c=50;
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
class Marvellous : public Hello
{
public:
    int r;
    Marvellous()
    {
         cout<<"inside marvellous constructor\n";
         r=60;
    }

    ~Marvellous()
    {
         cout<<"inside marvellous destructor\n";
    }

    void Sun ()
    {
        cout<<"Inside Sun of marvellous\n";
    }

};
int main()
{
     Marvellous Mobj;
     cout<<sizeof(Mobj)<<"\n";

        cout<<Mobj.x<<"\n";
        cout<<Mobj.y<<"\n";
        cout<<Mobj.a<<"\n";
        cout<<Mobj.b<<"\n";
        cout<<Mobj.c<<"\n";
        cout<<Mobj.r<<"\n";

        Mobj.Fun();
        Mobj.gun();
        Mobj.Sun();

    return 0;
}