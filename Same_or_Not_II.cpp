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
class myStack
{
    Node *top;

public:
    myStack()
    {
        top = nullptr;
    }
    void push(int val)
    {
        Node *newNode = new Node(val);
        if (!top)
        {
            top = newNode;
            return;
        }
        newNode->next = top;
        top->prev = newNode;
        top = newNode;
    }
    void pop()
    {
        if (!top)
            return;
        Node *temp = top;
        top = top->next;
        if (top)
        {
            top->prev = nullptr;
        }
        delete temp;
    }
    int peek()
    {
        if (!top)
            return -1;
        return top->data;
    }
    bool empty()
    {
        return top == nullptr;
    }
};

class myQueue
{
    Node *front;
    Node *rear;

public:
    myQueue()
    {
        front = nullptr;
        rear = nullptr;
    }
    void push(int val)
    {
        Node *newNode = new Node(val);
        if (!rear)
        {
            front = rear = newNode;
            return;
        }
        rear->next = newNode;
        newNode->prev = rear;
        rear = newNode;
    }
    void pop()
    {
        if (!front)
            return;
        Node *temp = front;
        front = front->next;
        if (front)
        {
            front->prev = nullptr;
        }
        else
        {
            rear = nullptr;
        }
        delete temp;
    }
    int peek()
    {
        if (!front)
            return -1;
        return front->data;
    }
    bool empty()
    {
        return front == nullptr;
    }
};

int main()
{
    int m, n;
    cin >> m >> n;
    if (n != m)
    {
        cout << "NO\n";
        return 0;
    }
    myStack s;
    myQueue q;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }
    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        q.push(y);
    }

    while (!s.empty() && !q.empty())
    {
        if (s.peek() != q.peek())
        {
            cout << "NO\n";
            return 0;
        }
        s.pop();
        q.pop();
    }

    if (s.empty() && q.empty())
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}