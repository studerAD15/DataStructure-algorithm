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
class CircularLinkedlist
{
    public:
    Node* head;
    CircularLinkedlist()
    {
        head=nullptr;
    }
    void insertatend(int value)
    {
        Node* newNode= new Node(value);
        if(head==nullptr)
        {
            head=newNode;
            head->next=head;
        }
        else
        {
            Node* temp=head;
            while(temp->next!=head)
            {
                temp=temp->next;
            }
                temp->next=newNode;
                newNode->next=head;
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
        if(head->next==head)
        {
            delete head;
            head=nullptr;
            cout<<"deleted last node."<<endl;
        }
        else
        {
            Node* temp=head;
            while(temp->next!=head)
            {
                temp=temp->next;
            }
            Node* nodeToDelete = head;
            head = head->next;
            temp->next = head; 
            delete nodeToDelete; 
            cout << "Deleted first node." << endl;
        }
    }
    void deleteatend()
    {
        if(head==nullptr)
        {
            cout<<"list is empty."<<endl;
            return;
        }
        if(head->next==head)
        {
            delete head;
            head=nullptr;
            cout<<"deleted last node."<<endl;
        }
        else
        {
            Node* temp=head;
            while(temp->next->next!=head)
            {
                temp=temp->next;
            }
            Node* nodeToDelete = temp->next;
            temp->next = head; 
            delete nodeToDelete; 
            cout << "Deleted last node." << endl;
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
        if (nodeToDelete == nullptr) 
        {
            cout << "Position out of range." << endl;
            return;
        }
        temp->next = nodeToDelete->next;
        delete nodeToDelete;
        cout << "Deleted node at position " << position << "." << endl;
    }
    void traverse() 
    {
        if (head == nullptr) 
        {
            cout << "List is empty." << endl;
            return;
        }
        Node* temp = head;
        cout << "Circular Linked List: ";
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);
        cout << "(back to head)" << endl;
    }
};
int main() 
{
    CircularLinkedlist list;
    list.insertatend(10);

    list.insertatend(20);
    list.insertatend(30);
    list.insertatend(40);
    list.traverse();
    list.deleteatstart();
    list.traverse();
    list.deleteatend();
    list.traverse();
    list.deleteatposition(1);
    list.traverse();
    return 0;
}