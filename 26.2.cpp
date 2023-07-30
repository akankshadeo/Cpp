//check if 5th and 18th bits is On and Off

#include<iostream>
using namespace std;
typedef unsigned int UINT;

class Bitwise
{
public:
     UINT iNo = 0;

    Bitwise(UINT X)
    {
        iNo = X;
    }

    bool CheckBit()
{
     UINT iMask = 0X00020010;
     UINT iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
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
    bool bRet = false;

    cout<<"Enter the number :"<<"\n";
    cin>>iValue;

    Bitwise bobj (iValue);
    bRet = bobj.CheckBit();

    if (bRet == true)
    {
        cout<<"5th and 18th bits are On."<<"\n";
    }
    else
    {
        cout<<"5th and 18th bits are Off."<<"\n";
    }

    return 0;
}

// 0000 0000 0001 0010 0000 0000  0001 0000
//   0    0    0    2    0   0      1   0
