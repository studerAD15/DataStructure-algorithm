#include <iostream>
using namespace std;
class Node 
{
public:
    int data;
    Node* prev;
    Node* next;

    Node(int value) 
    {
        data = value;
        prev = nullptr;
        next = nullptr;
    }
};

class DoublyLinkedList 
{
public:
    Node* head;

    DoublyLinkedList() 
    {
        head = nullptr;
    }

    void insertAtEnd(int value) 
    {
        Node* newNode = new Node(value);
        if (head == nullptr) 
        {
            head = newNode;
        } else 
        {
            Node* temp = head;
            while (temp->next != nullptr)
                temp = temp->next;

            temp->next = newNode;
            newNode->prev = temp;
        }
    }

    void traverseForward() 
    {
        Node* temp = head;
        cout << "Forward Traversal: ";
        while (temp != nullptr) 
        {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void traverseBackward() 
    {
        if (head == nullptr) 
        {
            cout << "List is empty." << endl;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr)
            temp = temp->next;

        cout << "Backward Traversal: ";
        while (temp != nullptr) 
        {
            cout << temp->data << " <-> ";
            temp = temp->prev;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    DoublyLinkedList list;
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.insertAtEnd(40);

    list.traverseForward();
    list.traverseBackward();

    return 0;
}
