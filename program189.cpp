//accept two number from user and check that bit of that number is on or off

#include<iostream>
using namespace std;
typedef unsigned int UINT;



bool CheckBit(UINT iNo, UINT iPos)
{
    if ((iPos < 1) || (iPos > 32))
    {
        cout<<"Invalid position"<<"\n";
        return false;
    }

     UINT iMask = 0X00102040;
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



int main()
{
    int iValue = 0;
    int iBit = 0;
    bool bRet = false;

    cout<<"Enter number :" <<"\n";
    cin>>iValue ;

    cout<<"Enter the bit position (Range 1 to 32) : "<<"\n";
    cin>>iBit;

    bRet = CheckBit(iValue, iBit);

    if(bRet == true)
    {
        cout<<"Bit is On"<<"\n" ;

    }
    else
    {
        cout<<"Bit is Off"<<"\n";
    }


    return 0;

}


