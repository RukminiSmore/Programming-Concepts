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
class Hello 
{
    public:
    int a,b;
    Hello()
    {
         cout<<"inside Hello constructor\n";
         a=30;
         b=40;
         
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
//class Marvellous : public Demo, public Hello
class Marvellous : public Hello, public Demo
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

        Mobj.Fun();
        Mobj.gun();
        Mobj.Sun();

    return 0;
}