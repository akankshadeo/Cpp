// Accept number from array and display its sum

#include<iostream>

using namespace std;

class Array
{
public:
    int iSize;
    int *Arr;

    Array(int iNo)         //initialize and allocate the resources
    {
        cout<<"Inside constructor"<<"\n";
        iSize = iNo;
        Arr = new int [iSize];
    }

    ~Array()
    {
        cout<<"Inside destructor"<<"\n";
        delete[]Arr;        //destructor
    }

    void Accept()
    {
        cout<<"Inside accept method"<<"\n";
        cout<<"Enter the elements : "<<"\n";

        int iCnt = 0;
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }

    void Display()
    {
        cout<<"Inside display method"<<"\n";
        cout<<"Enter of array are : "<<"\n";
        int iCnt = 0;
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            cout<<Arr[iCnt]<<"\n";
        }
    }

    int Summation()
    {
        cout<<"Inside summation method"<<"\n";

        int iSum = 0;
        int iCnt = 0;

        for (iCnt = 0; iCnt<iSize; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        return iSum;
    }


};

using namespace std;

int main()
{
    cout<<"Inside main"<<"\n";

    int iNo = 0;
    int iRet = 0;

    cout<<"Enter number of elements : "<<"\n";
    cin>>iNo;

    Array aobj(iNo);
    aobj.Accept();
    aobj.Display();

    iRet = aobj.Summation();

    cout<<"Summation is : "<<iRet<<"\n";

    return 0;
}
