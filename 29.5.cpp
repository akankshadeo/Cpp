//take range of input from user and toggle its beat

#include<iostream>
using namespace std;
typedef unsigned int UINT;


UINT ToggleBit(UINT iNo, UINT iStart, UINT iEnd)
{
    int iResult = 0;

    iResult = ((1 << iStart) - 1) ^ ((1 << (iEnd - 1)) - 1);

    return (iNo ^ iResult);
}

int main()
{
    int iValue = 0;
    int iBit1 = 0;
    int iBit2 = 0;
    int iRet = 0;

    cout<<"Enter number :" <<"\n";
    cin>>iValue;

    cout<<"Enter the start bit position (Range 1 to 32) : "<<"\n";
    cin>>iBit1;

    cout<<"Enter the end bit position (Range 1 to 32) : "<<"\n";
    cin>>iBit2;


    iRet = ToggleBit(iValue, iBit1, iBit2);
    cout<<"Result is : "<<iRet<<"\n";

    return 0;
}

