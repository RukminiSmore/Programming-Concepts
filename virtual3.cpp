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
    void Gun()
    {
        cout<<"Inside base gun\n";
    }
    void Sun()
    {
       cout<<"Inside base sun\n";  
    }
    void Run()
    {
       cout<<"Inside base run\n";  
    }
};

class Derived : public Base
{
    public:
    int a,b;
    void Gun() //redefination
    {
        cout<<"Inside derived gun\n";
    }
    void Run()//redefination
    {
       cout<<"Inside base run\n";  
    }


};

int main()
{   
    Base *bp=new Derived;
    bp->Fun();
    bp->Gun();
    bp->Sun();
    bp->Run();
    return 0;
}
