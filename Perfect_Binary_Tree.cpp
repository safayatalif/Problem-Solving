#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        left = nullptr;
        right = nullptr;
    }
};

int nodeCount = 0;

Node *treeInput()
{
    int x;
    cin >> x;

    if (x == -1)
        return nullptr;

    Node *root = new Node(x);
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *cur = q.front();
        nodeCount++;
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l != -1)
        {
            cur->left = new Node(l);
            q.push(cur->left);
        }

        if (r != -1)
        {
            cur->right = new Node(r);
            q.push(cur->right);
        }
    }
    return root;
}


int maxDepthTree(Node *root)
{
    if (root == nullptr)
        return 0;

    int l = maxDepthTree(root->left);
    int r = maxDepthTree(root->right);

    return 1 + max(l, r);
}




int main()
{
    Node *root = treeInput();

    int maxDepth = maxDepthTree(root);
    // cout << maxDepth << nodeCount;

    int x = pow(2, maxDepth) - 1;
    if(x  == nodeCount){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
        
    return 0;
}
