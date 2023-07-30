//call by reference

#include<iostream>
using namespace std;

void Swap(int &ino1, int &ino2)
{
    int temp;
    temp = ino1;
    ino1 = ino2;
    ino2 = temp;
}

int main()
{
    int A = 10;
    int B = 11;

    Swap(A,B);
    cout<<"Data after swapping: \n";
    cout<<"Value of A:"<<A<<"\n";
    cout<<"Value of B:"<<B<<"\n";

    return 0;
}


