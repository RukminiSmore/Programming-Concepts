#include<iostream>
using namespace std;

class Demo
{
    public :
    int i;
    const int j;
    const int k;

    Demo(int a,int b,int c) :j(b),k(c)
    {
        i=a;
        //j=b;
        //k=c;
    }
};

int main()
{
    Demo obj(11,21,51);
    cout<<"value of i :"<<obj.i<<"\n";
    cout<<"value of j :"<<obj.j<<"\n";
    cout<<"value of k :"<<obj.k<<"\n";


    obj.i++;
  //  obj.j++; //Na
  //  obj.k++; //Na
   return 0; 
}

