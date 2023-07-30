//check if first and last bit is On and Off

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
     UINT iMask = 0X80000001;
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
        cout<<"First and last bit is On."<<"\n";
    }
    else
    {
        cout<<"First and last bit is Off."<<"\n";
    }

    return 0;
}

// 1000 0000 0001 0000 0000 0000  0000 0001
//   8    0    0    0    0   0     0    1
