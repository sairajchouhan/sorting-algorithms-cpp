#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high)
{
    int pvt = arr[high];
    int i = low - 1;

    for (size_t j = 0; j < high; j++)
    {
        if (arr[j] < pvt)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
        swap(&arr[i + 1], &arr[high]);
        return i + 1;
    }
}

void QuickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pvt = partition(arr, low, high);
        QuickSort(arr, low, pvt - 1);
        QuickSort(arr, pvt + 1, high);
    }
}

void printArr(int arr[], int size)
{
    for (size_t i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int main()
{

    int arr[]{5, 7, 8, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    QuickSort(arr, 0, size - 1);

    printArr(arr, size);

    return 0;
}