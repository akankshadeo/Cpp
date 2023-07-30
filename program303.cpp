//Bubble efficient sort ascending order

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
    void BubbleSort();
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
void ArrayX<T> :: BubbleSort()
{
    T temp;
    int i = 0, j = 0;
    bool flag = false;

    for(i = 0; i< isize - 1;i++)
    {
        flag = false;

        for(j = 0; j< isize - i -1;j++)
        {
            if(Arr[j] > Arr[j + 1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;
                flag = true;
            }
        }
        if(flag == false)
        {
            break;
        }
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

    obj->BubbleSort();

    delete obj;

    return 0;
}





