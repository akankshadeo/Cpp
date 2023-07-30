//Selection Sort


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
    void SelectionSort();
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
void ArrayX<T> :: SelectionSort()
{
    int i = 0, j = 0,min_index = 0;
    T temp;

    for(i = 0; i< isize - 1;i++)
    {
        min_index = i;

        for(j = i + 1; j< isize;j++)
        {
            if(Arr[j] < Arr[min_index])
            {
                min_index = j;
            }
        }
        temp = Arr[i];
        Arr[i] = Arr[min_index];
        Arr[min_index] = temp;
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

    obj->SelectionSort();

    delete obj;

    return 0;
}
