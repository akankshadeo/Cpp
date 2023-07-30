#include<iostream>
using namespace std;

template<class T>

class ArrayX
{
public :
    T *Arr;
    int Size;


    ArrayX(int);
    void Accept();
    void Display();
     T Maximum();
};

template<class T>
ArrayX<T> :: ArrayX(int length)
    {
        Size = length;
        Arr = new T[Size];
    }

template<class T>
void ArrayX<T> ::  Accept()
    {
        cout<<"Enter elements of array: \n";
        int icnt = 0;
        for(icnt = 0; icnt<Size;icnt++)
        {
            cin>>Arr[icnt];
        }
    }

template<class T>
void ArrayX<T> :: Display()
    {
        cout<<"Elements of array are : \n";
        int icnt = 0;
        for(icnt = 0; icnt<Size;icnt++)
        {
            cout<<Arr[icnt]<<"\n";
        }
    }

template<class T>
T ArrayX<T> :: Maximum()
{
    T imax = Arr[0];
    int icnt = 0;
    for(icnt = 0; icnt<Size;icnt++)
        {
            if(imax < Arr[icnt])
            {
                imax == Arr[icnt];
            }
        }
    return imax;
}

template <class T>
ArrayX<T> :: ~ArrayX
{
   delete []Arr;
}

int main()
{
    ArrayX<int> obj1(5);    //replaces T in the function

    obj1.Accept();
    obj1.Display();
    int iRet = 0;
    iRet = obj1.Maximum();
    cout<<iRet<<"\n";

     ArrayX<char> obj2(5);    //replaces T in the function

    obj2.Accept();
    obj2.Display();
    char cRet = 0;
    cRet = obj2.Maximum();
    cout<<cRet<<"\n";


    return 0;
}

