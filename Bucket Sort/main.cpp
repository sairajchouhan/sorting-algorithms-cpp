#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = nullptr;
    }
};

int findMax(int arr[], int n)
{
    int max = arr[0];
    for (size_t i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    return max;
}

void insert(Node **buckets, int key)
{
    Node *currentBucket = buckets[key];
    if (currentBucket == nullptr)
        buckets[key] = new Node(key);
    else
    {
        Node *current = currentBucket;
        while (current->next != nullptr)
            current = current->next;
        current->next = new Node(key);
    }
}

int del(Node **buckets, int idx)
{
    Node *currentBucket = buckets[idx];
    buckets[idx] = currentBucket->next;
    int data = currentBucket->data;
    delete currentBucket;
    return data;
}

void BucketSort(int arr[], int n)
{
    int max = findMax(arr, n);

    Node **buckets = new Node *[max + 1];

    for (size_t i = 0; i < max + 1; i++)
        buckets[i] = nullptr;

    for (size_t i = 0; i < n; i++)
        insert(buckets, arr[i]);

    int i = 0, j = 0;
    while (i < max + 1)
    {
        if (buckets[i] != nullptr)
            arr[j++] = del(buckets, i);
        else
            i++;
    }

    delete[] buckets;
}

int main()
{

    int arr[]{8, 2, 5, 2, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    BucketSort(arr, size);
    for (size_t i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}