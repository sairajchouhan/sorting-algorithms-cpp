#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int x = arr[i];
        int j = i;
        while (x < arr[j - 1] && j > 0)
        {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = x;
    }
}

int main()
{

    int arr[]{5, 7, 8, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    InsertionSort(arr, n);

    for (size_t i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}