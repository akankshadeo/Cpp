//Find 7th bit if its on then turn it off and return the result

#include<iostream>
using namespace std;
typedef unsigned int UINT;


UINT OffBit(UINT iNo)
{
    UINT iMask = 0X00000004;
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
