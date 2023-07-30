//Linear Search

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
    bool LinearSearch(T);
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
bool ArrayX<T> :: LinearSearch(T no)
{
    bool flag = false;

    for (int iCnt = 0; iCnt<isize;iCnt++)
    {
        if(Arr[iCnt] == no)
        {
            flag = true;
            break;
        }
    }
    return flag;
}

int main()
{
    int ivalue = 0;
    int fin = 0;
    bool bRet = false;

    cout<<"Enter the size of array : \n";
    cin>>ivalue;

    cout<<"Enter the value you want to search : \n";
    cin>>fin;

    ArrayX <int>*obj = new ArrayX<int>(ivalue);
    obj->Accept();
    obj->Display();

    bRet = obj->LinearSearch(fin);
    if(bRet == true)
    {
        cout<<fin<<"is present in the array.\n";
    }
    else
    {
        cout<<fin<<"is not present in the array.\n";
    }
    delete obj;

    return 0;
}


