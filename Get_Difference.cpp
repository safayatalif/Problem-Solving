#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail,int val)
{
    Node *newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}


Node* find_maximum(Node* head)
{
    Node* maxNode = head;
    Node* tmp = head;
    for(tmp; tmp != NULL; tmp = tmp->next)
    {
        if(tmp->val > maxNode->val)
        {
            maxNode = tmp;
        } 
    }
    return maxNode;
}
Node* find_minimum(Node* head)
{
    Node* minNode = head;
    Node* tmp = head;
    for(tmp; tmp != NULL; tmp = tmp->next)
    {
        if(tmp->val < minNode->val)
        {
            minNode = tmp;
        }                       
    }
    return minNode;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(true)
    {
        cin >> val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }

    Node* maxNode = find_maximum(head);
    Node* minNode = find_minimum(head);
    cout << maxNode->val - minNode->val << endl;
    return 0;
}