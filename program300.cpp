//CheckSorted

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
    bool BiDirectionalSearch(T);
    bool BinarySearch(T);
    bool CheckSorted();
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


template<class T>
bool ArrayX<T> :: BiDirectionalSearch(T no)
{
    bool flag = false;
    int iStart = 0;
    int iEnd = isize - 1;

    while(iStart <= iEnd)
    {
        if(Arr[iStart] == no || Arr[iEnd] == no)
        {
            flag = true;
            break;
        }

        iStart++;
        iEnd--;
    }
    return flag;
}

template<class T>
bool ArrayX<T> :: BinarySearch(T no)
{
    bool flag = false;

    int istart = 0;
    int iend = isize - 1;
    int imid = 0;

    while(istart <= iend)
    {
        imid = istart + (iend - istart)/2;

        if((Arr[imid] == no) || (Arr[istart] == no) || (Arr[iend] == no))
        {
            flag = true;
            break;
        }
        else if(Arr[imid] < no)
        {
            istart = imid + 1;
        }
        else if(Arr[imid] > no)
        {
            iend = imid - 1;
        }
    }

    return flag;
}

template<class T>
bool ArrayX<T> :: CheckSorted()
{
    int iCnt = 0;
    bool flag = false;

    for(int iCnt = 0; iCnt < isize - 1; iCnt++)
    {
        if(Arr[iCnt] <= Arr[iCnt + 1])
        {
            continue;
        }
        else
        {
            flag = false;
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

    bRet = obj->CheckSorted(fin);
    if(bRet == true)
    {
        cout<<"Array is sorted\n";
    }
    else
    {
        cout<<"Array is not sorted.\n";
    }
    delete obj;

    return 0;
}



