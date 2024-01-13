#include<iostream>
using namespace std;

class Demo
{
    public:
        int Addition(int A, int B)
        {
            int Ans =0;
            Ans=A+B;
            return Ans;
        }
        int Addition(int A,int B,int C)
        {
            int Ans=0;
            Ans=A+B+C;
            return Ans;
        }
        float Addition(float A, float B)
        {
            float Ans=0.0f;
            Ans=A+B;
            return Ans;
        }
};
int main()
{

    Demo obj;
    int i =10, j=20,k=30;
    int ret =0;
    float p=90.8,q=80.88, fRet=0.0;
    fRet=obj.Addition(p,q);
    ret = obj.Addition(i,j);
    cout<<"Additiono is: "<<ret<<"\n";
    ret=obj.Addition(i,j,k);
    cout<<"Addition is: "<<ret<<"\n";
    cout<<"Addition is: "<<fRet<<"\n";
    

    return 0;
}