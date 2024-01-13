#include<iostream>
using namespace std;

class Demo
{
    public:
    int  i;
    private:
    int j;
    protected:
    int k;
    public:
    Demo()
    {
        i=10;
        j=20;
        k=30;
    }

};
void Display()
{
    Demo obj;
    cout<<"Value of i:"<<obj.i<<"\n";
    cout<<"Value of i:"<<obj.j<<"\n";
    cout<<"Value of i:"<<obj.k<<"\n";
}
int main()
{

    return 0;
}