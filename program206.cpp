//Queue in CPP

#include<iostream>
using namespace std;

typedef class node
{
public:
    int data;
    node *next;

    node (int value)
    {
        data = value;
        next = NULL;
    }

}NODE, *PNODE;

class Queue
{
private:
    PNODE First;
    int iCount;

public:
    Queue();
    void enqueue(int ino);    //InsertLast
    int dequeue();             //DeleteFirst
    void Display();
    int Count();

};

Queue :: Queue()
{
    First = NULL;
    iCount = 0;
}

void Queue :: enqueue(int ino)
{
    PNODE newn = new NODE(ino);

    if (First == NULL)
    {
        First = newn;
    }
    else
    {
        PNODE temp = First;

        while (temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
    iCount++;
}

int Queue :: dequeue()        //DeleteLast
{
    int Value = 0;

    if (iCount == 0)
    {
        cout<<"Queue is empty\n";
        return -1;                     //function has return int value
    }
    else if(iCount == 1)
    {
        Value = First -> data;
        delete First;
        First = NULL;
    }
    else
    {
        Value = First -> data;
        PNODE temp = First;
        First = First -> next;
        delete temp;
    }
    iCount--;
    return Value;
}

void Queue :: Display()
{
    if (First == NULL)
    {
        cout<<"Nothing to display. Queue is empty.\n";
    }
    else
    {
    cout<<"Elements of Queue are : \n";

    PNODE temp = First;

    for (int icnt = 1; icnt <= iCount; icnt++)
    {
        cout<<temp->data<<"\t";
        temp = temp -> next;
    }
    }
}

int Queue :: Count()
{
     return iCount;
}


int main()
{
    int iChoice = 1;
    int iValue = 0;
    int iRet = 0;

    Queue obj;

    cout<<"_______________________________\n";
    cout<<"Dynamic Implementation of Queue\n";
    cout<<"_______________________________\n";

    while (iChoice != 0)
    {

        cout<<"\n_______________________________\n";
        cout<<"Please enter the option : \n";

        cout<<" 1. Insert element into queue \n";
        cout<<" 2. delete element from the queue\n";
        cout<<" 3. Display elements of queue\n";
        cout<<" 4. Count number of elements in the queue\n";
        cout<<" 0: Terminate the application\n";

        cout<<"_______________________________\n";

        cout<<"Please enter the option : \n";
        cin>>iChoice;

        switch(iChoice)
        {
        case 1:
            cout<<"Enter element you want to insert\n";
            cin>>iValue;
            obj.enqueue(iValue);
            break;

        case 2:
            iRet = obj.dequeue();
            if (iRet != -1)
            {
                cout<<"Deleted element from queue is : "<<iRet<<"\n";
            }
            break;

        case 3:
            obj.Display();
            break;

        case 4:
            iRet = obj.Count();
            cout<<"Number of elements in queue are : "<<iRet<<"\n";
            break;

        case 0:
            cout<<"Thank you for using application\n";
            break;

        default:
            cout<<"Enter valid choice\n";
            break;
        }   //End of switch

    }      //end of while
    return 0;
}     // end of main

