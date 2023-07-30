#include<iostream>
using namespace std;

template<class T>

int Addition(T Arr[], int Size)
{
    int iCnt = 0;
    T sum = 0;

    for (iCnt = 0;iCnt < Size;iCnt++)
    {
        sum = sum + Arr[iCnt];
    }
    return sum;
}

int main()
{
    int A[] = {10,20,30,40,50};
    int Ret = 0;
    Ret = Addition(A,5);
    cout<<Ret<<"\n";

    double B[] = {10.10,20.20,30.69,40.89,50.12};
    double Return = 0.0;
    Return = Addition(B,5);
    cout<<Return<<"\n";


    return 0;
}



