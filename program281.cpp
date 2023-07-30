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

int main()
{
    ArrayX<int> obj1(5);    //replaces T in the function

    obj1.Accept();
    obj1.Display();

     ArrayX<char> obj2(5);    //replaces T in the function

    obj2.Accept();
    obj2.Display();


    return 0;
}

