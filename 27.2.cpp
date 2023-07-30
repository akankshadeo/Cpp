//accept one number from user and off the 7th bit and 8th bitof that number if its on

#include<iostream>
using namespace std;
typedef unsigned int UINT;

class Bitwise
{
public:
    UINT iNo;

    Bitwise (UINT X)
    {
        iNo = X;
    }

    UINT OffBit()
    {
       UINT iMask = 0X00000240;
       UINT iResult = 0;

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

};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : "<<"\n";
    cin>>iValue;

    Bitwise bobj (iValue);
    iRet = bobj.OffBit();

    cout<<"The result number is : "<<iRet<<"\n";

    return 0;
}
