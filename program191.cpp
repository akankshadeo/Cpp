//accept two bit pos from user and check if they are ON or OFF

#include<iostream>
using namespace std;
typedef unsigned int UINT;

bool CheckBit(UINT iNo, UINT iPos1, UINT iPos2)
{
    UINT iMask1 = 0X00000001;
    UINT iMask2 = 0X00000001;
    UINT iResult = 0;

    if ((iPos1 < 1) || (iPos1 > 32) || (iPos2 < 1) || (iPos2 > 32))
    {
        cout<<"Invalid position"<<"\n";
        return false;
    }

    iMask1 = iMask1 << (iPos1 - 1);  //left shift
    iMask2 = iMask2 << (iPos2 - 1);  //left shift

    iResult = iNo & (iMask1 | iMask2);

    if(iResult == (iMask1 | iMask2))
    {
        return true;

    }
    else
    {
        return false;
    }

 }



int main()
{
    int iValue = 0;
    int iBit1 = 0;
    int iBit2 = 0;
    bool bRet = false;

    cout<<"Enter number :" <<"\n";
    cin>>iValue ;

    cout<<"Enter the first bit position (Range 1 to 32) : "<<"\n";
    cin>>iBit1;

    cout<<"Enter the second bit position (Range 1 to 32) : "<<"\n";
    cin>>iBit2;

    bRet = CheckBit(iValue, iBit1, iBit2);

    if(bRet == true)
    {
        cout<<"Bits are On"<<"\n" ;

    }
    else
    {
        cout<<"Bits are Off"<<"\n";
    }


    return 0;

}



