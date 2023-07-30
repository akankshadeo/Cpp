// Find max of two numbers

#include<iostream>

using namespace std;

class Number
{
    public:
        int iNo1;            //characteristics
        int iNo2;

        Number (int X, int Y)    //behaviour 1  constructor
        {
            iNo1 = X;
            iNo2 = Y;
        }

        int Maximum ()              //behaviour 2   method
{
        if(iNo1 > iNo2)
        {
            return iNo1;
        }
        else
        {
            return iNo2;
        }

}

};


int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    cout<<"Enter first number : "<<"\n";
    cin>>iValue1;

    cout<<"Enter second number : "<<"\n";
    cin>>iValue2;

    Number nobj1(iValue1,iValue2);

    iRet = nobj1.Maximum();
    cout<<"Maximum number is : "<<iRet<<"\n";

    cout<<"Enter first number : "<<"\n";
    cin>>iValue1;

    cout<<"Enter second number : "<<"\n";
    cin>>iValue2;

    Number nobj2(iValue1,iValue2);

    iRet = nobj2.Maximum();
    cout<<"Maximum number is : "<<iRet<<"\n";


    return 0;
}

