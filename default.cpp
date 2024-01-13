#include<iostream>
using namespace std;

float Calculate(float Marks, float Outof=100)
{
    float percentage =(Marks/Outof)*100;
    return percentage;

}
int main()
{

    float Ans=0.0f;
    Ans=Calculate(89,100);
    cout<<"perecetange : "<<Ans<<"\n";

    Ans=Calculate(86);
    cout<<"perecetange : "<<Ans<<"\n";

    Ans=Calculate(320,400);
    cout<<"perecetange : "<<Ans<<"\n";

    return 0;
}