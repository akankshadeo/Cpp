//Stack in CPP

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

class Stack
{
private:
    PNODE First;
    int iCount;

public:
    Stack();
    void push(int ino);    //InsertLast
    int pop();             //DeleteLast
    void Display();
    int Count();

};

Stack :: Stack()
{
    First = NULL;
    iCount = 0;
}

void Stack :: push(int ino)
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

int Stack :: pop()        //DeleteLast
{
    int Value = 0;

    if (iCount == 0)
    {
        cout<<"Stack is empty\n";
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
        PNODE temp = First;

        while (temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }

        Value = temp -> next -> data;
        delete temp -> next;
        temp -> next = NULL;
    }
    iCount--;
    return Value;
}

void Stack :: Display()
{
    if (First == NULL)
    {
        cout<<"Nothing to display. Stack is empty.\n";
    }
    else
    {
    cout<<"Elements of Stack are : \n";

    PNODE temp = First;

    for (int icnt = 1; icnt <= iCount; icnt++)
    {
        cout<<temp->data<<"\n";
        temp = temp -> next;
    }
    }
}

int Stack :: Count()
{
     return iCount;
}


int main()
{
    int iChoice = 1;
    int iValue = 0;
    int iRet = 0;

    Stack obj;

    cout<<"_______________________________\n";
    cout<<"Dynamic Implementation of Stack\n";
    cout<<"_______________________________\n";

    while (iChoice != 0)
    {

        cout<<"_______________________________\n";
        cout<<"Please enter the option : \n";

        cout<<" 1. Push element into stack \n";
        cout<<" 2. Pop element out of the Stack\n";
        cout<<" 3. Display elements of Stack\n";
        cout<<" 4. Count number of elements in the Stack\n";
        cout<<" 0: Terminate the application\n";

        cout<<"_______________________________\n";

        cout<<"Please enter the option : \n";
        cin>>iChoice;

        switch(iChoice)
        {
        case 1:
            cout<<"Enter element you want to push\n";
            cin>>iValue;
            obj.push(iValue);
            break;

        case 2:
            iRet = obj.pop();
            if (iRet != -1)
            {
                cout<<"Popped element from Stack is : "<<iRet<<"\n";
            }
            break;

        case 3:
            obj.Display();
            break;

        case 4:
            iRet = obj.Count();
            cout<<"Number of elements in Stack are : "<<iRet<<"\n";
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

