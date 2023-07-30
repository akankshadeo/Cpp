//Insertion Sort


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
    void InsertionSort();
};

template<class T>
ArrayX<T> :: ArrayX(int ino)
{
    this->isize = ino;
    this->Arr = new int[isize];
}

template<class T>
ArrayX<T> :: ~ArrayX()
{
    delete []Arr;
}

template<class T>
void ArrayX<T> :: Accept()
{
    cout<<"Enter elements of array : \n";
    for (int iCnt =0; iCnt < isize; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

template<class T>
void ArrayX<T> :: Display()
{
    cout<<"Elements of array are: \n";
    for (int iCnt =0; iCnt < isize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
}

template<class T>
void ArrayX<T> :: InsertionSort()
{
    int i = 0, j = 0;
    T selected;

    for(i = 0; i< isize;i++)
    {
        for(j = i - 1,selected = Arr[i]; ((j >= 0) && (Arr[j] > selected)); j--)
        {
            Arr[j + 1] = Arr[j];
        }
        Arr[j + 1] = selected;
        cout<<"Data after pass :"<<i + 1<<"\n";
        Display();
    }
}


int main()
{
    int ivalue = 0;
    bool bRet = false;

    cout<<"Enter the size of array : \n";
    cin>>ivalue;

    ArrayX<int> *obj = new ArrayX<int>(ivalue);

    obj->Accept();
    obj->Display();

    obj->InsertionSort();

    delete obj;

    return 0;
}
