//accept one number from user and off the 7th bit that number if its on and viceversa

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

    UINT ToggleBit()
    {
       UINT iMask = 0X00000040;
       UINT iResult = 0;

       iResult = iNo ^ iMask;
       return iResult;
    }

};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : "<<"\n";
    cin>>iValue;

    Bitwise bobj (iValue);
    iRet = bobj.ToggleBit();

    cout<<"The result number is : "<<iRet<<"\n";

    return 0;
}
