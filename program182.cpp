//accept one number from user and check whether 3rd bit of that number is on or off

#include<iostream>
using namespace std;
typedef unsigned int UINT;



bool CheckBit(UINT iNo)
{
     UINT iMask = 0X4;
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
    bool bRet = false;

    cout<<"Enter number :" <<"\n";
    cin>>iValue ;

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        cout<<"3rd bit is On"<<"\n" ;

    }
    else
    {
        cout<<"3rd bit is Off"<<"\n";
    }


    return 0;
}
