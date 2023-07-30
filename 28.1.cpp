//accept one number from user and a bit and check if bit is on or off. if on return true otherwise false

#include<iostream>
using namespace std;
typedef unsigned int UINT;

class Bitwise
{
public:
    UINT iNo;
    int iPos;

    Bitwise (UINT X , int Y)
    {
        iNo = X;
        iPos = Y;
    }

    bool ChkBit()
    {
       UINT iMask = 0X00000001;
       UINT iResult = 0;

       iMask = iMask << (iPos - 1);

       iResult = iMask & iNo;

       if (iResult == iMask)
       {
           return true;
       }
       else
       {
           return false;
       }

    }

};

int main()
{
    int iValue = 0;
    int iBit = 0;
    bool bRet = false;

    cout<<"Enter the number : "<<"\n";
    cin>>iValue;

    cout<<"Enter the bit : "<<"\n";
    cin>>iBit;

    Bitwise bobj (iValue, iBit);
    bRet = bobj.ChkBit();

    if (bRet == true)
    {
        cout<<"Bit is On"<<"\n";
    }
    else
    {
        cout<<"Bit is Off"<<"\n";
    }

    return 0;
}
