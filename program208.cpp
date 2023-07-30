//Singly Circular LL in cpp

#include<iostream>
using namespace std;

typedef class Node
{
public:
    int data;
    struct Node *next;

    Node(int value)
    {
       data = value;
       next = NULL;
    }

}NODE, *PNODE;

class LinkedList                 //Abstraction   //Runtime Polymorphism  //base class
{
public:
    PNODE First;
    int iCount;

    LinkedList()
    {
        First = NULL;
        iCount = 0;
    }

    virtual void InsertFirst(int ino) = 0;            //Abstract methods : same for all classes
    virtual void InsertLast(int ino) = 0;
    virtual void InsertAtPos(int ino, int ipos) = 0;

    virtual void DeleteFirst() = 0;
    virtual void DeleteLast() = 0;
    virtual void DeleteAtPos(int ipos) = 0;

    void Display()
    {
        PNODE temp = First;

        cout<<"Elements of Linked List are : \n";
        for (int icnt = 1; icnt <= iCount; icnt++)
        {
            cout<< " |"<<temp->data<<"| -> ";
            temp = temp -> next;
        }
        cout<<"NULL\n";
    }

    int Count()
    {
        return iCount;
    }

};

class SinglyCL : public LinkedList
{
private:
    PNODE Last;

public:
    SinglyCL();
    ~SinglyCL();

    void InsertFirst(int ino);
    void InsertLast(int ino);
    void InsertAtPos(int ino, int ipos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int ipos);

};

SinglyCL :: SinglyCL()
{
    Last = NULL;
}

SinglyCL :: ~SinglyCL()
{

}

void SinglyCL :: InsertFirst(int ino)
{
    PNODE newn = new NODE(ino);

    if (First == NULL && Last == NULL)
    {
        First = newn;
        Last = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
    Last -> next = First;
    iCount++;
}

void SinglyCL :: InsertLast(int ino)
{
    PNODE newn = new NODE(ino);

    if (First == NULL && Last == NULL)
    {
        First = newn;
        Last = newn;
    }
    else
    {
        Last->next = newn;
        Last = newn;
    }
    Last -> next = newn;
    iCount++;

}

void SinglyCL :: InsertAtPos(int ino, int ipos)
{
    if ((ipos < 0) || (ipos > iCount + 1))
    {
        cout<<"INvalid position\n";
    }

    if (ipos == 1)
    {
        InsertFirst(ino);
    }
    else if (ipos == iCount +1)
    {
        InsertLast(ino);
    }
    else
    {
        PNODE temp = First;
        PNODE newn = new Node (ino);

        for (int icnt = 1; icnt < ipos - 1; icnt++)
        {
            temp = temp->next;
        }

        newn -> next = temp -> next;
        temp -> next = newn;
    }
    iCount++;
}

void SinglyCL :: DeleteFirst()
{
    if (iCount == 0)
    {
        cout<<"Nothing in Linked List\n";
        return;
    }
    else if (iCount == 1)
    {
        delete(First);
        First = NULL;
        Last = NULL;
    }
    else
    {
        PNODE temp = First;
        First = First -> next;
        delete(temp);
    }
    Last -> next = First;
    iCount--;
}

void SinglyCL :: DeleteLast()
{
    if (iCount == 0)
    {
        cout<<"Nothing in Linked List\n";
        return;
    }
    else if (iCount == 1)
    {
        delete(First);
        First = NULL;
        Last = NULL;
    }
    else
    {
        PNODE temp = First;

        while (temp -> next != Last)
        {
            temp =  temp -> next;
        }

        delete(Last);
        Last = temp;
        Last -> next = First;

    }
    Last -> next = First;
    iCount--;

}

void SinglyCL :: DeleteAtPos(int ipos)
{
    if ((ipos < 0) || (ipos > iCount))
    {
        cout<<"Invalid position\n";
    }

    if (ipos == 1)
    {
        DeleteFirst();
    }
    else if (ipos == iCount +1)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp = First;
        PNODE tempX = NULL;

        for (int icnt = 1; icnt < ipos - 1; icnt++)
        {
            temp = temp->next;
        }

        tempX = temp -> next;

        temp -> next = temp -> next -> next;
        delete(tempX);
    }
    iCount--;

}


int main()
{
    SinglyCL obj;

    obj.InsertFirst(30);
    obj.InsertFirst(20);
    obj.InsertFirst(10);
    obj.InsertLast(40);
    obj.InsertLast(50);

    obj.Display();
    cout<<"Length of Linked List is : "<<obj.Count()<<"\n";

    obj.DeleteFirst();
    obj.DeleteLast();
    obj.Display();
    cout<<"Length of Linked List is : "<<obj.Count()<<"\n";

    obj.InsertAtPos(25,3);
    obj.Display();
    cout<<"Length of Linked List is : "<<obj.Count()<<"\n";

    obj.DeleteAtPos(3);
    obj.Display();
    cout<<"Length of Linked List is : "<<obj.Count()<<"\n";

    return 0;

}

