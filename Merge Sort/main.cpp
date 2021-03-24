#include <bits/stdc++.h>
using namespace std;

int merge(int arr[], int low, int mid, int high)
{
    int i = low, j = mid + 1, k = low;
    int temp[high + 1];

    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while (i <= mid)
        temp[k++] = arr[i++];
    while (j <= high)
        temp[k++] = arr[j++];
    for (int i = low; i <= high; i++)
        arr[i] = temp[i];
}

void MergeSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;
        MergeSort(arr, low, mid);
        MergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main()
{
    int arr[]{10, 19, 12, 1, 15, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    MergeSort(arr, 0, n - 1);
    for (size_t i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}