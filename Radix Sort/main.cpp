#include <bits/stdc++.h>
using namespace std;

int findMax(int arr[], int n)
{
    int max = arr[0];
    for (size_t i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    return max;
}
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

void insert(Node **buckets, int key, int pos)
{
    Node *currentBucket = buckets[pos];
    if (currentBucket == nullptr)
        buckets[pos] = new Node(key);
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

void BucketSort(int arr[], int n, int x)
{

    Node **buckets = new Node *[10];

    for (size_t i = 0; i < 10 + 1; i++)
        buckets[i] = nullptr;

    for (size_t i = 0; i < n; i++)
        insert(buckets, arr[i], (arr[i] / x) % 10);

    int i = 0, j = 0;
    while (i < 10)
    {
        if (buckets[i] != nullptr)
            arr[j++] = del(buckets, i);
        else
            i++;
    }

    delete[] buckets;
}

void RadixSort(int arr[], int n)
{
    int max = findMax(arr, n);
    for (int i = 1; max / i > 0; i = i * 10)
        BucketSort(arr, n, i);
}

int main()
{

    int arr[]{237, 146, 259, 348, 152, 163, 235, 48, 36, 62};
    int n = sizeof(arr) / sizeof(arr[0]);

    RadixSort(arr, n);

    for (size_t i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}