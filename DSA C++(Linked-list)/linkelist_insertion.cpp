#include <iostream>
using namespace std;
class Node 
{
public:
    int data;
    Node* next;    
    Node(int value)
     {
        data = value;
        next = nullptr;
    }
};
class LinkedList 
{
public:
    Node* head;
 LinkedList() 
 {
        head = nullptr;
    }
    void insertAtstart(int value) 
    {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
        cout << "Inserted at beginning: " << value << endl;
    }    
    void insertAtEnd(int value) 
    {
        Node* newNode = new Node(value);
        if (head == nullptr) 
        {
            head = newNode;
        } 
        else 
        {
            Node* temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cout << "Inserted at end: " << value << endl;
    }
    void insertAtPosition(int value, int position) 
    {
        if (position < 1) 
        {
            cout << "Invalid position!" << endl;
            return;
        }
        if (position == 1) 
        {
            insertAtstart(value);
            return;
        }
        Node* newNode = new Node(value);
        Node* temp = head;
        int count = 1;
        while (temp != nullptr && count < position - 1) {
            temp = temp->next;
            count++;
        }
        if (temp == nullptr) {
            cout << "Position out of bounds!" << endl;
            delete newNode;
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        cout << "Inserted " << value << " at position " << position << endl;
    }
    void display() 
    {
        if (head == nullptr) 
        {
            cout << "List is empty." << endl;
            return;
        }
        Node* temp = head;
        cout << "Linked List: ";
        while (temp != nullptr) 
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
int main() {
    LinkedList list;
    list.insertAtstart(10);
    list.insertAtEnd(20);
    list.insertAtPosition(15, 2); 
    list.insertAtPosition(5, 1); 
    list.insertAtPosition(100, 10); 
    list.display();
    return 0;
}
