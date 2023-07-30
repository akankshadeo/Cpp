//accept one number from user and a bit and off that bit and return modified number

#include<iostream>
using namespace std;
typedef unsigned int UINT;

class Bitwise
{
public:
    UINT iNo;
    int iPos;

    Bitwise (UINT X, int Y)
    {
        iNo = X;
        iPos = Y;
    }

    UINT OffBit()
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

};

int main()
{
    int iValue = 0;
    int iBit =0;
    int iRet = 0;

    cout<<"Enter the number : "<<"\n";
    cin>>iValue;

    cout<<"Enter the bit number : "<<"\n";
    cin>>iBit;

    Bitwise bobj (iValue, iBit);
    iRet = bobj.OffBit();

    cout<<"The result number is : "<<iRet<<"\n";

    return 0;
}
