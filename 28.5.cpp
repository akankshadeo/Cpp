//accept number from user and toggle the first and last bits

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

    UINT OnBit()
    {
       UINT iMask = 0XF0F;
       UINT iResult = 0;

       iResult = iMask ^ iNo;

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
    iRet = bobj.OnBit();

    cout<<"The result number is : "<<iRet<<"\n";

    return 0;
}

