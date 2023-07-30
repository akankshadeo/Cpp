#include<iostream>
using namespace std;

class ArrayX
{
public:
    int *Arr;
    int isize;

    ArrayX(int);
    ~ArrayX();
    void Accept();
    void Display();
};

ArrayX :: ArrayX(int ino)
{
    cout<<"Inside Constructor\n";
    this->isize = ino;
    this->Arr = new int[isize];
}

ArrayX :: ~ArrayX()
{
    cout<<"Inside Destructor\n";
    delete []Arr;
}

void ArrayX :: Accept()
{
    cout<<"Inside Accept\n";
    cout<<"Enter elements of array : \n";
    for (int iCnt =0; iCnt < isize; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

void ArrayX :: Display()
{
    cout<<"Inside Display\n";
    cout<<"Elements of array are: \n";
    for (int iCnt =0; iCnt < isize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
}

int main()
{
    cout<<"Inside main\n";
    int ivalue = 0;

    cout<<"Enter the size of array : \n";
    cin>>ivalue;

    ArrayX *obj = new ArrayX(ivalue);
    obj->Accept();
    obj->Display();

    delete obj;

    cout<<"End of main\n";

    return 0;
}
