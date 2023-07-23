#include<iostream>
using namespace std;

class node
{
    public:
    int data;  // Let us assume for now that the data which the linked list is storing is int
    node *next;

    node(int data_input)
    {
        this->data = data_input;
        this->next = NULL;
    }
};

// Helper function

void printnode(node * & node)
{
    cout<<" "<<"value "<<node->data;
    cout<<" "<<"Address "<<node->next;
}

void printlinkedlist(node *  head )
{
    if(head==NULL)
    {
        cout<<"The linked list is still empty!! "<<endl;
        return;
    }

    node *temp;
    temp = head;

    // This is called the transversing of a linked list

    while(temp!=NULL)
    {
        cout<<temp->data<<" -->";
        temp = temp->next;
    }
    cout<<endl;
}

void Insertatstart(node * &head, int data)
{
    node * temp = new node(data);

    if(head==NULL)
    {
        head = temp; 
        return;
    } 

    temp->next = head;  // Where temp is the new head and now, we need to assign the address of the old head to it
    head = temp;

}

void Insertatend(node * &head, int data)
{
    node * temp = new node(data);

    if(head==NULL)
    {
        head = temp; 
        return;
    }

    node *end;
    end = head;

    while(end->next!=NULL)
    {
        end = end->next;
    }

    // After this while loop is complete, we have basically reached the end element of the linked list

    end->next = temp;
}

int main()
{
    // Head of a linked list is nothing but a fancy trem to indicate the top or the first element of the linked list
    node * head=NULL;

    
    Insertatend(head,5);
    Insertatend(head,7);
    Insertatend(head,8);

    Insertatstart(head,3);
    Insertatstart(head,2);

    Insertatend(head,9);
    Insertatend(head,10);

    printlinkedlist(head);



    return 0;
}