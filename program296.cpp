#include<iostream>
using namespace std;

template<class T>
class ArrayX
{
public:
    T *Arr;
    int isize;

    ArrayX(int);
    ~ArrayX();
    void Accept();
    void Display();
};

template<class T>
ArrayX<T> :: ArrayX(int ino)
{
    cout<<"Inside Constructor\n";
    this->isize = ino;
    this->Arr = new int[isize];
}

template<class T>
ArrayX<T> :: ~ArrayX()
{
    cout<<"Inside Destructor\n";
    delete []Arr;
}

template<class T>
void ArrayX<T> :: Accept()
{
    cout<<"Inside Accept\n";
    cout<<"Enter elements of array : \n";
    for (int iCnt =0; iCnt < isize; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

template<class T>
void ArrayX<T> :: Display()
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

    //ArrayX <int>obj(ivalue);

    ArrayX <int>*obj = new ArrayX<int>(ivalue);
    obj->Accept();
    obj->Display();

    delete obj;

    cout<<"End of main\n";

    return 0;
}

