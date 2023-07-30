//take input from user and turn it off if on and return result

#include<iostream>
using namespace std;
typedef unsigned int UINT;

// 1111 1111 1111 1111 1111 1111 1011 1111
//   F   F     F    F    F    F    B    F

UINT OffBit(UINT iNo)
{
    UINT iMask = 0XFFFFFFBF;
    UINT iResult = 0;

    iResult = iNo & iMask;

    return iResult;

    // return (iNo & 0XFFFFFFBF
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number :" <<"\n";
    cin>>iValue;

    iRet = OffBit(iValue);
    cout<<"Result is : "<<iRet<<"\n";

    return 0;
}
