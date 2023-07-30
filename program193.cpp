//take input from user and turn it off if on and return result

#include<iostream>
using namespace std;
typedef unsigned int UINT;


UINT OffBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);
    iResult = iNo & iMask;

    if (iResult == iMask)
    {
        return (iMask ^ iNo);
    }
    else
    {
        return iNo;
    }

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


    iRet = OffBit(iValue, iBit);
    cout<<"Result is : "<<iRet<<"\n";

    return 0;
}
