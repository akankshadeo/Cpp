//Doubly Linked List in cpp

#include<iostream>
using namespace std;

typedef class Node
{
public:
    int data;
    struct Node *next;
    struct Node *prev;

    Node (int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
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

class DoublyLL : public LinkedList
{

public:
    ~DoublyLL();

    void InsertFirst(int ino);
    void InsertLast(int ino);
    void InsertAtPos(int ino, int ipos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int ipos);

};

DoublyLL :: ~DoublyLL()
{

}

void DoublyLL :: InsertFirst(int ino)
{
    PNODE newn = new NODE(ino);

    if (First == NULL)
    {
        First = newn;
    }
    else
    {
        First -> prev = newn;
        newn -> next = First;
        First = newn;
    }
    iCount++;
}

void DoublyLL :: InsertLast(int ino)
{
    PNODE newn = new NODE(ino);

    if (First == NULL)
    {
        First = newn;
    }
    else
    {
        PNODE temp = First;
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
        newn -> prev = temp;
    }
    iCount++;

}

void DoublyLL :: InsertAtPos(int ino, int ipos)
{
    if ((ipos < 1) || (ipos > iCount + 1))
    {
        cout<<"Invalid Position\n";
        return;
    }

    if (ipos == 1)
    {
        InsertFirst(ino);
    }
    else if (ipos == iCount + 1)
    {
        InsertLast(ino);
    }
    else
    {
        PNODE newn = new NODE (ino);
        PNODE temp = First;

        for (int icnt = 1; icnt < ipos - 1 ; icnt++)
        {
              temp = temp -> next;
        }

        newn -> next = temp -> next;
        temp -> next -> prev = newn;
        newn -> prev = temp;
        temp -> next = newn;
    }
    iCount++;
}

void DoublyLL :: DeleteFirst()
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
    }
    else
    {
        PNODE temp = First;
        First = First -> next;
        delete temp;
    }
    iCount--;
}

void DoublyLL :: DeleteLast()
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
    }
    else
    {
        PNODE temp = First;

        while (temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }
        delete(temp-> next);
        temp -> next = NULL;
    }
    iCount--;
}

void DoublyLL :: DeleteAtPos(int ipos)
{
    if ((ipos < 1) || (ipos > iCount))
    {
        cout<<"Invalid Position\n";
        return;
    }

    if (ipos == 1)
    {
        DeleteFirst();
    }
    else if (ipos == iCount)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp = First;

        for (int icnt = 1; icnt < ipos - 1 ; icnt++)
        {
              temp = temp -> next;
        }

        temp -> next = temp -> next -> next;
        delete(temp->next-> prev);
        temp -> next -> prev = temp;

    }
    iCount--;


}

int main()
{
    DoublyLL obj;

    obj.InsertFirst(30);
    obj.InsertFirst(20);
    obj.InsertFirst(10);
    obj.InsertLast(40);
    obj.InsertLast(50);
    obj.Display();
    cout<<"Length of Linked List is : "<<obj.Count()<<"\n";

    obj.InsertAtPos(15,2);
    obj.Display();
    cout<<"Length of Linked List is : "<<obj.Count()<<"\n";

    obj.DeleteAtPos(2);
    obj.Display();
    cout<<"Length of Linked List is : "<<obj.Count()<<"\n";

    obj.DeleteFirst();
    obj.Display();
    cout<<"Length of Linked List is : "<<obj.Count()<<"\n";

    obj.DeleteLast();
    obj.Display();
    cout<<"Length of Linked List is : "<<obj.Count()<<"\n";


    return 0;
}



