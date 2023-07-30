//check if 9th and 12th bits is On and Off

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
     UINT iMask = 0X00000900;
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
        cout<<"9th and 12th bits are On."<<"\n";
    }
    else
    {
        cout<<"9th and 12th bits are Off."<<"\n";
    }

    return 0;
}

// 0000 0000 0001 0000 0000 8001  0000 0000
//   0    0    0    0    0   9      0   0

