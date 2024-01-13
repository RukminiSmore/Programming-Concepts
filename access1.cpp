#include<iostream>
using namespace std;

class Demo
{
    int i;
    public:
        int j;
     private:
        int k;
    protected:
        int a;  
    public:
        Demo()
        {
           i=10;
           j=20;
           k=30;
           a=40; 
        }
        void Display()
        {
            cout<<"Value of i:  "<<"\n";
            cout<<"Value of j:  "<<"\n";
            cout<<"Value of k:  "<<"\n";
            cout<<"Value of a:  "<<"\n";
        }         

};

class Hello : public Demo
{
    public:
    void HelloDisplay()
    {
       // cout<<"Value of i:  "<<"\n"; //NA
        cout<<"Value of j:  "<<"\n"; //A
       // cout<<"Value of k:  "<<"\n"; //NA
        cout<<"Value of a:  "<<"\n";  //A
    }
};

int main()
{
    Hello hobj;
    hobj.HelloDisplay();
    return 0;
}