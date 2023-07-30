//accept number from user and count number of ON bits

#include<iostream>
using namespace std;
typedef unsigned int UINT;
#define flag1 1
#define flag2 2
#define flag3 4
#define flag4 8

class Bitwise
{
public:
    UINT iNo1;
    UINT iNo2;

    Bitwise (UINT X, UINT Y)
    {
        iNo1 = X;
        iNo2 = Y;
    }

    void CommonBits()
    {
       int iCnt = 0;
       int iResult = 0;
       int iPos = 0;
       int iMask = 0X00000001;

       iResult = iNo1 & iNo2;

       while (iResult)
       {
           if ((iResult & 1) > 0)
           {
               if (iResult & flag1 != 0)
                   {
                      cout<<"Common position is 1"<<"\n";
                   }

              if (iResult & flag2 != 0)
                  {
                      cout<<"Common position is 2"<<"\n";
                  }
               iCnt++;
           }
           iResult >>=1;
       }

    }

};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    cout<<"Enter first number : "<<"\n";
    cin>>iValue1;

    cout<<"Enter second number : "<<"\n";
    cin>>iValue2;


    Bitwise bobj (iValue1, iValue2);
    bobj.CommonBits();

    return 0;
}



