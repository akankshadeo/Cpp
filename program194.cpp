//toggle 7th bit

//Find 7th bit if its on then turn it off and return the result

#include<iostream>
using namespace std;
typedef unsigned int UINT;


UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0X00000040;
    UINT iResult = 0;

    iResult = iMask ^ iNo;
    return (iResult);

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number :" <<"\n";
    cin>>iValue;

    iRet = ToggleBit(iValue);
    cout<<"Result is : "<<iRet<<"\n";

    return 0;
}
