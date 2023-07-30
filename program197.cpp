//take input from user and toggle its beat

#include<iostream>
using namespace std;
typedef unsigned int UINT;


UINT ToggleBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);
    iMask = ~iMask;  //main
    iResult = iNo & iMask;

    return iResult;
}

int main()
{
    int iValue = 0;
    int iBit = 0;
    int iRet = 0;

    cout<<"Enter number :" <<"\n";
    cin>>iValue;

    cout<<"Enter the bit position (Range 1 to 32) : "<<"\n";
    cin>>iBit;


    iRet = ToggleBit(iValue, iBit);
    cout<<"Result is : "<<iRet<<"\n";

    return 0;
}
