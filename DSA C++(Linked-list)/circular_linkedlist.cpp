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
    void insert(int value)
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
list.insert(10);
list.insert(20);
list.insert(30);
list.insert(40);
list.traverse();
    return 0;
}