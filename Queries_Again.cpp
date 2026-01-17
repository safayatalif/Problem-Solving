#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int val)
    {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

class DoublyLinkedList
{
public:
    Node *head;
    Node *tail;

    DoublyLinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }
    bool insertAnyPosition(int position, int value)
    {
        Node *newNode = new Node(value);
        if (position == 0)
        {
            if (!head)
            {
                head = newNode;
                tail = newNode;
            }
            else
            {
                newNode->next = head;
                head->prev = newNode;
                head = newNode;
            }
            return true;
        }

        Node *temp = head;
        for (int i = 0; i < position - 1 && temp != nullptr; i++)
        {
            temp = temp->next;
        }

        if (temp == nullptr)
        {
            delete newNode;
            return false;
        }

        newNode->next = temp->next;
        newNode->prev = temp;

        if (temp->next != nullptr)
        {
            temp->next->prev = newNode;
        }
        else
        {
            tail = newNode;
        }
        temp->next = newNode;
        return true;
    }
    void printForward()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
    void printBackward()
    {
        Node *temp = tail;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->prev;
        }
        cout << "\n";
    }
};

int main()
{
    int t;
    cin >> t;
    DoublyLinkedList dll;
    while (t--)
    {
        int x, v;
        cin >> x >> v;
        bool result = dll.insertAnyPosition(x, v);
        if (result)
        {
            cout << "L -> ";
            dll.printForward();
            cout << "R -> ";
            dll.printBackward();
        }
        else
        {
            cout << "Invalid\n";
        }
    }

    return 0;
}