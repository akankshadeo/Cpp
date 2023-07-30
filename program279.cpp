#include<iostream>
using namespace std;

template<class T>

int Max(T Arr[], int Size)
{
    int iCnt = 0;
    T maximum = Arr[0];

    for (iCnt = 0;iCnt < Size;iCnt++)
    {
        if(maximum < Arr[iCnt])
        {
            maximum = Arr[iCnt];
        }
    }
    return maximum;
}

int main()
{
    int A[] = {10,20,30,40,50};
    int Ret = 0;
    Ret = Max(A,5);
    cout<<Ret<<"\n";

    double B[] = {10.10,20.20,30.69,40.89,50.12};
    double Return = 0.00;
    Return = Max(B,5);
    cout<<Return<<"\n";


    return 0;
}



