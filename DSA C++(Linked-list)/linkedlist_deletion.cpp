#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int value)
    {
        data= value;
        next= nullptr;
    }
};
class Linkedlist
{
    public:
    Node* head;
    Linkedlist()
    {
        head=nullptr;
    }
    void insert(int value)
    {
        Node* newNode= new Node(value);
        if(head==nullptr)
        {
            head=newNode;
        }
        else
        {
            Node* temp=head;
            while(temp->next!=nullptr)
            {
                temp=temp->next;
            }
                temp->next=newNode;
        }
        cout<<"Inserted: "<<value<<endl;
    }
    void deleteatstart()
    {
        if(head==nullptr)
        {
            cout<<"List is empty."<<endl;
            return;
        }
        Node* temp=head;
        head=head->next;
        delete temp;
        cout<<"Deleted first node."<<endl;
    }
    void deletatend()
    {
        if(head==nullptr)
        {
            cout<<"list is empty."<<endl;
            return;
        }
        if(head->next==nullptr)
        {
            delete head;
            head=nullptr;
            cout<<"deleted last node."<<endl;
        }
        else
        {
            Node* temp=head;
            while(temp->next->next!=nullptr)
            {
                temp=temp->next;
            }
            delete temp->next;
            temp->next=nullptr;
            cout<<"deleted last node."<<endl;
        }
    }
    void deleteatposition(int position)
    {
        if(head==nullptr)
        {
            cout<<"list is empty"<<endl;
            return;
        }
        if(position==1)
        {
            deleteatstart();
            return;
        }
        Node* temp=head;
        for(int i=1;i<position-1;i++)
        {
            if(temp==nullptr|| temp->next==nullptr)
            {
                cout<<"Position out of range."<<endl;
                return;
            }
            temp=temp->next;
        }
        Node* nodeToDelete = temp->next;
        if (nodeToDelete == nullptr) {
            cout << "Position out of range." << endl;
            return;
        }
        temp->next = nodeToDelete->next;
        delete nodeToDelete;
        cout << "Deleted node at position " << position << "." << endl;
    }
    void display()
    {
        if(head==nullptr)
        {
            cout<<"List is empty."<<endl;
            return;
        }
        Node* temp=head;
        while(temp!=nullptr)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main()
{
    Linkedlist list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    cout<<"Linked List: ";
    list.display();
    
    list.deleteatstart();
    cout<<"After deleting first node: ";
    list.display();
    
    list.deletatend();
    cout<<"After deleting last node: ";
    list.display();
    
    int position;
    cout<<"Enter position to delete: ";
    cin>>position;
    list.deleteatposition(position);
    cout<<"After deleting node at position "<<position<<": ";
    list.display();
    
    return 0;
}
