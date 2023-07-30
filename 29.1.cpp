//accept number from user and count number of ON bits

#include<iostream>
using namespace std;
typedef unsigned int UINT;

class Bitwise
{
public:
    UINT iNo;

    Bitwise (UINT X)
    {
        iNo = X;
    }

    UINT CountOne()
    {
       int iCnt = 0;

       while (iNo)
       {
           if ((iNo & 1) > 0)
           {
               iCnt++;
           }
           iNo >>=1;
       }

       return iCnt;
    }

};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : "<<"\n";
    cin>>iValue;

    Bitwise bobj (iValue);
    iRet = bobj.CountOne();

    cout<<"The bits On are : "<<iRet<<"\n";

    return 0;
}


