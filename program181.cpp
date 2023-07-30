//accept one number from user and check whether 3rd bit of that number is on or off

#include<iostream>
using namespace std;

bool CheckBit()
{
    int iMask = 4;
    int iResult = 0;

    iResult = iNo & iMask;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    bRet = CheckBit();

    if (bRet == true)
    {
        cout<<"3rd bit is ON"<<"\n";
    }
    else
    {
        cout<<"3rd bit is OFF"<<"\n";
    }

    return 0;
}
