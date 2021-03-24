#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        left = right = nullptr;
        data = d;
    }
};

class Tree
{
public:
    Node *root;
    int *arr;

    Tree()
    {
        root = nullptr;
    }

    void insert(int data)
    {
        Node *current = root;
        Node *temp = nullptr;
        Node *prev = nullptr;
        if (current == nullptr)
        {
            temp = new Node(data);
            root = temp;
            return;
        }
        while (current != nullptr)
        {
            prev = current;
            if (data > current->data)
                current = current->right;
            else if (data < current->data)
                current = current->left;
            else
                return;
        }

        temp = new Node(data);
        if (data > prev->data)
            prev->right = temp;
        else if (data < prev->data)
            prev->left = temp;

        return;
    }

    void inorder(Node *root)
    {
        if (root)
        {
            inorder(root->left);
            cout << root->data << " ";
            inorder(root->right);
        }
    }
};

void TreeSort(int arr[], int n)
{
    Tree t;
    for (size_t i = 0; i < n; i++)
        t.insert(arr[i]);

    t.inorder(t.root);
}

int main()
{
    int arr[]{5, 7, 8, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    TreeSort(arr, n);

    return 0;
}