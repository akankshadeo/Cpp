//Singly Linked List in C++

#include<iostream>

using namespace std;

typedef struct Node
{
    int data;
    struct Node *next;
}NODE, *PNODE;            //we wont need **PPNODE

class SinglyLL
{
private:
    PNODE First;        //characteristics
    int iCount;

public:
    SinglyLL();         //Default Constructor
    ~SinglyLL();

    void Display();
    int Count();

    void InsertFirst(int no);
    void InsertLast(int no);
    void InsertAtPos(int no, int ipos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int ipos);
};

//Implementations of all behaviours
/*
    Return_Value Class_Name :: Function_Name(Parameter_List)
    {
    Function_Body;
    }
*/

void SinglyLL :: Display()
{
    cout<<"Your linked list is : \n";

    PNODE temp = First;

    while(temp != NULL)
    {
        cout<<" | " <<temp->data<<" | -> ";
        temp = temp -> next;
    }
    cout<<"NULL"<<"\n";
}

int SinglyLL :: Count()
{
   return iCount;
}

void SinglyLL :: InsertFirst(int no)
{
    PNODE newn = NULL;
    newn = new NODE;    //newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if (First == NULL)   //LL is empty
    {
        First = newn;
    }
    else               //LL contains at least one node
    {
        newn -> next = First;
        First = newn;
    }

    iCount++;
}

void SinglyLL :: InsertLast(int no)
{
    PNODE newn = NULL;
    newn = new NODE;    //newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if (First == NULL)   //LL is empty
    {
        First = newn;
    }
    else               //LL contains at least one node
    {
        PNODE temp = First;

        while (temp -> next != NULL)
        {
            temp = temp->next;
        }
        temp -> next = newn;
    }

    iCount++;

}

void SinglyLL :: DeleteFirst()
{
    if (First == NULL)     //Empty LL
    {
        return;
    }
    else if (First -> next == NULL)         //1 node in LL
    {
        delete First;
        First = NULL;
    }
    else       //More than one node in LL
    {
        PNODE temp = First;
        First = First-> next;
        delete temp;
    }

    iCount--;
}

void SinglyLL :: DeleteLast()
{
    if (First == NULL)     //Empty LL
    {
        return;
    }
    else if (First -> next == NULL)         //1 node in LL
    {
        delete First;
        First = NULL;
    }
    else       //More than one node in LL
    {
        PNODE temp = First;

        while(temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }
        delete temp->next;
        temp->next = NULL;
    }

    iCount--;     //not applicable for if part
}

SinglyLL :: SinglyLL()
{
    cout<<"Inside constructor\n";

    First = NULL;
    iCount = 0;
}

SinglyLL :: ~SinglyLL()
{
    cout<<"Inside Destructor\n";
}

void SinglyLL :: InsertAtPos(int no, int ipos)
{
    if ((ipos < 1) || (ipos > iCount + 1))
    {
        cout<<"Invalid Position \n";
        return;
    }

    if (ipos == 1)
    {
        InsertFirst(no);
    }
    else if (ipos == iCount + 1)
    {
        InsertLast(no);
    }
    else
    {
        PNODE temp = First;
        int iCnt = 0;

        for (iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp -> next;
        }

        PNODE newn = new Node;
        newn->data = no;
        newn->next = NULL;

        newn->next = temp->next;
        temp -> next = newn;

        iCount++;
    }

}

void SinglyLL :: DeleteAtPos(int ipos)
{
    if ((ipos < 1) || (ipos > iCount))
    {
        cout<<"Invalid Position \n";
        return;
    }

    if (ipos == 1)
    {
        DeleteFirst( );
    }
    else if (ipos == iCount)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp = First;
        PNODE tempX = NULL;
        int iCnt = 0;

        for (iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp -> next;
        }

        tempX = temp -> next;
        temp->next = temp->next->next;
        delete temp;

        iCount--;
    }


}




int main()
{
    SinglyLL obj1;
    SinglyLL obj2;
    int iRet = 0;

    obj1.InsertFirst(30);
    obj1.InsertFirst(20);
    obj1.InsertFirst(10);
    obj1.InsertLast(40);
    obj1.InsertLast(50);
    obj1.InsertAtPos(25,3);

    obj1.Display();
    iRet = obj1.Count();

    cout<<"Number of Elements are : "<<iRet<<"\n";

    obj1.DeleteFirst();
    obj1.DeleteLast();
    obj1.DeleteAtPos(3);

    obj1.Display();
    iRet = obj1.Count();

    cout<<"Number of Elements are : "<<iRet<<"\n";


    return 0;
}
