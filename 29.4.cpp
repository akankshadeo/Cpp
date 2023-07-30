//take two input from user and turn it off if on and check if they are on or off

#include<iostream>
using namespace std;
typedef unsigned int UINT;


bool OffBit(UINT iNo, UINT iPos1, UINT iPos2)
{
    UINT iMask1 = 0X00000001;
    UINT iResult1 = 0;
    UINT iMask2 = 0X00000001;
    UINT iResult2 = 0;

    iMask1 = iMask1 << (iPos1 - 1);
    iResult1 = iNo & iMask1;
    iMask2 = iMask2 << (iPos2 - 1);
    iResult2 = iNo & iMask2;


    if ((iResult1 == iMask1) && (iResult2 == iMask2))
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int iValue = 0;
    int iBit1 = 0;
    int iBit2 = 0;
    bool bRet = false;

    cout<<"Enter number :" <<"\n";
    cin>>iValue;

    cout<<"Enter the first bit position (Range 1 to 32) : "<<"\n";
    cin>>iBit1;

    cout<<"Enter the second bit position (Range 1 to 32) : "<<"\n";
    cin>>iBit2;

    bRet = OffBit(iValue, iBit1, iBit2);


    if (bRet == true)
    {
        cout<<"True"<<"\n";
    }
    else
    {
        cout<<"False"<<"\n";
    }

    return 0;}

