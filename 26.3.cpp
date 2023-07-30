//check if 7th, 15th, 21st and 28th bits is On and Off

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
     UINT iMask = 0X08104040;
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
        cout<<"7th, 15th, 21st and 28th bits are On."<<"\n";
    }
    else
    {
        cout<<"7th, 15th, 21st and 28th bits are Off."<<"\n";
    }

    return 0;
}

// 0000 1000 0001 0000 0100 0000  0100 0000
//   0    8    1    0    4   0      4   0
