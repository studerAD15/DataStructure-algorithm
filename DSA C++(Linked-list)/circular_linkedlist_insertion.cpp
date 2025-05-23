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
    void insertatstart(int value)
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
            head=newNode;       
        }
        cout<<"Inserted at start: "<<value<<endl;
        }
        void insertatposition(int value,int pos)
        {
            if(pos==1)
            {
                insertatstart(value);
                return;
            }
            Node* newNode= new Node(value);
            Node* temp =head;
            int count=1;
            while(temp->next!=head && count<pos-1)
            {
                temp=temp->next;
                count++;
            }
            if (count < pos - 1) 
            {
            cout << "Position out of range!" << endl;
            delete newNode;
            return;
            }
        newNode->next = temp->next;
        temp->next = newNode;
        cout << "Inserted at position " << pos << ": " << value << endl;
    }
    void display() 
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
    list.insertatstart(5);
    list.insertatposition(15, 2);
    list.display();
    return 0;
}