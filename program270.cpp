#include<iostream>
using namespace std;

template<class T>    //template header   T = Template variable

T Addition(T No1, T No2)
{
    T Ans;

    Ans = No1 + No2;

    return Ans;
}


int main()
{
    int A = 10;
    int B = 11;
    int Ret = 0;

    Ret = Addition(A,B);

    cout<<"Addition is : "<<Ret<<"\n";

    double x=90.7,y = 78.9, Result = 0.0;
    Result = Addition(x,y);
    cout<<"Addition is :"<<Result<<"\n";

    float l=90.7f,m = 78.9f, Resultf = 0.0f;
    Resultf = Addition(l,m);
    cout<<"Addition is :"<<Resultf<<"\n";

    return 0;
}

