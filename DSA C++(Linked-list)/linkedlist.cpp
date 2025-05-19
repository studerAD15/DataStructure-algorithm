#include <iostream>
using namespace std;
class Node 
{
    public:
    int data;
    Node* next;
    public:
    Node(int value)
    {
        data=value;
        next=nullptr;
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
        Node* newNode=new Node(value);
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
    }
    void show()
    {
        Node* temp=head;
        cout<<"Linked list:\n";
        while(temp!=nullptr)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main()
{
    Linkedlist List;
    List.insert(10);
    List.insert(20);
    List.insert(30);
    List.insert(40);
    List.insert(50);
    List.show();
    return 0;
}